/*
 * XREFs of KeReservePrivilegedPages @ 0x1403954A0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x14075EAD0 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140773A48 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C4DC0 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14077D350 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
