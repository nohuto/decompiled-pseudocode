/*
 * XREFs of ?SetUnderlines@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@QEAAJAEBV?$span@PEAVCCompositionTextLine@@$0?0@gsl@@@Z @ 0x180177E34
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTextVisualGeneratedT<CTextVisual,CVisual>::SetUnderlines(CResource *a1, __int64 a2)
{
  return CTextVisualGeneratedT<CTextVisual,CVisual>::SetOrAppendUnderlines(a1, a2, 0);
}
