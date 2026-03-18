/*
 * XREFs of FsRtlpRequestExclusiveOplock @ 0x140373290
 * Callers:
 *     FsRtlpOplockFsctrlInternal @ 0x1406111D0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     IofCompleteRequest @ 0x140248710 (IofCompleteRequest.c)
 *     FsRtlpOplockKeysEqual @ 0x140256840 (FsRtlpOplockKeysEqual.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     FsRtlpComputeShareableOplockState @ 0x14025AE70 (FsRtlpComputeShareableOplockState.c)
 *     ExAcquireFastMutexUnsafe @ 0x14025BC80 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x14025BE10 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x1402611B0 (ObfDereferenceObjectWithTag.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1402F56F8 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpOplockDequeueRH @ 0x1402F5C84 (FsRtlpOplockDequeueRH.c)
 *     FsRtlpClearOwner @ 0x1402F5CF4 (FsRtlpClearOwner.c)
 *     FsRtlpCallerIsAtomicRequestor @ 0x140308130 (FsRtlpCallerIsAtomicRequestor.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140369C70 (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1404EB0EC (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404EB1EC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlpOplockUpperLowerCompatible @ 0x140611184 (FsRtlpOplockUpperLowerCompatible.c)
 *     FsRtlpAllocateOplock @ 0x1406D3758 (FsRtlpAllocateOplock.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
  __int64 v9; // r13
  unsigned int v11; // edi
  __int64 Oplock; // r14
  int v13; // r11d
  _QWORD *i; // rbx
  _QWORD *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  CCHAR v18; // r10
  int v19; // edx
  int v20; // eax
  struct _KTHREAD *v21; // rcx
  int v22; // ebx
  CCHAR v23; // dl
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  void *v27; // rcx
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // edx
  __int64 v31; // r15
  __int64 v32; // rdx
  _QWORD *v33; // r13
  _QWORD *m; // r15
  _QWORD *n; // rax
  _QWORD **v36; // r15
  _QWORD *v37; // r13
  _QWORD *j; // r15
  _QWORD *k; // rax
  _QWORD *v40; // r15
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  _QWORD *v43; // [rsp+48h] [rbp-80h]
  __int64 v44; // [rsp+50h] [rbp-78h]
  int v45; // [rsp+58h] [rbp-70h]
  __int64 v46; // [rsp+60h] [rbp-68h]
  __int64 v47; // [rsp+68h] [rbp-60h]
  __int64 v48; // [rsp+70h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-50h]
  struct _KTHREAD *v50; // [rsp+80h] [rbp-48h]
  __int64 v51; // [rsp+88h] [rbp-40h]

  v7 = a4;
  v9 = a2;
  v11 = 0;
  v45 = 0;
  P = 0LL;
  Oplock = *a1;
  if ( !*a1 )
  {
    Oplock = FsRtlpAllocateOplock(a1, a2);
    *a1 = Oplock;
  }
  v44 = Oplock;
  ExAcquireFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  if ( (*(_DWORD *)(Oplock + 144) & 0x10000) != 0
    && *(_BYTE *)v9 == 13
    && FsRtlpCallerIsAtomicRequestor(Oplock, *(_QWORD *)(v9 + 48), &P) )
  {
    if ( (v13 & 0x20000) != 0 )
    {
      v24 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v25 = v24[7];
      v26 = (_QWORD *)v24[8];
      if ( *(_QWORD **)(v25 + 8) == v24 + 7 && (_QWORD *)*v26 == v24 + 7 )
      {
        *v26 = v25;
        *(_QWORD *)(v25 + 8) = v26;
        if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
          *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
        if ( v24[5] )
          FsRtlpClearOwner(Oplock, (__int64)v24);
        ExFreePoolWithTag(v24, 0);
        P = 0LL;
        FsRtlpComputeShareableOplockState(Oplock);
        goto LABEL_41;
      }
    }
    else
    {
      for ( i = *(_QWORD **)(Oplock + 88); i != (_QWORD *)(Oplock + 88); i = (_QWORD *)*i )
      {
        v27 = i;
        if ( !*((_BYTE *)i + 53) )
        {
          i = (_QWORD *)i[1];
          FsRtlpRemoveAndCompleteWaitingIrp(v27);
        }
      }
      v15 = P;
      FsRtlpOplockDequeueRH((__int64)P);
      v16 = v15[7];
      v17 = (_QWORD *)v15[8];
      if ( *(_QWORD **)(v16 + 8) == v15 + 7 && (_QWORD *)*v17 == v15 + 7 )
      {
        *v17 = v16;
        *(_QWORD *)(v16 + 8) = v17;
        if ( *(_QWORD *)(Oplock + 120) == Oplock + 120 )
          *(_DWORD *)(Oplock + 144) &= 0xFFFCFFFF;
        if ( v15[5] )
          FsRtlpClearOwner(Oplock, (__int64)v15);
        ExFreePoolWithTag(v15, 0);
        P = 0LL;
        FsRtlpComputeShareableOplockState(Oplock);
        v7 = a4;
        goto LABEL_16;
      }
    }
    __fastfail(3u);
  }
LABEL_16:
  if ( !(unsigned __int8)FsRtlpOplockUpperLowerCompatible(a6, a7) )
  {
    *(_DWORD *)(a3 + 48) = -1073741598;
    IofCompleteRequest((PIRP)a3, v18);
    goto LABEL_104;
  }
  if ( a6 == 200 )
  {
    *(_QWORD *)Oplock = a3;
    *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
    *(_DWORD *)(Oplock + 144) = *(_DWORD *)(Oplock + 144) & 0x20 | 0xC8;
    goto LABEL_104;
  }
  v19 = *(_DWORD *)(Oplock + 144);
  if ( (v19 & 0x91) == 0 )
  {
    if ( (*(_DWORD *)(Oplock + 144) & 0x1F00F00) != 0
      || (*(_DWORD *)(Oplock + 144) & 0x7000) == 0
      || *(_QWORD *)(Oplock + 72) != Oplock + 72 )
    {
      if ( (a6 & 0x10000) != 0 )
        goto LABEL_53;
      goto LABEL_30;
    }
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_53;
    if ( (a6 & 0x7000) == 0 )
      goto LABEL_54;
    v29 = *(_QWORD *)(v9 + 48);
    if ( *(_BYTE *)(v29 + 73) )
    {
      if ( (a6 & 0x2000) != 0 )
        goto LABEL_54;
    }
    v30 = v19 & 0x1F0FFDF;
    if ( v30 == 4096 )
    {
      if ( ((a6 - 20544) & 0xFFFFDFFF) != 0 )
        goto LABEL_54;
      v37 = (_QWORD *)(Oplock + 40);
      for ( j = *(_QWORD **)(Oplock + 40); j != v37; j = (_QWORD *)*j )
      {
        v48 = j[2];
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), *(_QWORD *)(v48 + 48), 0) )
          goto LABEL_41;
      }
      v18 = 1;
      if ( a4 > 1 && (a5 & 1) == 0 )
        goto LABEL_54;
      for ( k = (_QWORD *)*v37; ; k = (_QWORD *)*v40 )
      {
        v43 = k;
        if ( k == v37 )
          break;
        v40 = (_QWORD *)k[1];
        FsRtlpRemoveAndCompleteReadOnlyIrp(*v40, 533LL, a6 & 0x7000);
      }
    }
    else
    {
      if ( v30 != 12288 )
      {
        if ( (v30 == 20544 || v30 == 28736 && a6 == 28736) && ((a6 - 20544) & 0xFFFFDFFF) == 0 )
        {
          if ( FsRtlpOplockKeysEqual(v29, *(_QWORD *)(Oplock + 8), 0) )
          {
            v46 = *(_QWORD *)Oplock;
            v31 = v46;
            *(_BYTE *)(v31 + 69) = KeAcquireQueuedSpinLock(7uLL);
            _InterlockedExchange64((volatile __int64 *)(v31 + 104), 0LL);
            KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(v31 + 69));
            if ( *(_BYTE *)(v46 + 68) )
            {
              *(_QWORD *)(v31 + 56) = 0LL;
              *(_DWORD *)(v31 + 48) = -1073741536;
            }
            else
            {
              v32 = *(_QWORD *)(v46 + 24);
              v47 = v32;
              *(_OWORD *)v32 = 0LL;
              *(_QWORD *)(v32 + 16) = 0LL;
              *(_DWORD *)v32 = 1572865;
              *(_DWORD *)(v32 + 4) = (*(_DWORD *)(Oplock + 144) >> 12) & 7;
              *(_DWORD *)(v32 + 8) = (a6 >> 12) & 7;
              *(_QWORD *)(v31 + 56) = 24LL;
              *(_DWORD *)(v31 + 48) = 533;
            }
            IofCompleteRequest((PIRP)v31, 1);
            *(_QWORD *)Oplock = 0LL;
            ObfDereferenceObjectWithTag(*(PVOID *)(Oplock + 8), 0x746C6644u);
            *(_QWORD *)(Oplock + 8) = 0LL;
            goto LABEL_27;
          }
LABEL_41:
          v22 = -1073741598;
LABEL_43:
          v23 = 1;
          goto LABEL_32;
        }
LABEL_54:
        v22 = -1073741598;
LABEL_31:
        v23 = v18;
LABEL_32:
        *(_DWORD *)(a3 + 48) = v22;
        IofCompleteRequest((PIRP)a3, v23);
        goto LABEL_33;
      }
      if ( a6 != 28736 )
        goto LABEL_54;
      v33 = (_QWORD *)(Oplock + 56);
      for ( m = *(_QWORD **)(Oplock + 56); m != v33; m = (_QWORD *)*m )
      {
        if ( !FsRtlpOplockKeysEqual(*(_QWORD *)(a2 + 48), m[3], 0) )
          goto LABEL_41;
        if ( m[7] )
        {
          v22 = -1073741597;
          goto LABEL_43;
        }
      }
      v18 = 1;
      if ( a4 > 1 && (a5 & 1) == 0 )
        goto LABEL_54;
      for ( n = (_QWORD *)*v33; ; n = *v36 )
      {
        v43 = n;
        if ( n == v33 )
          break;
        v36 = (_QWORD **)n[1];
        FsRtlpRemoveAndBreakRHIrp(*v36, Oplock, 1, 533, 0x7000u, 0, 0, 0);
      }
    }
    v9 = a2;
    goto LABEL_27;
  }
  if ( (v19 & 0x10) != 0 && (a6 & 0x7000) != 0 )
  {
    v28 = (a6 & 0x10000) == 0;
    goto LABEL_52;
  }
  if ( (v19 & 0x80u) != 0 && !FsRtlpOplockKeysEqual(*(_QWORD *)(v9 + 48), *(_QWORD *)(Oplock + 8), 0) )
  {
    if ( (a6 & 0x10000) != 0 )
      goto LABEL_53;
    goto LABEL_41;
  }
  v20 = *(_DWORD *)(Oplock + 144) & 0x1F0FFDF;
  if ( v20 == 16 || v20 == 4096 || v20 == 4112 )
    FsRtlpRemoveAndCompleteReadOnlyIrp(*(_QWORD *)(Oplock + 40), 0LL, 0LL);
  v18 = 1;
  if ( v7 > 1 && (*(_BYTE *)(Oplock + 144) & 1) != 0 && (a5 & 1) == 0 )
  {
LABEL_30:
    v22 = -1073741598;
    if ( !a3 )
    {
LABEL_33:
      v11 = v22;
      goto LABEL_104;
    }
    goto LABEL_31;
  }
  if ( *(_BYTE *)(*(_QWORD *)(v9 + 48) + 73LL) && (a6 & 0x2000) != 0 )
  {
    v28 = (a6 & 0x10000) == 0;
LABEL_52:
    if ( !v28 )
    {
LABEL_53:
      v11 = -1073739511;
      goto LABEL_104;
    }
    goto LABEL_54;
  }
LABEL_27:
  *(_QWORD *)Oplock = a3;
  *(_QWORD *)(Oplock + 8) = *(_QWORD *)(v9 + 48);
  FsRtlpClearOwner(Oplock, 0LL);
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(Oplock + 16) = CurrentThread->ApcState.Process;
  v21 = KeGetCurrentThread();
  v50 = v21;
  *(_QWORD *)(Oplock + 24) = v21;
  ObfReferenceObjectWithTag(v21, 0x746C6644u);
  *(_BYTE *)(Oplock + 32) = 0;
  *(_DWORD *)(Oplock + 144) = a6 | *(_DWORD *)(Oplock + 144) & 0x20;
  ObfReferenceObjectWithTag(*(PVOID *)(v9 + 48), 0x746C6644u);
  v51 = *(_QWORD *)(a3 + 184);
  *(_BYTE *)(v51 + 3) |= 1u;
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
LABEL_104:
  ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(Oplock + 152));
  return v11;
}
