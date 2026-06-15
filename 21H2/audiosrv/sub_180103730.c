/*
 * XREFs of sub_180103730 @ 0x180103730
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 *     sub_1801001B8 @ 0x1801001B8 (sub_1801001B8.c)
 */

__int64 __fastcall sub_180103730(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 2);
  if ( !v2 && a1 )
  {
    sub_1801001B8((__int64)a1);
    sub_18006A148((void *)a1);
  }
  return v2;
}
