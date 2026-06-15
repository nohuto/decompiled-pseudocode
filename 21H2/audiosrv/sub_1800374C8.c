/*
 * XREFs of sub_1800374C8 @ 0x1800374C8
 * Callers:
 *     sub_1800702D8 @ 0x1800702D8 (sub_1800702D8.c)
 *     sub_18011A900 @ 0x18011A900 (sub_18011A900.c)
 *     sub_18011D4F8 @ 0x18011D4F8 (sub_18011D4F8.c)
 *     sub_18011D640 @ 0x18011D640 (sub_18011D640.c)
 * Callees:
 *     sub_180020D20 @ 0x180020D20 (sub_180020D20.c)
 *     sub_180022F30 @ 0x180022F30 (sub_180022F30.c)
 *     sub_1800233B0 @ 0x1800233B0 (sub_1800233B0.c)
 *     sub_1800375D0 @ 0x1800375D0 (sub_1800375D0.c)
 */

__int64 __fastcall sub_1800374C8(_QWORD *a1, __int128 *a2, unsigned int a3, int a4, _QWORD *a5, _QWORD *a6, _QWORD *a7)
{
  unsigned int v7; // ebx
  unsigned __int64 v8; // rbp
  __int64 v12; // rax
  __int128 v14; // [rsp+60h] [rbp-38h] BYREF

  v7 = 0;
  v8 = a4;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  if ( a7 )
    *a7 = 0LL;
  if ( (unsigned int)sub_180022F30(a1, a4) )
  {
    if ( a3 || (v14 = *a2, (unsigned __int8)sub_1800375D0(a1, (unsigned int)v8, &v14)) )
    {
      v14 = *a2;
      v12 = sub_1800233B0(a1 + 207, v8);
      return (unsigned int)sub_180020D20((__int64)a1, v12, 1, 0, &v14, a3, 0, v8, a5, a6, a7);
    }
  }
  return v7;
}
