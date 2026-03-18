/*
 * XREFs of ?SetPerFrameDataAllocationSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJI@Z @ 0x1801A441C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180241858 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetPerFrameDataAllocationSize(
        CSynchronousSuperWetInk *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 40) )
  {
    *((_DWORD *)a1 + 40) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
