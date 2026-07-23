/*
 * XREFs of CcRemoveExternalCache @ 0x1404EA0E8
 * Callers:
 *     CcUnregisterExternalCache @ 0x1404EA1E0 (CcUnregisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140212140 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140362F80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall CcRemoveExternalCache(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rdx
  __int64 *v4; // rbx
  unsigned __int64 v5; // rdi
  __int64 *v6; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v10; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = *(__int64 ***)(a1 + 40);
  v4 = (__int64 *)(a1 + 32);
  v5 = v2;
  v6 = (__int64 *)*v4;
  if ( *(__int64 **)(*v4 + 8) != v4 || *v3 != v4 )
    __fastfail(3u);
  *v3 = v6;
  v6[1] = (__int64)v3;
  if ( CcNumberOfExternalCaches - 1 >= (unsigned int)CcNumberOfExternalCaches )
    KeBugCheckEx(0x34u, 0x138DuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  --CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v5 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v10 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v10 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v5);
  return result;
}
