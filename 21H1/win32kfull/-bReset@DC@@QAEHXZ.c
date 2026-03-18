/*
 * XREFs of ?bReset@DC@@QAEHXZ @ 0xA5E1C
 * Callers:
 *     _GreBeginGdiRenderingToDxSurface@12 @ 0xA5D46 (_GreBeginGdiRenderingToDxSurface@12.c)
 * Callees:
 *     <none>
 */

int __thiscall DC::bReset(DC *this)
{
  int v2; // eax
  int v3; // eax
  int v5; // [esp+4h] [ebp-4h] BYREF

  v2 = *((_DWORD *)this + 27);
  if ( v2 )
  {
    v5 = *((_DWORD *)this + 27);
    --*(_DWORD *)(v2 + 24);
    if ( !*(_DWORD *)(v5 + 24) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_DWORD *)this + 27) = 0;
    DC::vReleaseRao(this);
  }
  v3 = *((_DWORD *)this + 26);
  if ( v3 )
  {
    v5 = *((_DWORD *)this + 26);
    --*(_DWORD *)(v3 + 24);
    if ( !*(_DWORD *)(v5 + 24) )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v5);
    *((_DWORD *)this + 26) = 0;
    DC::vReleaseRao(this);
  }
  return 1;
}
