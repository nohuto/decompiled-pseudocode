/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1406E1144
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406E0F28 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1404081B0 (RtlCompareMemory.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405EBEB8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405FD448 (EtwpUnreferenceGuidEntry.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140643FCC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAllocDataBlock @ 0x1406E1760 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1406E32D0 (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x1406E4054 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406E4984 (EtwpUnreferenceDataBlock.c)
 *     EtwpCopySchematizedFilters @ 0x140940A84 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  char v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r12d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r11
  __int64 v14; // r10
  int v15; // r13d
  __int64 v16; // rsi
  int v17; // ebx
  unsigned __int8 v18; // al
  _QWORD *v19; // r14
  char v20; // r13
  __int64 v21; // rsi
  char *v22; // r15
  char v23; // dl
  char v24; // cl
  int SchematizedFilterSize; // eax
  int v26; // r13d
  unsigned int v27; // r15d
  struct _KTHREAD *v28; // rax
  char v29; // [rsp+38h] [rbp-39h]
  char v30; // [rsp+39h] [rbp-38h]
  char v32; // [rsp+48h] [rbp-29h]
  __int64 v33; // [rsp+50h] [rbp-21h]
  int v34; // [rsp+58h] [rbp-19h]
  __int128 v36; // [rsp+60h] [rbp-11h]
  __int128 v37; // [rsp+70h] [rbp-1h]
  __int128 Source2; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v39; // [rsp+90h] [rbp+1Fh]

  Source2 = 0LL;
  v3 = a3;
  v39 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v29 = 0;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v34 = *(unsigned __int16 *)(a2 + 88);
  if ( v34 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  v8 = 0;
  v9 = a2 + 128;
  while ( *(_DWORD *)v9 != 1 || *(unsigned __int16 *)(v9 + 6) != a1 )
  {
    ++v8;
    v9 += 32LL;
    if ( v8 >= 8 )
    {
      v30 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v9 = 0;
  v11 = a2 + 132;
  v12 = 0LL;
  v36 = 0uLL;
  v13 = 0;
  v14 = -1LL;
  v15 = 1 << v8;
  v16 = 8LL;
  v17 = 0;
  do
  {
    if ( *(_DWORD *)(v11 - 4) )
    {
      v18 = v13;
      LODWORD(v36) = 1;
      if ( v13 <= *(_BYTE *)v11 )
        v18 = *(_BYTE *)v11;
      v12 |= *(_QWORD *)(v11 + 12);
      v14 &= *(_QWORD *)(v11 + 20);
      v13 = v18;
      v17 |= *(_DWORD *)(v11 + 4);
    }
    v11 += 32LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)&v37 = v12;
  BYTE4(v36) = v13;
  LOBYTE(v12) = 1;
  *((_QWORD *)&v37 + 1) = v14;
  DWORD2(v36) = v17;
  *(_OWORD *)(a2 + 96) = v36;
  *(_OWORD *)(a2 + 112) = v37;
  EtwpUpdateFilterData(a2, v8, 0, v12, 0LL);
  v30 = 1;
  v19 = *(_QWORD **)(a2 + 56);
  if ( v19 != (_QWORD *)(a2 + 56) )
  {
    v20 = ~(_BYTE)v15;
    v32 = v20;
    do
    {
      if ( v3 )
      {
        v28 = KeGetCurrentThread();
        v21 = (__int64)(v19 - 2);
        v22 = (char *)v19 + 85;
        --v28->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v19[2] + 408LL, 0LL);
        v29 = 1;
        *(_QWORD *)(v19[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v21 = (__int64)v19;
        v22 = (char *)v19 + 100;
      }
      v23 = *v22;
      v19 = (_QWORD *)*v19;
      v24 = *v22 & v20;
      *v22 = v24;
      if ( ((*(_BYTE *)(v21 + 98) & 8) == 0 || v34 == a1) && v24 != v23 )
      {
        EtwpComputeRegEntryEnableInfo(v21, (__int64)&Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v21 + 100));
        v26 = SchematizedFilterSize;
        v27 = 120;
        if ( SchematizedFilterSize )
          v27 = SchematizedFilterSize + 136;
        v7 = EtwpAllocDataBlock(v27, 0LL);
        if ( v7 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v27;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v21 + 32) + 40LL);
          MEMORY[0x48] = Source2;
          MEMORY[0x58] = v39;
          MEMORY[0x70] = *(_BYTE *)(a2 + 91) & 1;
          LOWORD(v33) = *(_WORD *)(a2 + 88);
          WORD1(v33) = *(unsigned __int8 *)(a2 + 90);
          HIDWORD(v33) = *(_DWORD *)(a2 + 80);
          MEMORY[0x68] = v33;
          if ( v26 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v26;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v20 = v32;
      }
      if ( v29 )
      {
        *(_QWORD *)(*(_QWORD *)(v21 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v21 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v29 = 0;
      }
      v3 = a3;
    }
    while ( v19 != (_QWORD *)(a2 + 56) );
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v30 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return (unsigned int)v7;
}
