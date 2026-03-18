/*
 * XREFs of ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C028F180
 * Callers:
 *     GreStretchBltInternal @ 0x1C009E23C (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C0102C4C (GreMaskBlt.c)
 * Callees:
 *     <none>
 */

int __fastcall BLTRECORD::TrgPlg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 39) = a3;
  *((_DWORD *)this + 41) = a3;
  *((_DWORD *)this + 43) = a5 + a3;
  *((_DWORD *)this + 38) = a2;
  *((_DWORD *)this + 42) = a2;
  *((_DWORD *)this + 40) = a2 + a4;
  return EXFORMOBJ::bXform(this, (struct _POINTL *)this + 19, (struct _POINTFIX *)this + 15, 3uLL);
}
