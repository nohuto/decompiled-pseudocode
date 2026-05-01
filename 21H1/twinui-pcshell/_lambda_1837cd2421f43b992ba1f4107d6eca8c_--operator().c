/*
 * XREFs of _lambda_1837cd2421f43b992ba1f4107d6eca8c_::operator() @ 0x1803694F0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__&_::Run @ 0x180369810 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1837cd2421f43b992ba1f4107d6eca8c__-_--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016A14 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     CreationThreadDispatcher::RunSync__lambda_dbbd38514acf3bcad80e3f1b578556fc___ @ 0x180369318 (CreationThreadDispatcher--RunSync__lambda_dbbd38514acf3bcad80e3f1b578556fc___.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1?DeleteObject@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHBITMAP__@@@Z @ 0x180369988 (-reset@-$unique_storage@U-$resource_policy@PEAUHBITMAP__@@P6AHPEAX@Z$1-DeleteObject@@YAH0@ZU-$in.c)
 *     ?s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMAP__@@@Z @ 0x1803699F4 (-s_LoadIconSync@CWinRTAppIconLoader@@SAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAPEAUHBITMA.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_1837cd2421f43b992ba1f4107d6eca8c_::operator()(__int64 a1)
{
  int IconSync; // eax
  unsigned int v3; // edi
  HGDIOBJ v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  HGDIOBJ ho; // [rsp+38h] [rbp-20h] BYREF
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HGDIOBJ v11; // [rsp+60h] [rbp+8h] BYREF

  v11 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<HBITMAP__ *,int (*)(void *),&int DeleteObject(void *),wistd::integral_constant<unsigned __int64,0>,HBITMAP__ *,HBITMAP__ *,0,std::nullptr_t>>::reset(
    &v11,
    0LL);
  IconSync = CWinRTAppIconLoader::s_LoadIconSync(
               *(struct IWinRTApplicationView **)a1,
               (const struct tagSIZE *)(a1 + 8),
               (const struct tagSIZE *)(a1 + 16),
               (const struct tagSIZE *)(a1 + 24),
               *(_DWORD *)(a1 + 32),
               (HBITMAP *)&v11);
  v3 = IconSync;
  if ( IconSync >= 0 )
  {
    ho = v11;
    v4 = 0LL;
    v5 = *(_QWORD *)(a1 + 48);
    v9[0] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = CreationThreadDispatcher::RunSync__lambda_dbbd38514acf3bcad80e3f1b578556fc___(
           *(_QWORD *)(a1 + 40),
           (__int64)&ho);
    v3 = v6;
    if ( v6 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x43,
        (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
        (const char *)(unsigned int)v6);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v9);
    if ( ho )
      DeleteObject(ho);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3B,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\immersiveappiconloader.cpp",
      (const char *)(unsigned int)IconSync);
    v4 = v11;
  }
  if ( v4 )
    DeleteObject(v4);
  return v3;
}
