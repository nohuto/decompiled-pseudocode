/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1802ECE40
 * Callers:
 *     ?s_LoadResources@XamlExplorerHost@@CAJXZ @ 0x1802EE940 (-s_LoadResources@XamlExplorerHost@@CAJXZ.c)
 *     _lambda_05f458ff3b283a3e9a9130333ab0a931_::operator() @ 0x1802EFB5C (_lambda_05f458ff3b283a3e9a9130333ab0a931_--operator().c)
 *     ??$?0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z @ 0x18037B2F8 (--$-0$0BAE@@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEAY0BAE@_W@Z.c)
 *     ?EnsurePropertySet@PropertySetAssembler@@AEAAXXZ @ 0x18037B8D4 (-EnsurePropertySet@PropertySetAssembler@@AEAAXXZ.c)
 *     ?EnsureValueFactory@PropertySetAssembler@@AEAAXXZ @ 0x18037B968 (-EnsureValueFactory@PropertySetAssembler@@AEAAXXZ.c)
 *     ?GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessStreamReference@Streams@Storage@5@@Z @ 0x18037BF50 (-GetLogo@TrayInfoTipDisplayInfo@SystemTray@@UEAAJUSize@Foundation@Windows@@PEAPEAUIRandomAccessS.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18014F058 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    __debugbreak();
  }
}
