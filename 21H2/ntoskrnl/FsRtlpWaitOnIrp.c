/*
 * XREFs of FsRtlpWaitOnIrp @ 0x1404F0C70
 * Callers:
 *     FsRtlpOplockBreakToII @ 0x14024302C (FsRtlpOplockBreakToII.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x14035FB50 (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpOplockBreakToNone @ 0x14036D578 (FsRtlpOplockBreakToNone.c)
 *     FsRtlpOplockBreakNotify @ 0x14088C0F8 (FsRtlpOplockBreakNotify.c)
 * Callees:
 *     IoCancelIrp @ 0x1402394D0 (IoCancelIrp.c)
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     FsRtlpCancelWaitingIrp @ 0x1404F0758 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1404F0BCC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     FsRtlCancellableWaitForSingleObject @ 0x140611D50 (FsRtlCancellableWaitForSingleObject.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
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
  _QWORD *PoolWithTag; // rsi
  __int64 v18; // rax
  bool v19; // cl
  _QWORD *v20; // rcx
  unsigned int v21; // edi
  bool v22; // r12
  NTSTATUS v23; // eax
  _QWORD *i; // rax
  _BYTE v26[7]; // [rsp+31h] [rbp-57h] BYREF
  _BYTE *v27; // [rsp+38h] [rbp-50h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int128 v29; // [rsp+50h] [rbp-38h]

  v15 = 1;
  v16 = v26;
  if ( a11 )
    v16 = a11;
  v27 = v16;
  *v16 = 0;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)17, 0x40uLL, 0x6F725346u);
  a11 = PoolWithTag;
  memset(PoolWithTag, 0, 0x40uLL);
  if ( a2 )
  {
    v18 = *(_QWORD *)(a2 + 184);
    PoolWithTag[2] = a2;
    *((_DWORD *)PoolWithTag + 12) = *(_DWORD *)(a2 + 56);
    v19 = *(_BYTE *)v18 == 13 && *(_DWORD *)(v18 + 24) == 589844;
    *((_BYTE *)PoolWithTag + 53) = v19;
    PoolWithTag[7] = *(_QWORD *)(v18 + 48);
  }
  *((_BYTE *)PoolWithTag + 52) = a7;
  if ( a4 )
  {
    PoolWithTag[3] = a4;
    PoolWithTag[4] = a3;
  }
  else
  {
    PoolWithTag[3] = FsRtlpOplockWaitCompleteRoutine;
    PoolWithTag[4] = Object;
    *(_WORD *)Object = 0;
    Object[2] = 6;
    *((_DWORD *)Object + 1) = 0;
    *((_QWORD *)Object + 2) = Object + 8;
    *((_QWORD *)Object + 1) = Object + 8;
  }
  if ( a5 )
    a5(a3, a2);
  v20 = *(_QWORD **)(a1 + 96);
  if ( *v20 != a1 + 88 )
    __fastfail(3u);
  *PoolWithTag = a1 + 88;
  PoolWithTag[1] = v20;
  *v20 = PoolWithTag;
  *(_QWORD *)(a1 + 96) = PoolWithTag;
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
        v21 = 259;
      }
      else
      {
        v21 = -1073741536;
      }
      *(_DWORD *)&v26[3] = v21;
      FsRtlpCancelWaitingIrp(a2, 1);
      goto LABEL_51;
    }
    _InterlockedExchange64((volatile __int64 *)(a2 + 104), (__int64)FsRtlpWaitingIrpCancelRoutine);
    KeReleaseQueuedSpinLock(7uLL, *(_BYTE *)(a2 + 69));
    v15 = 1;
    PoolWithTag = a11;
  }
  if ( a4 )
  {
    if ( a2 )
      *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
    v21 = 259;
    *(_DWORD *)&v26[3] = 259;
  }
  else
  {
    v22 = a8 && a10;
    LOBYTE(a11) = 0;
    v28 = 0LL;
    v29 = 0LL;
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
    v15 = 0;
    while ( 1 )
    {
      v23 = FsRtlCancellableWaitForSingleObject(
              Object,
              (PLARGE_INTEGER)((unsigned __int64)&a8 & -(__int64)v22),
              (PIRP)a2);
      v21 = v23;
      *(_DWORD *)&v26[3] = v23;
      if ( !v22 || v23 != 258 )
        break;
      v22 = 0;
      *(_QWORD *)&v28 = 0LL;
      *((_QWORD *)&v28 + 1) = a9;
      *(_QWORD *)&v29 = a2;
      *((_QWORD *)&v29 + 1) = 258LL;
      a10(&v28);
      LOBYTE(a11) = 1;
    }
    if ( (_BYTE)a11 )
    {
      LODWORD(v28) = 1;
      DWORD2(v29) = v23;
      a10(&v28);
    }
    if ( v21 == -1073741749 || v21 == -1073741536 )
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
          if ( PoolWithTag == i )
          {
            FsRtlpRemoveAndCompleteWaitingIrp(i);
            break;
          }
        }
        KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(a1 + 152));
      }
      KeWaitForSingleObject(Object, Executive, 0, 0, 0LL);
      *v27 = 0;
    }
    else
    {
      if ( a2 )
      {
        v21 = *(_DWORD *)(a2 + 48);
        *(_DWORD *)&v26[3] = v21;
      }
      *v27 = 1;
    }
  }
LABEL_51:
  if ( v15 )
    ExReleaseFastMutexUnsafe(*(PFAST_MUTEX *)(a1 + 152));
  return v21;
}
