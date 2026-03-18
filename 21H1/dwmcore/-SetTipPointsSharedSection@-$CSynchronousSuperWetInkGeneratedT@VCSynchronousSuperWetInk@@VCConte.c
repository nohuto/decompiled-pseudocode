/*
 * XREFs of ?SetTipPointsSharedSection@?$CSynchronousSuperWetInkGeneratedT@VCSynchronousSuperWetInk@@VCContent@@@@QEAAJPEAVCSharedSectionBase@@@Z @ 0x180177C60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007B22C (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008C000 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x1801F3A18 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 */

__int64 __fastcall CSynchronousSuperWetInkGeneratedT<CSynchronousSuperWetInk,CContent>::SetTipPointsSharedSection(
        struct CResource **this,
        struct CResource *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rcx

  v2 = 0;
  if ( a2 != this[12] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xFCAu, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[12]);
      this[12] = a2;
      CSynchronousSuperWetInk::OnPropertyChanged((CSynchronousSuperWetInk *)this);
    }
  }
  return v2;
}
