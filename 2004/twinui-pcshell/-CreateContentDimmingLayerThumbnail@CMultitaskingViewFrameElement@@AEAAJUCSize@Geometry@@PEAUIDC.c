/*
 * XREFs of ?CreateContentDimmingLayerThumbnail@CMultitaskingViewFrameElement@@AEAAJUCSize@Geometry@@PEAUIDCompThumbnail@@1PEAPEAU4@2@Z @ 0x1803AA7C8
 * Callers:
 *     ?RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAsyncFrameEvents@@PEAUISwitchThumbnailFactory@@PEAUIMultitaskingViewElement@@4PEAUIAnimationCoordinator@@@Z @ 0x1803AB684 (-RuntimeClassInitialize@CMultitaskingViewFrameElement@@QEAAJAEBUFrameMetrics@@PEAUHWND__@@AEBVAs.c)
 *     ?_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ @ 0x1803AC200 (-_RefreshBackgroundThumbnails@CMultitaskingViewFrameElement@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1803A1120 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ??8?$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z @ 0x1803AA28C (--8-$HighContrastAwareOpacity@M@@QEBA_NAEBU0@@Z.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1803AA2CC (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 *     ?s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NPEAUIDCompThumbnail@@PEAPEAU3@@Z @ 0x1803AC5A4 (-s_CreateDimmingLayerThumbnail@CMultitaskingViewFrameElement@@CAJPEAUISwitchThumbnailFactory@@NP.c)
 */

__int64 CMultitaskingViewFrameElement::CreateContentDimmingLayerThumbnail(
        __int64 a1,
        __int64 a2,
        struct IDCompThumbnail *a3,
        __int64 a4,
        ...)
{
  struct IDCompThumbnail **v4; // r14
  float *v5; // r15
  _QWORD *v6; // r12
  __int64 *v9; // rdi
  __int64 v10; // rbx
  unsigned int Color; // eax
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v14; // rdx
  struct IDCompThumbnail **v15; // rbx
  struct IDCompThumbnail *v16; // rdi
  __int64 v17; // rdx
  int v18; // eax
  __int64 v19; // rbx
  int v20; // eax
  struct ISwitchThumbnailFactory *v21; // rbx
  float v22; // xmm0_4
  int DimmingLayerThumbnail; // eax
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 v27; // [rsp+98h] [rbp+58h]
  struct IDCompThumbnail **v28; // [rsp+A0h] [rbp+60h] BYREF
  va_list va; // [rsp+A0h] [rbp+60h]
  __int64 v30; // [rsp+A8h] [rbp+68h] BYREF
  va_list va1; // [rsp+A8h] [rbp+68h]
  va_list va2; // [rsp+B0h] [rbp+70h] BYREF

  va_start(va2, a4);
  va_start(va1, a4);
  va_start(va, a4);
  v28 = va_arg(va1, struct IDCompThumbnail **);
  va_copy(va2, va1);
  v30 = va_arg(va2, _QWORD);
  v27 = a4;
  v26 = a2;
  v4 = v28;
  v5 = (float *)(a1 + 340);
  v6 = (_QWORD *)v30;
  *v28 = 0LL;
  *v6 = 0LL;
  if ( *(_DWORD *)(a1 + 348) && !HighContrastAwareOpacity<float>::operator==(a1 + 340, a1 + 352) )
  {
    v28 = 0LL;
    v9 = *(__int64 **)(a1 + 480);
    v30 = 0x100000001LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
    v10 = *v9;
    Color = CImmersiveColor::GetColor(0xABu);
    v12 = (*(__int64 (__fastcall **)(__int64 *, struct IDCompThumbnail *, _QWORD, __int64, GUID *, struct IDCompThumbnail ***))(v10 + 104))(
            v9,
            a3,
            Color,
            v30,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            (struct IDCompThumbnail ***)va);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v15 = v28;
      v16 = *v28;
      HighContrastAwareOpacity<float>::operator float(v5);
      v12 = (*((__int64 (__fastcall **)(struct IDCompThumbnail **, __int64, _QWORD, _QWORD))v16 + 4))(
              v15,
              v17,
              0LL,
              0LL);
      v13 = v12;
      if ( v12 >= 0 )
      {
        v18 = *(_DWORD *)(a1 + 348);
        v26 = 0LL;
        v19 = *(_QWORD *)(a1 + 480);
        HIDWORD(v30) = v18;
        LODWORD(v30) = 1;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        v20 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, GUID *, __int64 *))(*(_QWORD *)v19 + 80LL))(
                v19,
                v27,
                v30,
                3LL,
                &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
                &v26);
        v13 = v20;
        if ( v20 >= 0 )
        {
          v30 = a1;
          (*(void (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, _QWORD *, __int64), __int64 *))(*(_QWORD *)v26 + 80LL))(
            v26,
            LambdaCustomPaintProc<_lambda_75d12933469d574ec35b52b770ab7fc4_,ID2D1DeviceContext *>,
            (__int64 *)va1);
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)va);
          *v4 = (struct IDCompThumbnail *)v28;
          Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
          v13 = 0;
          *v6 = v26;
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x385,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
            (const char *)(unsigned int)v20);
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
        goto LABEL_12;
      }
      v14 = 893LL;
    }
    else
    {
      v14 = 892LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)v12);
LABEL_12:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)va);
    return v13;
  }
  v21 = *(struct ISwitchThumbnailFactory **)(a1 + 480);
  v22 = HighContrastAwareOpacity<float>::operator float(v5);
  DimmingLayerThumbnail = CMultitaskingViewFrameElement::s_CreateDimmingLayerThumbnail(v21, v22, a3, v4);
  v13 = DimmingLayerThumbnail;
  if ( DimmingLayerThumbnail < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x374,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\frameelement.cpp",
      (const char *)(unsigned int)DimmingLayerThumbnail);
  return v13;
}
