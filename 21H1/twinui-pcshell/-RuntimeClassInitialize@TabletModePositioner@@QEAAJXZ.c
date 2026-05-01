/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x1803D9D10
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803D206C (--$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18012AF84 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E21F0 (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1803E3AE4 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall TabletModePositioner::RuntimeClassInitialize(IUnknown *punkSite)
{
  IUnknown *v1; // rsi
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v6; // rcx
  int v8[4]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v9; // [rsp+30h] [rbp-68h]
  GUID v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+50h] [rbp-48h]
  GUID v12; // [rsp+60h] [rbp-38h]
  struct IUnknownVtbl *lpVtbl; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = punkSite + 32;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[32]);
  Instance = AppLayoutCache_CreateInstance(v3, (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 322LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v5 = 323LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&punkSite[38]);
  Instance = ScreenManager_CreateInstance(v6, (void **)&punkSite[38].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 324LL;
    goto LABEL_9;
  }
  lpVtbl = v1->lpVtbl;
  *(GUID *)v8 = GUID_975d55f5_ce62_42c0_868a_eda817f3871e;
  v14 = 0LL;
  v9 = 0LL;
  v10 = GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2;
  v11 = 0LL;
  v12 = GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CImmersiveShellComponent *)&punkSite[3],
               (const struct CImmersiveShellComponent::ISC_SERVICE *)v8,
               3LL);
  if ( Instance < 0 )
  {
    v5 = 332LL;
    goto LABEL_9;
  }
  return (unsigned int)Instance;
}
