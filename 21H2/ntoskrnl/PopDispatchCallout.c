/*
 * XREFs of PopDispatchCallout @ 0x1408654A0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403B69DC (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
