/*
 * XREFs of EtwpLogFileNameRundown @ 0x1409392E8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14067EC9C (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x14067F0D0 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407AC0A4 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess(&FileProvGuid.Data1, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
