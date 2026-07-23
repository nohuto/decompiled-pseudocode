/*
 * XREFs of RtlpxLookupFunctionTable @ 0x1402E92F0
 * Callers:
 *     RtlpLookupFunctionEntryForStackWalks @ 0x1402E86A0 (RtlpLookupFunctionEntryForStackWalks.c)
 *     RtlLookupFunctionEntry @ 0x1402E9520 (RtlLookupFunctionEntry.c)
 *     RtlPcToFileHeader @ 0x14034F460 (RtlPcToFileHeader.c)
 *     RtlLookupFunctionTableEx @ 0x14037D400 (RtlLookupFunctionTableEx.c)
 *     RtlLookupFunctionTable @ 0x1403C2BFC (RtlLookupFunctionTable.c)
 *     RtlCreateInvertedFunctionTableCacheEntry @ 0x140A546C4 (RtlCreateInvertedFunctionTableCacheEntry.c)
 *     KiVerifyPdata @ 0x140A5DF94 (KiVerifyPdata.c)
 * Callees:
 *     MmUnlockLoadedModuleListShared @ 0x140224598 (MmUnlockLoadedModuleListShared.c)
 *     MmLockLoadedModuleListShared @ 0x1402247F4 (MmLockLoadedModuleListShared.c)
 */

