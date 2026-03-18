/*
 * XREFs of PopDispatchCallout @ 0x1407C2AD0
 * Callers:
 *     <none>
 * Callees:
 *     PopEventCalloutDispatch @ 0x1403A4ABC (PopEventCalloutDispatch.c)
 */

struct _KTHREAD *__fastcall PopDispatchCallout(int a1)
{
  return PopEventCalloutDispatch(a1, 0LL);
}
