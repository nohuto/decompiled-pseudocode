/*
 * XREFs of ?vUpdateScaledRegions@DC@@QEAAXXZ @ 0x1C0032410
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0081030 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00863E0 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z @ 0x1C0144734 (-vDuplicateAndScaleRegion@@YAXPEAVREGION@@PEAPEAV1@VPOINTFL@@@Z.c)
 */

void __fastcall DC::vUpdateScaledRegions(DC *this)
{
  REGION *v2; // rcx
  REGION *v3; // rcx
  int v4; // eax

  if ( (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v4 = *((_DWORD *)this + 130);
    if ( (v4 & 0x10) != 0 )
    {
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 141),
        (char *)this + 1144,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
      v4 = *((_DWORD *)this + 130);
    }
    if ( (v4 & 8) != 0 )
      vDuplicateAndScaleRegion(
        *((_QWORD *)this + 142),
        (char *)this + 1152,
        _mm_unpacklo_ps((__m128)*((unsigned int *)this + 131), (__m128)*((unsigned int *)this + 132)).m128_u64[0]);
  }
  else
  {
    v2 = (REGION *)*((_QWORD *)this + 143);
    if ( v2 )
    {
      REGION::vDeleteREGION(v2);
      *((_QWORD *)this + 143) = 0LL;
    }
    v3 = (REGION *)*((_QWORD *)this + 144);
    if ( v3 )
    {
      REGION::vDeleteREGION(v3);
      *((_QWORD *)this + 144) = 0LL;
    }
  }
  *((_DWORD *)this + 130) &= 0xFFFFFFE7;
}
