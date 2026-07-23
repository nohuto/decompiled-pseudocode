/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x140374620
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x14021CE30 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140238100 (FsRtlpCallerIsAtomicRequestor.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14036CDF0 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpAllocateOplock @ 0x1406040A8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406D9878 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestExclusiveOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // r15d
  unsigned int v11; // ebx
  __int64 Oplock; // rsi
  int v13; // r11d
  _QWORD *v14; // r14
  __int64 v15; // rcx
  _QWORD *v16; // rax
  _QWORD *i; // r14
  void *v18; // rcx
  _QWORD *v19; // r14
  __int64 v20; // rcx
  _QWORD *v21; // rax
  SECTION_OBJECT_POINTERS *v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  __int64 v25; // r9
  int v26; // ecx
  int v27; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v29; // ecx
  __int64 v30; // r15
  __int64 v31; // r8
  _QWORD *v32; // r12
  _QWORD *m; // r15
  _QWORD *n; // rax
  PVOID *v35; // r15
  _QWORD *v36; // r12
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v39; // r15
  unsigned int v41; // [rsp+44h] [rbp-104h] BYREF
  PVOID P; // [rsp+48h] [rbp-100h] BYREF
  int v43; // [rsp+50h] [rbp-F8h] BYREF
  int v44; // [rsp+54h] [rbp-F4h]
  _QWORD *v45; // [rsp+58h] [rbp-F0h]
  __int64 v46; // [rsp+60h] [rbp-E8h]
  int v47; // [rsp+68h] [rbp-E0h]
  __int64 v48; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v49; // [rsp+78h] [rbp-D0h] BYREF
  __int64 v50; // [rsp+80h] [rbp-C8h]
  __int64 v51; // [rsp+88h] [rbp-C0h]
  __int64 v52; // [rsp+90h] [rbp-B8h]
  __int64 v53; // [rsp+98h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR v54; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v55; // [rsp+C0h] [rbp-88h]
  __int64 v56; // [rsp+C8h] [rbp-80h]
  unsigned int *v57; // [rsp+D0h] [rbp-78h]
  __int64 v58; // [rsp+D8h] [rbp-70h]
  int *v59; // [rsp+E0h] [rbp-68h]
  __int64 v60; // [rsp+E8h] [rbp-60h]
  __int64 *v61; // [rsp+F0h] [rbp-58h]
  __int64 v62; // [rsp+F8h] [rbp-50h]

  v7 = a4;
  v41 = a4;
  v11 = 0;
  v47 = 0;
  P = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v46 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v14 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v15 = v14[7];
      v16 = (_QWORD *)v14[8];
      if ( *(_QWORD **)(v15 + 8) != v14 + 7 || (_QWORD *)*v16 != v14 + 7 )
        __fastfail(3u);
      *v16 = v15;
      *(_QWORD *)(v15 + 8) = v16;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v14[5] )
        FsRtlpClearOwner(Oplock, v14);
      ExFreePoolWithTag(v14, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_14;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v18 = i;
      if ( !*((_BYTE *)i + 53) )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v18);
      }
    }
    v19 = P;
    FsRtlpOplockDequeueRH((__int64)P);
    v20 = v19[7];
    v21 = (_QWORD *)v19[8];
    if ( *(_QWORD **)(v20 + 8) != v19 + 7 || (_QWORD *)*v21 != v19 + 7 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v19[5] )
      FsRtlpClearOwner(Oplock, v19);
    ExFreePoolWithTag(v19, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v7 = v41;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
    goto LABEL_14;
  v44 = a6 & 0x1000;
  if ( (a6 & 0x1000) != 0 )
  {
    v22 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(a2 + 48) + 40LL);
    if ( v22 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v22) )
      {
        v23 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v23 + 8) = 0;
        *(_DWORD *)(v23 + 12) |= 4u;
        if ( (unsigned int)dword_140C021A0 > 5 && tlgKeywordOn((__int64)&dword_140C021A0, 0x400000000000LL) )
        {
          v48 = 1LL;
          v55 = &v48;
          v56 = 8LL;
          v41 = a6;
          v57 = &v41;
          v58 = v25;
          v43 = *(_DWORD *)(Oplock + 144);
          v59 = &v43;
          v60 = v25;
          v49 = 0x1000000LL;
          v61 = &v49;
          v62 = 8LL;
          tlgWriteAgg((int)&dword_140C021A0, (int)&byte_14002453F, v24, 6, &v54);
        }
        goto LABEL_14;
      }
    }
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_103;
  }
  v26 = *(_DWORD *)(Oplock + 144);
  if ( (v26 & 0x91) == 0 )
  {
    if ( (v26 & 0x7000) == 0 || (v26 & 0x1F00F00) != 0 || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_42;
      goto LABEL_101;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_42;
    if ( (a6 & 0x7000) == 0 || *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) && (a6 & 0x2000) != 0 )
    {
LABEL_14:
      v11 = -1073741598;
LABEL_102:
      *(_DWORD *)(a3 + 48) = v11;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_103;
    }
    v29 = v26 & 0x1F0FFDF;
    if ( v29 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
        goto LABEL_14;
      v36 = (_QWORD *)(Oplock + 40);
      for ( j = *(_QWORD **)(Oplock + 40); j != v36; j = (_QWORD *)*j )
      {
        v52 = j[2];
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v52 + 48), 0) )
        {
LABEL_90:
          v11 = -1073741598;
          goto LABEL_102;
        }
      }
      if ( v41 <= 1 || (a5 & 1) != 0 )
      {
        for ( k = (_QWORD *)*v36; ; k = (_QWORD *)*v39 )
        {
          v45 = k;
          if ( k == v36 )
            break;
          v39 = (_QWORD *)k[1];
          FsRtlpRemoveAndCompleteReadOnlyIrp(*v39, 533LL, a6 & 0x7000);
        }
LABEL_54:
        *(_QWORD *)Oplock = a3;
        *(_QWORD *)(Oplock + 8) = *(_QWORD *)(a2 + 48);
        FsRtlpClearOwner(Oplock, 0LL);
        *(_QWORD *)(Oplock + 16) = KeGetCurrentThread()->ApcState.Process;
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(Oplock + 24) = CurrentThread;
        ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
        *(_BYTE *)(Oplock + 32) = 0;
        *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
        ObfReferenceObjectWithTag(*(PVOID *)(a2 + 48), 0x746C6644u);
        v53 = *(_QWORD *)(a3 + 184);
        *(_BYTE *)(v53 + 3) |= 1u;
        *(_QWORD *)(a3 + 56) = Oplock;
        *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
        if ( *(_BYTE *)(a3 + 68) )
        {
          FsRtlpCancelExclusiveIrp(a3, 1, 1);
        }
        else
        {
          _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpExclusiveIrpCancelRoutine);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        }
        v11 = 259;
        goto LABEL_103;
      }
    }
    else
    {
      if ( v29 != 12288 )
      {
        if ( (v29 == 20544 || v29 == 28736 && a6 == 28736)
          && ((a6 - 20544) & 0xFFFFDFFF) == 0
          && FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
        {
          v50 = *(_QWORD *)Oplock;
          v30 = v50;
          *(_BYTE *)(v30 + 69) = KeAcquireQueuedSpinLock(7uLL);
          _InterlockedExchange64((volatile __int64 *)(v30 + 104), 0LL);
          KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v30 + 69));
          if ( *(_BYTE *)(v50 + 68) )
          {
            *(_QWORD *)(v30 + 56) = 0LL;
            *(_DWORD *)(v30 + 48) = -1073741536;
          }
          else
          {
            v31 = *(_QWORD *)(v50 + 24);
            v51 = v31;
            *(_OWORD *)v31 = 0LL;
            *(_QWORD *)(v31 + 16) = 0LL;
            *(_DWORD *)v31 = 1572865;
            *(_DWORD *)(v31 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
            *(_DWORD *)(v31 + 8) = (v44 != 0) | (a6 >> 12) & 6;
            *(_QWORD *)(v30 + 56) = 24LL;
            *(_DWORD *)(v30 + 48) = 533;
          }
          IofCompleteRequest((PIRP)v30, 1);
          *(_QWORD *)Oplock = 0LL;
          ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
          *(_QWORD *)(Oplock + 8) = 0LL;
          goto LABEL_54;
        }
        goto LABEL_14;
      }
      if ( a6 != 28736 )
        goto LABEL_14;
      v32 = (_QWORD *)(Oplock + 56);
      for ( m = *(_QWORD **)(Oplock + 56); m != v32; m = (_QWORD *)*m )
      {
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
          goto LABEL_90;
        if ( m[7] )
        {
          v11 = -1073741597;
          goto LABEL_102;
        }
      }
      if ( v41 <= 1 || (a5 & 1) != 0 )
      {
        for ( n = (_QWORD *)*v32; ; n = *v35 )
        {
          v45 = n;
          if ( n == v32 )
            break;
          v35 = (PVOID *)n[1];
          FsRtlpRemoveAndCompleteRHIrp(*v35, 0, 0, 0);
        }
        goto LABEL_54;
      }
    }
    v11 = -1073741598;
    goto LABEL_102;
  }
  if ( (v26 & 0x10) != 0 && (a6 & 0x7000) != 0
    || (v26 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    goto LABEL_41;
  }
  v27 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v27 == 16 || v27 == 4096 || v27 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
  if ( v7 <= 1 || (*(_DWORD *)(Oplock + 144) & 1) == 0 || (a5 & 1) != 0 )
  {
    if ( !*(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL) || (a6 & 0x2000) == 0 )
      goto LABEL_54;
LABEL_41:
    if ( (a6 & 0x10000) != 0 )
    {
LABEL_42:
      v11 = -1073739511;
      goto LABEL_103;
    }
    goto LABEL_14;
  }
LABEL_101:
  v11 = -1073741598;
  if ( a3 )
    goto LABEL_102;
LABEL_103:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
