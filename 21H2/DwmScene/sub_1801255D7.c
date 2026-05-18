/*
 * XREFs of sub_1801255D7 @ 0x1801255D7
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D738 @ 0x18000D738 (sub_18000D738.c)
 */

_BOOL8 __fastcall sub_1801255D7(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_18000D738(*(_QWORD *)(a2 + 112));
  *(_DWORD *)(a2 + 112) = v3;
  return v3 >= 0;
}
