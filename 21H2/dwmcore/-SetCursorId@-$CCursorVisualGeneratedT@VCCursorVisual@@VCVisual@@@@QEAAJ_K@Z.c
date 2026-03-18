/*
 * XREFs of ?SetCursorId@?$CCursorVisualGeneratedT@VCCursorVisual@@VCVisual@@@@QEAAJ_K@Z @ 0x1801A27A4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnCursorIdChanged@CCursorVisual@@IEAAXXZ @ 0x180211CE8 (-OnCursorIdChanged@CCursorVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CCursorVisualGeneratedT<CCursorVisual,CVisual>::SetCursorId(CCursorVisual *a1, __int64 a2)
{
  *((_QWORD *)a1 + 91) = a2;
  CCursorVisual::OnCursorIdChanged(a1);
  return 0LL;
}
