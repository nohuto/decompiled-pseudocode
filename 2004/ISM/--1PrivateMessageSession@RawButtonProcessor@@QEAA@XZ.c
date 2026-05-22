/*
 * XREFs of ??1PrivateMessageSession@RawButtonProcessor@@QEAA@XZ @ 0x180181CF4
 * Callers:
 *     ??_ERawButtonProcessor@@UEAAPEAXI@Z @ 0x180181DA0 (--_ERawButtonProcessor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RawButtonProcessor::PrivateMessageSession::~PrivateMessageSession(
        RawButtonProcessor::PrivateMessageSession *this)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &RawButtonProcessor::PrivateMessageSession::`vftable';
  v6 = 0LL;
  v2 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 1) + 24LL);
  v3 = **v2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_bbba0bd0_9e1a_4ce1_823e_18111b3d0837, &v6);
  if ( v4 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      261LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
      (const char *)(unsigned int)v4);
  (*(void (__fastcall **)(__int64, RawButtonProcessor::PrivateMessageSession *))(*(_QWORD *)v6 + 40LL))(v6, this);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
}
