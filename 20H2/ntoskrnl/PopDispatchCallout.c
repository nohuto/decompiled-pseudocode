/*
 * XREFs of PopDispatchCallout @ 0x1407D12D0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403A6EBC (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
