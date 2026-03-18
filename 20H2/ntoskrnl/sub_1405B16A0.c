/*
 * XREFs of sub_1405B16A0 @ 0x1405B16A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14094FC9C @ 0x14094FC9C (sub_14094FC9C.c)
 */

__int64 __fastcall sub_1405B16A0(__int64 a1, int a2, int a3, int a4, __int64 a5, _BYTE *a6)
{
  *a6 = 1;
  return sub_14094FC9C(a2, a3, a4, a5, *(_DWORD *)(a1 + 8));
}
