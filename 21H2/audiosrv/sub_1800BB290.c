/*
 * XREFs of sub_1800BB290 @ 0x1800BB290
 * Callers:
 *     sub_1800029E0 @ 0x1800029E0 (sub_1800029E0.c)
 *     sub_180002FD4 @ 0x180002FD4 (sub_180002FD4.c)
 *     sub_180006524 @ 0x180006524 (sub_180006524.c)
 *     sub_18000AF30 @ 0x18000AF30 (sub_18000AF30.c)
 *     sub_18000B4D0 @ 0x18000B4D0 (sub_18000B4D0.c)
 *     sub_180032F30 @ 0x180032F30 (sub_180032F30.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18004E750 @ 0x18004E750 (sub_18004E750.c)
 *     sub_18004F040 @ 0x18004F040 (sub_18004F040.c)
 *     sub_1800C625C @ 0x1800C625C (sub_1800C625C.c)
 *     sub_1800CFF9C @ 0x1800CFF9C (sub_1800CFF9C.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_1800BB290(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax

  *a2 += 39LL;
  v2 = *(_QWORD *)(*a1 - 8LL);
  result = *a1 - v2 - 8;
  if ( result > 0x1F )
  {
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x1800BB2C2LL);
  }
  *a1 = v2;
  return result;
}
