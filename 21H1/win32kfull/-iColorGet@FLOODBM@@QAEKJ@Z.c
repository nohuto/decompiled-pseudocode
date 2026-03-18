/*
 * XREFs of ?iColorGet@FLOODBM@@QAEKJ@Z @ 0x21FEA5
 * Callers:
 *     ?bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z @ 0x21FCAC (-bSearchAllSpans@FLOODBM@@QAEHJJAAJ0PAEAAVSTACKOBJ@@PAVSCANLINE@@@Z.c)
 *     ?vFindExtent@FLOODBM@@QAEXJAAJ0@Z @ 0x21FF52 (-vFindExtent@FLOODBM@@QAEXJAAJ0@Z.c)
 *     _NtGdiExtFloodFill@20 @ 0x2200C8 (_NtGdiExtFloodFill@20.c)
 * Callees:
 *     <none>
 */

int __thiscall FLOODBM::iColorGet(FLOODBM *this, int a2)
{
  int v3; // eax
  unsigned int v4; // eax

  switch ( *(_DWORD *)this )
  {
    case 1:
      return (*(unsigned __int8 *)((a2 >> 3) + *((_DWORD *)this + 6)) >> (7 - (a2 & 7))) & 1;
    case 2:
      v4 = *(unsigned __int8 *)(*((_DWORD *)this + 6) + (a2 >> 1));
      if ( (a2 & 1) != 0 )
        return v4 & 0xF;
      else
        return v4 >> 4;
    case 3:
      return *(unsigned __int8 *)(*((_DWORD *)this + 6) + a2);
    default:
      switch ( *(_DWORD *)this )
      {
        case 4:
          v3 = *(unsigned __int16 *)(*((_DWORD *)this + 6) + 2 * a2);
          break;
        case 5:
          return *(unsigned __int8 *)(*((_DWORD *)this + 6) + 3 * a2) | (*(unsigned __int16 *)(*((_DWORD *)this + 6)
                                                                                             + 3 * a2
                                                                                             + 1) << 8);
        case 6:
          v3 = *(_DWORD *)(*((_DWORD *)this + 6) + 4 * a2);
          break;
        default:
          return 0;
      }
      return *((_DWORD *)this + 8) & v3;
  }
}
