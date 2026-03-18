/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QEBAHXZ @ 0x1C001AD0C
 * Callers:
 *     GreMaskBlt @ 0x1C001456C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0019A20 (GreStretchBltInternal.c)
 *     GrePlgBlt @ 0x1C028E3D0 (GrePlgBlt.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 46) - *((_DWORD *)this + 44) == *((_DWORD *)this + 40) - *((_DWORD *)this + 38)
      && *((_DWORD *)this + 47) - *((_DWORD *)this + 45) == *((_DWORD *)this + 41) - *((_DWORD *)this + 39);
}
