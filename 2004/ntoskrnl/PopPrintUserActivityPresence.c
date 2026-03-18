/*
 * XREFs of PopPrintUserActivityPresence @ 0x140712544
 * Callers:
 *     PopSetSessionUserStatus @ 0x140712330 (PopSetSessionUserStatus.c)
 *     PopEvaluateGlobalUserStatus @ 0x140712414 (PopEvaluateGlobalUserStatus.c)
 * Callees:
 *     <none>
 */

const wchar_t *__fastcall PopPrintUserActivityPresence(int a1)
{
  int v1; // ecx

  if ( !a1 )
    return L"PowerUserPresent";
  v1 = a1 - 1;
  if ( !v1 )
    return L"PowerUserNotPresent";
  if ( v1 == 1 )
    return L"PowerUserInactive";
  return L"Invalid";
}
