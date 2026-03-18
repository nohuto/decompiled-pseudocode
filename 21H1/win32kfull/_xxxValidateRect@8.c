/*
 * XREFs of _xxxValidateRect@8 @ 0xAD504
 * Callers:
 *     _xxxMoveWindow@24 @ 0x9A1C4 (_xxxMoveWindow@24.c)
 *     _NtUserValidateRect@8 @ 0xAD450 (_NtUserValidateRect@8.c)
 *     _xxxMenuWindowProc@16 @ 0x19AC2A (_xxxMenuWindowProc@16.c)
 * Callees:
 *     _xxxRedrawWindow@16 @ 0x3332A (_xxxRedrawWindow@16.c)
 */

int __fastcall xxxValidateRect(int a1, _DWORD *a2)
{
  if ( a1 )
    return xxxRedrawWindow(a1, a2, 0, 8);
  else
    return xxxRedrawWindow(0, 0, 0, 645);
}
