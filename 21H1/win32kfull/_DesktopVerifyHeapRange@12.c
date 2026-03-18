/*
 * XREFs of _DesktopVerifyHeapRange@12 @ 0x1D77C
 * Callers:
 *     _DesktopVerifyHeapLargeUnicodeString@8 @ 0x1D74A (_DesktopVerifyHeapLargeUnicodeString@8.c)
 *     _NtUserSetWindowLong@16 @ 0x3EEB2 (_NtUserSetWindowLong@16.c)
 * Callees:
 *     _DesktopVerifyHeapPointer@8 @ 0x1D7A8 (_DesktopVerifyHeapPointer@8.c)
 */

int __fastcall DesktopVerifyHeapRange(int a1, ULONG_PTR a2, int a3)
{
  ULONG_PTR v4; // edi

  v4 = a2 + a3;
  if ( a2 + a3 < a2 )
    KeBugCheckEx(0x164u, 6u, a2, *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68));
  ((void (*)(void))DesktopVerifyHeapPointer)();
  return DesktopVerifyHeapPointer(a1, v4 - 1);
}
