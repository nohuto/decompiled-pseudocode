/*
 * XREFs of sub_180061744 @ 0x180061744
 * Callers:
 *     sub_180073CFC @ 0x180073CFC (sub_180073CFC.c)
 *     sub_180073FB4 @ 0x180073FB4 (sub_180073FB4.c)
 *     sub_1800753CC @ 0x1800753CC (sub_1800753CC.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 *     sub_1800754FC @ 0x1800754FC (sub_1800754FC.c)
 *     sub_1800755BC @ 0x1800755BC (sub_1800755BC.c)
 *     sub_18007565C @ 0x18007565C (sub_18007565C.c)
 *     sub_1800773B4 @ 0x1800773B4 (sub_1800773B4.c)
 *     sub_180078958 @ 0x180078958 (sub_180078958.c)
 *     sub_1800789DC @ 0x1800789DC (sub_1800789DC.c)
 *     sub_180078E8C @ 0x180078E8C (sub_180078E8C.c)
 * Callees:
 *     sub_1800610BC @ 0x1800610BC (sub_1800610BC.c)
 *     sub_18006125C @ 0x18006125C (sub_18006125C.c)
 *     sub_1800619F0 @ 0x1800619F0 (sub_1800619F0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180061744(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_BYTE *)(a2 + 8) = 0;
  if ( !(unsigned __int8)sub_1800619F0(a1, 0LL) )
  {
    LOBYTE(v4) = 1;
    if ( !(unsigned __int8)sub_1800619F0(a1, v4) )
    {
      sub_1800610BC(a1, 0);
      if ( *(_BYTE *)(a2 + 8) )
        sub_18006125C(*(_QWORD *)a2, 0);
      *(_QWORD *)a2 = a1;
      *(_BYTE *)(a2 + 8) = 1;
    }
  }
  return a2;
}
