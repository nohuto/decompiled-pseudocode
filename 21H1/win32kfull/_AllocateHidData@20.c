/*
 * XREFs of _AllocateHidData@20 @ 0x14415B
 * Callers:
 *     _EditionPostRawMouseInputMessage@24 @ 0xACE78 (_EditionPostRawMouseInputMessage@24.c)
 *     ?PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z @ 0x143C5D (-PostHidInput@@YGHPAUDEVICEINFO@@PAUtagQ@@PAUtagWND@@I@Z.c)
 *     ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5 (-PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DA.c)
 *     ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA (-PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 */

_DWORD *__fastcall AllocateHidData(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int v6; // esi
  int v7; // eax
  _DWORD *v8; // eax
  int v9; // edx
  _DWORD *v10; // esi
  int v11; // eax
  unsigned int v13; // [esp+0h] [ebp-14h]
  unsigned int v14; // [esp+0h] [ebp-14h]
  unsigned int *v15; // [esp+4h] [ebp-10h]
  unsigned int *v16; // [esp+4h] [ebp-10h]
  unsigned int v18; // [esp+10h] [ebp-4h] BYREF

  v18 = 0;
  if ( a5 )
  {
    v6 = *(_DWORD *)(a5 + 8);
  }
  else
  {
    v7 = *(_DWORD *)(_gpqForeground + 64);
    if ( v7 )
      v6 = *(_DWORD *)(v7 + 8);
    else
      v6 = *(_DWORD *)(_gpqForeground + 52);
  }
  if ( (ULongAdd(32, a3, (int *)&v18, v13, v15) & 0x80000000) != 0
    || (ULongAdd(16, a3, (int *)&a3, v14, v16) & 0x80000000) != 0 )
  {
    return 0;
  }
  v8 = (_DWORD *)HMAllocObject(v6, 0, 18, v18);
  v10 = v8;
  if ( v8 )
  {
    v8[3] = 0;
    HMAssignmentLock(v8 + 3, v9);
    v10[5] = a3;
    v10[6] = a1;
    v11 = a4;
    v10[4] = a2;
    v10[7] = v11;
  }
  return v10;
}
