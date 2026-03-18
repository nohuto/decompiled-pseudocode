/*
 * XREFs of ?PwndFromHDC@@YGPAUtagWND@@QAUHDC__@@@Z @ 0x9A796
 * Callers:
 *     __WindowFromDC@4 @ 0x9A764 (__WindowFromDC@4.c)
 *     _UserGetHwnd@16 @ 0x1542EC (_UserGetHwnd@16.c)
 * Callees:
 *     <none>
 */

struct tagWND *__thiscall PwndFromHDC(void *this)
{
  int v1; // esi
  _DWORD *i; // edx

  v1 = 0;
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    if ( (void *)i[1] == this )
    {
      if ( (i[8] & 0x80C01000) == 0x1000 )
        return (struct tagWND *)i[2];
      return (struct tagWND *)v1;
    }
  }
  return (struct tagWND *)v1;
}
