/*
 * XREFs of ?Trace@AtmosCheck@@AEAAXPEBDJ@Z @ 0x18005F2D8
 * Callers:
 *     ?PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z @ 0x180008FC0 (-PerformLicenseCheckInternalLegacy@AtmosCheck@@AEAAJPEA_N@Z.c)
 *     ?PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z @ 0x180036640 (-PerformLicenseCheck@AtmosCheck@@QEAAJ_N@Z.c)
 *     ?RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18003881C (-RegisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 *     ?Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z @ 0x18005F038 (-Initialize@AtmosCheck@@QEAAJW4AtmosRegistration@@PEAVIAtmosCodecsStatusChangedCallback@@@Z.c)
 *     ?StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z @ 0x18005F2A0 (-StaticClientAtmosCheckEventFired@AtmosCheck@@SAXPEAXE@Z.c)
 *     _lambda_2d831242b22f49e80919fd2827d69307_::operator() @ 0x180072C38 (_lambda_2d831242b22f49e80919fd2827d69307_--operator().c)
 *     _lambda_5056499381e6be98f6bae348336db3ef_::operator() @ 0x180072E54 (_lambda_5056499381e6be98f6bae348336db3ef_--operator().c)
 *     _lambda_d4b2d08f096e200be5494970f4d857ee_::operator() @ 0x180073050 (_lambda_d4b2d08f096e200be5494970f4d857ee_--operator().c)
 *     ?IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z @ 0x180135BB4 (-IsLicenseValidForPackage@AtmosCheck@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ @ 0x18013728C (-UnregisterAppDeploymentNotifications@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1801095C0 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??$Write@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@@Z @ 0x18010BBD0 (--$Write@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_G_ea_18010BBD0.c)
 */

void __fastcall AtmosCheck::Trace(AtmosCheck *this, const char *a2, int a3)
{
  __int64 v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v3 = (__int64)this;
  if ( a3 )
  {
    if ( (unsigned int)dword_18019C4F0 > 2 )
    {
      v3 = (__int64)a2;
      LODWORD(v4) = a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
        (int)&dword_18019C4F0,
        (__int64)&v3,
        (__int64)&v4);
    }
  }
  else if ( (unsigned int)dword_18019C4F0 > 5 )
  {
    v3 = (__int64)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>>(
      (int)&dword_18019C4F0,
      (__int64)&v3);
  }
}
