/*
 * XREFs of FsRtlpWaitOnIrp @ 0x140249470
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x14024A5B4 (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakToNone @ 0x140256F58 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1402A4E10 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakNotify @ 0x14092EA08 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     IoCancelIrp @ 0x14022D160 (IoCancelIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14024E884 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     FsRtlpCancelWaitingIrp @ 0x14054276C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x1406CA740 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall FsRtlpWaitOnIrp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        void (__fastcall *a5)(__int64, __int64),
        char *Object,
        char a7,
        __int64 a8,
        __int64 a9,
        void (__fastcall *a10)(__int128 *),
        _BYTE *a11)
{
  char v15; // r13
  _BYTE *v16; // rcx
  __int64 Pool2; // rsi
  __int64 v18; // rax
  bool v19; // cl
  __int64 *v20; // rcx
  __int64 v21; // rdx
  unsigned int v22; // edi
  bool v23; // r12
  NTSTATUS v24; // eax
  _QWORD *i; // rax
  _BYTE v27[7]; // [rsp+31h] [rbp-57h] BYREF
  _BYTE *v28; // [rsp+38h] [rbp-50h]
  __int128 v29; // [rsp+40h] [rbp-48h] BYREF
  __int64 v30; // [rsp+50h] [rbp-38h]
  __int64 v31; // [rsp+58h] [rbp-30h]

  v15 = 1;
  v16 = v27;
  if ( a11 )
    v16 = a11;
  v28 = v16;
  *v16 = 0;
  Pool2 = ExAllocatePool2(288LL, 64LL, 1869763398LL, a4);
  a11 = (_BYTE *)Pool2;
  if ( a2 )
  {
    v18 = *(_QWORD *)(a2 + 184);
    *(_QWORD *)(Pool2 + 16) = a2;
    *(_DWORD *)(Pool2 + 48) = *(_DWORD *)(a2 + 56);
    v19 = *(_BYTE *)v18 == 13 && *(_DWORD *)(v18 + 24) == 589844;
    *(_BYTE *)(Pool2 + 53) = v19;
    *(_QWORD *)(Pool2 + 56) = *(_QWORD *)(v18 + 48);
  }
  *(_BYTE *)(Pool2 + 52) = a7;
  if ( a4 )
  {
    *(_QWORD *)(Pool2 + 24) = a4;
    *(_QWORD *)(Pool2 + 32) = a3;
  }
  else
  {
    *(_QWORD *)(Pool2 + 24) = FsRtlpOplockWaitCompleteRoutine;
    *(_QWORD *)(Pool2 + 32) = Object;
    *(_WORD *)Object = 0;
    Object[2] = 6;
    *((_DWORD *)Object + 1) = 0;
    *((_QWORD *)Object + 2) = Object + 8;
    *((_QWORD *)Object + 1) = Object + 8;
  }
  if ( a5 )
    a5(a3, a2);
  v20 = *(__int64 **)(a1 + 96);
  if ( *v20 != a1 + 88 )
    __fastfail(3u);
  *(_QWORD *)Pool2 = a1 + 88;
  *(_QWORD *)(Pool2 + 8) = v20;
  *v20 = Pool2;
  *(_QWORD *)(a1 + 96) = Pool2;
  if ( a2 )
  {
    *(_DWORD *)(a2 + 48) = 0;
    *(_BYTE *)(a2 + 69) = KeAcquireQueuedSpinLock(7uLL);
    *(_QWORD *)(a2 + 56) = a1;
    if ( *(_BYTE *)(a2 + 68) )
    {
      if ( a4 )
      {
        *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
        v22 = 259;
      }
      else
      {
        v22 = -1073741536;
      }
      *(_DWORD *)&v27[3] = v22;
      LOBYTE(v21) = 1;
      FsRtlpCancelWaitingIrp(a2, v21);
      goto LABEL_51;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v15 = 1;
    Pool2 = (__int64)a11;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v22 = 259;
    *(_DWORD *)&v27[3] = 259;
  }
  else
  {
    v23 = a8 && a10;
    LOBYTE(a11) = 0;
    v29 = 0LL;
    v30 = 0LL;
    LODWORD(v31) = 0;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    v15 = 0;
    while ( 1 )
    {
      v24 = FsRtlCancellableWaitForSingleObject(
              Object,
              (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)v23),
              (PIRP)a2);
      v22 = v24;
      *(_DWORD *)&v27[3] = v24;
      if ( !v23 || v24 != 258 )
        break;
      v23 = 0;
      *(_QWORD *)&v29 = 0LL;
      *((_QWORD *)&v29 + 1) = a9;
      v30 = a2;
      v31 = 258LL;
      a10(&v29);
      LOBYTE(a11) = 1;
    }
    if ( (_BYTE)a11 )
    {
      LODWORD(v29) = 1;
      LODWORD(v31) = v24;
      a10(&v29);
    }
    if ( v22 == -1073741749 || v22 == -1073741536 )
    {
      if ( a2 )
      {
        IoCancelIrp((PIRP)a2);
      }
      else
      {
        ExAcquireFastMutex(*(PFAST_MUTEX *)(a1 + 152));
        for ( i = *(_QWORD **)(a1 + 88); i != (_QWORD *)(a1 + 88); i = (_QWORD *)*i )
        {
          if ( (_QWORD *)Pool2 == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v28 = 0;
    }
    else
    {
      if ( a2 )
      {
        v22 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v27[3] = v22;
      }
      *v28 = 1;
    }
  }
LABEL_51:
  if ( v15 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v22;
}
