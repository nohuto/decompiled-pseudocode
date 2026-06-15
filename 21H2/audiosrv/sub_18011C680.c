/*
 * XREFs of sub_18011C680 @ 0x18011C680
 * Callers:
 *     sub_180023540 @ 0x180023540 (sub_180023540.c)
 *     sub_180048E60 @ 0x180048E60 (sub_180048E60.c)
 * Callees:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800234D0 @ 0x1800234D0 (sub_1800234D0.c)
 */

__int64 __fastcall sub_18011C680(_QWORD *a1, int a2, _QWORD *a3, _QWORD *a4)
{
  unsigned __int64 v4; // rbx
  BOOL v8; // eax
  __int128 *v9; // rcx
  __int64 v10; // rax
  __int128 v12; // [rsp+60h] [rbp-18h] BYREF

  v4 = a2;
  if ( a3 )
    *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  if ( a2 == 3 || (unsigned int)sub_180022F30(a1, a2) )
    return 0LL;
  v8 = sub_1800234D0((__int64)a1);
  v9 = &xmmword_18015B810;
  if ( !v8 )
    v9 = &xmmword_18015B798;
  v12 = *v9;
  v10 = sub_1800233B0(a1 + 209, v4);
  return sub_180020D20((__int64)a1, v10, 2, 1, &v12, 0, 0, v4, a3, a4, 0LL);
}
