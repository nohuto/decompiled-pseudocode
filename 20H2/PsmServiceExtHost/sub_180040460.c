/*
 * XREFs of sub_180040460 @ 0x180040460
 * Callers:
 *     sub_1800403FC @ 0x1800403FC (sub_1800403FC.c)
 * Callees:
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_18004051C @ 0x18004051C (sub_18004051C.c)
 *     sub_180040850 @ 0x180040850 (sub_180040850.c)
 *     sub_1800408D0 @ 0x1800408D0 (sub_1800408D0.c)
 *     sub_180040940 @ 0x180040940 (sub_180040940.c)
 */

__int64 __fastcall sub_180040460(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ebx

  v2 = a1 + 680;
  sub_18001E380();
  v3 = RtlSubscribeWnfStateChangeNotification(v2 + 904, 0x2821B2CA3BC2875LL, 0LL, sub_180037FB0, v2, 0LL, 0, 0);
  sub_18000F390();
  if ( v3 >= 0 )
  {
    v3 = sub_180040940(a1);
    if ( v3 >= 0 )
    {
      v3 = sub_1800408D0(a1);
      if ( v3 >= 0 )
      {
        v3 = sub_180040850(a1 + 664);
        if ( v3 >= 0 )
        {
          v3 = sub_18004051C(a1 + 1768);
          if ( v3 >= 0 )
            return 0;
        }
      }
    }
  }
  return (unsigned int)v3;
}
