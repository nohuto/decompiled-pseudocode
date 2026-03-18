/*
 * XREFs of ?SetTipPointSize@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJI@Z @ 0x180175070
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1800A643C (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F1098 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::SetTipPointSize(
        CSynchronousSuperWetInk *a1,
        int a2)
{
  if ( a2 != *((_DWORD *)a1 + 18) )
  {
    *((_DWORD *)a1 + 18) = a2;
    CSynchronousSuperWetInk::OnPropertyChanged(a1);
  }
  return 0LL;
}
