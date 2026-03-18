/*
 * XREFs of __InnerGetClassPtr@12 @ 0x47482
 * Callers:
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     _GetClassPtr@12 @ 0x4741E (_GetClassPtr@12.c)
 *     __UnregisterClass@12 @ 0x47C72 (__UnregisterClass@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall _InnerGetClassPtr(__int16 a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // esi
  int v5; // ecx

  if ( !a1 )
    return 0;
  v4 = (_DWORD *)*a2;
  if ( !*a2 )
    return 0;
  while ( 1 )
  {
    v5 = v4[1];
    if ( *(_WORD *)v5 == a1 && (!a3 || *(_WORD *)(v5 + 42) == HIWORD(a3)) && (*(_BYTE *)(v5 + 6) & 4) == 0 )
      break;
    a2 = v4;
    v4 = (_DWORD *)*v4;
    if ( !v4 )
      return 0;
  }
  return a2;
}
