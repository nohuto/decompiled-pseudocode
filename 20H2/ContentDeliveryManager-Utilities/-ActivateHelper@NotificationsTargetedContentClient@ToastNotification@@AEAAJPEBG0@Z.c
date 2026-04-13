/*
 * XREFs of ?ActivateHelper@NotificationsTargetedContentClient@ToastNotification@@AEAAJPEBG0@Z @ 0x18004BC44
 * Callers:
 *     ?Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_INPUT_DATA@@K@Z @ 0x18004BC10 (-Activate@NotificationsTargetedContentClient@ToastNotification@@UEAAJPEBG0PEBUNOTIFICATION_USER_.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005F38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800187F8 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@1@Z @ 0x18004C0A4 (-GetContentIdAndPath@NotificationsTargetedContentClient@ToastNotification@@AEAAXPEBGAEAV-$basic_.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180050968 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180050E3C (--$WaitForCompletion@PEAU-$IAsyncOperation@PEAVTargetedContentContainer@TargetedContent@Services.c)
 *     __security_check_cookie @ 0x1800CD280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall ToastNotification::NotificationsTargetedContentClient::ActivateHelper(
        ToastNotification::NotificationsTargetedContentClient *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  HSTRING_HEADER *v3; // rax
  int ActivationFactory; // eax
  __int64 v5; // rsi
  __int64 (__fastcall *v6)(__int64, PVOID, __int64 *); // rbx
  void **v7; // rcx
  HSTRING_HEADER *v8; // rax
  int v9; // eax
  wil::details::in1diag3 *v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  wil::details::in1diag3 *v13; // rcx
  __int64 v14; // rbx
  __int64 (__fastcall *v15)(__int64, PVOID, __int64 **); // rdi
  void **v16; // rcx
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  wil::details::in1diag3 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rax
  int v24; // eax
  wil::details::in1diag3 *v25; // rcx
  __int64 v26; // rax
  int v27; // eax
  wil::details::in1diag3 *v28; // rcx
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  const char *v31; // r9
  __int64 result; // rax
  int v33[2]; // [rsp+20h] [rbp-D8h] BYREF
  __int64 v34; // [rsp+28h] [rbp-D0h]
  __int64 v35; // [rsp+30h] [rbp-C8h] BYREF
  __int64 *v36; // [rsp+38h] [rbp-C0h] BYREF
  __int64 *v37; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v38; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v39; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v40; // [rsp+58h] [rbp-A0h] BYREF
  _QWORD v41[2]; // [rsp+60h] [rbp-98h] BYREF
  void **v42; // [rsp+70h] [rbp-88h] BYREF
  __int64 v43; // [rsp+80h] [rbp-78h]
  unsigned __int64 v44; // [rsp+88h] [rbp-70h]
  void *v45[3]; // [rsp+90h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+A8h] [rbp-50h]
  HSTRING_HEADER v47; // [rsp+B0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+0h]

  v41[1] = -2LL;
  LODWORD(v34) = 0;
  v46 = 7LL;
  v45[2] = 0LL;
  LOWORD(v45[0]) = 0;
  v44 = 7LL;
  v43 = 0LL;
  LOWORD(v42) = 0;
  try
  {
    ToastNotification::NotificationsTargetedContentClient::GetContentIdAndPath();
    *(_QWORD *)v33 = L"Windows.Services.TargetedContent.TargetedContentContainer";
    LODWORD(v34) = 1;
    v40 = 0LL;
    v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)v33);
    ActivationFactory = RoGetActivationFactory(
                          v3[1].Reserved.Reserved1,
                          &GUID_5b47e7fb_2140_4c1f_a736_c59583f227d8,
                          &v40);
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x661,
        (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
        (const char *)(unsigned int)ActivationFactory);
    }
    else
    {
      v5 = v40;
      v40 = 0LL;
      v34 = v5;
      v39 = 0LL;
      v6 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v5 + 48LL);
      v39 = 0LL;
      v7 = (void **)&v42;
      if ( v44 >= 8 )
        v7 = v42;
      *(_QWORD *)v33 = v7;
      v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)v33);
      v9 = v6(v5, v8[1].Reserved.Reserved1, &v39);
      v10 = retaddr;
      if ( v9 >= 0 )
      {
        v41[0] = 0LL;
        v11 = v39;
        v12 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<Windows::Services::TargetedContent::TargetedContentContainer *> *>(v39);
        if ( v12 >= 0 )
          v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v11 + 64LL))(v11, v41);
        v13 = retaddr;
        if ( v12 >= 0 )
        {
          v38 = 0LL;
          v14 = v41[0];
          v15 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 **))(*(_QWORD *)v41[0] + 80LL);
          v38 = 0LL;
          v16 = v45;
          if ( v46 >= 8 )
            v16 = (void **)v45[0];
          *(_QWORD *)v33 = v16;
          v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v47, (const WCHAR **)v33);
          v18 = v15(v14, v17[1].Reserved.Reserved1, &v38);
          v19 = retaddr;
          if ( v18 >= 0 )
          {
            v37 = 0LL;
            v20 = *v38;
            v37 = 0LL;
            v21 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v20 + 72))(v38, &v37);
            v22 = retaddr;
            if ( v21 >= 0 )
            {
              v36 = 0LL;
              v23 = *v37;
              v36 = 0LL;
              v24 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(v23 + 112))(v37, &v36);
              v25 = retaddr;
              if ( v24 >= 0 )
              {
                v35 = 0LL;
                v26 = *v36;
                v35 = 0LL;
                v27 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v26 + 48))(v36, &v35);
                v28 = retaddr;
                if ( v27 >= 0 )
                {
                  v29 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v35);
                  v30 = retaddr;
                  if ( v29 >= 0 )
                  {
                    if ( v35 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16LL))(v35);
                    if ( v36 )
                      (*(void (__fastcall **)(__int64 *))(*v36 + 16))(v36);
                    if ( v37 )
                      (*(void (__fastcall **)(__int64 *))(*v37 + 16))(v37);
                    if ( v38 )
                      (*(void (__fastcall **)(__int64 *))(*v38 + 16))(v38);
                    if ( v41[0] )
                      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v41[0] + 16LL))(v41[0]);
                    if ( v39 )
                      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
                    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
                    if ( v44 >= 8 )
                      operator delete(v42);
                    v44 = 7LL;
                    v43 = 0LL;
                    LOWORD(v42) = 0;
                    if ( v46 >= 8 )
                      operator delete(v45[0]);
                    return 0LL;
                  }
LABEL_40:
                  wil::details::in1diag3::Throw_Hr(
                    v30,
                    (void *)0x4A,
                    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                    (const char *)(unsigned int)v29);
                  JUMPOUT(0x18004C099LL);
                }
LABEL_39:
                wil::details::in1diag3::Throw_Hr(
                  v28,
                  (void *)0x49,
                  (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                  (const char *)(unsigned int)v27);
                goto LABEL_40;
              }
LABEL_38:
              wil::details::in1diag3::Throw_Hr(
                v25,
                (void *)0x46,
                (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                (const char *)(unsigned int)v24);
              goto LABEL_39;
            }
LABEL_37:
            wil::details::in1diag3::Throw_Hr(
              v22,
              (void *)0x43,
              (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
              (const char *)(unsigned int)v21);
            goto LABEL_38;
          }
LABEL_36:
          wil::details::in1diag3::Throw_Hr(
            v19,
            (void *)0x40,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
            (const char *)(unsigned int)v18);
          goto LABEL_37;
        }
LABEL_35:
        wil::details::in1diag3::Throw_Hr(
          v13,
          (void *)0x3D,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
          (const char *)(unsigned int)v12);
        goto LABEL_36;
      }
    }
    wil::details::in1diag3::Throw_Hr(
      v10,
      (void *)0x3A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_35;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x4E,
                           (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
                           v31);
  }
  return result;
}
