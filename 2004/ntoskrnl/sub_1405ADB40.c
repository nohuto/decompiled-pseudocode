/*
 * XREFs of sub_1405ADB40 @ 0x1405ADB40
 * Callers:
 *     <none>
 * Callees:
 *     sub_140949EDC @ 0x140949EDC (sub_140949EDC.c)
 */

__int64 __fastcall sub_1405ADB40(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  *a6 = 1;
  return sub_140949EDC(a2, a3, a4, a5, *(_DWORD *)(a1 + 8));
}
