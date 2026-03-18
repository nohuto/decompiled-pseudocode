/*
 * XREFs of MiReturnCcAccessLog @ 0x140233A4C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14030C260 (MiTrimOrAgeWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x1403760B4 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1406FA590 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140233AA0 (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x14035FA80 (MmFreeAccessPfnBuffer.c)
 */

__int64 __fastcall MiReturnCcAccessLog(_QWORD *a1, int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    result = a1[3];
    a1[4] = result;
  }
  if ( qword_140C52B40 || (result = _InterlockedCompareExchange64(&qword_140C52B40, (signed __int64)a1, 0LL)) != 0 )
  {
    if ( a1 )
    {
      if ( (_QWORD *)a1[4] == a1 + 9 )
        return MmFreeAccessPfnBuffer(a1);
      else
        return MiQueuePageAccessLog(a1);
    }
  }
  return result;
}
