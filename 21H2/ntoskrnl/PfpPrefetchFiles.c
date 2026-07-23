/*
 * XREFs of PfpPrefetchFiles @ 0x1408DF9C0
 * Callers:
 *     PfpPrefetchRequestPerform @ 0x140674268 (PfpPrefetchRequestPerform.c)
 * Callees:
 *     PfpCheckPrefetchAbort @ 0x140272EDC (PfpCheckPrefetchAbort.c)
 *     PfpReadSupportInitialize @ 0x1402732D8 (PfpReadSupportInitialize.c)
 *     memset @ 0x140414300 (memset.c)
 *     PfpFileBuildReadSupport @ 0x140676ED0 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x1406786A4 (PfpReadSupportCleanup.c)
 *     MmPrefetchPagesEx @ 0x140685FC4 (MmPrefetchPagesEx.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfpPrefetchFiles(__int64 *a1, char a2)
{
  __int64 v2; // rdi
  signed int v3; // r14d
  unsigned int v4; // esi
  char v5; // r13
  __int64 *v6; // r12
  unsigned int v7; // eax
  int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r8
  _DWORD *v13; // rcx
  PVOID PoolWithTag; // rbp
  unsigned int v15; // ebx
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 v18; // r12
  _DWORD *v19; // rsi
  __int64 v20; // r13
  int v21; // r9d
  __int64 v22; // r8
  _QWORD *v23; // rdx
  int v24; // eax
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r9
  int v28; // r8d
  __int64 v30; // [rsp+30h] [rbp-68h]
  int v31; // [rsp+38h] [rbp-60h]
  __int64 v32; // [rsp+48h] [rbp-50h]
  unsigned int v35; // [rsp+B0h] [rbp+18h]
  __int64 v36; // [rsp+B8h] [rbp+20h]

  v2 = *a1;
  v3 = 0;
  v32 = *a1;
  v4 = 0;
  v5 = a2;
  v6 = a1;
  v7 = *(_DWORD *)(*a1 + 8);
  v8 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
     + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  v31 = v8;
  v35 = *(_DWORD *)(*a1 + 28) & 7 | (8 * (*(_WORD *)(*a1 + 30) & 7));
  if ( !v7 )
    goto LABEL_49;
  v9 = 0LL;
  v10 = *(_QWORD *)(v2 + 32) + 12LL;
  v11 = v7;
  do
  {
    if ( (*(_QWORD *)(v9 + v6[2] + 24) & 0x400000000LL) != 0 )
    {
      v12 = 0LL;
      if ( (*(_DWORD *)v10 & 0xFFFFFFFE) != 0 )
      {
        while ( 1 )
        {
          v13 = (_DWORD *)(*(_QWORD *)(v10 + 4) + 48 * v12);
          if ( (*v13 & 0xA) != 0 || !v13[4] )
            goto LABEL_11;
          if ( !v5 )
            break;
          if ( (*v13 & 1) != 0 )
            goto LABEL_10;
LABEL_11:
          v12 = (unsigned int)(v12 + 1);
          if ( (unsigned int)v12 >= *(_DWORD *)v10 >> 1 )
            goto LABEL_12;
        }
        ++*(_DWORD *)(v2 + 84);
LABEL_10:
        ++v4;
        goto LABEL_11;
      }
    }
LABEL_12:
    v10 += 40LL;
    v9 += 64LL;
    --v11;
  }
  while ( v11 );
  if ( v4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v4 << 6, 0x41536650u);
    if ( PoolWithTag )
    {
      v30 = (__int64)PoolWithTag + 56 * v4;
      memset(PoolWithTag, 0, v4 << 6);
      v16 = 0LL;
      if ( !*(_DWORD *)(v2 + 8) )
        goto LABEL_44;
      do
      {
        if ( (*(_QWORD *)(((unsigned __int64)(unsigned int)v16 << 6) + v6[2] + 24) & 0x400000000LL) != 0 )
        {
          v17 = *(_QWORD *)(v2 + 32);
          v18 = 0LL;
          v36 = v17;
          if ( (*(_DWORD *)(v17 + 40 * v16 + 12) & 0xFFFFFFFE) != 0 )
          {
            do
            {
              v19 = (_DWORD *)(*(_QWORD *)(v17 + 40 * v16 + 16) + 48 * v18);
              if ( (*v19 & 0xA) == 0 && v19[4] && (!v5 || (*v19 & 1) != 0) )
              {
                v20 = (__int64)PoolWithTag + 56 * v3;
                PfpReadSupportInitialize(v20);
                if ( (int)PfpFileBuildReadSupport(a1, v19, v16, a2, v20) < 0 )
                {
                  PfpReadSupportCleanup(a1[5], v20);
                  PfpReadSupportInitialize(v20);
                }
                else
                {
                  ++v3;
                }
                v5 = a2;
                v17 = v36;
              }
              v18 = (unsigned int)(v18 + 1);
            }
            while ( (unsigned int)v18 < *(_DWORD *)(v17 + 40 * v16 + 12) >> 1 );
            v2 = v32;
          }
          v6 = a1;
        }
        v16 = (unsigned int)(v16 + 1);
      }
      while ( (unsigned int)v16 < *(_DWORD *)(v2 + 8) );
      if ( v3 )
      {
        if ( PfpCheckPrefetchAbort(v6) )
        {
          v15 = -1073741248;
        }
        else
        {
          v21 = 0;
          if ( v3 > 0 )
          {
            v22 = 0LL;
            v23 = PoolWithTag;
            do
            {
              *(_QWORD *)*v23 = v23[2];
              *(_QWORD *)(v30 + 8 * v22) = *v23;
              v24 = *(_DWORD *)(*v23 + 8LL);
              v21 += v24;
              if ( v24 )
                *(_QWORD *)(*v23 + 16LL) |= v35;
              ++v22;
              v23 += 7;
            }
            while ( v22 < v3 );
          }
          if ( v5 )
            *(_DWORD *)(v2 + 100) += v21;
          else
            *(_DWORD *)(v2 + 96) += v21;
          v15 = MmPrefetchPagesEx(v3, v30, 0LL);
        }
      }
      else
      {
LABEL_44:
        v15 = -1073741275;
      }
      if ( v3 > 0 )
      {
        v25 = (__int64)PoolWithTag;
        v26 = (unsigned int)v3;
        do
        {
          PfpReadSupportCleanup(v6[5], v25);
          v25 += 56LL;
          --v26;
        }
        while ( v26 );
      }
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      v15 = -1073741670;
    }
    v8 = v31;
  }
  else
  {
LABEL_49:
    v15 = -1073741275;
  }
  v27 = *v6;
  v28 = ((MEMORY[0xFFFFF78000000004] * MEMORY[0xFFFFF78000000324]) << 8)
      + ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - v8;
  if ( v5 )
    *(_DWORD *)(v27 + 116) += v28;
  else
    *(_DWORD *)(v27 + 112) += v28;
  return v15;
}
