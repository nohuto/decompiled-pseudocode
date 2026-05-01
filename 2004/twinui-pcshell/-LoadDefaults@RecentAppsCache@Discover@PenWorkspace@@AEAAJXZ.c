/*
 * XREFs of ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x180220A70
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x180136EDC (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x180029718 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18021F128 (--0-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0I.c)
 *     ??1?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18021F2F4 (--1-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activit.c)
 *     ?Destroy@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x18021F9B4 (-Destroy@-$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P.c)
 *     _anonymous_namespace_::GetCurTime @ 0x18021FE54 (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x180221250 (-LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x180221A24 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180221D64 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements@@@details.c)
 *     ?StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ @ 0x180222A38 (-StartActivity@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAXXZ.c)
 *     ?Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z @ 0x180222B50 (-Stop@OfficeInstalled@PenWorkspaceBrokerTelemetry@@QEAAX_N@Z.c)
 *     ?reset@?$shared_object@V?$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VPenWorkspaceBrokerLogging@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x18022393C (-reset@-$shared_object@V-$ActivityData@VPenWorkspaceBrokerLogging@@U_TlgReflectorTag_Param0IsPro.c)
 */

__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDefaults(PenWorkspace::Discover::RecentAppsCache *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  int v4; // edi
  bool v5; // si
  void *ppv; // [rsp+30h] [rbp-D0h] BYREF
  struct _FILETIME FileTime; // [rsp+38h] [rbp-C8h] BYREF
  void **v9; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v10[24]; // [rsp+48h] [rbp-B8h] BYREF
  int v11; // [rsp+60h] [rbp-A0h]
  _BYTE v12[248]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v13[16]; // [rsp+170h] [rbp+70h] BYREF
  unsigned __int16 *v14; // [rsp+180h] [rbp+80h]
  const wchar_t *v15; // [rsp+188h] [rbp+88h]
  const wchar_t *v16; // [rsp+190h] [rbp+90h]
  const wchar_t *v17; // [rsp+198h] [rbp+98h]
  const wchar_t *v18; // [rsp+1A0h] [rbp+A0h]
  const WCHAR *v19; // [rsp+1A8h] [rbp+A8h]

  anonymous_namespace_::GetCurTime(&FileTime);
  v2 = 0LL;
  LODWORD(ppv) = 0;
  PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(this, FileTime, (int *)&ppv);
  LOBYTE(v3) = 1;
  v4 = 6 - (_DWORD)ppv;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_WindowsInkWorkspaceImprovements>::GetImpl'::`2'::impl,
    v3);
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)&v9);
  v9 = &PenWorkspaceBrokerTelemetry::OfficeInstalled::`vftable';
  PenWorkspaceBrokerTelemetry::OfficeInstalled::StartActivity((PenWorkspaceBrokerTelemetry::OfficeInstalled *)&v9);
  ppv = 0LL;
  v5 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         L"Microsoft.Office.WINWORD.EXE.15",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &ppv) >= 0;
  PenWorkspaceBrokerTelemetry::OfficeInstalled::Stop((PenWorkspaceBrokerTelemetry::OfficeInstalled *)&v9, v5);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v9 = &PenWorkspaceBrokerTelemetry::OfficeInstalled::`vftable';
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Destroy((__int64)&v9);
  wil::details::shared_object<wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>>::reset(v13);
  wil::ActivityBase<PenWorkspaceBrokerLogging,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<PenWorkspaceBrokerLogging,_TlgReflectorTag_Param0IsProviderType>((__int64)v12);
  if ( v11 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v10);
  v14 = L"Microsoft.WindowsMaps_8wekyb3d8bbwe!App";
  if ( v5 )
  {
    v16 = L"Microsoft.Office.WINWORD.EXE.15";
    v15 = L"Microsoft.Office.POWERPNT.EXE.15";
  }
  else
  {
    v15 = L"Microsoft.MSPaint_8wekyb3d8bbwe!Microsoft.MSPaint";
    v16 = L"Microsoft.Windows.Photos_8wekyb3d8bbwe!App";
  }
  v17 = L"Microsoft.Office.OneNote_8wekyb3d8bbwe!microsoft.onenoteim";
  v18 = L"Microsoft.WindowsCommunicationsApps_8wekyb3d8bbwe!Microsoft.WindowsLive.Mail";
  v19 = L"Microsoft.MicrosoftEdge_8wekyb3d8bbwe!MicrosoftEdge";
  if ( v4 > 0 )
  {
    do
      PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, (&v14)[v2++], &FileTime);
    while ( v2 < v4 );
  }
  return 0LL;
}
