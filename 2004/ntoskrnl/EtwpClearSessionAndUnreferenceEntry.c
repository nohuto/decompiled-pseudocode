/*
 * XREFs of EtwpClearSessionAndUnreferenceEntry @ 0x1406C7250
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1406C7034 (EtwpDisableTraceProviders.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1403FF870 (RtlCompareMemory.c)
 *     EtwpAllocDataBlock @ 0x140632DEC (EtwpAllocDataBlock.c)
 *     EtwpUnreferenceDataBlock @ 0x140633EA0 (EtwpUnreferenceDataBlock.c)
 *     EtwpUpdateFilterData @ 0x140636614 (EtwpUpdateFilterData.c)
 *     EtwpSendDataBlock @ 0x140637004 (EtwpSendDataBlock.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066B0C8 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x14066E6D8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x14066F5A8 (EtwpUnreferenceGuidEntry.c)
 *     EtwpCopySchematizedFilters @ 0x14093D4EC (EtwpCopySchematizedFilters.c)
 */

__int64 __fastcall EtwpClearSessionAndUnreferenceEntry(int a1, __int64 a2, char a3)
{
  char v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v7; // r12d
  unsigned int v8; // edx
  __int64 v9; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v13; // r11
  __int64 v14; // r10
  int v15; // r13d
  __int64 v16; // rsi
  int v17; // ebx
  unsigned __int8 v18; // cl
  unsigned __int8 v19; // al
  __int128 v20; // xmm1
  _QWORD *v21; // r14
  __int64 v22; // rbx
  __int64 v23; // rsi
  char *v24; // r15
  char v25; // dl
  char v26; // cl
  int SchematizedFilterSize; // eax
  int v28; // r13d
  unsigned int v29; // r15d
  int v30; // eax
  __int64 v31; // rcx
  struct _KTHREAD *v32; // rax
  char v33; // [rsp+38h] [rbp-39h]
  char v34; // [rsp+39h] [rbp-38h]
  _DWORD *v36; // [rsp+40h] [rbp-31h] BYREF
  int v37; // [rsp+48h] [rbp-29h]
  __int64 v38; // [rsp+50h] [rbp-21h]
  int v39; // [rsp+58h] [rbp-19h]
  int v40; // [rsp+5Ch] [rbp-15h]
  __int128 v41; // [rsp+60h] [rbp-11h]
  __int128 v42; // [rsp+70h] [rbp-1h]
  __int128 Source2; // [rsp+80h] [rbp+Fh] BYREF
  __int128 v44; // [rsp+90h] [rbp+1Fh]

  v40 = a1;
  Source2 = 0LL;
  v3 = a3;
  v44 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v33 = 0;
  v36 = 0LL;
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx(a2 + 408, 0LL);
  *(_QWORD *)(a2 + 416) = KeGetCurrentThread();
  v39 = *(unsigned __int16 *)(a2 + 88);
  if ( v39 == a1 )
    *(_OWORD *)(a2 + 80) = 0LL;
  v8 = 0;
  v9 = a2 + 128;
  while ( *(_DWORD *)v9 != 1 || *(unsigned __int16 *)(v9 + 6) != a1 )
  {
    ++v8;
    v9 += 32LL;
    if ( v8 >= 8 )
    {
      v34 = 0;
      goto LABEL_7;
    }
  }
  *(_DWORD *)v9 = 0;
  v11 = a2 + 132;
  v12 = 0LL;
  v41 = 0uLL;
  v13 = 0;
  *(_QWORD *)&v42 = 0LL;
  v14 = -1LL;
  v15 = 1 << v8;
  v16 = 8LL;
  *((_QWORD *)&v42 + 1) = -1LL;
  v17 = 0;
  do
  {
    if ( *(_DWORD *)(v11 - 4) )
    {
      v18 = *(_BYTE *)v11;
      v19 = v13;
      LODWORD(v41) = 1;
      if ( v13 <= v18 )
        v19 = v18;
      v12 |= *(_QWORD *)(v11 + 12);
      v14 &= *(_QWORD *)(v11 + 20);
      v13 = v19;
      v17 |= *(_DWORD *)(v11 + 4);
    }
    v11 += 32LL;
    --v16;
  }
  while ( v16 );
  *(_QWORD *)&v42 = v12;
  BYTE4(v41) = v13;
  LOBYTE(v12) = 1;
  *((_QWORD *)&v42 + 1) = v14;
  v20 = v42;
  DWORD2(v41) = v17;
  *(_OWORD *)(a2 + 96) = v41;
  *(_OWORD *)(a2 + 112) = v20;
  EtwpUpdateFilterData(a2, v8, 0LL, v12, 0LL);
  v34 = 1;
  v21 = *(_QWORD **)(a2 + 56);
  if ( v21 != (_QWORD *)(a2 + 56) )
  {
    v22 = (__int64)v36;
    LOBYTE(v15) = ~(_BYTE)v15;
    v37 = v15;
    do
    {
      if ( v3 )
      {
        v32 = KeGetCurrentThread();
        v23 = (__int64)(v21 - 2);
        v24 = (char *)v21 + 85;
        --v32->KernelApcDisable;
        ExAcquirePushLockExclusiveEx(v21[2] + 408LL, 0LL);
        v22 = (__int64)v36;
        v33 = 1;
        *(_QWORD *)(v21[2] + 416LL) = KeGetCurrentThread();
      }
      else
      {
        v23 = (__int64)v21;
        v24 = (char *)v21 + 100;
      }
      v25 = *v24;
      v21 = (_QWORD *)*v21;
      v26 = *v24 & v15;
      *v24 = v26;
      if ( ((*(_BYTE *)(v23 + 98) & 8) == 0 || v39 == v40) && v26 != v25 )
      {
        EtwpComputeRegEntryEnableInfo(v23, (__int64)&Source2);
        SchematizedFilterSize = EtwpGetSchematizedFilterSize(a2, *(_BYTE *)(v23 + 100));
        v28 = SchematizedFilterSize;
        v29 = 120;
        if ( SchematizedFilterSize )
          v29 = SchematizedFilterSize + 136;
        if ( v22 )
        {
          if ( *(_DWORD *)(v22 + 4) != v29 || RtlCompareMemory((const void *)(v22 + 72), &Source2, 0x20uLL) != 32 )
          {
            EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
            v22 = 0LL;
            v36 = 0LL;
          }
          if ( v22 )
            goto LABEL_29;
        }
        v30 = EtwpAllocDataBlock(v29, 0LL, &v36);
        v22 = (__int64)v36;
        v7 = v30;
        if ( v30 >= 0 )
        {
          *v36 = 3;
          *(_DWORD *)(v22 + 4) = v29;
          v31 = *(_QWORD *)(v23 + 32);
          BYTE3(v38) = 0;
          *(_OWORD *)(v22 + 40) = *(_OWORD *)(v31 + 40);
          *(_OWORD *)(v22 + 72) = Source2;
          *(_OWORD *)(v22 + 88) = v44;
          *(_DWORD *)(v22 + 112) = *(_BYTE *)(a2 + 91) & 1;
          LOWORD(v38) = *(_WORD *)(a2 + 88);
          BYTE2(v38) = *(_BYTE *)(a2 + 90);
          HIDWORD(v38) = *(_DWORD *)(a2 + 80);
          *(_QWORD *)(v22 + 104) = v38;
          if ( v28 )
          {
            *(_DWORD *)(v22 + 132) = 0x80000000;
            *(_DWORD *)(v22 + 128) = v28;
            *(_QWORD *)(v22 + 120) = 136LL;
            EtwpCopySchematizedFilters((void *)(v22 + 136));
            *(_DWORD *)(v22 + 116) = 1;
          }
          else
          {
            *(_DWORD *)(v22 + 116) = 0;
          }
        }
        if ( v22 )
LABEL_29:
          v7 = EtwpSendDataBlock(v23, v22);
        LOBYTE(v15) = v37;
      }
      if ( v33 )
      {
        *(_QWORD *)(*(_QWORD *)(v23 + 32) + 416LL) = 0LL;
        ExReleasePushLockEx(*(_QWORD *)(v23 + 32) + 408LL, 0LL);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
        v22 = (__int64)v36;
        v33 = 0;
      }
      v3 = a3;
    }
    while ( v21 != (_QWORD *)(a2 + 56) );
    if ( v22 )
      EtwpUnreferenceDataBlock((volatile signed __int32 *)v22);
  }
LABEL_7:
  *(_QWORD *)(a2 + 416) = 0LL;
  ExReleasePushLockEx(a2 + 408, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v34 == 1 )
    EtwpUnreferenceGuidEntry((__int64 *)a2);
  return v7;
}
