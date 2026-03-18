/*
 * XREFs of _WindowFromCacheDC@4 @ 0x15434A
 * Callers:
 *     __SelectPalette@12 @ 0x9AAF6 (__SelectPalette@12.c)
 *     _xxxRealizePalette@4 @ 0xBF854 (_xxxRealizePalette@4.c)
 * Callees:
 *     <none>
 */

int __thiscall WindowFromCacheDC(void *this)
{
  int v2; // esi
  _DWORD *i; // eax

  v2 = 0;
  GreLockVisRgnShared(*(_DWORD *)(_gpDispInfo + 20));
  for ( i = *(_DWORD **)(_gpDispInfo + 12); i; i = (_DWORD *)*i )
  {
    if ( (void *)i[1] == this )
    {
      if ( (i[8] & 0x400000) == 0 )
        v2 = i[2];
      break;
    }
  }
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v2;
}
