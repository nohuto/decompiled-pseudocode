/*
 * XREFs of EtwpLogFileNameRundown @ 0x14093DB8C
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1406E2E4C (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406E3280 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407C1544 (WmiTraceRundownNotify.c)
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
