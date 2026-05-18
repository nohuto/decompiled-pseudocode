/*
 * XREFs of sub_18006821C @ 0x18006821C
 * Callers:
 *     sub_18003F150 @ 0x18003F150 (sub_18003F150.c)
 *     sub_18003FE78 @ 0x18003FE78 (sub_18003FE78.c)
 *     sub_18006885C @ 0x18006885C (sub_18006885C.c)
 *     sub_180068A0C @ 0x180068A0C (sub_180068A0C.c)
 *     sub_18006FF60 @ 0x18006FF60 (sub_18006FF60.c)
 *     sub_180079508 @ 0x180079508 (sub_180079508.c)
 *     sub_1800795CC @ 0x1800795CC (sub_1800795CC.c)
 *     sub_180096810 @ 0x180096810 (sub_180096810.c)
 *     sub_1800968E8 @ 0x1800968E8 (sub_1800968E8.c)
 *     sub_1800969C0 @ 0x1800969C0 (sub_1800969C0.c)
 *     sub_180097958 @ 0x180097958 (sub_180097958.c)
 *     sub_1800984F0 @ 0x1800984F0 (sub_1800984F0.c)
 *     sub_180098A18 @ 0x180098A18 (sub_180098A18.c)
 *     sub_180098B24 @ 0x180098B24 (sub_180098B24.c)
 *     sub_1800990D0 @ 0x1800990D0 (sub_1800990D0.c)
 *     sub_18009F96C @ 0x18009F96C (sub_18009F96C.c)
 *     sub_18009FAA4 @ 0x18009FAA4 (sub_18009FAA4.c)
 *     sub_1800A1030 @ 0x1800A1030 (sub_1800A1030.c)
 *     sub_1800CC9E0 @ 0x1800CC9E0 (sub_1800CC9E0.c)
 *     sub_1800CE2CC @ 0x1800CE2CC (sub_1800CE2CC.c)
 *     sub_1800D0A74 @ 0x1800D0A74 (sub_1800D0A74.c)
 *     sub_1800D0DCC @ 0x1800D0DCC (sub_1800D0DCC.c)
 *     sub_1800D0ED4 @ 0x1800D0ED4 (sub_1800D0ED4.c)
 *     sub_1800D0F5C @ 0x1800D0F5C (sub_1800D0F5C.c)
 *     sub_1800F711C @ 0x1800F711C (sub_1800F711C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18006821C(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 40);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 40) = result;
  return result;
}
