/*
 * XREFs of GreScaleRgn @ 0x1C029F6F4
 * Callers:
 *     NtGdiScaleRgn @ 0x1C02B05C0 (NtGdiScaleRgn.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C001C99C (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x1C013A940 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 */

__int64 __fastcall GreScaleRgn(HDC a1, HRGN a2)
{
  DC *v3; // rcx
  unsigned int v4; // ebx
  DC *v6[2]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+30h] [rbp-28h] BYREF

  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v7, a2, 0);
  DCOBJ::DCOBJ((DCOBJ *)v6, a1);
  v3 = v6[0];
  if ( v7[0] && v6[0] )
  {
    if ( (unsigned int)DC::bDpiScaleTransform(v6[0]) )
    {
      RGNOBJ::vScale(
        v7,
        _mm_unpacklo_ps((__m128)*((unsigned int *)v3 + 131), (__m128)*((unsigned int *)v3 + 132)).m128_u64[0]);
      v3 = v6[0];
    }
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  if ( v3 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v6);
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v7);
  return v4;
}
