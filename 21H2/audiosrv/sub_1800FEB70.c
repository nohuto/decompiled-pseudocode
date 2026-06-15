/*
 * XREFs of sub_1800FEB70 @ 0x1800FEB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1800F9C30 @ 0x1800F9C30 (sub_1800F9C30.c)
 */

__int64 __fastcall sub_1800FEB70(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 && a1 )
  {
    sub_1800F9C30((__int64)a1);
    sub_18006A148((void *)a1);
  }
  return v2;
}
