/*
 * XREFs of sub_18001F870 @ 0x18001F870
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18001F870(__int64 a1, __int64 a2)
{
  *(_QWORD *)a2 = off_18004AAE0;
  *(_OWORD *)(a2 + 8) = *(_OWORD *)(a1 + 8);
  *(_BYTE *)(a2 + 24) = *(_BYTE *)(a1 + 24);
  *(_QWORD *)(a2 + 32) = *(_QWORD *)(a1 + 32);
  return a2;
}
