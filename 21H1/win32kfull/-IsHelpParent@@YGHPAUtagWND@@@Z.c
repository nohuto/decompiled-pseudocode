/*
 * XREFs of ?IsHelpParent@@YGHPAUtagWND@@@Z @ 0x1B9872
 * Callers:
 *     _xxxHelpLoop@4 @ 0x1AC7AC (_xxxHelpLoop@4.c)
 *     ?EnumPwndDlgChildProc@@YGHPAUtagWND@@J@Z @ 0x1B982C (-EnumPwndDlgChildProc@@YGHPAUtagWND@@J@Z.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall IsHelpParent(_DWORD *this)
{
  BOOL result; // eax
  _BYTE *v2; // eax

  result = 0;
  if ( this )
  {
    v2 = (_BYTE *)this[5];
    if ( (v2[18] & 1) != 0
      || (v2[10] & 1) != 0
      || (v2[20] & 0xF) == 7 && *(_WORD *)(_gpsi + 468) == *(_WORD *)(*(_DWORD *)(this[19] + 4) + 2) )
    {
      return 1;
    }
  }
  return result;
}
