/*
 * XREFs of sub_180064EDC @ 0x180064EDC
 * Callers:
 *     sub_18003ACB0 @ 0x18003ACB0 (sub_18003ACB0.c)
 *     sub_1800644CC @ 0x1800644CC (sub_1800644CC.c)
 *     sub_1800646F4 @ 0x1800646F4 (sub_1800646F4.c)
 * Callees:
 *     sub_180064E68 @ 0x180064E68 (sub_180064E68.c)
 */

signed int __fastcall sub_180064EDC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed int result; // eax
  int v5; // [rsp+20h] [rbp-18h]
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  result = sub_180064E68(0, 0, 0, a4, v5, retaddr);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
