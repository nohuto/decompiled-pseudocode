/*
 * XREFs of ?EnsureOpenConnection@ContentManagementService@ContentManagement@@AEAAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18003128C
 * Callers:
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x1800309E4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x18002E8F8 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     _anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___ @ 0x18003BB44 (_anonymous_namespace_--MakeAgileCallback_Windows--Foundation--ITypedEventHandler_Windows--Applic.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::EnsureOpenConnection(
        RTL_SRWLOCK *this,
        struct Windows::ApplicationModel::AppService::IAppServiceConnection **a2)
{
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *Ptr; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection **v5; // rdx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v6; // rcx
  int v7; // eax
  int v8; // edi
  PVOID v9; // rbx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  __int64 (__fastcall *v12)(PVOID, _QWORD, RTL_SRWLOCK *); // rdi
  _QWORD *v13; // rax
  __int64 v14; // rcx
  PVOID v16; // rcx
  struct Windows::ApplicationModel::AppService::IAppServiceConnection *v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *v19; // [rsp+60h] [rbp+8h] BYREF
  __int64 v20; // [rsp+68h] [rbp+10h] BYREF
  RTL_SRWLOCK *v21; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v22; // [rsp+78h] [rbp+20h]

  Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)Ptr + 8LL))(Ptr);
    Ptr = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = Ptr;
  if ( Ptr )
    return 0LL;
  AcquireSRWLockExclusive(this + 15);
  v22 = this + 15;
  v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  if ( v6 )
  {
    (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v6 + 8LL))(v6);
    v6 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
  }
  *a2 = v6;
  if ( v6 )
  {
LABEL_24:
    if ( this != (RTL_SRWLOCK *)-120LL )
      ReleaseSRWLockExclusive(this + 15);
    return 0LL;
  }
  v19 = 0LL;
  v7 = ContentManagement::OpenAndValidateConnection((ContentManagement *)&v19, v5);
  v8 = v7;
  v9 = v19;
  if ( v7 >= 0 )
  {
    v12 = *(__int64 (__fastcall **)(PVOID, _QWORD, RTL_SRWLOCK *))(*(_QWORD *)v19 + 112LL);
    v21 = this;
    v13 = (_QWORD *)anonymous_namespace_::MakeAgileCallback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::AppService::AppServiceConnection___Windows::ApplicationModel::AppService::AppServiceClosedEventArgs_____lambda_43d5cd0ad306fdb22566dc3fe2fed53d___(
                      &v20,
                      &v21);
    v8 = v12(v9, *v13, this + 17);
    v14 = v20;
    if ( v20 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
    if ( v8 < 0 )
    {
      v10 = (unsigned int)v8;
      v11 = 670LL;
      goto LABEL_13;
    }
    if ( this[16].Ptr != v9 )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 8LL))(v9);
      v16 = this[16].Ptr;
      this[16].Ptr = v9;
      if ( v16 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v17 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    if ( v17 )
    {
      (*(void (__fastcall **)(struct Windows::ApplicationModel::AppService::IAppServiceConnection *))(*(_QWORD *)v17 + 8LL))(v17);
      v17 = (struct Windows::ApplicationModel::AppService::IAppServiceConnection *)this[16].Ptr;
    }
    *a2 = v17;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
    goto LABEL_24;
  }
  v10 = (unsigned int)v7;
  v11 = 657LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)v10);
  if ( v9 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
  if ( this != (RTL_SRWLOCK *)-120LL )
    ReleaseSRWLockExclusive(this + 15);
  return (unsigned int)v8;
}
