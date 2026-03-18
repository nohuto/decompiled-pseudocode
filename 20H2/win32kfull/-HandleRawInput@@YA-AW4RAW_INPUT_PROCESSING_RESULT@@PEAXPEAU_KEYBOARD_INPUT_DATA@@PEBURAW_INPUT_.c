/*
 * XREFs of ?HandleRawInput@@YA?AW4RAW_INPUT_PROCESSING_RESULT@@PEAXPEAU_KEYBOARD_INPUT_DATA@@PEBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0x1C00BDB18
 * Callers:
 *     EditionHandleRawInput @ 0x1C00BDA50 (EditionHandleRawInput.c)
 * Callees:
 *     ?PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x1C00026F8 (-PostRawKeyboardInputToForeground@@YAHPEAU_RAW_INPUT_FOREGROUND_TARGET@@KPEAXPEAU_KEYBOARD_INPUT.c)
 *     ?PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x1C00028FC (-PostRawKeyboardInputToSinks@@YAXKPEAXPEAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     HasRawInputForegroundTarget @ 0x1C00BDC54 (HasRawInputForegroundTarget.c)
 *     ?Detach@UserAtomicCheck@@QEAAXXZ @ 0x1C00C08F4 (-Detach@UserAtomicCheck@@QEAAXXZ.c)
 *     HasHidTable @ 0x1C00D5400 (HasHidTable.c)
 */

__int64 __fastcall HandleRawInput(void *a1, struct _KEYBOARD_INPUT_DATA *a2, __int64 a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // ebp
  __int64 v10; // rsi
  int v11; // ecx
  int v13; // eax
  int v14; // edx
  __int16 v15; // ax
  __int128 v16; // [rsp+30h] [rbp-38h] BYREF
  __int64 v17; // [rsp+40h] [rbp-28h]
  char v18; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v18);
  v16 = 0LL;
  v17 = 0LL;
  v7 = HasRawInputForegroundTarget(&v16);
  v8 = *(_DWORD *)(a3 + 20);
  v9 = v7;
  v10 = *((_QWORD *)&v16 + 1);
  if ( !v8 )
    goto LABEL_2;
  if ( !v7 )
    goto LABEL_9;
  if ( (*(_DWORD *)(*((_QWORD *)&v16 + 1) + 1232LL) & 0x200000) != 0 )
  {
LABEL_2:
    v11 = 0;
    if ( v7 )
    {
      v13 = PostRawKeyboardInputToForeground(
              (struct _RAW_INPUT_FOREGROUND_TARGET *)&v16,
              *(_DWORD *)a3,
              a1,
              a2,
              *(_DWORD *)(a3 + 4),
              *(_WORD *)(a3 + 8));
      v8 = *(_DWORD *)(a3 + 20);
      v11 = v13;
      v10 = *((_QWORD *)&v16 + 1);
    }
    if ( !v8 )
    {
      if ( gHidCounters[0] )
        PostRawKeyboardInputToSinks(*(_DWORD *)a3, a1, a2, *(_DWORD *)(a3 + 4), *(_WORD *)(a3 + 8), v11);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_24;
    }
  }
  if ( v9 )
  {
    if ( *(_DWORD *)(a3 + 16)
      || (unsigned int)HasHidTable(v10)
      && (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 424) + 832LL) + 100LL), (v14 & 0x20) != 0)
      && ((*(_DWORD *)(v10 + 1232) & 0x200000) != 0 || (v15 = *(_WORD *)(a3 + 8), v15 != 18)
                                                    && v15 != 9
                                                    && !gspwndAltTab)
      && ((v14 & 0x400) == 0 || (unsigned __int16)(*(_WORD *)(a3 + 8) - 166) > 0x11u) )
    {
LABEL_24:
      v6 = 1;
      UserAtomicCheck::Detach((UserAtomicCheck *)&v18);
    }
  }
LABEL_9:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v18);
  return v6;
}
