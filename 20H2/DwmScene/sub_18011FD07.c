/*
 * XREFs of sub_18011FD07 @ 0x18011FD07
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000D658 @ 0x18000D658 (sub_18000D658.c)
 */

_BOOL8 __fastcall sub_18011FD07(__int64 a1, __int64 a2)
{
  int v3; // eax

  v3 = sub_18000D658(*(_QWORD *)(a2 + 112));
  *(_DWORD *)(a2 + 112) = v3;
  return v3 >= 0;
}
