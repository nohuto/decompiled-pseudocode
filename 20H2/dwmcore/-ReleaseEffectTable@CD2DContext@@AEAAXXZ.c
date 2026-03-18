/*
 * XREFs of ?ReleaseEffectTable@CD2DContext@@AEAAXXZ @ 0x180039BCC
 * Callers:
 *     ?PopulateEffectTable@CD2DContext@@AEAAJXZ @ 0x180039760 (-PopulateEffectTable@CD2DContext@@AEAAJXZ.c)
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x180039950 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 * Callees:
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x180018F20 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 */

void __fastcall CD2DContext::ReleaseEffectTable(CD2DContext *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rdi

  v1 = (__int64 *)((char *)this + 256);
  v2 = 8LL;
  do
  {
    ReleaseInterface<ID2D1Geometry>(v1++);
    --v2;
  }
  while ( v2 );
}
