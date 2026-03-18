/*
 * XREFs of EtwpLogFileNameRundown @ 0x1409403B8
 * Callers:
 *     EtwpEnableDisableSpecialGuids @ 0x140719334 (EtwpEnableDisableSpecialGuids.c)
 * Callees:
 *     EtwpCheckGuidAccess @ 0x140719768 (EtwpCheckGuidAccess.c)
 *     WmiTraceRundownNotify @ 0x1407BD144 (WmiTraceRundownNotify.c)
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
