/*
 * XREFs of ?TurnNavigationOff@ControllerProcessor@@AEAAJXZ @ 0x1801233E4
 * Callers:
 *     ?UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEAUtagPOINT@@@Z @ 0x180123BA0 (-UpdateNavigationState@ControllerProcessor@@AEAAXW4ControllerNavigationTrigger@@PEAUtagRECT@@PEA.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800372E0 (-InternalRelease@-$ComPtr@UIMessageProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180120580 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180120D78 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180121484 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?Remove@InjectionDevice@@QEAAJXZ @ 0x180121D54 (-Remove@InjectionDevice@@QEAAJXZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180122724 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x180123060 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x180123318 (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801237C0 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::TurnNavigationOff(ControllerProcessor *this)
{
  unsigned int v2; // esi
  int *v3; // r14
  _DWORD *v4; // rdi
  int v5; // eax
  int v6; // eax
  int updated; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  struct tagPOINT v12; // [rsp+30h] [rbp-1D8h] BYREF
  _DWORD v13[108]; // [rsp+40h] [rbp-1C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  ControllerProcessor::LiftPressedVirtualKeys(this, 0);
  v2 = 0;
  v3 = (int *)&unk_1801C7A3C;
  v4 = (_DWORD *)((char *)this + 7500);
  *(_QWORD *)((char *)this + 332) = **(_QWORD **)&ControllerProcessor::GetCursorPosition(this, &v12);
  do
  {
    if ( *v4 )
    {
      ControllerProcessor::BuildMouseInputInfo((__int64)this, v13, *v3);
      v5 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v13);
      if ( v5 < 0 )
      {
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          1045LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v5);
        __debugbreak();
      }
    }
    ++v2;
    ++v4;
    v3 += 3;
  }
  while ( v2 < 5 );
  if ( *((_DWORD *)this + 309) )
    ControllerProcessor::TryUpdateInteractionType((__int64)this, 0);
  Microsoft::WRL::ComPtr<IMessageProxy>::InternalRelease((__int64 *)this + 936);
  v6 = InjectionDevice::Remove((ControllerProcessor *)((char *)this + 2808));
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1055LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v6);
    __debugbreak();
  }
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 65), 211, 212, 1);
  ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 64), 213, 214, 1);
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1072LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 37) + 96LL))(*((_QWORD *)this + 37));
  if ( v8 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1074LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 958) + 96LL))(*((_QWORD *)this + 958));
  if ( v9 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1075LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v9);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 959) + 96LL))(*((_QWORD *)this + 959));
  if ( v10 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      1076LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v10);
    __debugbreak();
  }
  return 0LL;
}
