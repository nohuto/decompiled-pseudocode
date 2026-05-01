/*
 * XREFs of sub_18000CF38 @ 0x18000CF38
 * Callers:
 *     sub_18000A924 @ 0x18000A924 (sub_18000A924.c)
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 * Callees:
 *     sub_18000EE78 @ 0x18000EE78 (sub_18000EE78.c)
 *     ??2@YAPEAX_K@Z @ 0x18004482C (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000CF38(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  int v7; // r14d
  __int64 v8; // rsi
  _QWORD *v9; // r9
  __int64 v10; // r8
  __int64 v11; // rdx
  signed __int64 v12; // rax
  signed __int64 v13; // rtt
  __int64 v15; // [rsp+60h] [rbp+8h]

  v7 = (int)a1;
  v8 = *a1;
  v15 = *a1;
  v9 = operator new(0x30uLL);
  v10 = *a3;
  v9[4] = *a3;
  *a3 = 0LL;
  v11 = *a4;
  v9[5] = *a4;
  if ( v11 )
  {
    v12 = *(_QWORD *)(v11 + 136);
    while ( v12 >= 0 )
    {
      v13 = v12;
      v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v11 + 136), v12 + 1, v12);
      if ( v13 == v12 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v12 + 16));
LABEL_6:
    v8 = v15;
  }
  *v9 = v8;
  v9[1] = v8;
  v9[2] = v8;
  *((_WORD *)v9 + 12) = 0;
  sub_18000EE78(v7, a2, v10, (_DWORD)v9 + 32, (__int64)v9);
  return a2;
}
