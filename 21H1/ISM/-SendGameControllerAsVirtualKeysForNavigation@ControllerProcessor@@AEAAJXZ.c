/*
 * XREFs of ?SendGameControllerAsVirtualKeysForNavigation@ControllerProcessor@@AEAAJXZ @ 0x180122568
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180121780 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z @ 0x180120CD4 (-GetControllerVirtualKeyMappingFor@ControllerProcessor@@SAGW4GameInputGamepadButtons@@@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180122C1C (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180123820 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsVirtualKeysForNavigation(ControllerProcessor *this)
{
  int v1; // eax
  bool v3; // bl
  __int64 v4; // rcx
  unsigned __int16 ControllerVirtualKeyMappingFor; // ax
  unsigned __int16 v6; // dx
  int v7; // r8d
  bool v8; // bl
  __int64 v9; // rcx
  unsigned __int16 v10; // ax
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 44);
  if ( (v1 & 0x40000) != 0 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 45) & 2) != 0, 0);
    v3 = (*((_DWORD *)this + 45) & 8) != 0;
    ControllerVirtualKeyMappingFor = ControllerProcessor::GetControllerVirtualKeyMappingFor(v4);
    ControllerProcessor::SetVirtualKeyState(this, ControllerVirtualKeyMappingFor, v3, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 45) & 0x20) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 45) & 0x400) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC7u, (*((_DWORD *)this + 45) & 0x800) != 0, 0);
    if ( (*((_BYTE *)this + 328) & 0x40) == 0 )
      goto LABEL_7;
    ControllerProcessor::SetVirtualKeyState(this, 0x26u, (*((_DWORD *)this + 45) & 0x40) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0x28u, (*((_DWORD *)this + 45) & 0x80) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0x25u, *((_DWORD *)this + 45) & 0x100, 0);
    v6 = 39;
    v7 = *((_DWORD *)this + 45) >> 9;
  }
  else
  {
    if ( (v1 & 0x1000000) == 0 )
      return 0LL;
    ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 52) & 2) != 0, 0);
    v8 = (*((_DWORD *)this + 52) & 8) != 0;
    v10 = ControllerProcessor::GetControllerVirtualKeyMappingFor(v9);
    ControllerProcessor::SetVirtualKeyState(this, v10, v8, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 52) & 0x200) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 52) & 0x4000) != 0, 0);
    v6 = 199;
    v7 = *((_DWORD *)this + 52) >> 15;
  }
  ControllerProcessor::SetVirtualKeyState(this, v6, v7 & 1, 0);
LABEL_7:
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2339LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  return 0LL;
}
