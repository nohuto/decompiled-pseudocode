/*
 * XREFs of sub_18002A804 @ 0x18002A804
 * Callers:
 *     sub_18002A0DC @ 0x18002A0DC (sub_18002A0DC.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180037E84 @ 0x180037E84 (sub_180037E84.c)
 */

unsigned __int64 __fastcall sub_18002A804(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  if ( a2 == 3 )
  {
    sub_180037E84(a1, 6LL);
  }
  else if ( a2 == 4 && (*(_QWORD *)(a1 + 648) & 0xE0000000LL) != 0x80000000LL )
  {
    sub_18000506C(a1, (*(_QWORD *)(a1 + 648) >> 44) & 1 | 2, 3584, 0LL, 3, 0);
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFF1FFFFFFFuLL;
  result = (unsigned __int64)(a2 & 7) << 29;
  *(_QWORD *)(a1 + 648) |= result;
  return result;
}
