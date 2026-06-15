/*
 * XREFs of sub_1801005D8 @ 0x1801005D8
 * Callers:
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1801005D8(__int64 *a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = o_malloc(a2);
  *a1 = v3;
  return v3 != 0;
}
