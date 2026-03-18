/*
 * XREFs of _ImeCheckTopmost@4 @ 0x1C1D4
 * Callers:
 *     _NtUserSetImeOwnerWindow@8 @ 0x1C12C (_NtUserSetImeOwnerWindow@8.c)
 *     _zzzImeCanDestroyDefIME@8 @ 0x1D148 (_zzzImeCanDestroyDefIME@8.c)
 * Callees:
 *     _ImeSetTopmost@12 @ 0x1C212 (_ImeSetTopmost@12.c)
 */

int __thiscall ImeCheckTopmost(_DWORD *this)
{
  int v1; // esi
  int result; // eax

  v1 = this[16];
  if ( v1 )
    return ImeSetTopmost(_gptiForeground != this[2] ? v1 : 0);
  return result;
}
