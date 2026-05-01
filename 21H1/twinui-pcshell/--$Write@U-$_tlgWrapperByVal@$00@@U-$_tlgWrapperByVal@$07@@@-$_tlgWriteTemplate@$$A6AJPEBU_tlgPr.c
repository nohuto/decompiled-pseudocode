/*
 * XREFs of ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18004EEE8
 * Callers:
 *     ??$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18004EDC0 (--$CortanaExperienceManager_CortanaTabletMode@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z @ 0x18004EE54 (--$CortanaExperienceManager_SuspensionAllowedByApp@AEA_N@CortanaProactiveTelemetry@@SAXAEA_N@Z.c)
 *     ??$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x18009AF9C (--$Cortana_AppInstalled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ??$Cortana_AllowedOnSKU@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801D6758 (--$Cortana_AllowedOnSKU@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAE.c)
 *     ??$Cortana_AppInstalled@_N@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAX$$QEA_N@Z @ 0x1801D6860 (--$Cortana_AppInstalled@_N@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAX$$QE.c)
 *     ??$Cortana_CortanaAvailable@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801D6964 (--$Cortana_CortanaAvailable@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEA.c)
 *     ??$Cortana_DeveloperOverride@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801D6A6C (--$Cortana_DeveloperOverride@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QE.c)
 *     ??$Cortana_EnterprisePolicyEnabled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemetry@@QEAAXAEAE@Z @ 0x1801D6B74 (--$Cortana_EnterprisePolicyEnabled@AEAE@CortanaStoreApp_CortanaAvailable@CortanaProactiveTelemet.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001CF68 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 */

ULONG __fastcall _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
        __int64 a1,
        unsigned __int8 *a2,
        const GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-58h] BYREF
  __int64 v8; // [rsp+50h] [rbp-38h]
  int v9; // [rsp+58h] [rbp-30h]
  int v10; // [rsp+5Ch] [rbp-2Ch]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]

  v11 = a6;
  v13 = 0;
  v12 = 8;
  v8 = a5;
  v10 = 0;
  v9 = 1;
  return tlgWriteTransfer_EventWriteTransfer(a1, a2, a3, 0LL, 4u, &v7);
}
