/*
 * XREFs of KeyboardClassQueryWmiRegInfo @ 0x1C000D5D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeyboardClassQueryWmiRegInfo(__int64 a1, _DWORD *a2, __int64 a3, _QWORD *a4, int a5, _QWORD *a6)
{
  __int64 v6; // rcx

  v6 = *(_QWORD *)(a1 + 64);
  *a2 = 32;
  *a4 = &word_1C000A2C8;
  *a6 = *(_QWORD *)(v6 + 24);
  return 0LL;
}
