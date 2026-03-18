/*
 * XREFs of ?SetPerFrameDataAllocationSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180173B04
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F1098 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::SetPerFrameDataAllocationSize(
        CSynchronousSuperWetInk *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 20) )
  {
    *((_DWORD *)a1 + 20) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
