/*
 * XREFs of sub_1800D5F30 @ 0x1800D5F30
 * Callers:
 *     sub_1800D5F90 @ 0x1800D5F90 (sub_1800D5F90.c)
 * Callees:
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_1800D5EC4 @ 0x1800D5EC4 (sub_1800D5EC4.c)
 *     sub_1801099B0 @ 0x1801099B0 (sub_1801099B0.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall sub_1800D5F30(__int64 a1, __int64 a2)
{
  char v4; // bl
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  sub_180067278(a1);
  sub_1800D5EC4(a1, (__int64)v6, a2);
  v4 = 0;
  if ( v6[0] )
  {
    sub_1801099B0(*(_QWORD *)(a1 + 16 * (v7 + 4)));
    v4 = 1;
  }
  sub_180067304(a1);
  return v4;
}
