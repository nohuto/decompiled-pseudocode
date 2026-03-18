/*
 * XREFs of EtwpLogFileNameRundown @ 0x14093A588
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140636190 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406365C4 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407AF204 (WmiTraceRundownNotify.c)
 */

__int64 __fastcall EtwpLogFileNameRundown(__int64 *a1, int a2)
{
  __int64 result; // rax

  result = EtwpCheckGuidAccess((__int64)&FileProvGuid, 0x80u, 0LL);
  if ( (int)result >= 0 )
  {
    result = WmiTraceRundownNotify(*a1, a2);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
