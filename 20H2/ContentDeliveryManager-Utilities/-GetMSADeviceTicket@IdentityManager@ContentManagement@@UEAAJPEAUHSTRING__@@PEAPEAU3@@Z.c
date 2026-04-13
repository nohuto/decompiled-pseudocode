/*
 * XREFs of ?GetMSADeviceTicket@IdentityManager@ContentManagement@@UEAAJPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1800105D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005D38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007218 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@U?$DefaultVectorOptions@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@7895@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@@1234@Upermission@01234@@Z @ 0x18001AE20 (--0-$Vector@PEAVOnlineIdServiceTicketRequest@OnlineId@Authentication@Security@Windows@@U-$Defaul.c)
 *     ??$WaitForCompletion@U?$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@23@@@YAJPEAU?$IAsyncOperation@PEAVUserHostIdentity@WebAuthentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@PEAX@Z @ 0x18001C7B0 (--$WaitForCompletion@U-$IAsyncOperationCompletedHandler@PEAVUserHostIdentity@WebAuthentication@S.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CD574 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall ContentManagement::IdentityManager::GetMSADeviceTicket(
        ContentManagement::IdentityManager *this,
        HSTRING a2,
        HSTRING *a3)
{
  HRESULT v5; // eax
  int v6; // edi
  HRESULT v7; // eax
  HSTRING v8; // rbx
  __int64 v9; // rcx
  int ActivationFactory; // eax
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, HSTRING, HSTRING, _QWORD *); // rdi
  HRESULT v13; // eax
  int v14; // eax
  __int64 v15; // rbx
  void *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rsi
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rsi
  __int64 v27; // rcx
  int v28; // eax
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // r9
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v40; // [rsp+38h] [rbp-49h] BYREF
  __int64 v41; // [rsp+40h] [rbp-41h] BYREF
  __int64 v42; // [rsp+48h] [rbp-39h] BYREF
  int v43; // [rsp+50h] [rbp-31h] BYREF
  __int64 v44; // [rsp+58h] [rbp-29h] BYREF
  __int64 v45; // [rsp+60h] [rbp-21h] BYREF
  __int64 v46; // [rsp+68h] [rbp-19h] BYREF
  __int64 v47; // [rsp+70h] [rbp-11h] BYREF
  _QWORD v48[2]; // [rsp+78h] [rbp-9h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+7h] BYREF
  HSTRING string; // [rsp+A0h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]

  v48[1] = -2LL;
  *a3 = 0LL;
  v40 = 0LL;
  string = 0LL;
  v5 = WindowsCreateStringReference(
         L"Windows.Internal.Security.WebAuthentication.AuthenticationManager",
         0x41u,
         &hstringHeader,
         &string);
  if ( v5 < 0 )
  {
LABEL_71:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5);
    goto LABEL_72;
  }
  v40 = 0LL;
  v6 = RoActivateInstance(string, &v45);
  if ( v6 < 0 )
    goto LABEL_66;
  if ( *(_QWORD *)&GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data1 == *(_QWORD *)&GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data1
    && *(_QWORD *)GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb.Data4 == *(_QWORD *)GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90.Data4 )
  {
    v40 = v45;
  }
  else
  {
    v6 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v45)(
           v45,
           &GUID_eb2c0c45_76f9_4a0a_bb73_fcf47d73a4eb,
           &v40);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
  }
  if ( v6 < 0 )
  {
LABEL_66:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1DE,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_67;
  }
  v42 = 0LL;
  string = 0LL;
  v7 = WindowsCreateStringReference(
         L"Windows.Security.Authentication.OnlineId.OnlineIdServiceTicketRequest",
         0x45u,
         &hstringHeader,
         &string);
  if ( v7 < 0 )
  {
LABEL_72:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
    JUMPOUT(0x180010B2DLL);
  }
  v8 = string;
  v9 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_bebb0a08_9e73_4077_9614_08614c0bc245, &v42);
  v6 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v48[0] = 0LL;
    v11 = v42;
    v12 = *(__int64 (__fastcall **)(__int64, HSTRING, HSTRING, _QWORD *))(*(_QWORD *)v42 + 48LL);
    string = 0LL;
    v13 = WindowsCreateStringReference(L"MBI_SSL", 7u, &hstringHeader, &string);
    if ( v13 >= 0 )
    {
      v14 = v12(v11, a2, string, v48);
      v6 = v14;
      if ( v14 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E9,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v14);
LABEL_62:
        v36 = v48[0];
        if ( v48[0] )
        {
          v48[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
        }
        goto LABEL_64;
      }
      v15 = 0LL;
      v45 = 0LL;
      v6 = 0;
      v16 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = 0LL;
      if ( !v16
        || (v17 = Windows::Foundation::Collections::Internal::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>::Vector<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>,Windows::Foundation::Collections::Internal::DefaultVectorOptions<Windows::Security::Authentication::OnlineId::OnlineIdServiceTicketRequest *>>(v16)) == 0 )
      {
        v6 = -2147024882;
      }
      v18 = v17;
      v19 = 0LL;
      if ( v6 >= 0 )
      {
        v15 = v17;
        v45 = v17;
        v18 = 0LL;
        v19 = v17;
      }
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      if ( v6 < 0 )
      {
        v20 = (unsigned int)v6;
        v21 = 492LL;
LABEL_27:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v20);
LABEL_60:
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        goto LABEL_62;
      }
      v22 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 104LL))(v15, v48[0]);
      v6 = v22;
      if ( v22 < 0 )
      {
        v20 = (unsigned int)v22;
        v21 = 493LL;
        goto LABEL_27;
      }
      v47 = 0LL;
      v41 = 0LL;
      v23 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v40 + 64LL))(v40, v19 + 16, &v47);
      v6 = v23;
      if ( v23 < 0 )
      {
        v24 = (unsigned int)v23;
        v25 = 498LL;
LABEL_55:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v25,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)v24);
LABEL_56:
        v34 = v41;
        if ( v41 )
        {
          v41 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
        }
        v35 = v47;
        if ( v47 )
        {
          v47 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
        }
        goto LABEL_60;
      }
      v26 = v47;
      v27 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      }
      v6 = WaitForCompletion<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>,Windows::Foundation::IAsyncOperation<Windows::Internal::Security::WebAuthentication::UserHostIdentity *>>(v26);
      if ( v6 < 0 || (v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v26 + 64LL))(v26, &v41), v6 < 0) )
      {
        v25 = 499LL;
        goto LABEL_54;
      }
      if ( !v41 )
      {
        v6 = -2147023728;
        v25 = 500LL;
LABEL_54:
        v24 = (unsigned int)v6;
        goto LABEL_55;
      }
      v46 = 0LL;
      v28 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v41 + 48LL))(v41, &v46);
      v6 = v28;
      if ( v28 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F8,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          (const char *)(unsigned int)v28);
LABEL_51:
        v33 = v46;
        if ( v46 )
        {
          v46 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        }
        goto LABEL_56;
      }
      v44 = 0LL;
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v46 + 48LL))(v46, 0LL, &v44);
      v6 = v29;
      if ( v29 >= 0 )
      {
        v43 = 0;
        v29 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v44 + 64LL))(v44, &v43);
        v6 = v29;
        if ( v29 >= 0 )
        {
          v6 = v43;
          if ( v43 < 0 )
          {
            v31 = (unsigned int)v43;
            v30 = 511LL;
LABEL_47:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v30,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
              (const char *)v31);
            goto LABEL_49;
          }
          v29 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v44 + 48LL))(v44, a3);
          v6 = v29;
          if ( v29 >= 0 )
          {
            v6 = 0;
LABEL_49:
            v32 = v44;
            if ( v44 )
            {
              v44 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            goto LABEL_51;
          }
          v30 = 512LL;
        }
        else
        {
          v30 = 510LL;
        }
      }
      else
      {
        v30 = 507LL;
      }
      v31 = (unsigned int)v29;
      goto LABEL_47;
    }
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13);
    goto LABEL_71;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1E3,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_64:
  v37 = v42;
  if ( v42 )
  {
    v42 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  }
LABEL_67:
  v38 = v40;
  if ( v40 )
  {
    v40 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  }
  return (unsigned int)v6;
}
