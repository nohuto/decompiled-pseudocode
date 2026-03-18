/*
 * XREFs of ?HandleRawInput@@YG?AW4RAW_INPUT_PROCESSING_RESULT@@PAXPAU_KEYBOARD_INPUT_DATA@@PBURAW_INPUT_SUPPLEMENTAL_INFO@@@Z @ 0xB1E22
 * Callers:
 *     _EditionHandleRawInput@40 @ 0xB1D98 (_EditionHandleRawInput@40.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 *     ?Detach@UserAtomicCheck@@QAEXXZ @ 0xAAF2E (-Detach@UserAtomicCheck@@QAEXXZ.c)
 *     _HasRawInputForegroundTarget@4 @ 0xB1EA0 (_HasRawInputForegroundTarget@4.c)
 *     ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5 (-PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DA.c)
 *     ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA (-PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 */

int __fastcall HandleRawInput(struct _RAW_INPUT_FOREGROUND_TARGET *a1, unsigned int a2, int a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // edi
  int v6; // edx
  unsigned int v7; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  unsigned __int16 v12; // ax
  unsigned int v13; // [esp+0h] [ebp-34h]
  int v14; // [esp+4h] [ebp-30h]
  int v15; // [esp+10h] [ebp-24h] BYREF
  int v16; // [esp+14h] [ebp-20h]
  int v17; // [esp+18h] [ebp-1Ch]
  _BYTE v18[8]; // [esp+1Ch] [ebp-18h] BYREF
  int v19; // [esp+24h] [ebp-10h]
  struct _RAW_INPUT_FOREGROUND_TARGET *v20; // [esp+28h] [ebp-Ch]
  unsigned int v21; // [esp+2Ch] [ebp-8h]

  v20 = a1;
  v3 = 0;
  v21 = a2;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v18);
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v4 = HasRawInputForegroundTarget(&v15);
  v5 = v16;
  v19 = v4;
  v6 = *(_DWORD *)(a3 + 20);
  if ( !v6 )
    goto LABEL_2;
  if ( !v4 )
    goto LABEL_9;
  if ( (((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(v16 + 688)) != 0 )
  {
LABEL_2:
    v7 = 0;
    if ( v4 )
    {
      v9 = PostRawKeyboardInputToForeground(
             v20,
             v21,
             *(void **)(a3 + 4),
             (struct _KEYBOARD_INPUT_DATA *)*(unsigned __int16 *)(a3 + 8),
             v13,
             v14);
      v6 = *(_DWORD *)(a3 + 20);
      v7 = v9;
      v5 = v16;
    }
    if ( !v6 )
    {
      if ( _gHidCounters[0] )
        PostRawKeyboardInputToSinks(
          v21,
          *(struct tagHIDDATA **)(a3 + 4),
          (struct _KEYBOARD_INPUT_DATA *)*(unsigned __int16 *)(a3 + 8),
          v7,
          v13,
          v14);
      if ( *(_DWORD *)(a3 + 12) )
        goto LABEL_23;
    }
  }
  if ( v19 )
  {
    if ( *(_DWORD *)(a3 + 16)
      || HasHidTable(v5)
      && (v10 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v5 + 232) + 472) + 52), (v10 & 0x20) != 0)
      && ((((unsigned int)&loc_1FFFFC + 4) & *(_DWORD *)(v5 + 688)) != 0
       || (v11 = *(unsigned __int16 *)(a3 + 8), v11 != 18) && v11 != 9 && !gspwndAltTab)
      && ((v10 & 0x400) == 0 || (v12 = *(_WORD *)(a3 + 8), v12 < 0xA6u) || v12 > 0xB7u) )
    {
LABEL_23:
      v3 = 1;
      UserAtomicCheck::Detach((UserAtomicCheck *)v18);
    }
  }
LABEL_9:
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v18);
  return v3;
}
