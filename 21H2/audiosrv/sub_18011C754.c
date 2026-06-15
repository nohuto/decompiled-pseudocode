/*
 * XREFs of sub_18011C754 @ 0x18011C754
 * Callers:
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18004978C @ 0x18004978C (sub_18004978C.c)
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 * Callees:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 */

__int64 __fastcall sub_18011C754(_QWORD *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  __int64 v8; // rax
  __int128 v10; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == 3 || (unsigned int)sub_180022F30(a1, a2) )
    return 0LL;
  v10 = xmmword_18015B810;
  v8 = sub_1800233B0(a1 + 207, v4);
  return sub_180020D20((__int64)a1, v8, 1, 0, &v10, 0, 1, v4, a3, a4, 0LL);
}
