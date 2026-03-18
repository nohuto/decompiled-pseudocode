/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1403FAE10
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x14058CBD0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x14088A2B0 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
