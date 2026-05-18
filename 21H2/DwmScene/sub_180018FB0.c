/*
 * XREFs of sub_180018FB0 @ 0x180018FB0
 * Callers:
 *     sub_18002D87C @ 0x18002D87C (sub_18002D87C.c)
 *     sub_18002D8A0 @ 0x18002D8A0 (sub_18002D8A0.c)
 *     sub_180066C04 @ 0x180066C04 (sub_180066C04.c)
 *     sub_1800776F0 @ 0x1800776F0 (sub_1800776F0.c)
 *     sub_180096C1C @ 0x180096C1C (sub_180096C1C.c)
 *     sub_180099BF0 @ 0x180099BF0 (sub_180099BF0.c)
 *     sub_1800CE1C8 @ 0x1800CE1C8 (sub_1800CE1C8.c)
 *     sub_1801153FC @ 0x1801153FC (sub_1801153FC.c)
 *     sub_1801227D0 @ 0x1801227D0 (sub_1801227D0.c)
 *     sub_18012F294 @ 0x18012F294 (sub_18012F294.c)
 * Callees:
 *     sub_180020B7C @ 0x180020B7C (sub_180020B7C.c)
 *     _o___std_exception_copy @ 0x180123893 (_o___std_exception_copy.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018FB0(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = &std::exception::`vftable';
  *(_OWORD *)(a1 + 8) = 0LL;
  o___std_exception_copy(a2 + 8);
  *(_QWORD *)a1 = &Spectre::Utils::SpectreException::`vftable';
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  sub_180020B7C(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(a1 + 60) = *(_DWORD *)(a2 + 60);
  return a1;
}
