/*
 * XREFs of KeReservePrivilegedPages @ 0x140395030
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140757A38 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14076FB38 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C7600 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140779570 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
