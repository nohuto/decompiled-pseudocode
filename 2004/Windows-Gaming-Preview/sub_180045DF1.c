/*
 * XREFs of sub_180045DF1 @ 0x180045DF1
 * Callers:
 *     <none>
 * Callees:
 *     sub_180002984 @ 0x180002984 (sub_180002984.c)
 */

_BOOL8 __fastcall sub_180045DF1(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_180002984(*(_QWORD *)(a2 + 32));
  *(_DWORD *)(a2 + 32) = v3;
  return v3 >= 0;
}
