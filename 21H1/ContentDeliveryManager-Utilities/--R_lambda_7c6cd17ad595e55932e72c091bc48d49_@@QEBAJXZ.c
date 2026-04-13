/*
 * XREFs of ??R_lambda_7c6cd17ad595e55932e72c091bc48d49_@@QEBAJXZ @ 0x1800583AC
 * Callers:
 *     ?UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x1800582A0 (-UninstallApp@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18001850C (--$ActivateInstance@V-$ComPtr@UIPackageManager@Deployment@Management@Windows@@@WRL@Microsoft@@@F.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@U?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@23@@@YAJPEAU?$IAsyncOperationWithProgress@PEAVDeploymentResult@Deployment@Management@Windows@@UDeploymentProgress@234@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18005E01C (--$WaitForCompletion@U-$IAsyncOperationWithProgressCompletedHandler@PEAVDeploymentResult@Deploym.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall _lambda_7c6cd17ad595e55932e72c091bc48d49_::operator()(_QWORD **a1)
{
  HRESULT v2; // eax
  int v3; // eax
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 (__fastcall *v9)(__int64, __int64 *); // rdi
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING *); // rdi
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  unsigned __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _BYTE v29[8]; // [rsp+38h] [rbp-29h] BYREF
  HSTRING v30; // [rsp+40h] [rbp-21h] BYREF
  __int64 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h] BYREF
  __int64 v33; // [rsp+58h] [rbp-9h] BYREF
  __int64 v34; // [rsp+60h] [rbp-1h] BYREF
  __int64 v35; // [rsp+68h] [rbp+7h] BYREF
  _QWORD *v36; // [rsp+70h] [rbp+Fh] BYREF
  _QWORD v37[2]; // [rsp+78h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+27h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+3Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v37[1] = -2LL;
  v36 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(L"Windows.Management.Deployment.PackageManager", 0x2Cu, &hstringHeader, &string);
  if ( v2 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
    JUMPOUT(0x1800587E6LL);
  }
  v3 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Management::Deployment::IPackageManager>>(
         (__int64)string,
         (__int64 *)&v36);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v37[0] = 0LL;
    v5 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD, _QWORD, _QWORD *))(*v36 + 160LL))(v36, 0LL, **a1, v37);
    v4 = v5;
    if ( v5 >= 0 )
    {
      if ( v37[0] )
      {
        v32 = 0LL;
        v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v37[0] + 48LL))(v37[0], &v32);
        v4 = v6;
        if ( v6 >= 0
          && (v6 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 56LL))(v32, v29), v4 = v6, v6 >= 0) )
        {
          while ( 1 )
          {
            if ( !v29[0] )
            {
              v19 = v32;
              if ( v32 )
              {
                v32 = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
              }
              goto LABEL_29;
            }
            v34 = 0LL;
            v31 = 0LL;
            v30 = 0LL;
            v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 48LL))(v32, &v34);
            v4 = v7;
            if ( v7 < 0 )
              goto LABEL_41;
            v8 = v34;
            v9 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 48LL);
            v10 = v31;
            if ( v31 )
            {
              v31 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
            v7 = v9(v8, &v31);
            v4 = v7;
            if ( v7 < 0
              || (v11 = v31,
                  v12 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v31 + 96LL),
                  WindowsDeleteString(v30),
                  v30 = 0LL,
                  v7 = v12(v11, &v30),
                  v4 = v7,
                  v7 < 0) )
            {
LABEL_41:
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x10C,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
                (const char *)(unsigned int)v7);
              goto LABEL_42;
            }
            v33 = 0LL;
            (*(void (__fastcall **)(_QWORD *, HSTRING, __int64 *))(*v36 + 64LL))(v36, v30, &v33);
            v35 = 0LL;
            v13 = v33;
            v4 = WaitForCompletion<Windows::Foundation::IAsyncOperationWithProgressCompletedHandler<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>,Windows::Foundation::IAsyncOperationWithProgress<Windows::Management::Deployment::DeploymentResult *,Windows::Management::Deployment::DeploymentProgress>>(v33);
            if ( v4 < 0 )
              break;
            v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v35);
            if ( v4 < 0 )
              break;
            v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v32 + 64LL))(v32, v29);
            v4 = v14;
            if ( v14 < 0 )
            {
              v23 = (unsigned int)v14;
              goto LABEL_37;
            }
            v15 = v35;
            if ( v35 )
            {
              v35 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
            }
            v16 = v33;
            if ( v33 )
            {
              v33 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
            }
            WindowsDeleteString(v30);
            v30 = 0LL;
            v17 = v31;
            if ( v31 )
            {
              v31 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
            }
            v18 = v34;
            if ( v34 )
            {
              v34 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
            }
          }
          v23 = (unsigned int)v4;
LABEL_37:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x10C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)v23);
          v24 = v35;
          if ( v35 )
          {
            v35 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
          }
          v25 = v33;
          if ( v33 )
          {
            v33 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
          }
LABEL_42:
          WindowsDeleteString(v30);
          v30 = 0LL;
          v26 = v31;
          if ( v31 )
          {
            v31 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
          }
          v27 = v34;
          if ( v34 )
          {
            v34 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x10C,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
            (const char *)(unsigned int)v6);
        }
        v28 = v32;
        if ( v32 )
        {
          v32 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
        }
      }
      else
      {
LABEL_29:
        v4 = 0;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
        (const char *)(unsigned int)v5);
    }
    v20 = v37[0];
    if ( v37[0] )
    {
      v37[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)v3);
  }
  v21 = v36;
  if ( v36 )
  {
    v36 = 0LL;
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*v21 + 16LL))(v21, *v21);
  }
  return (unsigned int)v4;
}
