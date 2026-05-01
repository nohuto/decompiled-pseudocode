/*
 * XREFs of ?FindAppInfo@TrayInfoTipAppInfoProvider@SystemTray@@UEAAJPEAUHSTRING__@@PEAPEAUIAppInfo@ApplicationModel@Windows@@@Z @ 0x180379980
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Details@WRL@Microsoft@@YAJPEAPEAUIAppInfo@ApplicationModel@Windows@@AEAPEAUHSTRING__@@@Z @ 0x18037932C (--$MakeAndInitialize@VTrayInfoTipAppInfo@SystemTray@@UIAppInfo@ApplicationModel@Windows@@AEAPEAU.c)
 *     ??0?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1803795D4 (--0-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ @ 0x1803797FC (--1FindAppInfoContext@TrayNotificationsTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x18037A2B0 (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18037A3FC (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z @ 0x18037ACB4 (-MatchesTrayInfoTipAppIdFormat@TrayUtility@SystemTray@@YA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall SystemTray::TrayInfoTipAppInfoProvider::FindAppInfo(
        SystemTray::TrayInfoTipAppInfoProvider *this,
        HSTRING a2,
        struct Windows::ApplicationModel::IAppInfo **a3)
{
  HSTRING v5; // rdx
  unsigned int v6; // ebx
  const char *v7; // r9
  __int64 result; // rax
  struct Windows::ApplicationModel::IAppInfo *v9; // rax
  unsigned int v10; // ebx
  SystemTray::TrayInfoTipAppInfo *v11; // [rsp+20h] [rbp-168h] BYREF
  HSTRING v12; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v13[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v12 = a2;
  *a3 = 0LL;
  wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v13);
  try
  {
    v13[0] = &TrayNotificationsTelemetry::FindAppInfoContext::`vftable';
    TrayNotificationsTelemetry::FindAppInfoContext::StartActivity(
      (TrayNotificationsTelemetry::FindAppInfoContext *)v13,
      a2);
    v11 = 0LL;
    if ( !SystemTray::TrayUtility::MatchesTrayInfoTipAppIdFormat(a2, v5)
      || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11),
          v6 = Microsoft::WRL::Details::MakeAndInitialize<SystemTray::TrayInfoTipAppInfo,Windows::ApplicationModel::IAppInfo,HSTRING__ * &>(
                 &v11,
                 &v12),
          (int)(v6 + 0x80000000) < 0)
      || v6 == -2147221164 )
    {
      wil::ActivityBase<TrayNotificationAreaLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v13);
      v9 = v11;
      v11 = 0LL;
      *a3 = v9;
      v10 = v9 == 0LL ? 0x80070490 : 0;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v13);
      result = v10;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x22,
        (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
        (const char *)v6);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v11);
      TrayNotificationsTelemetry::FindAppInfoContext::~FindAppInfoContext((TrayNotificationsTelemetry::FindAppInfoContext *)v13);
      result = v6;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2B,
                           (__int64)"pcshell\\twinui\\systemtraywpnextension\\lib\\trayinfotipappinfoprovider.cpp",
                           v7);
  }
  return result;
}
