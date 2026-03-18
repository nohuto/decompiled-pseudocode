/*
 * XREFs of ?TrgPlg@BLTRECORD@@QAEHHHHH@Z @ 0x1EF88A
 * Callers:
 *     _GreStretchBltInternal@52 @ 0x78C6A (_GreStretchBltInternal@52.c)
 *     _GreMaskBlt@52 @ 0x7A502 (_GreMaskBlt@52.c)
 * Callees:
 *     <none>
 */

int __thiscall BLTRECORD::TrgPlg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 29) = a2;
  *((_DWORD *)this + 27) = a2 + a4;
  *((_DWORD *)this + 26) = a3;
  *((_DWORD *)this + 30) = a3 + a5;
  *((_DWORD *)this + 25) = a2;
  *((_DWORD *)this + 28) = a3;
  return EXFORMOBJ::bXform(this, (struct _POINTL *)((char *)this + 100), (struct _POINTFIX *)((char *)this + 68), 3u);
}
