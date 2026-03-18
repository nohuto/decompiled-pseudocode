/*
 * XREFs of ?Trg@BLTRECORD@@QAEHHHHH@Z @ 0x79650
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z @ 0x798B2 (-bXform@EXFORMOBJ@@QAEHPAU_POINTL@@K@Z.c)
 */

int __thiscall BLTRECORD::Trg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 27) = a2 + a4;
  *((_DWORD *)this + 25) = a2;
  *((_DWORD *)this + 26) = a3;
  *((_DWORD *)this + 28) = a3 + a5;
  return EXFORMOBJ::bXform(this, (struct _POINTL *)((char *)this + 100), 2u);
}
