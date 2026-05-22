/*
 * XREFs of ?Initialize@SystemCursorService@@QEAAJXZ @ 0x18013FF80
 * Callers:
 *     ?EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x18013CD50 (-EnsureServiceAndRegisterClient@SystemCursorController@@MEAAJPEAVBamoSystemCursorControllerStub@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C480 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18007FA2C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x180186FAC (-Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICurso.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorService::Initialize(SystemCursorService *this)
{
  __int64 v2; // r8
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rbx
  int ActivationFactory; // eax
  __int64 (__fastcall ***v7)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v8)(_QWORD, GUID *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD, GUID *, char *); // rdi
  __int64 v13; // rsi
  __int64 (__fastcall *v14)(__int64, char *); // rdi
  __int64 v16; // [rsp+30h] [rbp-40h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 3);
  v3 = CursorManager::Create(this, *((unsigned int *)this + 32), v2, (char *)this + 24);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v17 = 0LL;
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.UI.Composition.Compositor",
      0x22u,
      0x21u);
    v5 = v19;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
    ActivationFactory = RoGetActivationFactory(v5, &GUID_00000035_0000_0000_c000_000000000046, &v17);
    v4 = ActivationFactory;
    if ( ActivationFactory < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\sy"
                 "stemcursorservice.cpp",
        (const char *)(unsigned int)ActivationFactory);
LABEL_14:
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v17);
      return v4;
    }
    v16 = 0LL;
    v7 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v17;
    v8 = **v17;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
    v9 = v8(v7, &GUID_22118adf_23f1_4801_bcfa_66cbf48cc51b, &v16);
    v4 = v9;
    if ( v9 >= 0 )
    {
      v11 = v16;
      v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, char *))(*(_QWORD *)v16 + 48LL);
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 17);
      v9 = v12(v11, 0LL, 0LL, &GUID_b403ca50_7f8c_4e83_985f_cc45060036d8, (char *)this + 136);
      v4 = v9;
      if ( v9 >= 0 )
      {
        v13 = *((_QWORD *)this + 17);
        v14 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 72LL);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 18);
        v9 = v14(v13, (char *)this + 144);
        v4 = v9;
        if ( v9 >= 0 )
        {
          v4 = 0;
          goto LABEL_13;
        }
        v10 = 50LL;
      }
      else
      {
        v10 = 43LL;
      }
    }
    else
    {
      v10 = 38LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\syst"
               "emcursorservice.cpp",
      (const char *)(unsigned int)v9);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1F,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\system"
             "cursorservice.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
