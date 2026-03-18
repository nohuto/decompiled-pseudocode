/*
 * XREFs of _EditionHandleHungWindow@4 @ 0x1704C2
 * Callers:
 *     <none>
 * Callees:
 *     _IsHungWindow@4 @ 0x738B4 (_IsHungWindow@4.c)
 *     _ProcessHungWindow@4 @ 0xC2576 (_ProcessHungWindow@4.c)
 */

int __stdcall EditionHandleHungWindow(int a1)
{
  _DWORD *v1; // esi
  int result; // eax

  v1 = *(_DWORD **)(a1 + 80);
  result = v1[3];
  if ( *(_DWORD *)(result + 20) )
  {
    result = IsHungWindow(*(_DWORD *)(a1 + 80));
    if ( result )
      return ProcessHungWindow(v1);
  }
  return result;
}
