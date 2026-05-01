/*
 * XREFs of ?TabDropped@TabTransferManager@@UEAAJAEBU_GUID@@0HUtagPOINT@@@Z @ 0x180291950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180016FE4 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarController@@@Z @ 0x18001710C (--0-$com_ptr_t@UITitleBarController@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAUITitleBarControll.c)
 *     __security_check_cookie @ 0x18008CFC0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008D2D4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800924E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___ @ 0x18028C9EC (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___--CTaskW.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall TabTransferManager::TabDropped(
        TabTransferManager *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        int a4,
        struct tagPOINT a5)
{
  __int64 *v9; // rax
  __int64 v10; // r9
  unsigned int v11; // edi
  void *v12; // rax
  __int64 v13; // rbx
  int v14; // edi
  __int64 v16[2]; // [rsp+30h] [rbp-68h] BYREF
  TabTransferManager *v17; // [rsp+40h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h] BYREF
  __int128 v19; // [rsp+50h] [rbp-48h]
  __int128 v20; // [rsp+60h] [rbp-38h]
  int v21; // [rsp+70h] [rbp-28h]
  struct tagPOINT v22; // [rsp+74h] [rbp-24h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v9 = wil::com_ptr_t<ITitleBarController,wil::err_exception_policy>::com_ptr_t<ITitleBarController,wil::err_exception_policy>(
         v16,
         (__int64)this);
  v17 = this;
  v10 = *v9;
  *v9 = 0LL;
  v18 = v10;
  v19 = (__int128)*a2;
  v20 = (__int128)*a3;
  v21 = a4;
  v22 = a5;
  v11 = *((_DWORD *)this + 28);
  v12 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = 0LL;
  if ( v12 )
    v13 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a___::CTaskWrapper__lambda_101c7afbd5e76fc2a50976d3f19be39a_____lambda_101c7afbd5e76fc2a50976d3f19be39a___(
            (__int64)v12,
            (__int64)&v17);
  v14 = SHTaskPoolQueueTask(3LL, 2LL, v11);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v18);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v16);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      279LL,
      (__int64)"pcshell\\twinui\\tabviewmanager\\lib\\tabtransfermanager.cpp",
      (const char *)(unsigned int)v14);
  return 0LL;
}
