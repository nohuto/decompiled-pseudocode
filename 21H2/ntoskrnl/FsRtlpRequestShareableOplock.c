/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x1402AA120
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14039321C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404F0820 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1406D98D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     MmDoesFileHaveUserWritableReferences @ 0x14021CE30 (MmDoesFileHaveUserWritableReferences.c)
 *     FsRtlpCancelOplockRHIrp @ 0x14022BD50 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140238100 (FsRtlpCallerIsAtomicRequestor.c)
 *     _tlgKeywordOn @ 0x1402864F4 (_tlgKeywordOn.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x1402AAA80 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x1402AAB54 (FsRtlpOplockEnqueueRH.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockKeysEqual @ 0x140360830 (FsRtlpOplockKeysEqual.c)
 *     FsRtlpOplockDequeueRH @ 0x1403617F0 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x140374DC8 (FsRtlpClearOwner.c)
 *     _tlgWriteAgg @ 0x1403759E4 (_tlgWriteAgg.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F0A78 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404F0678 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404F0ACC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpAllocateOplock @ 0x1406040A8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1406D9878 (FsRtlpOplockUpperLowerCompatible.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall FsRtlpRequestShareableOplock(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _QWORD *a5,
        char a6,
        char a7,
        unsigned int a8)
{
  __int64 v10; // r12
  unsigned int v12; // ebx
  char v13; // r13
  __int64 Oplock; // r14
  char v15; // si
  int v16; // r11d
  _QWORD *v17; // rbx
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *i; // rsi
  void *v21; // rcx
  _QWORD *v22; // rsi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  SECTION_OBJECT_POINTERS *v25; // rcx
  __int64 v26; // rax
  int v27; // r8d
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  __int64 *m; // rbx
  __int64 *n; // rbx
  _QWORD *v33; // rbx
  _QWORD *v34; // r13
  int v35; // eax
  _QWORD *v36; // rax
  _QWORD *v37; // rcx
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  _QWORD *v43; // rbx
  _QWORD *j; // rbx
  int v45; // eax
  __int64 *k; // rbx
  __int64 v47; // rdx
  _QWORD *v48; // rax
  _QWORD *v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rdx
  char v53; // [rsp+44h] [rbp-104h]
  PVOID P; // [rsp+48h] [rbp-100h] BYREF
  unsigned int v55; // [rsp+50h] [rbp-F8h] BYREF
  __int64 v56; // [rsp+58h] [rbp-F0h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+60h] [rbp-E8h]
  __int64 v58; // [rsp+68h] [rbp-E0h] BYREF
  __int64 v59; // [rsp+70h] [rbp-D8h] BYREF
  _QWORD *v60; // [rsp+78h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-C8h]
  __int64 v62; // [rsp+88h] [rbp-C0h]
  __int64 v63; // [rsp+90h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+A0h] [rbp-A8h] BYREF
  __int64 *v65; // [rsp+C0h] [rbp-88h]
  __int64 v66; // [rsp+C8h] [rbp-80h]
  int *v67; // [rsp+D0h] [rbp-78h]
  __int64 v68; // [rsp+D8h] [rbp-70h]
  __int64 *v69; // [rsp+E0h] [rbp-68h]
  __int64 v70; // [rsp+E8h] [rbp-60h]
  __int64 *v71; // [rsp+F0h] [rbp-58h]
  __int64 v72; // [rsp+F8h] [rbp-50h]

  v10 = a2;
  v56 = a2;
  v60 = a5;
  v12 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v53 = 0;
  v13 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  v15 = a7;
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v53 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v10 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v10 + 48), &P) )
  {
    if ( (v16 & 0x20000) != 0 )
    {
      v17 = P;
      FsRtlpOplockDequeueRH(P);
      v18 = v17[7];
      v19 = (_QWORD *)v17[8];
      if ( *(_QWORD **)(v18 + 8) != v17 + 7 || (_QWORD *)*v19 != v17 + 7 )
        __fastfail(3u);
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v17[5] )
        FsRtlpClearOwner(Oplock, v17);
      ExFreePoolWithTag(v17, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
LABEL_144:
      v12 = -1073741598;
LABEL_145:
      *(_DWORD *)(a3 + 48) = -1073741598;
      IofCompleteRequest((PIRP)a3, 1);
      goto LABEL_146;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v21 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v21);
      }
    }
    v22 = P;
    FsRtlpOplockDequeueRH(P);
    v23 = v22[7];
    v24 = (_QWORD *)v22[8];
    if ( *(_QWORD **)(v23 + 8) != v22 + 7 || (_QWORD *)*v24 != v22 + 7 )
      __fastfail(3u);
    *v24 = v23;
    *(_QWORD *)(v23 + 8) = v24;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v22[5] )
      FsRtlpClearOwner(Oplock, v22);
    ExFreePoolWithTag(v22, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v10 = v56;
    v15 = a7;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
    goto LABEL_144;
  if ( (a4 & 0x1000) != 0 || a4 == 0x10000 )
  {
    v25 = *(SECTION_OBJECT_POINTERS **)(*(_QWORD *)(v10 + 48) + 40LL);
    if ( v25 )
    {
      if ( MmDoesFileHaveUserWritableReferences(v25) )
      {
        if ( a4 == 0x10000 )
        {
          v12 = -1073741598;
          goto LABEL_146;
        }
        v26 = *(_QWORD *)(a3 + 24);
        *(_DWORD *)(v26 + 8) = 0;
        *(_DWORD *)(v26 + 12) |= 4u;
        if ( (unsigned int)dword_140C021A0 > 5 && tlgKeywordOn((__int64)&dword_140C021A0, 0x400000000000LL) )
        {
          v58 = 1LL;
          v65 = &v58;
          v66 = 8LL;
          v55 = a4;
          v67 = (int *)&v55;
          v68 = 4LL;
          LODWORD(v56) = *(_DWORD *)(Oplock + 144);
          v69 = &v56;
          v70 = 4LL;
          v59 = 0x1000000LL;
          v71 = &v59;
          v72 = 8LL;
          tlgWriteAgg((int)&dword_140C021A0, (int)&byte_1400245B5, v27, 6, &v64);
        }
        goto LABEL_144;
      }
    }
  }
  if ( !v15 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
LABEL_44:
    if ( a4 == 0x10000 )
    {
      v12 = -1073739511;
      goto LABEL_146;
    }
    goto LABEL_144;
  }
  if ( a4 == 16 )
  {
    v39 = *(_DWORD *)(Oplock + 144);
    if ( (v39 & 1) == 0 )
    {
      v40 = v39 & 0x1F0FFDF;
      if ( v40 != 16 && v40 != 4096 && v40 != 4112 )
        goto LABEL_144;
    }
    goto LABEL_105;
  }
  if ( a4 == 4096 )
  {
LABEL_105:
    if ( !v15 )
    {
      v41 = *(_DWORD *)(Oplock + 144);
      if ( (v41 & 1) == 0 )
      {
        v42 = v41 & 0x1F0FFDF;
        if ( (v41 & 0x1F0FFDF) != 0x10
          && v42 != 4096
          && v42 != 4112
          && v42 != 12288
          && v42 != 45056
          && v42 != 1060864
          && v42 != 8400896
          && (v41 & 0x10000) == 0 )
        {
          goto LABEL_144;
        }
      }
      v43 = *(_QWORD **)(Oplock + 56);
      if ( v43 != (_QWORD *)(Oplock + 56) )
        goto LABEL_118;
      if ( *(_QWORD *)(Oplock + 72) != Oplock + 72 )
      {
        while ( v43 != (_QWORD *)(Oplock + 56) )
        {
LABEL_118:
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), v43[3], 0LL) )
            goto LABEL_144;
          v43 = (_QWORD *)*v43;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), j[3], 0LL) )
            goto LABEL_144;
        }
      }
      v45 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v45 == 16 || v45 == 4096 || v45 == 4112 || v45 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v47 = k[2];
          if ( (*(_DWORD *)(v47 + 24) == 590400 || *(_QWORD *)(v47 + 48) != *(_QWORD *)(v10 + 48))
            && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), *(_QWORD *)(v47 + 48), 0LL) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)k[1], 533LL, a4 & 0x7000);
            break;
          }
        }
      }
    }
    v63 = *(_QWORD *)(a3 + 184);
    *(_BYTE *)(v63 + 3) |= 1u;
    *(_DWORD *)(a3 + 48) = 0;
    v48 = (_QWORD *)(a3 + 168);
    v49 = (_QWORD *)(Oplock + 40);
    v50 = *(_QWORD *)(Oplock + 40);
    if ( *(_QWORD *)(v50 + 8) != Oplock + 40 )
      __fastfail(3u);
    *v48 = v50;
    *(_QWORD *)(a3 + 176) = v49;
    *(_QWORD *)(v50 + 8) = v48;
    *v49 = v48;
    *(_QWORD *)(a3 + 56) = Oplock;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a6 )
      ObfReferenceObjectWithTag(*(PVOID *)(v10 + 48), 0x746C6644u);
    *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
    if ( *(_BYTE *)(a3 + 68) )
    {
      LOBYTE(v51) = 1;
      FsRtlpCancelReadOnlyOplockIrp(a3, v51);
    }
    else
    {
      _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
      KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
    }
    v13 = 1;
    v12 = 259;
