/*
 * XREFs of ?Src@BLTRECORD@@QAEHHHHH@Z @ 0x79610
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 *     _GrePlgBlt@44 @ 0x1EDD56 (_GrePlgBlt@44.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 */

int __thiscall BLTRECORD::Src(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 33) = a2 + a4;
  *((_DWORD *)this + 32) = a3;
  *((_DWORD *)this + 31) = a2;
  *((_DWORD *)this + 34) = a3 + a5;
  return EXFORMOBJ::bXform((BLTRECORD *)((char *)this + 12), (struct _POINTL *)((char *)this + 124), 2u);
}
