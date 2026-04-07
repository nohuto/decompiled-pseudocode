/*
 * XREFs of ?DoStackCaptureDirect@@YAXJI@Z @ 0x180055ED0
 * Callers:
 *     ?Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z @ 0x18002BD00 (-Update@CBitmapSource@@AEAAJPEAUHICON__@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DoStackCaptureDirect(int a1, int a2)
{
  PVOID retaddr; // [rsp+0h] [rbp+0h]

  DoStackCapture(a1, a2, retaddr);
}
