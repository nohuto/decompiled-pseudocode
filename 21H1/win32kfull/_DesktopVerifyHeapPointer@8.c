/*
 * XREFs of _DesktopVerifyHeapPointer@8 @ 0x1D7A8
 * Callers:
 *     _DesktopVerifyHeapRange@12 @ 0x1D77C (_DesktopVerifyHeapRange@12.c)
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall DesktopVerifyHeapPointer(int a1, ULONG_PTR a2)
{
  ULONG_PTR v2; // esi
  ULONG_PTR result; // eax

  v2 = *(_DWORD *)(a1 + 64);
  if ( a2 < v2 || (result = v2 + *(_DWORD *)(a1 + 68), a2 >= result) )
    KeBugCheckEx(0x164u, 6u, a2, v2, *(_DWORD *)(a1 + 68));
  return result;
}
