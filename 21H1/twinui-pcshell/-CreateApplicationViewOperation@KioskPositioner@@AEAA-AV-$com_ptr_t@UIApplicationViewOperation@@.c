/*
 * XREFs of ?CreateApplicationViewOperation@KioskPositioner@@AEAA?AV?$com_ptr_t@UIApplicationViewOperation@@Uerr_exception_policy@wil@@@wil@@W4APPLICATION_FRAME_CHROME_OPTIONS@@V?$function@$$A6A?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ@std@@@Z @ 0x1803BA23C
 * Callers:
 *     ?MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z @ 0x1803BB8C8 (-MaximizeWin32View@KioskPositioner@@AEAAXPEAUIApplicationView@@@Z.c)
 *     ?SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x1803BC680 (-SetUwpViewFullScreen@KioskPositioner@@AEAAXPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18007BA64 (--4-$ComPtr@UIApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@QEAAAEAV012@PEAUIApplication.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ??R?$_Func_class@V?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@$$V@std@@QEBA?AV?$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x18017DB24 (--R-$_Func_class@V-$com_ptr_t@UIApplicationViewTitlebarConfiguration@@Uerr_exception_policy@wil@.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180182CB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA?AV?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@XZ @ 0x1803B9034 (--$MakeAndInitializeOrThrow@VApplicationViewOperation@@$$V@wil@@YA-AV-$ComPtr@VApplicationViewOp.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall KioskPositioner::CreateApplicationViewOperation(__int64 a1, __int64 *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16[3]; // [rsp+28h] [rbp-38h] BYREF
  __m256i v17; // [rsp+40h] [rbp-20h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF
  __int64 *v19; // [rsp+98h] [rbp+38h]
  __int64 v20; // [rsp+A8h] [rbp+48h]

  v20 = a4;
  v19 = a2;
  v18 = a1;
  wil::MakeAndInitializeOrThrow<ApplicationViewOperation,>(&v18);
  v7 = v18;
  *(_DWORD *)(v18 + 116) = 255;
  *(_DWORD *)(v7 + 120) = a3;
  *(_DWORD *)(v18 + 124) = 0;
  *(_DWORD *)(v18 + 180) = 1;
  *(_DWORD *)(v18 + 200) = 0;
  v8 = v18;
  *(_QWORD *)(v18 + 220) = 0LL;
  *(_QWORD *)(v8 + 228) = 0LL;
  v9 = v18;
  *(_QWORD *)(v18 + 204) = 0LL;
  *(_QWORD *)(v9 + 212) = 0LL;
  v10 = v18;
  *(_BYTE *)(v18 + 236) = 1;
  *(_QWORD *)(v10 + 240) = 0LL;
  v17.m256i_i64[3] = 0LL;
  v17.m256i_i64[0] = 0LL;
  *(__m128i *)&v17.m256i_u64[1] = _mm_load_si128((const __m128i *)&_xmm);
  v11 = v18;
  *(_OWORD *)(v18 + 132) = 0LL;
  *(__m256i *)(v11 + 148) = v17;
  *(_BYTE *)(v11 + 128) = 1;
  std::_Func_class<wil::com_ptr_t<IApplicationViewTitlebarConfiguration,wil::err_exception_policy>,>::operator()(
    a4,
    (__int64)v16);
  Microsoft::WRL::ComPtr<IApplicationViewTitlebarConfiguration>::operator=((__int64 *)(v18 + 192), v16[0]);
  v12 = v18;
  v18 = 0LL;
  *a2 = v12;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease(&v18);
  v14 = *(_QWORD *)(a4 + 56);
  if ( v14 )
  {
    LOBYTE(v13) = v14 != a4;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, v13);
    *(_QWORD *)(a4 + 56) = 0LL;
  }
  return a2;
}
