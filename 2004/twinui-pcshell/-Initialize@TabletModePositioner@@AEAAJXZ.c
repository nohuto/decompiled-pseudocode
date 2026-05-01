/*
 * XREFs of ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x1803F8FCC
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3f9052a0d1dbb0256cecc8375556e01f__&_::Run @ 0x1800B7110 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3f9052a0d1dbb0256cecc8375556e01f__-_--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x1803F908C (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180406300 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180406D30 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
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
      v5 = 1685LL;
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
      v5 = 1690LL;
      goto LABEL_4;
    }
    Instance = TabletModePositioner::InitializeAppLayoutForStartup((TabletModePositioner *)punkSite);
    if ( Instance < 0 )
    {
      v5 = 1694LL;
      goto LABEL_4;
    }
  }
  return 0LL;
}
