/*
 * XREFs of ?v_LayoutChildren@SwitchItemThumbnailElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803B6E90
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180387314 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x180387964 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 *     ??0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV?$ComPtr@UIDCompBatcher@@@WRL@Microsoft@@AEBU_GUID@@PEAUIDCompBatchAnimationCallback@@@Z @ 0x18038DCD0 (--0CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@AEBV-$ComPtr@UIDCompBatcher@@@WRL@Microsoft@.c)
 *     ??1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ @ 0x18038DD54 (--1CDCompFactoryBatcher@DCompThumbnailHelpers@@QEAA@XZ.c)
 *     ?SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z @ 0x1803A023C (-SwitchItemLoadError_@MultitaskingViewTelemetry@@QEBAXJ@Z.c)
 *     ?v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1803AFB70 (-v_LayoutChildren@CShrinkButtonElement@@MEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboa.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1803B6BA0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 */

void __fastcall SwitchItemThumbnailElement::v_LayoutChildren(__int64 a1, unsigned int a2, __int64 a3)
{
  int v6; // ecx
  int v7; // eax
  bool v8; // zf
  __int64 v9; // rbx
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // ebx
  __int64 v14; // rcx
  MultitaskingViewTelemetry *v15; // rcx
  __int64 v16; // rcx
  unsigned __int64 v17; // [rsp+50h] [rbp-30h] BYREF
  __int64 v18[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v19[2]; // [rsp+68h] [rbp-18h] BYREF

  v19[0] = *(_QWORD *)(a1 + 240);
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
  DCompThumbnailHelpers::CDCompFactoryBatcher::CDCompFactoryBatcher(v18, v19, (__int64)&GUID_NULL, 0LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
  CShrinkButtonElement::v_LayoutChildren(a1, a2, a3);
  v6 = *(_DWORD *)(a1 + 64) - *(_DWORD *)(a1 + 56);
  v7 = *(_DWORD *)(a1 + 68) - *(_DWORD *)(a1 + 60);
  v8 = *(_BYTE *)(a1 + 72) == 0;
  v17 = __PAIR64__(v7, v6);
  if ( !v8 && (!*(_QWORD *)(a1 + 592) || v6 != *(_DWORD *)(a1 + 612) || v7 != *(_DWORD *)(a1 + 616)) )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 592));
    v9 = *(_QWORD *)(a1 + 576);
    v10 = *(_QWORD *)(a1 + 240);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 592));
    v11 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 40LL))(v9);
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, unsigned __int64 *, _QWORD, GUID *, __int64))(*(_QWORD *)v10 + 64LL))(
            v10,
            *(_QWORD *)(a1 + 248),
            *v11,
            0x40000000LL,
            &v17,
            0LL,
            &GUID_47267895_a4f8_4012_9e98_087c619e7cfc,
            a1 + 592);
    if ( v13 >= 0 )
    {
      *(_QWORD *)(a1 + 612) = v17;
      SwitchItemThumbnailElement::UpdateThumbnailBorder((SwitchItemThumbnailElement *)a1);
    }
    else if ( MultitaskingViewTelemetry::IsEnabled(v12) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v14,
        _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::SwitchItemLoadError_(v15, v13);
    }
  }
  v16 = *(_QWORD *)(a1 + 592);
  if ( v16 )
  {
    v19[0] = 0LL;
    v19[1] = v17;
    (*(void (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(v16, v19, 0LL, 0LL);
  }
  DCompThumbnailHelpers::CDCompFactoryBatcher::~CDCompFactoryBatcher((DCompThumbnailHelpers::CDCompFactoryBatcher *)v18);
}
