/*
 * XREFs of ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x18038B314
 * Callers:
 *     ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x180389578 (-CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDC.c)
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x18038A3F4 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x18037FED0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 */

__int64 __fastcall CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(
        struct ISwitchThumbnailFactory *a1,
        double a2,
        struct IDCompThumbnail *a3,
        struct IDCompThumbnail **a4)
{
  __int64 v7; // rbx
  unsigned int Color; // eax
  int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  struct IDCompThumbnail *v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h]

  *a4 = 0LL;
  v15 = 0LL;
  v16 = 0x100000001LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  v7 = *(_QWORD *)a1;
  Color = CImmersiveColor::GetColor(0xABu);
  v9 = (*(__int64 (__fastcall **)(struct ISwitchThumbnailFactory *, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail **))(v7 + 104))(
         a1,
         a3,
         Color,
         v16,
         &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
         &v15);
  v11 = v9;
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(struct IDCompThumbnail *, __int64, _QWORD, _QWORD))(*(_QWORD *)v15 + 32LL))(
           v15,
           v10,
           0LL,
           0LL);
    v11 = v9;
    if ( v9 >= 0 )
    {
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v11 = 0;
      *a4 = v15;
      goto LABEL_7;
    }
    v12 = 863LL;
  }
  else
  {
    v12 = 861LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
    (const char *)(unsigned int)v9);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
  return v11;
}
