/*
 * XREFs of ?vRestore@MSURF@@QAEXXZ @ 0x2067A0
 * Callers:
 *     ?MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4K@Z @ 0x201F9D (-MulBitBlt@@YGHPAU_SURFOBJ@@00PAU_CLIPOBJ@@PAU_XLATEOBJ@@PAU_RECTL@@PAU_POINTL@@4PAU_BRUSHOBJ@@4.c)
 * Callees:
 *     <none>
 */

void __thiscall MSURF::vRestore(MSURF *this)
{
  int v1; // edi
  _DWORD *v2; // edi

  if ( *((_DWORD *)this + 5) )
  {
    v1 = *((_DWORD *)this + 14);
    if ( v1 )
    {
      v2 = (_DWORD *)(v1 + 4);
      *v2++ = *((_DWORD *)this + 1);
      *v2++ = *((_DWORD *)this + 2);
      *v2 = *((_DWORD *)this + 3);
      v2[1] = *((_DWORD *)this + 4);
      *(_BYTE *)(*((_DWORD *)this + 14) + 20) = *((_BYTE *)this + 64);
    }
  }
  if ( *((_DWORD *)this + 11) == 1 )
    EngDeleteClip(*((CLIPOBJ **)this + 14));
}
