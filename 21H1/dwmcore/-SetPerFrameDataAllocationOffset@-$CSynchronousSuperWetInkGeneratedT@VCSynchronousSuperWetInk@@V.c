/*
 * XREFs of ?SetPerFrameDataAllocationOffset@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180176674
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F3A18 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::SetPerFrameDataAllocationOffset(
        CSynchronousSuperWetInk *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 19) )
  {
    *((_DWORD *)a1 + 19) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
