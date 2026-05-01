/*
 * XREFs of ?SetBoundsForView@ViewManagerBridge@@UEAAXPEAUIUnknown@@AEBUtagRECT@@AEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802C1E50
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x180094028 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_ViewPresentationMode@@@details@wil@@QEAAX.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewManagerBridge::SetBoundsForView(
        ViewManagerBridge *this,
        struct IUnknown *a2,
        const struct tagRECT *a3,
        const struct APPLICATION_VIEW_DATA *a4)
{
  int v6; // edi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  __int64 v8; // rax
  int v9; // eax
  __m256i v10; // [rsp+20h] [rbp-60h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  __m256i v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 *v16; // [rsp+A0h] [rbp+20h] BYREF

  if ( !*((_BYTE *)this + 145) )
  {
    v10.m256i_i32[0] = a3->right - a3->left;
    v10.m256i_i32[1] = a3->bottom - a3->top;
    v10.m256i_i32[2] = *((_DWORD *)a4 + 2);
    *(_OWORD *)((char *)&v10.m256i_u64[1] + 4) = *(unsigned int *)a4;
    v6 = *((_DWORD *)a4 + 8);
    HIDWORD(v11) = *((_DWORD *)a4 + 7);
    v10.m256i_i32[7] = *((_DWORD *)a4 + 4) != 0;
    wil::details::FeatureImpl<__WilFeatureTraits_Feature_ViewPresentationMode>::ReportUsage(
      `wil::Feature<__WilFeatureTraits_Feature_ViewPresentationMode>::GetImpl'::`2'::impl,
      1u,
      (__int64)a3);
    LODWORD(v11) = *((_DWORD *)a4 + 6);
    v16 = 0LL;
    QueryInterface = a2->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
    ((void (__fastcall *)(struct IUnknown *, GUID *, __int64 **))QueryInterface)(
      a2,
      &GUID_884eb994_3fdf_40ff_8800_aa1176f0f45e,
      &v16);
    v8 = *v16;
    v12 = v10;
    v13 = v11;
    v14 = v6;
    v9 = (*(__int64 (__fastcall **)(__int64 *, __m256i *))(v8 + 192))(v16, &v12);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xF8,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewmanagerbridge.cpp",
        (const char *)(unsigned int)v9);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v16);
  }
}
