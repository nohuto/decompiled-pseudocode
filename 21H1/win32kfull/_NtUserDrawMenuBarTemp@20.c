/*
 * XREFs of _NtUserDrawMenuBarTemp@20 @ 0x1612D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TraceLoggingDrawMenuBarTempCalled@@YGXXZ @ 0x186745 (-TraceLoggingDrawMenuBarTempCalled@@YGXXZ.c)
 */

int __stdcall NtUserDrawMenuBarTemp(int a1, int a2, int a3, int a4, int a5)
{
  TraceLoggingDrawMenuBarTempCalled();
  return 0;
}
