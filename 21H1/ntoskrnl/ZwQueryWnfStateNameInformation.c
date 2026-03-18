/*
 * XREFs of ZwQueryWnfStateNameInformation @ 0x1403F4FB0
 * Callers:
 *     RtlRaiseCustomSystemEventTrigger @ 0x140588AB0 (RtlRaiseCustomSystemEventTrigger.c)
 *     DbgkpStartSystemErrorHandler @ 0x140883440 (DbgkpStartSystemErrorHandler.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryWnfStateNameInformation(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
