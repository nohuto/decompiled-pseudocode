/*
 * XREFs of sub_18003AF81 @ 0x18003AF81
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800031C4 @ 0x1800031C4 (sub_1800031C4.c)
 */

_BOOL8 __fastcall sub_18003AF81(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_1800031C4(*(_QWORD *)(a2 + 32));
  *(_DWORD *)(a2 + 32) = v3;
  return v3 >= 0;
}
