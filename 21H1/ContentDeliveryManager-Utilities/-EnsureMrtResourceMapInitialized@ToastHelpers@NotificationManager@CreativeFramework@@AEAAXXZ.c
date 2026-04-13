/*
 * XREFs of ?EnsureMrtResourceMapInitialized@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXXZ @ 0x18009BA68
 * Callers:
 *     ?ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z @ 0x18009B8C8 (-ExpandRatingParameters@ToastHelpers@NotificationManager@CreativeFramework@@AEAAXPEB_W@Z.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F48 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180007228 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800CB070 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall CreativeFramework::NotificationManager::ToastHelpers::EnsureMrtResourceMapInitialized(
        CreativeFramework::NotificationManager::ToastHelpers *this)
{
  __int64 *v2; // rsi
  int ActivationFactory; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, _QWORD, __int64 *); // rdi
  HRESULT StringReference; // eax
  int v8; // eax
  wil::details::in1diag3 *v9; // rcx
  HRESULT v10; // eax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, HSTRING *); // rdi
  int v22; // eax
  wil::details::in1diag3 *v23; // rcx
  HRESULT v24; // eax
  wil::details::in1diag3 *v25; // rcx
  LPVOID v26; // rbx
  __int64 (__fastcall *v27)(LPVOID, PCWSTR); // rdi
  PCWSTR StringRawBuffer; // rax
  int v29; // eax
  LPVOID v30; // rbx
  __int64 (__fastcall *v31)(LPVOID, GUID *, char *); // r15
  __int64 v32; // rcx
  int v33; // eax
  LPVOID v34; // rbx
  __int64 (__fastcall *v35)(LPVOID, GUID *, __int64 *); // rdi
  __int64 v36; // rcx
  int v37; // eax
  LPVOID ppv; // [rsp+38h] [rbp-39h] BYREF
  HSTRING v39; // [rsp+40h] [rbp-31h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-29h] BYREF
  __int64 v41; // [rsp+50h] [rbp-21h] BYREF
  __int64 v42; // [rsp+58h] [rbp-19h] BYREF
  int v43; // [rsp+60h] [rbp-11h] BYREF
  __int64 *v44; // [rsp+68h] [rbp-9h] BYREF
  _QWORD v45[2]; // [rsp+70h] [rbp-1h] BYREF
  HSTRING string; // [rsp+80h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp+17h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v45[1] = -2LL;
  v2 = (__int64 *)((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
    return;
  v45[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Internal.StateRepository.PackageFamily", 0x2Eu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_86f5b0ee_9560_4d76_a06a_ca4c8bfe4426, v45);
  v4 = retaddr;
  if ( ActivationFactory < 0 )
    goto LABEL_36;
  v42 = 0LL;
  v5 = v45[0];
  v6 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v45[0] + 128LL);
  v42 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  StringReference = WindowsCreateStringReference(
                      L"Microsoft.Windows.ContentDeliveryManager_cw5n1h2txyewy",
                      0x36u,
                      (HSTRING_HEADER *)&string,
                      (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( StringReference < 0 )
  {
LABEL_37:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)StringReference);
    goto LABEL_38;
  }
  v8 = v6(v5, *(_QWORD *)&hstringHeader.Reserved.Reserved2[16], &v42);
  v9 = retaddr;
  if ( v8 < 0 )
  {
LABEL_38:
    wil::details::in1diag3::Throw_Hr(
      v9,
      (void *)0x179,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_39;
  }
  v44 = 0LL;
  *(_QWORD *)&hstringHeader.Reserved.Reserved2[16] = 0LL;
  v10 = WindowsCreateStringReference(
          L"Windows.Internal.StateRepository.Package",
          0x28u,
          (HSTRING_HEADER *)&string,
          (HSTRING *)&hstringHeader.Reserved.Reserved2[16]);
  if ( v10 < 0 )
  {
LABEL_39:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    goto LABEL_40;
  }
  v11 = RoGetActivationFactory(
          *(_QWORD *)&hstringHeader.Reserved.Reserved2[16],
          &GUID_0450ce77_af0d_40ac_93fd_1e5d48c89419,
          &v44);
  v12 = retaddr;
  if ( v11 < 0 )
  {
LABEL_40:
    wil::details::in1diag3::Throw_Hr(
      v12,
      (void *)0x17B,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v11);
LABEL_41:
    wil::details::in1diag3::Throw_Hr(
      v15,
      (void *)0x17D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v40 = 0LL;
  v13 = *v44;
  v40 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 **))(v13 + 208))(v44, v42, &v40);
  v15 = retaddr;
  if ( v14 < 0 )
    goto LABEL_41;
  v16 = (*(__int64 (__fastcall **)(__int64 *, int *))(*v40 + 56))(v40, &v43);
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x180,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  if ( !v43 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x181,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)0x80070490LL);
    goto LABEL_44;
  }
  v41 = 0LL;
  v17 = *v40;
  v41 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v17 + 48))(v40, 0LL, &v41);
  v19 = retaddr;
  if ( v18 < 0 )
  {
LABEL_44:
    wil::details::in1diag3::Throw_Hr(
      v19,
      (void *)0x183,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v18);
    goto LABEL_45;
  }
  v39 = 0LL;
  v20 = v41;
  v21 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v41 + 176LL);
  WindowsDeleteString(0LL);
  v39 = 0LL;
  v22 = v21(v20, &v39);
  v23 = retaddr;
  if ( v22 < 0 )
  {
LABEL_45:
    wil::details::in1diag3::Throw_Hr(
      v23,
      (void *)0x185,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v22);
LABEL_46:
    wil::details::in1diag3::Throw_Hr(
      v25,
      (void *)0x189,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v24);
    __debugbreak();
  }
  ppv = 0LL;
  v24 = CoCreateInstance(
          &GUID_dbce7e40_7345_439d_b12c_114a11819a09,
          0LL,
          1u,
          &GUID_130a2f65_2be7_4309_9a58_a9052ff2b61c,
          &ppv);
  v25 = retaddr;
  if ( v24 < 0 )
    goto LABEL_46;
  v26 = ppv;
  v27 = *(__int64 (__fastcall **)(LPVOID, PCWSTR))(*(_QWORD *)ppv + 40LL);
  StringRawBuffer = WindowsGetStringRawBuffer(v39, 0LL);
  v29 = v27(v26, StringRawBuffer);
  if ( v29 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v29);
    __debugbreak();
  }
  v30 = ppv;
  v31 = *(__int64 (__fastcall **)(LPVOID, GUID *, char *))(*(_QWORD *)ppv + 72LL);
  v32 = *((_QWORD *)this + 8);
  if ( v32 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
  }
  v33 = v31(v30, &GUID_e3c22b30_8502_4b2f_9133_559674587e51, (char *)this + 64);
  if ( v33 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v33);
    JUMPOUT(0x18009BF72LL);
  }
  v34 = ppv;
  v35 = *(__int64 (__fastcall **)(LPVOID, GUID *, __int64 *))(*(_QWORD *)ppv + 56LL);
  v36 = *v2;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  }
  v37 = v35(v34, &GUID_6e21e72b_b9b0_42ae_a686_983cf784edcd, v2);
  if ( v37 < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)v37);
LABEL_36:
    wil::details::in1diag3::Throw_Hr(
      v4,
      (void *)0x177,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\toasthelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_37;
  }
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  WindowsDeleteString(v39);
  v39 = 0LL;
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  if ( v40 )
    (*(void (__fastcall **)(__int64 *))(*v40 + 16))(v40);
  if ( v44 )
    (*(void (__fastcall **)(__int64 *))(*v44 + 16))(v44);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v45[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v45[0] + 16LL))(v45[0]);
}
