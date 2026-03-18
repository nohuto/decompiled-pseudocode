/*
 * XREFs of CcAddExternalCache @ 0x140391CD4
 * Callers:
 *     CcRegisterExternalCache @ 0x140391C50 (CcRegisterExternalCache.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140277410 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402E4740 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EC9E4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 __fastcall CcAddExternalCache(__int64 a1)
{
  unsigned __int64 v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v8; // zf

  v2 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  v3 = (_QWORD *)qword_140C48898;
  v4 = (_QWORD *)(a1 + 32);
  if ( *(__int64 **)qword_140C48898 != &CcExternalCacheList )
    __fastfail(3u);
  v4[1] = qword_140C48898;
  *v4 = &CcExternalCacheList;
  *v3 = v4;
  qword_140C48898 = (__int64)v4;
  if ( CcNumberOfExternalCaches + 1 <= (unsigned int)CcNumberOfExternalCaches )
    KeBugCheckEx(0x34u, 0x137BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ++CcNumberOfExternalCaches;
  KxReleaseSpinLock(&CcExternalCacheListLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v2 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v8 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v8 )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  return result;
}
