/*
 * XREFs of ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180138540
 * Callers:
 *     <none>
 * Callees:
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x18000DAF4 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800356A8 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::InputHostSupportedInputUpdate(
        _QWORD *a1,
        _DWORD *a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 appended; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // r11
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 i; // r10
  __int64 v16; // rax
  __int64 *v17; // r10
  __int64 v18; // r10
  __int64 (__fastcall ***v19)(_QWORD, GUID *, unsigned __int8 *); // rdi
  __int64 (__fastcall *v20)(_QWORD, GUID *, unsigned __int8 *); // rbx
  int v21; // eax
  int v22; // eax
  __int64 v23; // rbx
  __int64 (__fastcall *v24)(__int64, GUID *, unsigned __int8 *); // rdi
  int v25; // eax
  unsigned __int8 v27[8]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 v28[8]; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]

  *(_DWORD *)v27 = *a2;
  *(_DWORD *)v28 = a2[1];
  appended = std::_Fnv1a_append_bytes((__int64)a1, v28, 4uLL);
  v10 = std::_Fnv1a_append_bytes(v8, v27, v9);
  v12 = a1[7];
  v13 = a1[5];
  v14 = 2 * (a1[10] & (v10 ^ appended));
  for ( i = *(_QWORD *)(v12 + 8 * v14); ; i = *v17 )
  {
    v16 = *(_QWORD *)(v12 + 8 * v14) == v13 ? v13 : **(_QWORD **)(v12 + 8 * v14 + 8);
    if ( i == v16 )
      break;
    if ( operator==(i + 16, v11) )
    {
      if ( operator==(v11, (__int64)(v17 + 2)) )
        v13 = v18;
      break;
    }
  }
  if ( v13 != a1[5] )
  {
    v19 = *(__int64 (__fastcall ****)(_QWORD, GUID *, unsigned __int8 *))(v13 + 56);
    *(_QWORD *)v27 = 0LL;
    v20 = **v19;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v27);
    v21 = v20(v19, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, v27);
    if ( v21 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        833LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v21);
      __debugbreak();
    }
    v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)v27 + 24LL))(*(_QWORD *)v27, a3, a4);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        835LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
    v23 = *(_QWORD *)v27;
    *(_QWORD *)v28 = 0LL;
    v24 = ***(__int64 (__fastcall ****)(__int64, GUID *, unsigned __int8 *))v27;
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v28);
    v25 = v24(v23, &GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f, v28);
    if ( v25 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        838LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
        (const char *)(unsigned int)v25);
      __debugbreak();
    }
    (*(void (__fastcall **)(_QWORD *, _QWORD))(*(a1 - 6) + 104LL))(a1 - 6, *(_QWORD *)v28);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v28);
    Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)v27);
  }
  return 0LL;
}
