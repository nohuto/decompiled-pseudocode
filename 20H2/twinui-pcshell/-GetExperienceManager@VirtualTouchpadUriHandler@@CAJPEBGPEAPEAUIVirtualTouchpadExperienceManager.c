/*
 * XREFs of ?GetExperienceManager@VirtualTouchpadUriHandler@@CAJPEBGPEAPEAUIVirtualTouchpadExperienceManager@Experience@Shell@Internal@Windows@@@Z @ 0x180329568
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x180329350 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18002753C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualTouchpadUriHandler::GetExperienceManager(
        const unsigned __int16 *a1,
        struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **a2)
{
  HRESULT Instance; // eax
  unsigned int v4; // ebx
  LPVOID v5; // rbx
  int v6; // eax
  __int64 v7; // rbx
  unsigned int v8; // r8d
  HSTRING_HEADER *v9; // rax
  int v10; // eax
  __int64 v11; // rdx
  __int64 (__fastcall ***v13)(_QWORD, GUID *, struct Windows::Internal::Shell::Experience::IVirtualTouchpadExperienceManager **); // [rsp+30h] [rbp-9h] BYREF
  __int64 v14; // [rsp+38h] [rbp-1h] BYREF
  LPVOID ppv[2]; // [rsp+40h] [rbp+7h] BYREF
  const WCHAR *v16; // [rsp+50h] [rbp+17h] BYREF
  HSTRING_HEADER v17; // [rsp+60h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  *a2 = 0LL;
  ppv[0] = 0LL;
  v16 = L"Windows.Internal.ShellExperience.VirtualTouchpad";
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  Instance = CoCreateInstance(
               &GUID_c2f03a33_21f5_47fa_b4bb_156362a2f239,
               0LL,
               0x404u,
               &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
               ppv);
  v4 = Instance;
  if ( Instance >= 0 )
  {
    v14 = 0LL;
    v5 = ppv[0];
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
    v6 = (*(__int64 (__fastcall **)(LPVOID, void *, GUID *, __int64 *))(*(_QWORD *)v5 + 24LL))(
           v5,
           &unk_18053C020,
           &GUID_2e8fcb18_a0ee_41ad_8ef8_77fb3a370ca5,
           &v14);
    v4 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5F,
        (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
        (const char *)(unsigned int)v6);
LABEL_12:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v14);
      goto LABEL_13;
    }
    v13 = 0LL;
    v7 = v14;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    v9 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v16, v8);
    v10 = (*(__int64 (__fastcall **)(__int64, PVOID, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, v9[1].Reserved.Reserved1, &v13);
    v4 = v10;
    if ( v10 >= 0 )
    {
      v10 = (**v13)(v13, &GUID_17c4ec91_62df_486d_aa0d_6a11c725e414, a2);
      v4 = v10;
      if ( v10 >= 0 )
      {
        v4 = 0;
        goto LABEL_11;
      }
      v11 = 99LL;
    }
    else
    {
      v11 = 98LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
      (const char *)(unsigned int)v10);
LABEL_11:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
    goto LABEL_12;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x5C,
    (__int64)"pcshell\\twinui\\virtualtouchpadurihandler\\lib\\virtualtouchpadurihandler.cpp",
    (const char *)(unsigned int)Instance);
LABEL_13:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)ppv);
  return v4;
}
