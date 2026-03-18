/*
 * XREFs of DesktopVerifyHeapRange @ 0x1C00F14E8
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00B1FA0 (NtUserSetWindowLongPtr.c)
 *     NtUserSetWindowLong @ 0x1C00F0020 (NtUserSetWindowLong.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F149C (DesktopVerifyHeapLargeUnicodeString.c)
 * Callees:
 *     DesktopVerifyHeapPointer @ 0x1C00F1528 (DesktopVerifyHeapPointer.c)
 */

__int64 __fastcall DesktopVerifyHeapRange(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  ULONG_PTR v3; // rdi

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    KeBugCheckEx(0x164u, 6uLL, a2, *(_QWORD *)(a1 + 128), *(unsigned int *)(a1 + 136));
  ((void (*)(void))DesktopVerifyHeapPointer)();
  return DesktopVerifyHeapPointer(a1, v3 - 1);
}
