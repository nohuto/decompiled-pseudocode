/*
 * XREFs of ?bEqualExtents@BLTRECORD@@QBEHXZ @ 0x798F8
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     <none>
 */

BOOL __thiscall BLTRECORD::bEqualExtents(BLTRECORD *this)
{
  return *((_DWORD *)this + 33) - *((_DWORD *)this + 31) == *((_DWORD *)this + 27) - *((_DWORD *)this + 25)
      && *((_DWORD *)this + 34) - *((_DWORD *)this + 32) == *((_DWORD *)this + 28) - *((_DWORD *)this + 26);
}
