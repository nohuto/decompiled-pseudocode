/*
 * XREFs of xxxUpdateClientRect @ 0x1C0240270
 * Callers:
 *     <none>
 * Callees:
 *     xxxCalcClientRect @ 0x1C00AC73C (xxxCalcClientRect.c)
 */

__int64 __fastcall xxxUpdateClientRect(__int64 a1)
{
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_OWORD *)(*(_QWORD *)(a1 + 40) + 88LL);
  xxxCalcClientRect(a1, &v3, 0);
  *(_OWORD *)(*(_QWORD *)(a1 + 40) + 104LL) = v3;
  return 1LL;
}
