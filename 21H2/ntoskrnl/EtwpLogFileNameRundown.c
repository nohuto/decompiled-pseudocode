/*
 * XREFs of EtwpLogFileNameRundown @ 0x14093DD5C
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x1406BA12C (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x1406BA560 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407C1A64 (WmiTraceRundownNotify.c)
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
