/*
 * XREFs of _MapServerToClientPfn@8 @ 0xEB49C
 * Callers:
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

int __fastcall MapServerToClientPfn(int a1, int a2)
{
  int v2; // esi

  v2 = 666;
  while ( a1 != *(_DWORD *)(_gpsi + 4 * (v2 & 0xFFFF3FFF) - 2528) )
  {
    if ( ++v2 > 672 )
      return 0;
  }
  if ( a2 )
    return *(_DWORD *)(_gpsi + 4 * v2 - 2436);
  else
    return *(_DWORD *)(_gpsi + 4 * v2 - 2340);
}
