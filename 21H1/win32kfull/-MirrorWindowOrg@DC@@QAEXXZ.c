/*
 * XREFs of ?MirrorWindowOrg@DC@@QAEXXZ @ 0x21C7B3
 * Callers:
 *     _GreMirrorWindowOrg@4 @ 0x21D659 (_GreMirrorWindowOrg@4.c)
 *     _GreScaleWindowExtEx@24 @ 0x21D696 (_GreScaleWindowExtEx@24.c)
 *     _GreSetWindowOrg@16 @ 0x21D7A5 (_GreSetWindowOrg@16.c)
 *     _NtGdiScaleViewportExtEx@24 @ 0x21DB0F (_NtGdiScaleViewportExtEx@24.c)
 * Callees:
 *     ??$SafeDivide@JJJ@@YGJJJPAJ@Z @ 0xC1F0C (--$SafeDivide@JJJ@@YGJJJPAJ@Z.c)
 */

void __thiscall DC::MirrorWindowOrg(DC *this)
{
  int v1; // esi
  int v2; // edx
  int v3; // eax
  int v4; // [esp+4h] [ebp-4h] BYREF

  v1 = *((_DWORD *)this + 255);
  if ( (*(_BYTE *)(v1 + 148) & 1) == 0 )
  {
    v3 = *(_DWORD *)(v1 + 304);
    goto LABEL_6;
  }
  v2 = *(_DWORD *)(v1 + 332);
  if ( v2 )
  {
    v4 = *(_DWORD *)(v1 + 316) * (*((_DWORD *)this + 266) - *((_DWORD *)this + 268) + 1);
    if ( SafeDivide<long,long,long>(v4, v2, &v4) >= 0 )
    {
      v3 = v4 + *(_DWORD *)(v1 + 304);
LABEL_6:
      *(_DWORD *)(v1 + 308) = v3;
    }
  }
}
