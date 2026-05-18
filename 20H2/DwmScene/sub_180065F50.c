/*
 * XREFs of sub_180065F50 @ 0x180065F50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D04EC @ 0x1800D04EC (sub_1800D04EC.c)
 */

__int64 __fastcall sub_180065F50(__int64 a1)
{
  __int64 result; // rax

  result = sub_1800D04EC(*(_QWORD *)(a1 + 440));
  ++*(_QWORD *)(a1 + 480);
  return result;
}
