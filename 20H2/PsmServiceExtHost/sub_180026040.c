/*
 * XREFs of sub_180026040 @ 0x180026040
 * Callers:
 *     sub_1800036B0 @ 0x1800036B0 (sub_1800036B0.c)
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_180025F88 @ 0x180025F88 (sub_180025F88.c)
 *     sub_1800260F8 @ 0x1800260F8 (sub_1800260F8.c)
 *     sub_18002619C @ 0x18002619C (sub_18002619C.c)
 *     sub_180026218 @ 0x180026218 (sub_180026218.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18003BFA8 @ 0x18003BFA8 (sub_18003BFA8.c)
 *     sub_180082A64 @ 0x180082A64 (sub_180082A64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180026040(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 592);
  if ( !v1 )
    __int2c();
  if ( *(int *)(a1 - 40) >= 0 )
    *(_QWORD *)(a1 + 592) = v1 + 1;
  return a1;
}
