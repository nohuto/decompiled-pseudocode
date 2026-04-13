/*
 * XREFs of ?RuntimeClassInitialize@UniqueExtendedExecutionSession@@QEAAJXZ @ 0x1800805C0
 * Callers:
 *     ?GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z @ 0x180080D04 (-GetSharedExtendedExecutionSession@UniqueExtendedExecutionSession@@SAJPEAPEAUIInspectable@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ @ 0x18007FEEC (--1ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ @ 0x180080068 (-StartActivity@ExtendedExecutionRequested@CDMUtilsUnlockTelemetry@@QEAAXXZ.c)
 *     ?CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z @ 0x180080A9C (-CloseSession@UniqueExtendedExecutionSession@@AEAAX_N@Z.c)
 *     ?Stop@?$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18008139C (-Stop@-$ActivityBase@VCDMUtilsUnlockLogging@@$00$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@VUniqueExtendedExecutionSession@@PEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@01@PEAVUniqueExtendedExecutionSession@@P83@EAAJPEAUIInspectable@@PEAUIExtendedExecutionRevokedEventArgs@ExtendedExecution@ApplicationModel@Windows@@@Z@Z @ 0x180081AB8 (--$Callback@U-$ITypedEventHandler@PEAUIInspectable@@PEAVExtendedExecutionRevokedEventArgs@Extend.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@ApplicationModel@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180081DE8 (--$WaitForCompletion@PEAU-$IAsyncOperation@W4ExtendedExecutionResult@ExtendedExecution@Applicati.c)
 *     __security_check_cookie @ 0x1800CD6D0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800CDE41 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall UniqueExtendedExecutionSession::RuntimeClassInitialize(UniqueExtendedExecutionSession *this)
{
  __int64 **v2; // rsi
  __int64 v3; // rcx
  HRESULT v4; // eax
  int v5; // edi
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 *v9; // rbx
  __int64 (__fastcall *v10)(__int64 *, HSTRING); // rdi
  HRESULT v11; // eax
  __int64 v12; // rbx
  int v13; // eax
  __int64 *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v20; // eax
  int v22[2]; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v23[4]; // [rsp+30h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-B8h] BYREF
  HSTRING string; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[4]; // [rsp+78h] [rbp-90h] BYREF
  int v27; // [rsp+98h] [rbp-70h]
  int *v28; // [rsp+A0h] [rbp-68h]
  int *v29; // [rsp+A8h] [rbp-60h]
  int v30; // [rsp+B0h] [rbp-58h] BYREF
  char v31; // [rsp+B4h] [rbp-54h]
  int v32; // [rsp+D8h] [rbp-30h] BYREF
  const char *v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  char v35; // [rsp+F0h] [rbp-18h]
  __int64 v36; // [rsp+F8h] [rbp-10h]
  _BYTE v37[144]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v38; // [rsp+190h] [rbp+88h]
  __int128 v39; // [rsp+198h] [rbp+90h]
  __int64 v40; // [rsp+1A8h] [rbp+A0h]
  wil::details::in1diag3 *retaddr; // [rsp+1E0h] [rbp+D8h]

  v23[3] = -2LL;
  v26[1] = 0LL;
  v26[2] = v26;
  v26[3] = 0LL;
  v27 = 0;
  v28 = &v32;
  v29 = &v30;
  v30 = 0;
  v31 = 0;
  v35 = 0;
  v32 = 0;
  v33 = "ExtendedExecutionRequested";
  v34 = 0LL;
  v36 = 1LL;
  v38 = 0LL;
  memset_0(v37, 0, sizeof(v37));
  v39 = 0LL;
  v40 = 0LL;
  v26[0] = &CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::`vftable';
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::StartActivity((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
  v2 = (__int64 **)((char *)this + 64);
  v3 = *((_QWORD *)this + 8);
  *((_QWORD *)this + 8) = 0LL;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  string = 0LL;
  v4 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.ExtendedExecution.ExtendedExecutionSession",
         0x43u,
         (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
         &string);
  if ( v4 < 0 )
    goto LABEL_35;
  *v2 = 0LL;
  v5 = RoActivateInstance(string, &v23[1]);
  if ( v5 >= 0 )
  {
    if ( *(_QWORD *)&GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
      && *(_QWORD *)GUID_af908a2d_118b_48f1_9308_0c4fc41e200f.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
    {
      *v2 = (__int64 *)v23[1];
    }
    else
    {
      v5 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, char *))v23[1])(
             v23[1],
             &GUID_af908a2d_118b_48f1_9308_0c4fc41e200f,
             (char *)this + 64);
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[1] + 16LL))(v23[1]);
    }
  }
  if ( v5 < 0 )
  {
    v6 = (unsigned int)v5;
    v7 = 126LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
      (const char *)v6);
    goto LABEL_33;
  }
  v8 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(**v2 + 56))(*v2, 0LL);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 127LL;
LABEL_16:
    v6 = (unsigned int)v8;
    goto LABEL_17;
  }
  v9 = *v2;
  v10 = *(__int64 (__fastcall **)(__int64 *, HSTRING))(**v2 + 72);
  string = 0LL;
  v11 = WindowsCreateStringReference(
          L"UnlockActionHelper",
          0x12u,
          (HSTRING_HEADER *)&hstringHeader.Reserved.Reserved2[8],
          &string);
  if ( v11 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v11);
    JUMPOUT(0x180080995LL);
  }
  v8 = v10(v9, string);
  v5 = v8;
  if ( v8 < 0 )
  {
    v7 = 128LL;
    goto LABEL_16;
  }
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[8] = UniqueExtendedExecutionSession::OnSessionRevoked;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 0;
  *(_OWORD *)&v23[1] = *(_OWORD *)&hstringHeader.Reserved.Reserved2[8];
  Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<IInspectable *,Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionRevokedEventArgs *>,UniqueExtendedExecutionSession,IInspectable *,Windows::ApplicationModel::ExtendedExecution::IExtendedExecutionRevokedEventArgs *>(
    &hstringHeader.Reserved.Reserved2[8],
    this,
    &v23[1]);
  v12 = *(_QWORD *)&hstringHeader.Reserved.Reserved2[8];
  v13 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, char *))(**v2 + 96))(
          *v2,
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[8],
          (char *)this + 72);
  v5 = v13;
  if ( v13 >= 0 )
  {
    *(_QWORD *)v22 = 0LL;
    v14 = *v2;
    v15 = **v2;
    *(_QWORD *)v22 = 0LL;
    v16 = (*(__int64 (__fastcall **)(__int64 *, int *))(v15 + 112))(v14, v22);
    v5 = v16;
    if ( v16 < 0 )
    {
      v17 = (unsigned int)v16;
      v18 = 134LL;
      goto LABEL_27;
    }
    v19 = *(_QWORD *)v22;
    LODWORD(v23[1]) = 0;
    v20 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<enum Windows::ApplicationModel::ExtendedExecution::ExtendedExecutionResult> *>(*(_QWORD *)v22);
    if ( v20 >= 0 )
      v20 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v19 + 64LL))(v19, &v23[1]);
    if ( v20 >= 0 )
    {
      if ( !LODWORD(v23[1]) )
      {
        wil::ActivityBase<CDMUtilsUnlockLogging,1,0,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
        v5 = 0;
LABEL_29:
        if ( *(_QWORD *)v22 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v22 + 16LL))(*(_QWORD *)v22);
        goto LABEL_31;
      }
      UniqueExtendedExecutionSession::CloseSession(this, 0);
      v5 = -2147418113;
      v17 = 2147549183LL;
      v18 = 139LL;
LABEL_27:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
        (const char *)v17);
      goto LABEL_29;
    }
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x63A,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
      (const char *)(unsigned int)v20);
LABEL_35:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
    __debugbreak();
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x83,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\unlockactionhelper.cpp",
    (const char *)(unsigned int)v13);
LABEL_31:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
LABEL_33:
  CDMUtilsUnlockTelemetry::ExtendedExecutionRequested::~ExtendedExecutionRequested((CDMUtilsUnlockTelemetry::ExtendedExecutionRequested *)v26);
  return (unsigned int)v5;
}
