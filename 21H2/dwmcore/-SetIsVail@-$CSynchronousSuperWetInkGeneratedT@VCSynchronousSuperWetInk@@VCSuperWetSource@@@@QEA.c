/*
 * XREFs of ?SetIsVail@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCSuperWetSource@@@@QEAAJ_N@Z @ 0x1801A3020
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800C0A08 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180241858 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CSuperWetSource>::SetIsVail(
        CSynchronousSuperWetInk *a1,
        char a2)
{
  if ( a2 != *((_BYTE *)a1 + 168) )
  {
    *((_BYTE *)a1 + 168) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
