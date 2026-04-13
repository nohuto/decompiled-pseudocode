/*
 * XREFs of ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002A410
 * Callers:
 *     ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180029FB8 (--1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ.c)
 *     ??$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z @ 0x18002A1C4 (--$SetEventValue@$09I_K@BaseScenarioEvents@details@Health@CreativeFramework@@QEAAXI_K@Z.c)
 *     _anonymous_namespace_::PlacementHealth::HandleEvent_9_ @ 0x18003A5B0 (_anonymous_namespace_--PlacementHealth--HandleEvent_9_.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003B2AC (--$HandleEvent@$08$$V@-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003B3C8 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@SAXXZ.c)
 *     ??$HandleEvent@$08$$V@?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ @ 0x18003B4E4 (--$HandleEvent@$08$$V@-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@SAXXZ.c)
 * Callees:
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x18003A404 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  bool v1; // zf
  const WCHAR *v3; // rdx
  HKEY v4; // rcx
  HKEY hKey; // [rsp+60h] [rbp+8h] BYREF
  const WCHAR *v6; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_BYTE *)this + 252) == 0;
  v6 = L"PlacementReported";
  if ( !v1 && *((_BYTE *)this + 251) )
  {
    hKey = 0LL;
    v3 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v3 = *(const WCHAR **)v3;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v3, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, L"PlacementReported", 0, 3u, (const BYTE *)this + 104, 0x24u) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>(&v6);
    }
    v4 = hKey;
    *((_BYTE *)this + 251) = 0;
    if ( v4 )
      RegCloseKey(v4);
  }
}
