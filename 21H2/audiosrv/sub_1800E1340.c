/*
 * XREFs of sub_1800E1340 @ 0x1800E1340
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

BOOL __fastcall sub_1800E1340(__int64 *a1)
{
  BOOL result; // eax

  if ( a1 )
  {
    sub_18000F708(a1 + 2);
    sub_18000F708(a1 + 1);
    sub_18000F708(a1);
    return sub_18006A148(a1);
  }
  return result;
}
