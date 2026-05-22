/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x18011FFE8
 * Callers:
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180121024 (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801211B0 (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180121938 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180122A0C (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x180122AC4 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180028040 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     __security_check_cookie @ 0x18003C4E0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E44C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800BBC1C (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x180120E00 (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  int v7; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h]
  __int16 v13; // [rsp+54h] [rbp-ACh]
  __int16 v14; // [rsp+76h] [rbp-8Ah]
  __int64 v15; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v10, 0, 0x160uLL);
  v11 = PerformanceCount;
  v15 = *((_QWORD *)this + 38);
  v14 = 64;
  v12 = 352;
  v10[0] = 4;
  v10[2] = TickCount;
  v13 = a2;
  if ( !a3 )
    v14 = 65;
  if ( a2 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
  {
    v7 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5928), (struct InputInfo *)v10);
    if ( v7 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        2032LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7);
      __debugbreak();
    }
  }
  return 0LL;
}
