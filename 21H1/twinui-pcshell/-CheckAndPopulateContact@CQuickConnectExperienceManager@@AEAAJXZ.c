/*
 * XREFs of ?CheckAndPopulateContact@CQuickConnectExperienceManager@@AEAAJXZ @ 0x1801B917C
 * Callers:
 *     ?OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1801BB0B0 (-OnViewPropertiesChanging@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@.c)
 *     ?PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contacts@ApplicationModel@Windows@@@Z @ 0x1801BB720 (-PopulateDelayLoadedContactCard@CQuickConnectExperienceManager@@UEAAJU_GUID@@PEAUIContact@Contac.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x18008C840 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb_____lambda_3023bff037d4845f3b692fb8992a92bb___ @ 0x1801B7170 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___--CTaskW.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___ @ 0x1801B82DC (Windows--Internal--ComTaskPool--QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___.c)
 *     _lambda_a17036ab546c309d72641a479b5ef0ed_::_lambda_a17036ab546c309d72641a479b5ef0ed_ @ 0x1801B85E4 (_lambda_a17036ab546c309d72641a479b5ef0ed_--_lambda_a17036ab546c309d72641a479b5ef0ed_.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1801B8704 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801B8704.c)
 *     ??0?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801B87B8 (--0-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgRefle_ea_1801B87B8.c)
 *     _lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_ @ 0x1801B89A0 (_lambda_3023bff037d4845f3b692fb8992a92bb_--__lambda_3023bff037d4845f3b692fb8992a92bb_.c)
 *     _lambda_a17036ab546c309d72641a479b5ef0ed_::__lambda_a17036ab546c309d72641a479b5ef0ed_ @ 0x1801B89D8 (_lambda_a17036ab546c309d72641a479b5ef0ed_--__lambda_a17036ab546c309d72641a479b5ef0ed_.c)
 *     ??1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ @ 0x1801B8B4C (--1ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA@XZ.c)
 *     ?CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@ApplicationModel@Windows@@PEAPEAU2345@@Z @ 0x1801B9550 (-CopyContactCardOptions@CQuickConnectExperienceManager@@AEAAJPEAUIContactCardOptions@Contacts@Ap.c)
 *     ?Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA?AV12@XZ @ 0x1801BBF38 (-Split@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAA-AV12@XZ.c)
 *     ?StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ @ 0x1801BBFD0 (-StartActivity@ExperienceManager_CheckAndPopulateContact@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BC5DC (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Pa.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQuickConnectExperienceManager::CheckAndPopulateContact(CQuickConnectExperienceManager *this)
{
  __int64 v2; // rbx
  __int64 *v3; // r15
  __int64 v4; // rdi
  char v5; // r12
  CQuickConnectExperienceManager *v6; // rcx
  int v7; // eax
  int v8; // esi
  void *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  struct Windows::ApplicationModel::Contacts::IContactCardOptions *v23; // [rsp+60h] [rbp-A0h] BYREF
  char v24; // [rsp+68h] [rbp-98h]
  void **v25; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v26[320]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v27[40]; // [rsp+2F0h] [rbp+1F0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+468h] [rbp+368h]

  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v27,
    (__int64)"ExperienceManager_CheckAndPopulateContact");
  v27[0] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::StartActivity((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  v2 = *((_QWORD *)this + 40);
  if ( !v2 )
    goto LABEL_21;
  v3 = (__int64 *)((char *)this + 328);
  if ( !*((_QWORD *)this + 41) )
  {
LABEL_13:
    if ( *((_BYTE *)this + 364) )
    {
      v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 46);
      if ( v12 )
      {
        v13 = *((_QWORD *)this + 40);
        v19 = v13;
        if ( v13 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          v12 = (struct Windows::ApplicationModel::Contacts::IContactCardOptions *)*((_QWORD *)this + 46);
        }
        v18 = v12;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v18);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
        v14 = (_QWORD *)lambda_a17036ab546c309d72641a479b5ef0ed_::_lambda_a17036ab546c309d72641a479b5ef0ed_(
                          (__int64)&v21,
                          &v19,
                          &v18);
        v8 = Windows::Internal::ComTaskPool::QueueTask__lambda_a17036ab546c309d72641a479b5ef0ed___(
               v16,
               v15,
               (unsigned int)this,
               v14);
        lambda_a17036ab546c309d72641a479b5ef0ed_::__lambda_a17036ab546c309d72641a479b5ef0ed_(&v21);
        if ( v8 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x441,
            (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
            (const char *)(unsigned int)v8);
          QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
          v11 = &v19;
          goto LABEL_19;
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 46);
        QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
      }
    }
LABEL_21:
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(v27);
    v8 = 0;
    goto LABEL_22;
  }
  v20[0] = *((_QWORD *)this + 40);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  v4 = *v3;
  v19 = *v3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
  v5 = *((_BYTE *)this + 364);
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v7 = CQuickConnectExperienceManager::CopyContactCardOptions(
         v6,
         *((struct Windows::ApplicationModel::Contacts::IContactCardOptions **)this + 42),
         &v18);
  v8 = v7;
  if ( v7 >= 0 )
  {
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::Split(v27, v26);
    v21 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v22 = v4;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
    v23 = v18;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v23);
    v24 = v5;
    wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)&v25,
      (__int64)v26);
    v25 = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
    v9 = operator new(0x168uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = 0LL;
    if ( v9 )
      v10 = Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb___::CTaskWrapper__lambda_3023bff037d4845f3b692fb8992a92bb_____lambda_3023bff037d4845f3b692fb8992a92bb___(
              (__int64)v9,
              (__int64)&v21);
    v8 = SHTaskPoolQueueTask(3LL, 2LL, (unsigned int)this);
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    lambda_3023bff037d4845f3b692fb8992a92bb_::__lambda_3023bff037d4845f3b692fb8992a92bb_(&v21);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x424,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 41);
    QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v26);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x410,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
    (const char *)(unsigned int)v7);
LABEL_11:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v19);
  v11 = v20;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
LABEL_22:
  QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::~ExperienceManager_CheckAndPopulateContact((QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact *)v27);
  return (unsigned int)v8;
}
