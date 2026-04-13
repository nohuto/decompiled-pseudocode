/*
 * XREFs of ??1BaseScenarioEvents@details@Health@CreativeFramework@@UEAA@XZ @ 0x180029FB8
 * Callers:
 *     ??_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z @ 0x18002AC30 (--_EBaseScenarioEvents@details@Health@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002A410 (-WritePlacementReportedInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ?WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ @ 0x18002A508 (-WriteHealthEvaluationInfo@BaseScenarioEvents@details@Health@CreativeFramework@@AEAAXXZ.c)
 *     ??$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAXAEAPEBG@Z @ 0x18003A404 (--$PlacementHealthInfoWriteFailure@AEAPEBG@ContentDeliveryManagerTelemetry@Background@ContentDel.c)
 */

void __fastcall CreativeFramework::Health::details::BaseScenarioEvents::~BaseScenarioEvents(
        CreativeFramework::Health::details::BaseScenarioEvents *this)
{
  const WCHAR *v2; // rdx
  HKEY hKey; // [rsp+70h] [rbp+8h] BYREF
  __int64 v4; // [rsp+78h] [rbp+10h] BYREF

  *(_QWORD *)this = &CreativeFramework::Health::details::BaseScenarioEvents::`vftable';
  v4 = 0LL;
  if ( *((_BYTE *)this + 250) && *((_BYTE *)this + 249) )
  {
    hKey = 0LL;
    v2 = (const WCHAR *)((char *)this + 216);
    if ( *((_QWORD *)this + 30) >= 8uLL )
      v2 = *(const WCHAR **)v2;
    if ( RegCreateKeyExW(HKEY_CURRENT_USER, v2, 0, 0LL, 0, 0xF003Fu, 0LL, &hKey, 0LL)
      || RegSetValueExW(hKey, 0LL, 0, 3u, (const BYTE *)this + 8, 0x5Cu) )
    {
      ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::PlacementHealthInfoWriteFailure<unsigned short const * &>(&v4);
    }
    *((_BYTE *)this + 249) = 0;
    if ( hKey )
      RegCloseKey(hKey);
  }
  CreativeFramework::Health::details::BaseScenarioEvents::WritePlacementReportedInfo(this);
  CreativeFramework::Health::details::BaseScenarioEvents::WriteHealthEvaluationInfo(this);
  if ( *((_QWORD *)this + 30) >= 8uLL )
    operator delete(*((void **)this + 27));
  *((_QWORD *)this + 30) = 7LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_WORD *)this + 108) = 0;
  if ( *((_QWORD *)this + 26) >= 8uLL )
    operator delete(*((void **)this + 23));
  *((_QWORD *)this + 26) = 7LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_WORD *)this + 92) = 0;
}
