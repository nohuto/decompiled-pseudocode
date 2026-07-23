/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1406B8424
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406B8208 (EtwpDisableTraceProviders.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140408390 (RtlCompareMemory.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140638DDC (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAllocDataBlock @ 0x1406B8A40 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1406BA5B0 (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x1406BB334 (EtwpSendDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x1406BBC64 (EtwpUnreferenceDataBlock.c)
 *     EtwpGetSchematizedFilterSize @ 0x1406DB618 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1406ECBA8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x140940C54 (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  char v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r12d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  char *v14; // r8
  __int64 v15; // r9
  unsigned __int8 v16; // r11
  __int64 v17; // r10
  int v18; // r13d
  __int64 v19; // rsi
  int v20; // ebx
  unsigned __int8 v21; // al
  _QWORD *v22; // r14
  char v23; // r13
  __int64 v24; // rsi
  char *v25; // r15
  char v26; // dl
  char v27; // cl
  __int64 v28; // rdx
  int SchematizedFilterSize; // eax
  int v30; // r13d
  unsigned int v31; // r15d
  struct _KTHREAD *v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  char v36; // [rsp+38h] [rbp-39h]
  char v37; // [rsp+39h] [rbp-38h]
  char v39; // [rsp+48h] [rbp-29h]
  __int64 v40; // [rsp+50h] [rbp-21h]
  int v41; // [rsp+58h] [rbp-19h]
  __int128 v43; // [rsp+60h] [rbp-11h]
  __int128 v44; // [rsp+70h] [rbp-1h]
  __int128 Source2; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v46; // [rsp+90h] [rbp+1Fh]

  Source2 = 0LL;
  v3 = a3;
  v46 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v36 = 0;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v41 = *(unsigned __int16 *)(a2 + 88);
  if ( v41 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  v8 = 0;
  v9 = a2 + 128;
  while ( *(_DWORD *)v9 != 1 || *(unsigned __int16 *)(v9 + 6) != a1 )
  {
    ++v8;
    v9 += 32LL;
    if ( v8 >= 8 )
    {
      v37 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v9 = 0;
  v14 = (char *)(a2 + 132);
  v15 = 0LL;
  v43 = 0uLL;
  v16 = 0;
  v17 = -1LL;
  v18 = 1 << v8;
  v19 = 8LL;
  v20 = 0;
  do
  {
    if ( *((_DWORD *)v14 - 1) )
    {
      v21 = v16;
      LODWORD(v43) = 1;
      if ( v16 <= (unsigned __int8)*v14 )
        v21 = *v14;
      v15 |= *(_QWORD *)(v14 + 12);
      v17 &= *(_QWORD *)(v14 + 20);
      v16 = v21;
      v20 |= *((_DWORD *)v14 + 1);
    }
    v14 += 32;
    --v19;
  }
  while ( v19 );
  *(_QWORD *)&v44 = v15;
  BYTE4(v43) = v16;
  LOBYTE(v15) = 1;
  *((_QWORD *)&v44 + 1) = v17;
  DWORD2(v43) = v20;
  *(_OWORD *)(a2 + 96) = v43;
  *(_OWORD *)(a2 + 112) = v44;
  EtwpUpdateFilterData(a2, v8, 0, v15, 0LL);
  v37 = 1;
  v22 = *(_QWORD **)(a2 + 56);
  if ( v22 != (_QWORD *)(a2 + 56) )
  {
    v23 = ~(_BYTE)v18;
    v39 = v23;
    do
    {
      if ( v3 )
      {
        v32 = KeGetCurrentThread();
        v24 = (__int64)(v22 - 2);
        v25 = (char *)v22 + 85;
        --v32->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v22[2] + 408LL, 0LL);
        v36 = 1;
        *(_QWORD *)(v22[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v24 = (__int64)v22;
        v25 = (char *)v22 + 100;
      }
      v26 = *v25;
      v22 = (_QWORD *)*v22;
      v27 = *v25 & v23;
      *v25 = v27;
      if ( ((*(_BYTE *)(v24 + 98) & 8) == 0 || v41 == a1) && v27 != v26 )
      {
        EtwpComputeRegEntryEnableInfo(v24, (__int64)&Source2);
        LOBYTE(v28) = *(_BYTE *)(v24 + 100);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, v28);
        v30 = SchematizedFilterSize;
        v31 = 120;
        if ( SchematizedFilterSize )
          v31 = SchematizedFilterSize + 136;
        v7 = EtwpAllocDataBlock(v31, 0LL);
        if ( v7 >= 0 )
        {
          MEMORY[0] = 3;
          MEMORY[4] = v31;
          MEMORY[0x28] = *(_OWORD *)(*(_QWORD *)(v24 + 32) + 40LL);
          MEMORY[0x48] = Source2;
          MEMORY[0x58] = v46;
          MEMORY[0x70] = *(_BYTE *)(a2 + 91) & 1;
          LOWORD(v40) = *(_WORD *)(a2 + 88);
          WORD1(v40) = *(unsigned __int8 *)(a2 + 90);
          HIDWORD(v40) = *(_DWORD *)(a2 + 80);
          MEMORY[0x68] = v40;
          if ( v30 )
          {
            MEMORY[0x84] = 0x80000000;
            MEMORY[0x80] = v30;
            MEMORY[0x78] = 136LL;
            EtwpCopySchematizedFilters((void *)0x88);
            MEMORY[0x74] = 1;
          }
          else
          {
            MEMORY[0x74] = 0;
          }
        }
        v23 = v39;
      }
      if ( v36 )
      {
        *(_QWORD *)(*(_QWORD *)(v24 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v24 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v33, v34, v35);
        v36 = 0;
      }
      v3 = a3;
    }
    while ( v22 != (_QWORD *)(a2 + 56) );
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  if ( v37 == 1 )
    EtwpUnreferenceGuidEntry((PVOID)a2);
  return (unsigned int)v7;
}
