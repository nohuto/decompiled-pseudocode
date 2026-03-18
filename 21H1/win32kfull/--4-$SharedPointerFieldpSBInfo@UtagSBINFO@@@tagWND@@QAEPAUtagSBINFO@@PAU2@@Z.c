/*
 * XREFs of ??4?$SharedPointerFieldpSBInfo@UtagSBINFO@@@tagWND@@QAEPAUtagSBINFO@@PAU2@@Z @ 0x8E28C
 * Callers:
 *     __InitPwSB@4 @ 0x6E5B6 (__InitPwSB@4.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _xxxSetScrollBar@16 @ 0x8DD18 (_xxxSetScrollBar@16.c)
 * Callees:
 *     <none>
 */

int __thiscall tagWND::SharedPointerFieldpSBInfo<tagSBINFO>::operator=(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  int result; // eax

  v2 = *(this - 16);
  if ( a2 )
    v3 = a2 + *(this - 15) - v2;
  else
    v3 = 0;
  *(_DWORD *)(v2 + 96) = v3;
  result = a2;
  *this = a2;
  return result;
}
