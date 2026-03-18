/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C00321D0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetThreadDesktopEntryPoint @ 0x1C00321E8 (ApiSetEditionGetThreadDesktopEntryPoint.c)
 */

__int64 NtUserGetThreadDesktop()
{
  return ApiSetEditionGetThreadDesktopEntryPoint();
}