PVOID __fastcall RtlpxLookupFunctionTable(unsigned __int64 a1, __int64 a2)
{
  PVOID v2; // r12
  int *v5; // rsi
  int v6; // ebp
  int v7; // r14d
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  char *v11; // rbx
  int *v12; // r11
  char *v13; // r10
  int v14; // r14d
  PVOID result; // rax
  int v16; // ebp
  __int64 v17; // r9
  unsigned int v18; // ebx
  int v19; // r11d
  int v20; // r8d
  int v21; // r9d
  char *v22; // rbp
  int *v23; // r10
  char *v24; // rdx
  unsigned int v25; // r9d
  PVOID *v26; // rdx
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // r8
  unsigned __int8 v29; // [rsp+68h] [rbp+10h] BYREF
  int v30; // [rsp+70h] [rbp+18h]
  unsigned int v31; // [rsp+78h] [rbp+20h]

  v2 = 0LL;
  v29 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  v5 = RtlpInvertedFunctionTable[0];
  v6 = RtlpInvertedFunctionTable[0][2];
  if ( (v6 & 1) != 0 )
  {
    v16 = 1;
    v14 = 4096;
    v30 = 1;
LABEL_29:
    MmLockLoadedModuleListShared(&v29);
    if ( *RtlpInvertedFunctionTable[0] != 1 )
    {
      if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      {
        v18 = dword_140C4CAB0;
        v19 = 4096;
      }
      else
      {
        v18 = 0;
        v19 = 0;
      }
      v20 = *RtlpInvertedFunctionTable[0] - 1;
      if ( v20 >= 1 )
      {
        do
        {
          v21 = (v20 + v16) >> 1;
          v22 = *(char **)&RtlpInvertedFunctionTable[0][6 * v21 + 6];
          v23 = &RtlpInvertedFunctionTable[0][6 * v21];
          v24 = &v22[v23[8]];
          if ( a1 >= (unsigned __int64)v22 )
          {
            if ( a1 > 0x7FFFFFFEFFFFLL
              && v19
              && a1 >= (unsigned __int64)&v24[v18]
              && a1 < (unsigned __int64)&v24[v19 + v18]
              && v22 != PsNtosImageBase
              && v22 != PsHalImageBase )
            {
              *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
              *(_QWORD *)(a2 + 8) = &v24[v18];
              v2 = &RtlRetpolineStubsFunctionTable;
              *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
              *(_DWORD *)(a2 + 16) = v19;
              goto LABEL_62;
            }
            if ( a1 < (unsigned __int64)v24 )
            {
              *(_OWORD *)a2 = *((_OWORD *)v23 + 1);
              *(_QWORD *)(a2 + 16) = *((_QWORD *)v23 + 4);
              v2 = *(PVOID *)a2;
              goto LABEL_62;
            }
            v16 = v21 + 1;
            v30 = v21 + 1;
          }
          else
          {
            if ( !v21 )
              break;
            v16 = v30;
            v20 = v21 - 1;
          }
        }
        while ( v20 >= v16 );
      }
    }
    if ( *((_BYTE *)RtlpInvertedFunctionTable[0] + 12) )
    {
      if ( (KiSpeculationFeatures & 0x2000000) != 0 )
      {
        v25 = dword_140C4CAB0;
      }
      else
      {
        v25 = 0;
        v14 = 0;
      }
      v26 = (PVOID *)PsLoadedModuleList;
      if ( PsLoadedModuleList )
      {
        if ( PsLoadedModuleList != &PsLoadedModuleList )
        {
          while ( 1 )
          {
            v27 = (unsigned __int64)v26[6];
            v28 = v27 + *((unsigned int *)v26 + 16);
            if ( a1 >= v27 && a1 < v28 )
            {
              v2 = v26[2];
              *(_QWORD *)a2 = v2;
              *(_QWORD *)(a2 + 8) = v27;
              *(_DWORD *)(a2 + 16) = *((_DWORD *)v26 + 16);
              *(_DWORD *)(a2 + 20) = *((_DWORD *)v26 + 6);
              goto LABEL_62;
            }
            if ( v14 && a1 >= v28 + v25 && a1 < v28 + v14 + v25 )
              break;
            v26 = (PVOID *)*v26;
            if ( v26 == &PsLoadedModuleList )
              goto LABEL_62;
          }
          v2 = &RtlRetpolineStubsFunctionTable;
          *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
          *(_QWORD *)(a2 + 8) = v28 + v25;
          *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
          *(_DWORD *)(a2 + 16) = v14;
        }
      }
    }
LABEL_62:
    MmUnlockLoadedModuleListShared(v29);
    return v2;
  }
  if ( *RtlpInvertedFunctionTable[0] == 1 )
  {
    v30 = 1;
    goto LABEL_10;
  }
  if ( (KiSpeculationFeatures & 0x2000000) != 0 )
  {
    v7 = 4096;
    v31 = dword_140C4CAB0;
  }
  else
  {
    v31 = 0;
    v7 = 0;
  }
  v8 = *RtlpInvertedFunctionTable[0] - 1;
  v30 = 1;
  v9 = 1;
  if ( v8 < 1 )
  {
LABEL_10:
    v14 = 4096;
    if ( !*((_BYTE *)RtlpInvertedFunctionTable[0] + 12) )
    {
      result = 0LL;
      goto LABEL_18;
    }
LABEL_21:
    v16 = 1;
    goto LABEL_29;
  }
  while ( 1 )
  {
    v10 = (v9 + v8) >> 1;
    v11 = *(char **)&RtlpInvertedFunctionTable[0][6 * v10 + 6];
    v12 = &RtlpInvertedFunctionTable[0][6 * v10];
    v13 = &v11[v12[8]];
    if ( a1 < (unsigned __int64)v11 )
    {
      if ( !v10 )
        goto LABEL_10;
      v8 = v10 - 1;
      goto LABEL_9;
    }
    if ( a1 > 0x7FFFFFFEFFFFLL )
    {
      if ( v7 )
      {
        v17 = v31;
        if ( a1 >= (unsigned __int64)&v13[v31]
          && a1 < (unsigned __int64)&v13[v7 + v31]
          && v11 != PsNtosImageBase
          && v11 != PsHalImageBase )
        {
          break;
        }
      }
    }
    if ( a1 < (unsigned __int64)v13 )
    {
      *(_OWORD *)a2 = *((_OWORD *)v12 + 1);
      *(_QWORD *)(a2 + 16) = *((_QWORD *)v12 + 4);
      result = *(PVOID *)a2;
      goto LABEL_17;
    }
    v9 = v10 + 1;
LABEL_9:
    if ( v8 < v9 )
      goto LABEL_10;
  }
  *(_DWORD *)(a2 + 16) = v7;
  *(_QWORD *)(a2 + 8) = &v13[v17];
  *(_DWORD *)(a2 + 20) = RtlRetpolineStubsFunctionTableSize;
  result = &RtlRetpolineStubsFunctionTable;
  *(_QWORD *)a2 = &RtlRetpolineStubsFunctionTable;
LABEL_17:
  v14 = 4096;
LABEL_18:
  if ( v5[2] != v6 )
    goto LABEL_21;
  return result;
}
