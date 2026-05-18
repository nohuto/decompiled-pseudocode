/*
 * XREFs of sub_180044020 @ 0x180044020
 * Callers:
 *     <none>
 * Callees:
 *     sub_180043ACC @ 0x180043ACC (sub_180043ACC.c)
 *     sub_18006C578 @ 0x18006C578 (sub_18006C578.c)
 *     sub_18006C6B0 @ 0x18006C6B0 (sub_18006C6B0.c)
 */

__int64 __fastcall sub_180044020(__int64 a1, unsigned int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  __int128 v12; // [rsp+20h] [rbp-30h] BYREF
  __int128 v13; // [rsp+30h] [rbp-20h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v15; // [rsp+78h] [rbp+28h] BYREF

  v15 = a2;
  *(_DWORD *)(a1 + 568) = a2;
  v4 = a3;
  sub_180043ACC((__int64 *)(a1 + 552), (__int64)&v14, &v15);
  v5 = v14;
  v6 = 6 * v4;
  v13 = 0LL;
  v7 = *(_QWORD *)(v14 + 40);
  v8 = *(_QWORD *)(v7 + 8 * v6 + 72);
  if ( v8 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  v13 = *(_OWORD *)(v7 + 8 * v6 + 64);
  sub_18006C6B0(a1, &v13);
  v9 = *(_QWORD *)(v5 + 40);
  v12 = 0LL;
  v10 = *(_QWORD *)(v9 + 8 * v6 + 88);
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v12 = *(_OWORD *)(v9 + 8 * v6 + 80);
  return sub_18006C578(a1, &v12);
}
