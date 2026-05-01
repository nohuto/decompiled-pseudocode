/*
 * XREFs of _anonymous_namespace_::ActivateFromShellItem @ 0x18026BC58
 * Callers:
 *     ?DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x18026E8A0 (-DuplicateTab@TabViewManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062AD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad1c2e3ff12b6fb3c427626c13364f68_____lambda_ad1c2e3ff12b6fb3c427626c13364f68___ @ 0x18026400C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ad1c2e3ff12b6.c)
 */

__int64 __fastcall anonymous_namespace_::ActivateFromShellItem(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // xmm0
  __int64 *v6; // rax
  volatile int *v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rcx
  DWORD CurrentThreadId; // eax
  int v11; // edi
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+38h] [rbp-40h] BYREF
  char v15[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h]
  __int128 v17; // [rsp+50h] [rbp-28h]
  __int64 v18; // [rsp+60h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = *a3;
  v16 = 0LL;
  v14 = 0LL;
  v17 = v5;
  v15[0] = 1;
  v18 = a1;
  v6 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ad1c2e3ff12b6fb3c427626c13364f68_____lambda_ad1c2e3ff12b6fb3c427626c13364f68___(
         &v13,
         (__int64)v15);
  v8 = *v6;
  *v6 = 0LL;
  v9 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(
      v9,
      v7);
  }
  CurrentThreadId = GetCurrentThreadId();
  v11 = SHTaskPoolQueueTask(1LL, 0LL, CurrentThreadId);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  result = wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v14);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      162LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabviewmanagerimpl.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  return result;
}
