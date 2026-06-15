/*
 * XREFs of sub_1800C6940 @ 0x1800C6940
 * Callers:
 *     sub_1800C6588 @ 0x1800C6588 (sub_1800C6588.c)
 *     sub_1800CAA70 @ 0x1800CAA70 (sub_1800CAA70.c)
 *     sub_1800CAC20 @ 0x1800CAC20 (sub_1800CAC20.c)
 *     sub_1800D3024 @ 0x1800D3024 (sub_1800D3024.c)
 * Callees:
 *     sub_1800B8610 @ 0x1800B8610 (sub_1800B8610.c)
 */

__int64 __fastcall sub_1800C6940(unsigned __int16 **a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int16 *v3; // rcx
  __int64 v4; // r8
  unsigned __int16 v5; // dx

  result = 0LL;
  if ( !a2 )
    sub_1800B8610(-2147467259);
  v3 = *a1;
  v4 = a2 - (_QWORD)v3;
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 != *(unsigned __int16 *)((char *)v3 + v4) )
      break;
    ++v3;
    if ( !v5 )
      return result;
  }
  return v5 < *(unsigned __int16 *)((char *)v3 + v4) ? -1 : 1;
}
