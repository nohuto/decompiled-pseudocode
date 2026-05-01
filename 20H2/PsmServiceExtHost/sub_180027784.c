/*
 * XREFs of sub_180027784 @ 0x180027784
 * Callers:
 *     sub_1800073FC @ 0x1800073FC (sub_1800073FC.c)
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 *     sub_1800276D4 @ 0x1800276D4 (sub_1800276D4.c)
 *     sub_180033820 @ 0x180033820 (sub_180033820.c)
 *     sub_180062F10 @ 0x180062F10 (sub_180062F10.c)
 *     sub_18006C590 @ 0x18006C590 (sub_18006C590.c)
 *     sub_18006C66C @ 0x18006C66C (sub_18006C66C.c)
 *     sub_1800792E8 @ 0x1800792E8 (sub_1800792E8.c)
 *     sub_1800808C8 @ 0x1800808C8 (sub_1800808C8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180027784(int a1)
{
  __int64 v1; // rax
  signed __int64 v2; // rcx

  v1 = a1;
  v2 = _InterlockedIncrement64((volatile signed __int64 *)&xmmword_1800B41C0 + a1);
  if ( (v2 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  return v2 | (v1 << 57) | 0x1000000000000000LL;
}
