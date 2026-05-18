/*
 * XREFs of sub_18011D728 @ 0x18011D728
 * Callers:
 *     sub_18011DE60 @ 0x18011DE60 (sub_18011DE60.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

double __fastcall sub_18011D728(double a1, double (*a2)(void))
{
  double v2; // xmm1_8

  v2 = 0.0;
  if ( a1 >= 0.0 )
  {
    v2 = a1;
    if ( a1 > 1.0 )
      return 1.0 - a2() * 0.5;
  }
  if ( v2 >= 0.5 )
    return 1.0 - a2() * 0.5;
  else
    return a2() * 0.5;
}
