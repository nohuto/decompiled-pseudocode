/*
 * XREFs of sub_1800E2D60 @ 0x1800E2D60
 * Callers:
 *     sub_18004F040 @ 0x18004F040 (sub_18004F040.c)
 *     sub_18004F420 @ 0x18004F420 (sub_18004F420.c)
 *     sub_1800E2D60 @ 0x1800E2D60 (sub_1800E2D60.c)
 *     sub_1800E3C78 @ 0x1800E3C78 (sub_1800E3C78.c)
 * Callees:
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_1800E2D60 @ 0x1800E2D60 (sub_1800E2D60.c)
 */

__int64 __fastcall sub_1800E2D60(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 i; // rbx
  __int64 v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*(_BYTE *)(i + 25); result = sub_1800472E0(v6, 0x28uLL) )
  {
    sub_1800E2D60(a1, a2, *(_QWORD *)(i + 16));
    v6 = i;
    i = *(_QWORD *)i;
  }
  return result;
}
