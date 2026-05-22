/*
 * XREFs of ?InvalidateKeyboardModifiers@KeyboardProcessor@@AEAAJXZ @ 0x18013505C
 * Callers:
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801351F0 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800357E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x1801369BC (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 */

__int64 __fastcall KeyboardProcessor::InvalidateKeyboardModifiers(KeyboardProcessor *this)
{
  int v1; // eax
  int updated; // edi
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_DWORD *)this + 14);
  if ( (v1 & 1) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 1LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 109LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v4,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\keyboard\\lib\\keyboardprocessor.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    *((_DWORD *)this + 14) &= ~1u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 2) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 2LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 117LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~2u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 4) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 4LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 125LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~4u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 8) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 8LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 133LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~8u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x10) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 16LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 141LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x10u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x20) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 32LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 149LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x20u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x40) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 64LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 157LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x40u;
    v1 = *((_DWORD *)this + 14);
  }
  if ( (v1 & 0x80u) != 0 )
  {
    updated = KeyboardModifierState::UpdateKeyModifierArray(*((_QWORD *)this + 6), 128LL, 0LL);
    if ( updated < 0 )
    {
      v4 = 165LL;
      goto LABEL_4;
    }
    *((_DWORD *)this + 14) &= ~0x80u;
  }
  return 0LL;
}
