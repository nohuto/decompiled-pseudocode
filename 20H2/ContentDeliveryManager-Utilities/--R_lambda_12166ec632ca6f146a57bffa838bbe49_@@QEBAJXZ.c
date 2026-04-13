/*
 * XREFs of ??R_lambda_12166ec632ca6f146a57bffa838bbe49_@@QEBAJXZ @ 0x18000FD1C
 * Callers:
 *     ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000FC10 (-LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180018C4C (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVAppListEntry@Core@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001C250 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAU-$IVectorView@PEAVAppListEntry@Core@.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U?$IAsyncOperation@_N@23@@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001C500 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@U-$IAsyncOperatio.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall _lambda_12166ec632ca6f146a57bffa838bbe49_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // r9
  int v13; // eax
  int v14; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 (__fastcall ***v30)(_QWORD, GUID *, _QWORD *); // rcx
  __int64 v31; // rcx
  char v32; // [rsp+38h] [rbp-39h] BYREF
  _BYTE v33[7]; // [rsp+39h] [rbp-38h] BYREF
  __int64 v34; // [rsp+40h] [rbp-31h] BYREF
  __int64 v35; // [rsp+48h] [rbp-29h] BYREF
  __int64 v36; // [rsp+50h] [rbp-21h] BYREF
  __int64 v37; // [rsp+58h] [rbp-19h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, __int64 *); // [rsp+60h] [rbp-11h] BYREF
  __int64 v39; // [rsp+68h] [rbp-9h] BYREF
  __int64 v40; // [rsp+70h] [rbp-1h] BYREF
  __int64 v41; // [rsp+78h] [rbp+7h] BYREF
  __int64 v42; // [rsp+80h] [rbp+Fh] BYREF
  int v43; // [rsp+88h] [rbp+17h] BYREF
  __int64 v44; // [rsp+90h] [rbp+1Fh]
  HSTRING_HEADER hstringHeader; // [rsp+98h] [rbp+27h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v44 = -2LL;
  v42 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1800101FCLL);
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         string,
         &v42);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    goto LABEL_48;
  }
  v41 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v42 + 160LL))(v42, 0LL, **a1, &v41);
  v4 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_46;
  }
  if ( v41 )
  {
    v35 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v35);
    v4 = v6;
    if ( v6 < 0
      || (v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v35 + 56LL))(v35, &v32), v4 = v6, v6 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x18A,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        (const char *)(unsigned int)v6);
LABEL_61:
      v31 = v35;
      if ( v35 )
      {
        v35 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
      }
      goto LABEL_46;
    }
    if ( v32 )
    {
      v38 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v35 + 48LL))(
             v35,
             &v38);
      v4 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v7);
LABEL_59:
        v30 = v38;
        if ( v38 )
        {
          v38 = 0LL;
          ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v30)[2])(v30);
        }
        goto LABEL_61;
      }
      v37 = 0LL;
      v8 = (**v38)(v38, &GUID_5f738b61_f86a_4917_93d1_f1ee9d3b35d9, &v37);
      v4 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v8);
LABEL_57:
        v29 = v37;
        if ( v37 )
        {
          v37 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
        }
        goto LABEL_59;
      }
      v36 = 0LL;
      v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v37 + 64LL))(v37, &v36);
      v4 = v9;
      if ( v9 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v9);
LABEL_55:
        v28 = v36;
        if ( v36 )
        {
          v36 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
        goto LABEL_57;
      }
      v34 = 0LL;
      v10 = v36;
      v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Core::AppListEntry *> *>>(v36);
      if ( v4 < 0 || (v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v10 + 64LL))(v10, &v34), v4 < 0) )
      {
        v12 = (unsigned int)v4;
        goto LABEL_52;
      }
      v11 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v34 + 56LL))(v34, &v43);
      v4 = v11;
      if ( v11 < 0 )
      {
        v12 = (unsigned int)v11;
LABEL_52:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v12);
LABEL_53:
        v27 = v34;
        if ( v34 )
        {
          v34 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        }
        goto LABEL_55;
      }
      if ( v43 )
      {
        v40 = 0LL;
        v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v34 + 48LL))(v34, 0LL, &v40);
        v4 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x18A,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            (const char *)(unsigned int)v13);
LABEL_33:
          v18 = v40;
          if ( v40 )
          {
            v40 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
          }
          goto LABEL_53;
        }
        v39 = 0LL;
        v14 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 56LL))(v40, &v39);
        v4 = v14;
        if ( v14 >= 0 )
        {
          v16 = v39;
          v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<bool>,Windows::Foundation::IAsyncOperation<bool>>(v39);
          if ( v4 >= 0 )
          {
            v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v16 + 64LL))(v16, v33);
            if ( v4 >= 0 )
            {
              v4 = 0;
              goto LABEL_31;
            }
          }
          v15 = (unsigned int)v4;
        }
        else
        {
          v15 = (unsigned int)v14;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x18A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v15);
LABEL_31:
        v17 = v39;
        if ( v39 )
        {
          v39 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
        }
        goto LABEL_33;
      }
      v19 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      }
      v20 = v36;
      if ( v36 )
      {
        v36 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      v21 = v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      }
      v22 = v38;
      if ( v38 )
      {
        v38 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v22)[2])(v22);
      }
    }
    v23 = v35;
    if ( v35 )
    {
      v35 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
  }
  v4 = 0;
LABEL_46:
  v24 = v41;
  if ( v41 )
  {
    v41 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
  }
LABEL_48:
  v25 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
  }
  return (unsigned int)v4;
}
