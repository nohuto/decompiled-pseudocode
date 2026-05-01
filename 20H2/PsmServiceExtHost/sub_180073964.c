/*
 * XREFs of sub_180073964 @ 0x180073964
 * Callers:
 *     sub_18000806C @ 0x18000806C (sub_18000806C.c)
 *     sub_180012DB4 @ 0x180012DB4 (sub_180012DB4.c)
 *     sub_180073CE8 @ 0x180073CE8 (sub_180073CE8.c)
 * Callees:
 *     sub_1800736A0 @ 0x1800736A0 (sub_1800736A0.c)
 *     sub_1800738A8 @ 0x1800738A8 (sub_1800738A8.c)
 */

char __fastcall sub_180073964(__int64 a1, char a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 1284);
  if ( (v2 & 1) == 0 )
  {
    *(_DWORD *)(a1 + 1284) = v2 | 1;
    *(_DWORD *)(a1 + 1352) ^= ((unsigned __int8)*(_DWORD *)(a1 + 1352) ^ (unsigned __int8)(*(_DWORD *)(a1 + 1352) | (2 * a2))) & 2;
    LOBYTE(v2) = sub_1800736A0(a1);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = sub_1800738A8(a1, 1);
  }
  return v2;
}
