/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C0097AC0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetThreadDesktopEntryPoint @ 0x1C0097AD8 (ApiSetEditionGetThreadDesktopEntryPoint.c)
 */

__int64 NtUserGetThreadDesktop()
{
  return ApiSetEditionGetThreadDesktopEntryPoint();
}
