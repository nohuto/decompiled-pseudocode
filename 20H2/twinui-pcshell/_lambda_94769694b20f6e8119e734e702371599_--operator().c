/*
 * XREFs of _lambda_94769694b20f6e8119e734e702371599_::operator() @ 0x180386288
 * Callers:
 *     CMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___::RunTask @ 0x180386BF0 (CMultitaskingViewTaskCallback__lambda_94769694b20f6e8119e734e702371599___--RunTask.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 *     ?AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z @ 0x1803864C0 (-AltTabInvoked_@MultitaskingViewTelemetry@@QEBAXW4ALT_TAB_VIEW_FLAGS@@@Z.c)
 *     ?IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z @ 0x180386A54 (-IsEnabled@MultitaskingViewTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@P6AXXZ@Z @ 0x1803870A4 (-get@-$static_lazy@VMultitaskingViewTelemetry@@@details@wil@@QEAAPEAVMultitaskingViewTelemetry@@.c)
 */

__int64 __fastcall lambda_94769694b20f6e8119e734e702371599_::operator()(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned int v8; // ebp
  unsigned __int64 v9; // rdx
  unsigned __int8 v10; // cl
  __int64 v11; // rcx
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v15; // [rsp+40h] [rbp+8h] BYREF

  if ( ((*(_DWORD *)a1 - 41) & 0xFFFFFFF9) != 0 || (v4 = 5, *(_DWORD *)a1 == 47) )
    v4 = 6;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  if ( (*(int (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 40LL))(
         a2,
         1LL,
         &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
         &v15) < 0 )
  {
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v5 = (*(__int64 (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)a2 + 24LL))(
           a2,
           1LL,
           &GUID_405444d2_baa5_48ed_abfe_a673f70be863,
           &v15);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 205LL;
      goto LABEL_13;
    }
    v8 = ((unsigned int)(*(_DWORD *)a1 - 45) <= 1) | 2;
    if ( v4 != 6 )
      v8 = (unsigned int)(*(_DWORD *)a1 - 45) <= 1;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v15 + 48LL))(
           v15,
           *(_QWORD *)(a1 + 8),
           v8,
           *(_QWORD *)(a1 + 16));
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 217LL;
      goto LABEL_13;
    }
    if ( MultitaskingViewTelemetry::IsEnabled(v10, v9) )
    {
      wil::details::static_lazy<MultitaskingViewTelemetry>::get(
        v11,
        _lambda_4e92a466514511a8168cfdbd3e7cc271_::_lambda_invoker_cdecl_);
      MultitaskingViewTelemetry::AltTabInvoked_(v12, v8);
    }
LABEL_16:
    v6 = 0;
    goto LABEL_17;
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, v4);
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_16;
  v7 = 200LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewhotkeyhandler.cpp",
    (const char *)(unsigned int)v5);
LABEL_17:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
  return v6;
}
