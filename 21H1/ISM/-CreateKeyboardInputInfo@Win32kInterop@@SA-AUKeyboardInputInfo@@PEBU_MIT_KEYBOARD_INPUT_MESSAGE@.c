/*
 * XREFs of ?CreateKeyboardInputInfo@Win32kInterop@@SA?AUKeyboardInputInfo@@PEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z @ 0x1800AF6C8
 * Callers:
 *     ?CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInputInfo@@@Z @ 0x1800AF5C8 (-CreateKeyboardInputInfo@Win32kInterop@@AEAA_NPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@PEAUKeyboardInput.c)
 *     ?OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z @ 0x1800B5640 (-OnKeyProcessed@KeyboardOverriderDispatcher@@UEAAJ_N@Z.c)
 * Callees:
 *     memcpy_s @ 0x180029C48 (memcpy_s.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180031A9C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18003C460 (memset_0.c)
 */

unsigned __int16 *__fastcall Win32kInterop::CreateKeyboardInputInfo(unsigned __int16 *a1, __int64 a2)
{
  _DWORD *v4; // rax

  memset_0(a1, 0, 0x160uLL);
  *(_DWORD *)a1 = 4;
  v4 = (_DWORD *)(a2 + 344);
  *((_DWORD *)a1 + 6) = 352;
  if ( *(_QWORD *)a2 )
    v4 = (_DWORD *)a2;
  *((_DWORD *)a1 + 1) = *v4;
  *((_QWORD *)a1 + 42) = *(_QWORD *)(a2 + 336);
  a1[172] = *(_WORD *)(a2 + 332);
  *((_DWORD *)a1 + 2) = *(_DWORD *)(a2 + 312);
  *((_QWORD *)a1 + 2) = *(_QWORD *)(a2 + 320);
  *((_BYTE *)a1 + 346) = *(_DWORD *)(a2 + 328) != 0;
  a1[16] = *(_WORD *)(a2 + 8);
  a1[17] = *(_WORD *)(a2 + 10);
  a1[18] = *(_WORD *)(a2 + 12);
  a1[35] = *(_WORD *)(a2 + 270);
  *((_DWORD *)a1 + 82) = *(_DWORD *)(a2 + 272);
  StringCchCopyW(a1 + 19, 0x10uLL, (size_t *)(a2 + 276));
  memcpy_s(a1 + 36, 0x100uLL, (const void *const)(a2 + 14), 0x100uLL);
  return a1;
}
