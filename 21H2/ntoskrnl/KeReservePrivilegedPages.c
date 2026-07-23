/*
 * XREFs of KeReservePrivilegedPages @ 0x1403955F0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x14075EC90 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140773C08 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C4F20 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14077D510 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
