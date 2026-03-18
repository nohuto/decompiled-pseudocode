/*
 * XREFs of ZwTraceControl @ 0x1403F6E20
 * Callers:
 *     EtwWriteStartScenario @ 0x1407760B0 (EtwWriteStartScenario.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwTraceControl(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
