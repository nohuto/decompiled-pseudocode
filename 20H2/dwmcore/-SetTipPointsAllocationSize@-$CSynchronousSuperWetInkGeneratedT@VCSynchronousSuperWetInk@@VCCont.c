/*
 * XREFs of ?SetTipPointsAllocationSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180173360
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800ADEEC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801EF258 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::SetTipPointsAllocationSize(
        CSynchronousSuperWetInk *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 17) )
  {
    *((_DWORD *)a1 + 17) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
