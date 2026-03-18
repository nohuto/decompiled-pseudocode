/*
 * XREFs of KeReservePrivilegedPages @ 0x140392B70
 * Callers:
 *     MiReservePrivilegedPtes @ 0x140748E58 (MiReservePrivilegedPtes.c)
 *     MiReleasePrivilegedPtes @ 0x140761528 (MiReleasePrivilegedPtes.c)
 *     MiUnlockDriverPages @ 0x1408C17C0 (MiUnlockDriverPages.c)
 * Callees:
 *     VslReserveProtectedPages @ 0x14076AF60 (VslReserveProtectedPages.c)
 */

__int64 KeReservePrivilegedPages()
{
  return VslReserveProtectedPages();
}
