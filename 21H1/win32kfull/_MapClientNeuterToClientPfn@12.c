/*
 * XREFs of _MapClientNeuterToClientPfn@12 @ 0x807E4
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxSetWindowData@16 @ 0x3F3F0 (_xxxSetWindowData@16.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 * Callees:
 *     <none>
 */

int __fastcall MapClientNeuterToClientPfn(int a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax

  v3 = *(_DWORD *)(a1 + 4);
  if ( !a2 )
    a2 = *(_DWORD *)(v3 + 24);
  v4 = *(unsigned __int16 *)(v3 + 4);
  if ( (unsigned __int16)v4 >= 0x2A1u && (unsigned __int16)v4 <= 0x2AAu )
  {
    if ( a3 )
    {
      if ( *(_DWORD *)(_gpsi + 4 * v4 - 2340) == a2 )
        return *(_DWORD *)(_gpsi + 4 * v4 - 2436);
    }
    else if ( *(_DWORD *)(_gpsi + 4 * v4 - 2436) == a2 )
    {
      return *(_DWORD *)(_gpsi + 4 * v4 - 2340);
    }
  }
  return a2;
}
