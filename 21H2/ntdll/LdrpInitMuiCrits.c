/*
 * XREFs of LdrpInitMuiCrits @ 0x180033B68
 * Callers:
 *     LdrpGetFileSizeFromLoadAsDataTable @ 0x180033AE4 (LdrpGetFileSizeFromLoadAsDataTable.c)
 *     LdrpGetLoadAsEntry @ 0x180053918 (LdrpGetLoadAsEntry.c)
 *     LdrAddLoadAsDataTable @ 0x180074140 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180074900 (LdrRemoveLoadAsDataTable.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x180020BC0 (RtlInitializeCriticalSectionEx.c)
 *     ZwDelayExecution @ 0x18009DCC0 (ZwDelayExecution.c)
 */

__int64 LdrpInitMuiCrits()
{
  __int64 result; // rax
  __int64 v1; // [rsp+38h] [rbp+10h] BYREF

  v1 = -1000000LL;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    result = (unsigned int)DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0LL, &v1);
      result = (unsigned int)DataLoadLockCount;
    }
    if ( (_DWORD)result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx((__int64)&LoadAsDataCrits, 0LL, 0);
  DataLoadLockCount = 2;
  return result;
}
