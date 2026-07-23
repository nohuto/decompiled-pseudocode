/*
 * XREFs of MiLockImageSection @ 0x1407064BC
 * Callers:
 *     MiLockPagableImageSection @ 0x140327240 (MiLockPagableImageSection.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x140213E80 (ExBlockOnAddressPushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     MiLockCode @ 0x14032E300 (MiLockCode.c)
 *     ExfUnblockPushLock @ 0x1403F96E0 (ExfUnblockPushLock.c)
 */

_QWORD *__fastcall MiLockImageSection(
        __int64 a1,
        volatile signed __int32 *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int32 v9; // eax
  unsigned __int32 v10; // ett
  signed __int32 v12[8]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = *a2;
  do
  {
    while ( 1 )
    {
      LODWORD(v13) = v9;
      if ( v9 != 1 )
        break;
      ExBlockOnAddressPushLock((__int64)&qword_140C4CD98, a2, &v13, 4uLL, 0LL);
      v9 = *a2;
    }
    v10 = v9;
    v9 = _InterlockedCompareExchange(a2, v9 + 1, v9);
  }
  while ( v10 != v9 );
  if ( v9 < 2 )
  {
    MiLockCode(a1, a3, a4, 1);
    _InterlockedIncrement(a2);
    _InterlockedOr(v12, 0);
    if ( qword_140C4CD98 )
      ExfUnblockPushLock(&qword_140C4CD98, 0LL);
  }
  return KeLeaveCriticalRegionThread((__int64)CurrentThread, (__int64)a2, a3, a4);
}
