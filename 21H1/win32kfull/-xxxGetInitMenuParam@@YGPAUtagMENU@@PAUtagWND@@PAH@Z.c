/*
 * XREFs of ?xxxGetInitMenuParam@@YGPAUtagMENU@@PAUtagWND@@PAH@Z @ 0x184349
 * Callers:
 *     _xxxMNStartMenu@12 @ 0x1849EF (_xxxMNStartMenu@12.c)
 * Callees:
 *     <none>
 */

struct tagMENU *__fastcall xxxGetInitMenuParam(_DWORD *a1, _DWORD *a2)
{
  char v3; // al
  int v4; // ecx

  v3 = *(_BYTE *)(a1[5] + 23);
  if ( (v3 & 0x20) != 0 || (v3 & 0xC0) == 0x40 || (v4 = a1[23]) == 0 || !*(_DWORD *)(*(_DWORD *)(v4 + 20) + 24) )
  {
    if ( a2 )
      *a2 = 1;
    return (struct tagMENU *)xxxGetSysMenu(a1, 0);
  }
  else
  {
    if ( a2 )
    {
      *a2 = 0;
      return (struct tagMENU *)a1[23];
    }
    return (struct tagMENU *)v4;
  }
}
