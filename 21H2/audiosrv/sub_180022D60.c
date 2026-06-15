/*
 * XREFs of sub_180022D60 @ 0x180022D60
 * Callers:
 *     sub_1800485D0 @ 0x1800485D0 (sub_1800485D0.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 * Callees:
 *     sub_180022DE0 @ 0x180022DE0 (sub_180022DE0.c)
 *     sub_180022EE0 @ 0x180022EE0 (sub_180022EE0.c)
 *     sub_180023320 @ 0x180023320 (sub_180023320.c)
 */

__int64 __fastcall sub_180022D60(__int64 a1, __int128 *a2, __int64 a3)
{
  unsigned int v5; // eax
  __int64 v7; // r11
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = *a2;
  v5 = sub_180022DE0(a1, &v8, a3);
  if ( v5 != -1 )
    return *(_QWORD *)sub_180023320(a1 + 32, v5);
  if ( !*(_QWORD *)(a1 + 16) || (unsigned int)sub_180022EE0(*(_QWORD *)(a1 + 16), a2) == -1 )
    return 0LL;
  return v7;
}
