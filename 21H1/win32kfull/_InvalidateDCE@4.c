/*
 * XREFs of _InvalidateDCE@4 @ 0x3277C
 * Callers:
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _RevalidateDCE@4 @ 0x83C68 (_RevalidateDCE@4.c)
 * Callees:
 *     _GreSelectRedirectionBitmap@8 @ 0x322B0 (_GreSelectRedirectionBitmap@8.c)
 */

int __thiscall InvalidateDCE(int *this)
{
  int v2; // eax
  int v4; // [esp-Ch] [ebp-18h]

  v2 = this[8] & 0x4002 | 0x800;
  this[8] = v2;
  if ( (v2 & 0x4000) != 0 )
  {
    GreSelectRedirectionBitmap(this[1], 0);
    this[8] &= ~0x4000u;
    this[4] = 0;
  }
  v4 = this[1];
  this[2] = 0;
  this[3] = 0;
  this[5] = 0;
  this[6] = 0;
  return GreSelectVisRgn(v4, 0, 1);
}
