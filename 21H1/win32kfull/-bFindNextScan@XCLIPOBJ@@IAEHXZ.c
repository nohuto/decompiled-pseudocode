/*
 * XREFs of ?bFindNextScan@XCLIPOBJ@@IAEHXZ @ 0x237EBE
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z @ 0x237A4C (-bEnumLine@XCLIPOBJ@@QAEHKPAU_CLIPLINE@@@Z.c)
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall XCLIPOBJ::bFindNextScan(XCLIPOBJ *this)
{
  int v2; // edi
  int v3; // esi
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx
  _DWORD *v6; // ecx
  _DWORD *v7; // ecx

  v2 = *((_DWORD *)this + 30);
  v3 = *((_DWORD *)this + 18);
  if ( (*(_DWORD *)(v2 + 16) & 0x800000) != 0 )
  {
    while ( v3 != 1 )
    {
      v4 = (_DWORD *)*((_DWORD *)this + 17);
      *((_DWORD *)this + 18) = --v3;
      v5 = &v4[*v4 + 4];
      *((_DWORD *)this + 17) = v5;
      if ( v5[1] > *(_DWORD *)(v2 + 108) )
        break;
      if ( *v5 )
        return 1;
    }
  }
  else
  {
    while ( v3 != 1 )
    {
      --v3;
      v6 = (_DWORD *)(*((_DWORD *)this + 17) - 4);
      *((_DWORD *)this + 18) = v3;
      v7 = &v6[-*v6 - 3];
      *((_DWORD *)this + 17) = v7;
      if ( v7[2] <= *(_DWORD *)(v2 + 108) )
        break;
      if ( *v7 )
        return 1;
    }
  }
  return 0;
}
