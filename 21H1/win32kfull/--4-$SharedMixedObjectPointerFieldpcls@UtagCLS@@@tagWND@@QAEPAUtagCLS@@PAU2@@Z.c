/*
 * XREFs of ??4?$SharedMixedObjectPointerFieldpcls@UtagCLS@@@tagWND@@QAEPAUtagCLS@@PAU2@@Z @ 0x9DB5C
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _ReferenceClass@8 @ 0x9D9BA (_ReferenceClass@8.c)
 * Callees:
 *     <none>
 */

int __thiscall tagWND::SharedMixedObjectPointerFieldpcls<tagCLS>::operator=(_DWORD *this, int a2)
{
  int v2; // esi
  int result; // eax

  if ( a2 )
    v2 = *(_DWORD *)(a2 + 8);
  else
    v2 = 0;
  *(_DWORD *)(*(this - 14) + 88) = v2;
  result = a2;
  *this = a2;
  return result;
}
