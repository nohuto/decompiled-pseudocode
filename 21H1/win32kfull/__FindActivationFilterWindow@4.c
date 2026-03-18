/*
 * XREFs of __FindActivationFilterWindow@4 @ 0x718AC
 * Callers:
 *     __SetActivationFilter@8 @ 0x119D2 (__SetActivationFilter@8.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall _FindActivationFilterWindow(_DWORD *this)
{
  int v1; // esi
  int v2; // edx
  _DWORD *v3; // esi
  _DWORD *i; // eax

  v1 = this[3];
  v2 = 0;
  if ( v1 )
  {
    v3 = (_DWORD *)(v1 + 192);
    for ( i = (_DWORD *)*v3; i != v3; i = (_DWORD *)*i )
    {
      if ( (_DWORD *)i[2] == this )
        return i;
    }
  }
  return (_DWORD *)v2;
}
