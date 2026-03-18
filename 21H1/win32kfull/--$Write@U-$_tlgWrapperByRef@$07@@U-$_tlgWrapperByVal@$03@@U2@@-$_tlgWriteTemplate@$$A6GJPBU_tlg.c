/*
 * XREFs of ??$Write@U?$_tlgWrapperByRef@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapperByRef@$07@@ABU?$_tlgWrapperByVal@$03@@4@Z @ 0x14BA4D
 * Callers:
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z @ 0x46B46 (-RemoveMessage@Delivery@InputTraceLogging@@SGXPBUtagQMSG@@PBUtagQ@@@Z.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     _xxxUpdatePerUserSystemParameters@8 @ 0xD78DE (_xxxUpdatePerUserSystemParameters@8.c)
 *     ?RedirectForCapture@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@PAUHWND__@@@Z @ 0x14D915 (-RedirectForCapture@Mouse@InputTraceLogging@@SGXPBUtagQMSG@@PAUHWND__@@@Z.c)
 *     ?TraceLoggingBSDRRaceConditionEvent@@YGXHH@Z @ 0x186672 (-TraceLoggingBSDRRaceConditionEvent@@YGXHH@Z.c)
 *     ?TraceLoggingPenHotkey@@YGXII@Z @ 0x186D0F (-TraceLoggingPenHotkey@@YGXII@Z.c)
 *     ?TraceLoggingSPISetDesktopDPIOverrideEvent@@YGXHH@Z @ 0x186D9B (-TraceLoggingSPISetDesktopDPIOverrideEvent@@YGXHH@Z.c)
 *     ?TraceLoggingSPISetModernDPIOverrideEvent@@YGXHH@Z @ 0x186E0E (-TraceLoggingSPISetModernDPIOverrideEvent@@YGXHH@Z.c)
 *     ?TraceLoggingSPISetPenVisualizationEvent@@YGXKK@Z @ 0x186E81 (-TraceLoggingSPISetPenVisualizationEvent@@YGXKK@Z.c)
 *     ?TraceLoggingSysQueueLockedRetryFailed@@YGXKK@Z @ 0x1870B6 (-TraceLoggingSysQueueLockedRetryFailed@@YGXKK@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        int *a5,
        int a6,
        int a7)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-54h] BYREF
  int v9; // [esp+28h] [ebp-34h]
  int v10; // [esp+2Ch] [ebp-30h]
  int v11; // [esp+30h] [ebp-2Ch]
  int v12; // [esp+34h] [ebp-28h]
  int v13; // [esp+38h] [ebp-24h]
  int v14; // [esp+3Ch] [ebp-20h]
  int v15; // [esp+40h] [ebp-1Ch]
  int v16; // [esp+44h] [ebp-18h]
  int v17; // [esp+48h] [ebp-14h]
  int v18; // [esp+4Ch] [ebp-10h]
  int v19; // [esp+50h] [ebp-Ch]
  int v20; // [esp+54h] [ebp-8h]

  v17 = a7;
  v13 = a6;
  v18 = 0;
  v9 = *a5;
  v19 = 4;
  v20 = 0;
  v14 = 0;
  v15 = 4;
  v16 = 0;
  v10 = 0;
  v11 = 8;
  v12 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer(a1, a2, 0, 0, 5u, &UserData);
}
