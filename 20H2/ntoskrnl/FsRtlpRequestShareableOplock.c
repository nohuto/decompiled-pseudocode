/*
 * XREFs of FsRtlpRequestShareableOplock @ 0x140208D40
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x140392C5C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1404EED00 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1405F20C0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x140209640 (FsRtlpComputeShareableOplockState.c)
 *     FsRtlpOplockEnqueueRH @ 0x140209714 (FsRtlpOplockEnqueueRH.c)
 *     ExAcquireFastMutexUnsafe @ 0x140209A50 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140209BE0 (ExReleaseFastMutexUnsafe.c)
 *     FsRtlpOplockKeysEqual @ 0x14020C450 (FsRtlpOplockKeysEqual.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     FsRtlpOplockDequeueRH @ 0x14029F9C8 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140317280 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpCancelOplockRHIrp @ 0x140322450 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpClearOwner @ 0x140375064 (FsRtlpClearOwner.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403EFE3C (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1404EEB58 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EEFAC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EF0AC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x1405F2074 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1406C93B8 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned int v10; // esi
  char v11; // r12
  char v12; // r13
  __int64 Oplock; // rbx
  int v14; // r11d
  _QWORD *i; // r13
  _QWORD *v16; // r14
  __int64 v17; // rcx
  _QWORD *v18; // rax
  int v19; // eax
  __int64 v20; // r8
  int v21; // eax
  _QWORD *v22; // r14
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rcx
  __int64 v28; // rdx
  int v29; // ecx
  __int64 *v30; // rsi
  _QWORD *v31; // rsi
  __int64 v32; // rcx
  _QWORD *v33; // rax
  IRP *v34; // r14
  void *v35; // rcx
  int v36; // eax
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  _QWORD *v40; // r14
  __int64 v41; // rsi
  int v42; // eax
  __int64 *k; // r14
  __int64 v44; // rdx
  _QWORD *j; // r14
  _QWORD *v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // rdx
  __int64 *v50; // rsi
  PVOID P; // [rsp+48h] [rbp-70h] BYREF
  PFAST_MUTEX FastMutex; // [rsp+50h] [rbp-68h]
  __int64 v54; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp-58h]
  struct _KTHREAD *v56; // [rsp+68h] [rbp-50h]
  __int64 v57; // [rsp+70h] [rbp-48h]

  v10 = 0;
  P = 0LL;
  FastMutex = 0LL;
  v11 = 0;
  v12 = 0;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock();
    *a1 = Oplock;
  }
  if ( !a7 && a4 != 0x10000 )
  {
    FastMutex = *(PFAST_MUTEX *)(Oplock + 152);
    ExAcquireFastMutexUnsafe(FastMutex);
    v11 = 1;
  }
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)a2 == 13
    && (unsigned __int8)FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(a2 + 48), &P) )
  {
    if ( (v14 & 0x20000) != 0 )
    {
      v31 = P;
      FsRtlpOplockDequeueRH(P);
      v32 = v31[7];
      v33 = (_QWORD *)v31[8];
      if ( *(_QWORD **)(v32 + 8) != v31 + 7 || (_QWORD *)*v33 != v31 + 7 )
        goto LABEL_138;
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
        *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
      if ( v31[5] )
        FsRtlpClearOwner(Oplock, v31);
      ExFreePoolWithTag(v31, 0);
      P = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      goto LABEL_64;
    }
    for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
    {
      v35 = i;
      if ( !*((_BYTE *)i + 53) || a4 != 12288 )
      {
        i = (_QWORD *)i[1];
        FsRtlpRemoveAndCompleteWaitingIrp(v35);
      }
    }
    v16 = P;
    FsRtlpOplockDequeueRH(P);
    v17 = v16[7];
    v18 = (_QWORD *)v16[8];
    if ( *(_QWORD **)(v17 + 8) != v16 + 7 || (_QWORD *)*v18 != v16 + 7 )
      goto LABEL_138;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
      *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
    if ( v16[5] )
      FsRtlpClearOwner(Oplock, v16);
    ExFreePoolWithTag(v16, 0);
    P = 0LL;
    FsRtlpComputeShareableOplockState(Oplock);
    v12 = 0;
  }
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a4, a8) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, 1);
    goto LABEL_144;
  }
  if ( !a7 && (*(_DWORD *)(Oplock + 144) & 0x40) != 0 )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_144;
    }
    goto LABEL_64;
  }
  if ( a4 != 12288 && a4 != 0x10000 )
  {
    if ( a4 == 16 )
    {
      v36 = *(_DWORD *)(Oplock + 144);
      if ( (v36 & 1) == 0 )
      {
        v37 = v36 & 0x1F0FFDF;
        if ( v37 != 16 && v37 != 4096 && v37 != 4112 )
          goto LABEL_64;
      }
    }
    else if ( a4 != 4096 )
    {
      v34 = (IRP *)a3;
LABEL_122:
      if ( v12 )
        goto LABEL_144;
      goto LABEL_65;
    }
    if ( a7 )
    {
      v41 = a2;
LABEL_115:
      v34 = (IRP *)a3;
      v54 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v54 + 3) |= 1u;
      *(_DWORD *)(a3 + 48) = 0;
      v46 = (_QWORD *)(a3 + 168);
      v47 = (_QWORD *)(Oplock + 40);
      v48 = *(_QWORD *)(Oplock + 40);
      if ( *(_QWORD *)(v48 + 8) != Oplock + 40 )
        goto LABEL_138;
      *v46 = v48;
      *(_QWORD *)(a3 + 176) = v47;
      *(_QWORD *)(v48 + 8) = v46;
      *v47 = v46;
      *(_QWORD *)(a3 + 56) = Oplock;
      FsRtlpComputeShareableOplockState(Oplock);
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(v41 + 48), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v49) = 1;
        FsRtlpCancelReadOnlyOplockIrp(a3, v49);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpReadOnlyOplockIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
      }
      v12 = 1;
      v10 = 259;
      goto LABEL_122;
    }
    v38 = *(_DWORD *)(Oplock + 144);
    if ( (v38 & 1) != 0
      || (v39 = v38 & 0x1F0FFDF, (v38 & 0x1F0FFDF) == 0x10)
      || v39 == 4096
      || v39 == 4112
      || v39 == 12288
      || v39 == 45056
      || v39 == 1060864
      || v39 == 8400896
      || (v38 & 0x10000) != 0 )
    {
      v40 = *(_QWORD **)(Oplock + 56);
      if ( v40 == (_QWORD *)(Oplock + 56) && *(_QWORD *)(Oplock + 72) == Oplock + 72 )
      {
        v41 = a2;
      }
      else
      {
        v41 = a2;
        while ( v40 != (_QWORD *)(Oplock + 56) )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), v40[3], 0LL) )
            goto LABEL_64;
          v40 = (_QWORD *)*v40;
        }
        for ( j = *(_QWORD **)(Oplock + 72); j != (_QWORD *)(Oplock + 72); j = (_QWORD *)*j )
        {
          if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), j[3], 0LL) )
            goto LABEL_64;
        }
      }
      v42 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
      if ( v42 == 16 || v42 == 4096 || v42 == 4112 || v42 == 45056 )
      {
        for ( k = *(__int64 **)(Oplock + 40); k != (__int64 *)(Oplock + 40); k = (__int64 *)*k )
        {
          v44 = k[2];
          if ( (*(_DWORD *)(v44 + 24) == 590400 || *(_QWORD *)(v44 + 48) != *(_QWORD *)(v41 + 48))
            && (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v41 + 48), *(_QWORD *)(v44 + 48), 0LL) )
          {
            FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)k[1], 533LL, a4 & 0x7000);
            goto LABEL_115;
          }
        }
      }
      goto LABEL_115;
    }
LABEL_64:
    v34 = (IRP *)a3;
LABEL_65:
    v34->IoStatus.Status = -1073741598;
    IofCompleteRequest(v34, 1);
LABEL_66:
    v10 = -1073741598;
    goto LABEL_144;
  }
  if ( !a7
    && (v19 = *(_DWORD *)(Oplock + 144), (v19 & 1) == 0)
    && (v29 = v19 & 0x1F0FFDF, (v19 & 0x1F0FFDF) != 0x3000)
    && v29 != 8400896
    && v29 != 4096
    && v29 != 45056
    && v29 != 1060864
    && (v19 & 0x10000) == 0
    || (v20 = a2, *(_BYTE *)(*(_QWORD *)(a2 + 48) + 73LL)) )
  {
    if ( a4 == 0x10000 )
    {
      v10 = -1073739511;
      goto LABEL_144;
    }
    goto LABEL_64;
  }
  if ( !a7 )
  {
    v21 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
    if ( v21 == 4096 || v21 == 45056 )
    {
      v50 = *(__int64 **)(Oplock + 40);
      while ( 1 )
      {
        if ( v50 == (__int64 *)(Oplock + 40) )
          goto LABEL_30;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), *(_QWORD *)(v50[2] + 48), 0LL) )
          break;
        v50 = (__int64 *)*v50;
        v20 = a2;
      }
      if ( a4 == 0x10000 )
      {
        v10 = -1073741597;
        goto LABEL_144;
      }
      FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)v50[1], 533LL, 12288LL);
      v20 = a2;
    }
LABEL_30:
    if ( (((*(_DWORD *)(Oplock + 144) & 0x1F0FFDF) - 12288) & 0xFFFF7FFF) == 0 )
    {
      v30 = *(__int64 **)(Oplock + 56);
      while ( 1 )
      {
        if ( v30 == (__int64 *)(Oplock + 56) )
          goto LABEL_31;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), v30[3], 0LL) && !v30[7] )
          break;
        v30 = (__int64 *)*v30;
        v20 = a2;
      }
      if ( a4 == 0x10000 )
      {
        v10 = -1073741597;
        goto LABEL_144;
      }
      FsRtlpRemoveAndCompleteRHIrp(*(PVOID *)v30[1], 0, 0, 0);
      v20 = a2;
    }
LABEL_31:
    v22 = *(_QWORD **)(Oplock + 72);
    if ( v22 != (_QWORD *)(Oplock + 72) )
    {
      while ( 1 )
      {
        if ( v22 == (_QWORD *)(Oplock + 72) )
          goto LABEL_32;
        if ( (unsigned __int8)FsRtlpOplockKeysEqual(*(_QWORD *)(v20 + 48), v22[3], 0LL) )
          break;
        v22 = (_QWORD *)*v22;
        v20 = a2;
      }
      if ( a4 == 0x10000 )
        goto LABEL_66;
      goto LABEL_64;
    }
  }
LABEL_32:
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(*a5 + 32LL) = CurrentThread->ApcState.Process;
  *(_QWORD *)(*a5 + 24LL) = *(_QWORD *)(v20 + 48);
  v23 = FsRtlpOplockEnqueueRH(Oplock + 56, *a5);
  v10 = v23;
  if ( v23 >= 0 )
  {
    if ( a4 != 0x10000 )
    {
      v56 = KeGetCurrentThread();
      *(_QWORD *)(*a5 + 40LL) = v56;
      ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 40LL), 0x746C6644u);
      *(_QWORD *)(*a5 + 16LL) = a3;
      v57 = *(_QWORD *)(a3 + 184);
      *(_BYTE *)(v57 + 3) |= 1u;
      v10 = 259;
      *(_DWORD *)(a3 + 48) = 0;
      *(_QWORD *)(a3 + 56) = Oplock;
      if ( a6 )
        ObfReferenceObjectWithTag(*(PVOID *)(*a5 + 24LL), 0x746C6644u);
      *(_BYTE *)(a3 + 69) = KeAcquireQueuedSpinLock(7uLL);
      if ( *(_BYTE *)(a3 + 68) )
      {
        LOBYTE(v25) = !a6 || !a7;
        LOBYTE(v24) = 1;
        FsRtlpCancelOplockRHIrp(a3, v24, v25);
      }
      else
      {
        _InterlockedExchange64((volatile __int64 *)(a3 + 104), (__int64)FsRtlpOplockRHIrpCancelRoutine);
        KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a3 + 69));
        v10 = 259;
      }
      goto LABEL_38;
    }
    v26 = (_QWORD *)(*a5 + 56LL);
    v27 = (_QWORD *)(Oplock + 120);
    v28 = *(_QWORD *)(Oplock + 120);
    if ( *(_QWORD *)(v28 + 8) == Oplock + 120 )
    {
      *v26 = v28;
      v26[1] = v27;
      *(_QWORD *)(v28 + 8) = v26;
      *v27 = v26;
      v10 = 0;
LABEL_38:
      *a5 = 0LL;
      FsRtlpComputeShareableOplockState(Oplock);
      if ( a4 == 0x10000 )
        *(_DWORD *)(Oplock + 144) |= 0x10000u;
      goto LABEL_144;
    }
LABEL_138:
    __fastfail(3u);
  }
  if ( a4 != 0x10000 )
  {
    *(_DWORD *)(a3 + 48) = v23;
    IofCompleteRequest((PIRP)a3, 1);
  }
LABEL_144:
  if ( v11 && a4 != 0x10000 )
    ExReleaseFastMutexUnsafe(FastMutex);
  return v10;
}
