/*
 * XREFs of _ShouldSendCursorNotificationForExtensibility@0 @ 0xF0130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall ShouldSendCursorNotificationForExtensibility()
{
  return (unsigned __int8)IsMouseInterceptEnabled();
}
