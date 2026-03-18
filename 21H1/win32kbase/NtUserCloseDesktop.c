/*
 * XREFs of NtUserCloseDesktop @ 0x1C0041090
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCloseDesktopEntryPoint @ 0x1C00410A8 (ApiSetEditionCloseDesktopEntryPoint.c)
 */

__int64 NtUserCloseDesktop()
{
  return (int)ApiSetEditionCloseDesktopEntryPoint();
}
