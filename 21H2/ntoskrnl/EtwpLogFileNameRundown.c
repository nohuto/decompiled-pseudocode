/*
 * XREFs of EtwpLogFileNameRundown @ 0x1409EA280
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x14078FCF8 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140790CA8 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x14081AA90 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess((__int64)&FileProvGuid, 0x80u);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
