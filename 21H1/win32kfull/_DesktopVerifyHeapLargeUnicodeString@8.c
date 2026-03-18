/*
 * XREFs of _DesktopVerifyHeapLargeUnicodeString@8 @ 0x1D74A
 * Callers:
 *     _NtUserInternalGetWindowText@12 @ 0x1D632 (_NtUserInternalGetWindowText@12.c)
 *     _DefSetText@8 @ 0x1E45A (_DefSetText@8.c)
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 * Callees:
 *     _DesktopVerifyHeapRange@12 @ 0x1D77C (_DesktopVerifyHeapRange@12.c)
 */

int __fastcall DesktopVerifyHeapLargeUnicodeString(int a1, unsigned int *a2)
{
  unsigned int v2; // eax
  unsigned int v3; // eax

  if ( (*a2 & 1) != 0 || (v2 = a2[1], (v2 & 1) != 0) || (v3 = v2 & 0x7FFFFFFF, *a2 >= v3) )
    KeBugCheckEx(0x164u, 7u, (ULONG_PTR)a2, *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68));
  return DesktopVerifyHeapRange(v3);
}
