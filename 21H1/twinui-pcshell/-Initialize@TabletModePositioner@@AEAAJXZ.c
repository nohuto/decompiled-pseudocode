/*
 * XREFs of ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803D7B74
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_0c788ac9b5ff108bd94b69ecedb7d7ca__&_::Run @ 0x1803D9C70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_0c788ac9b5ff108bd94b69ecedb7d7ca__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1803D7C34 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1803E42C0 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E4BA0 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::Initialize(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !LODWORD(punkSite[29].lpVtbl) )
  {
    v2 = punkSite + 39;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[39]);
    Instance = ChromeManager_CreateInstance(punkSite, v3, (void **)&v2->lpVtbl);
    if ( Instance < 0 )
    {
      v5 = 1669LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
        (const char *)(unsigned int)Instance);
      return (unsigned int)Instance;
    }
    IUnknown_SetSite((IUnknown *)v2->lpVtbl, punkSite);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[40]);
    Instance = PositionAdjustmentHistory_CreateInstance(v7, (void **)&punkSite[40].lpVtbl);
    if ( Instance < 0 )
    {
      v5 = 1674LL;
      goto LABEL_4;
    }
    Instance = TabletModePositioner::InitializeAppLayoutForStartup((TabletModePositioner *)punkSite);
    if ( Instance < 0 )
    {
      v5 = 1678LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
