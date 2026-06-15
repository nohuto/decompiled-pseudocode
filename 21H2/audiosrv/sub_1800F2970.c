/*
 * XREFs of sub_1800F2970 @ 0x1800F2970
 * Callers:
 *     sub_18000C210 @ 0x18000C210 (sub_18000C210.c)
 *     sub_1800F24F0 @ 0x1800F24F0 (sub_1800F24F0.c)
 *     sub_1800F43B0 @ 0x1800F43B0 (sub_1800F43B0.c)
 * Callees:
 *     sub_1800F3C44 @ 0x1800F3C44 (sub_1800F3C44.c)
 */

__int64 __fastcall sub_1800F2970(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_1800F3C44(a1, a2, a3, *a1);
  if ( *a1 )
    *(_QWORD *)(*a1 + 8) = result;
  else
    a1[1] = result;
  *a1 = result;
  return result;
}
