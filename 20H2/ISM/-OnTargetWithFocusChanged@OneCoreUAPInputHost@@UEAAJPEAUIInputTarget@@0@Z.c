/*
 * XREFs of ?OnTargetWithFocusChanged@OneCoreUAPInputHost@@UEAAJPEAUIInputTarget@@0@Z @ 0x18000AD20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EF94 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnTargetWithFocusChanged@Win32kInterop@@QEAAXPEAUIInputTarget@@0@Z @ 0x18004191C (-OnTargetWithFocusChanged@Win32kInterop@@QEAAXPEAUIInputTarget@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall OneCoreUAPInputHost::OnTargetWithFocusChanged(
        OneCoreUAPInputHost *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  int (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 i; // rdi
  __int64 v13; // rcx
  int v14; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v6 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 5);
  if ( v6 )
  {
    v16 = 0LL;
    if ( (**v6)(v6, &GUID_18f2e21a_ceea_4596_9fd8_326464016a35, &v16) >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
             v16,
             a2,
             a3);
      v8 = v7;
      if ( v7 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x103,
          (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
          (const char *)(unsigned int)v7,
          v14);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v16);
        return v8;
      }
    }
    v10 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  v11 = *((_QWORD *)this + 6);
  for ( i = *((_QWORD *)this + 7); v11 != i; v11 += 24LL )
  {
    v16 = 0LL;
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 16))(
           *(_QWORD *)(v11 + 16),
           &GUID_18f2e21a_ceea_4596_9fd8_326464016a35,
           &v16) >= 0 )
      (*(void (__fastcall **)(__int64, struct IInputTarget *, struct IInputTarget *))(*(_QWORD *)v16 + 24LL))(
        v16,
        a2,
        a3);
    v13 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  Win32kInterop::OnTargetWithFocusChanged(*((Win32kInterop **)this + 10), a2, a3);
  return 0LL;
}
