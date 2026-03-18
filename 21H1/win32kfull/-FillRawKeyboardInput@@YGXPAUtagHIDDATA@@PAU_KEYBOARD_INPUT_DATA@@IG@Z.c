/*
 * XREFs of ?FillRawKeyboardInput@@YGXPAUtagHIDDATA@@PAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DB6A
 * Callers:
 *     ?PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DATA@@IG@Z @ 0x16DBC5 (-PostRawKeyboardInputToForeground@@YGHPAU_RAW_INPUT_FOREGROUND_TARGET@@KPAXPAU_KEYBOARD_INPUT_DA.c)
 *     ?PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z @ 0x16DCFA (-PostRawKeyboardInputToSinks@@YGXKPAXPAU_KEYBOARD_INPUT_DATA@@IGH@Z.c)
 * Callees:
 *     <none>
 */

void __userpurge FillRawKeyboardInput(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagHIDDATA *a3,
        struct _KEYBOARD_INPUT_DATA *a4,
        unsigned int a5,
        unsigned __int16 a6)
{
  *(_WORD *)(a2 + 32) = *(_WORD *)(a1 + 2);
  *(_WORD *)(a2 + 34) = *(_WORD *)(a1 + 4);
  *(_WORD *)(a2 + 36) = *(_WORD *)(a1 + 6);
  *(_DWORD *)(a2 + 40) = a3;
  *(_WORD *)(a2 + 38) = (_WORD)a4;
  *(_DWORD *)(a2 + 44) = *(_DWORD *)(a1 + 8);
}