LABEL_143:
    if ( v13 )
      goto LABEL_146;
    goto LABEL_144;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
    goto LABEL_143;
  if ( !v15 )
  {
    v28 = *(_DWORD *)(Oplock + 144);
    if ( (v28 & 1) == 0 )
    {
      v29 = v28 & 0x1F0FFDF;
      if ( (v28 & 0x1F0FFDF) != 0x1000
        && v29 != 12288
        && v29 != 45056
        && v29 != 1060864
        && v29 != 8400896
        && (v28 & 0x10000) == 0 )
      {
        goto LABEL_44;
      }
    }
  }
  if ( *(_BYTE *)(*(_QWORD *)(v10 + 48) + 73LL) )
    goto LABEL_44;
  if ( !v15 )
  {
    v30 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v30 == 4096 || v30 == 45056 )
    {
      for ( m = *(__int64 **)(Oplock + 40); m != (__int64 *)(Oplock + 40); m = (__int64 *)*m )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), *(_QWORD *)(m[2] + 48), 0LL) )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_146;
          }
          FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)m[1], 533LL, 12288LL);
          break;
        }
      }
    }
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      for ( n = *(__int64 **)(Oplock + 56); n != (__int64 *)(Oplock + 56); n = (__int64 *)*n )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), n[3], 0LL) && !n[7] )
        {
          if ( a4 == 0x10000 )
          {
            v12 = -1073741597;
            goto LABEL_146;
          }
          FsRtlpRemoveAndCompleteRHIrp(*(PVOID *)n[1], 0, 0, 0);
          break;
        }
      }
    }
    v33 = *(_QWORD **)(Oplock + 72);
    if ( v33 != (_QWORD *)(Oplock + 72) )
    {
      while ( v33 != (_QWORD *)(Oplock + 72) )
      {
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v10 + 48), v33[3], 0LL) )
        {
          v12 = -1073741598;
          if ( a4 == 0x10000 )
            goto LABEL_146;
          goto LABEL_145;
        }
        v33 = (_QWORD *)*v33;
      }
    }
  }
  v34 = v60;
  *(_QWORD *)(*v60 + 32LL) = KeGetCurrentThread()->ApcState.Process;
  *(_QWORD *)(*v34 + 24LL) = *(_QWORD *)(v10 + 48);
  v35 = FsRtlpOplockEnqueueRH(Oplock + 56, *v34);
  v12 = v35;
  if ( v35 >= 0 )
  {
    if ( a4 == 0x10000 )
    {
      v36 = (_QWORD *)(*v34 + 56LL);
      v37 = (_QWORD *)(Oplock + 120);
      v38 = *(_QWORD *)(Oplock + 120);
      if ( *(_QWORD *)(v38 + 8) != Oplock + 120 )
        __fastfail(3u);
      *v36 = v38;
      v36[1] = v37;
      *(_QWORD *)(v38 + 8) = v36;
      *v37 = v36;
      v12 = 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      *(_QWORD *)(*v34 + 40LL) = CurrentThread;
      ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 40LL), 0x746C6644u);
      *(_QWORD *)(*v34 + 16LL) = a3;
      v62 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v62 + 3) |= 1u;
      v12 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*v34 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        if ( a6 && a7 )
          FsRtlpCancelOplockRHIrp(a3, 1, 0);
        else
          FsRtlpCancelOplockRHIrp(a3, 1, 1);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v12 = 259;
      }
    }
    *v34 = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    if ( a4 == 0x10000 )
      *(_DWORD *)(Oplock + 144) |= 0x10000u;
  }
  else if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v35;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_146:
  if ( v53 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v12;
}
