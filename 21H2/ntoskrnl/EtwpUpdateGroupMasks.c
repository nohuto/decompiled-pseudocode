/*
 * XREFs of EtwpUpdateGroupMasks @ 0x140814244
 * Callers:
 *     EtwpStopLoggerInstance @ 0x1406EDB48 (EtwpStopLoggerInstance.c)
 *     EtwpUpdateLoggerGroupMasks @ 0x1408141A0 (EtwpUpdateLoggerGroupMasks.c)
 *     EtwSetPerformanceTraceInformation @ 0x1409DEFB8 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     EtwpUpdateSelectedGroupMasks @ 0x1403AAEF4 (EtwpUpdateSelectedGroupMasks.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpMapEnableFlags @ 0x1406E1024 (EtwpMapEnableFlags.c)
 */

__int64 __fastcall EtwpUpdateGroupMasks(int *a1, char *a2)
{
  _DWORD v5[8]; // [rsp+20h] [rbp-38h] BYREF

  v5[7] = -1;
  v5[0] = 0x1FFFFFFF;
  v5[1] = 0x3FFFFFFF;
  v5[2] = 1610612735;
  v5[3] = 0x7FFFFFFF;
  v5[4] = -1610612737;
  v5[5] = -1073741825;
  v5[6] = -536870913;
  EtwpMapEnableFlags((__int64)a2, 1);
  return EtwpUpdateSelectedGroupMasks(a1, v5, a2);
}
