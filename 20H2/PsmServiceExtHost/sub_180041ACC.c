/*
 * XREFs of sub_180041ACC @ 0x180041ACC
 * Callers:
 *     sub_180041A40 @ 0x180041A40 (sub_180041A40.c)
 * Callees:
 *     sub_180041B28 @ 0x180041B28 (sub_180041B28.c)
 *     sub_180041F58 @ 0x180041F58 (sub_180041F58.c)
 *     sub_180041FAC @ 0x180041FAC (sub_180041FAC.c)
 */

__int64 __fastcall sub_180041ACC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 128) = a2;
  if ( a3 && *(_QWORD *)(a3 + 288) != a1 + 8 )
    sub_180041F58();
  result = sub_180041FAC(a1);
  if ( (int)result >= 0 )
  {
    result = sub_180041B28(a1);
    if ( (int)result >= 0 )
      return 0LL;
  }
  return result;
}
