/*
 * XREFs of ?bFindFirstScan@XCLIPOBJ@@IAEHXZ @ 0x237BFC
 * Callers:
 *     ?bSetup@XCLIPOBJ@@IAEHXZ @ 0x23808A (-bSetup@XCLIPOBJ@@IAEHXZ.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall XCLIPOBJ::bFindFirstScan(XCLIPOBJ *this)
{
  _DWORD *v2; // ecx
  unsigned int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // ecx
  bool v6; // zf
  _DWORD *i; // ecx
  _DWORD *v9; // ecx

  v2 = (_DWORD *)*((_DWORD *)this + 12);
  v3 = v2[14];
  if ( v3 <= 2 )
    return 0;
  v4 = (_DWORD *)*((_DWORD *)this + 30);
  *((_DWORD *)this + 18) = v3 - 2;
  if ( (v4[4] & 0x800000) != 0 )
  {
    v5 = (_DWORD *)v2[15];
    while ( 1 )
    {
      v5 += *v5 + 4;
      *((_DWORD *)this + 17) = v5;
      if ( *v5 )
      {
        if ( v5[2] > v4[35] )
          break;
      }
      v6 = (*((_DWORD *)this + 18))-- == 1;
      if ( v6 )
        return 0;
    }
    return v5[1] <= v4[27];
  }
  else
  {
    for ( i = (_DWORD *)(v2[8] - 4 - (4 * *(_DWORD *)(v2[8] - 4) + 16)); ; i = v9 - 1 )
    {
      v9 = &i[-*i - 3];
      *((_DWORD *)this + 17) = v9;
      if ( *v9 )
      {
        if ( v9[1] <= v4[35] )
          break;
      }
      v6 = (*((_DWORD *)this + 18))-- == 1;
      if ( v6 )
        return 0;
    }
    return v9[2] > v4[27];
  }
}
