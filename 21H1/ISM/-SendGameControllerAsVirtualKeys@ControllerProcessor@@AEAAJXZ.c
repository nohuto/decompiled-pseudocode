/*
 * XREFs of ?SendGameControllerAsVirtualKeys@ControllerProcessor@@AEAAJXZ @ 0x18012206C
 * Callers:
 *     ?OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180121780 (-OnInputReport@ControllerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z @ 0x180122C1C (-SetVirtualKeyState@ControllerProcessor@@AEAAXG_N0@Z.c)
 *     ?TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z @ 0x1801230C0 (-TestThumbstickAxisAndSetVirtualKeyState@ControllerProcessor@@AEAAXMGG_N@Z.c)
 *     ?TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z @ 0x180123168 (-TestTriggerAndSetVirtualKeyState@ControllerProcessor@@AEAAXMG@Z.c)
 *     ?UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180123820 (-UpdateAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 */

__int64 __fastcall ControllerProcessor::SendGameControllerAsVirtualKeys(ControllerProcessor *this)
{
  int v1; // eax
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = *((_DWORD *)this + 44);
  if ( (v1 & 0x40000) != 0 )
  {
    ControllerProcessor::SetVirtualKeyState(this, 0xCFu, *((_BYTE *)this + 180) & 1, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 45) & 2) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC3u, (*((_DWORD *)this + 45) & 4) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC4u, (*((_DWORD *)this + 45) & 8) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC5u, (*((_DWORD *)this + 45) & 0x10) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 45) & 0x20) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCBu, (*((_DWORD *)this + 45) & 0x40) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCCu, (*((_DWORD *)this + 45) & 0x80) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCDu, *((_DWORD *)this + 45) & 0x100, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCEu, (*((_DWORD *)this + 45) & 0x200) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 45) & 0x400) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC7u, (*((_DWORD *)this + 45) & 0x800) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD1u, (*((_DWORD *)this + 45) & 0x1000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD2u, (*((_DWORD *)this + 45) & 0x2000) != 0, 0);
    ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, *((float *)this + 46), 0xC9u);
    ControllerProcessor::TestTriggerAndSetVirtualKeyState(this, *((float *)this + 47), 0xCAu);
    ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 49), 0xD3u, 0xD4u, 0);
    ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 48), 0xD5u, 0xD6u, 0);
    ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 51), 0xD7u, 0xD8u, 0);
    ControllerProcessor::TestThumbstickAxisAndSetVirtualKeyState(this, *((float *)this + 50), 0xD9u, 0xDAu, 0);
  }
  else
  {
    if ( (v1 & 0x1000000) == 0 )
      return 0LL;
    ControllerProcessor::SetVirtualKeyState(this, 0xCFu, *((_BYTE *)this + 208) & 1, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD0u, (*((_DWORD *)this + 52) & 2) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC3u, (*((_DWORD *)this + 52) & 4) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC4u, (*((_DWORD *)this + 52) & 8) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCBu, (*((_DWORD *)this + 52) & 0x10) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCCu, (*((_DWORD *)this + 52) & 0x20) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCDu, (*((_DWORD *)this + 52) & 0x40) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCEu, (*((_DWORD *)this + 52) & 0x80) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC5u, *((_DWORD *)this + 52) & 0x100, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC6u, (*((_DWORD *)this + 52) & 0x200) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD1u, (*((_DWORD *)this + 52) & 0x400) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD2u, (*((_DWORD *)this + 52) & 0x800) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC9u, (*((_DWORD *)this + 52) & 0x1000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xCAu, (*((_DWORD *)this + 52) & 0x2000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC8u, (*((_DWORD *)this + 52) & 0x4000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xC7u, (*((_DWORD *)this + 52) & 0x8000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD7u, *((_BYTE *)this + 210) & 1, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD8u, (*((_DWORD *)this + 52) & 0x20000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xDAu, (*((_DWORD *)this + 52) & 0x40000) != 0, 0);
    ControllerProcessor::SetVirtualKeyState(this, 0xD9u, (*((_DWORD *)this + 52) & 0x80000) != 0, 0);
  }
  updated = ControllerProcessor::UpdateAutoRepeatTimer(this);
  if ( updated < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      2240LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)updated);
    __debugbreak();
  }
  return 0LL;
}
