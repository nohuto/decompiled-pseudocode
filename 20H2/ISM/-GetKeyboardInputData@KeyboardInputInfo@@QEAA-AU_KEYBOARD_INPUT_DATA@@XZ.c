/*
 * XREFs of ?GetKeyboardInputData@KeyboardInputInfo@@QEAA?AU_KEYBOARD_INPUT_DATA@@XZ @ 0x1801018C4
 * Callers:
 *     ?OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180101930 (-OnInput@InputServiceProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRes.c)
 *     ?OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x18017BE60 (-OnInput@GameInputProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 *     ?OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z @ 0x180180E9C (-OnInput@VirtualHotKeyTracker@@QEAAJPEAUKeyboardInputInfo@@U_GUID@@AEBUHotKeyDetectionResult@@@Z.c)
 * Callees:
 *     <none>
 */

struct _KEYBOARD_INPUT_DATA *__fastcall KeyboardInputInfo::GetKeyboardInputData(
        KeyboardInputInfo *this,
        struct _KEYBOARD_INPUT_DATA *__return_ptr retstr)
{
  USHORT v2; // r8
  USHORT v3; // ax
  USHORT v4; // ax

  retstr->Reserved = 0;
  v2 = *((_WORD *)this + 35);
  retstr->UnitId = *((_WORD *)this + 16);
  retstr->ExtraInformation = *((_DWORD *)this + 82);
  retstr->Flags = v2;
  if ( (v2 & 0x40) != 0 )
  {
    v3 = *((_WORD *)this + 18);
LABEL_7:
    retstr->MakeCode = v3;
    return retstr;
  }
  v4 = *((_WORD *)this + 17);
  retstr->MakeCode = v4;
  if ( (v2 & 2) != 0 )
  {
    v4 |= 0xE000u;
    retstr->MakeCode = v4;
  }
  if ( (v2 & 4) != 0 )
  {
    v3 = v4 | 0xE100;
    goto LABEL_7;
  }
  return retstr;
}
