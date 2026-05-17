/*
 * XREFs of _LdrpInitMuiCrits@8 @ 0x4B2B8C84
 * Callers:
 *     _LdrpGetLoadAsEntry@8 @ 0x4B2B88CA (_LdrpGetLoadAsEntry@8.c)
 *     _LdrRemoveLoadAsDataTable@16 @ 0x4B2B8980 (_LdrRemoveLoadAsDataTable@16.c)
 *     _LdrAddLoadAsDataTable@20 @ 0x4B2B8AD0 (_LdrAddLoadAsDataTable@20.c)
 *     _LdrpGetFileSizeFromLoadAsDataTable@4 @ 0x4B2BE66C (_LdrpGetFileSizeFromLoadAsDataTable@4.c)
 * Callees:
 *     _RtlInitializeCriticalSectionEx@12 @ 0x4B2DFB90 (_RtlInitializeCriticalSectionEx@12.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 */

int LdrpInitMuiCrits()
{
  int result; // eax
  _DWORD v1[2]; // [esp+0h] [ebp-8h] BYREF

  v1[1] = -1;
  v1[0] = -1000000;
  while ( _InterlockedCompareExchange(&DataLoadLockCount, 1, 0) )
  {
    result = DataLoadLockCount;
    if ( DataLoadLockCount == 1 )
    {
      ZwDelayExecution(0, v1);
      result = DataLoadLockCount;
    }
    if ( result == 2 )
      return result;
  }
  result = RtlInitializeCriticalSectionEx(&LoadAsDataCrits, 0, 0);
  DataLoadLockCount = 2;
  return result;
}
