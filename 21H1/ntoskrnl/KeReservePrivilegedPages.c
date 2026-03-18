/*
 * XREFs of KeReservePrivilegedPages @ 0x140391FC0
 * Callers:
 *     MiReservePrivilegedPtes @ 0x1407472D8 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x14075F128 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C0470 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x140768B80 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
