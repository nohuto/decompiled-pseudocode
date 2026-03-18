/*
 * XREFs of sub_1C003BC30 @ 0x1C003BC30
 * Callers:
 *     CompletionRoutine @ 0x1C000DFA0 (CompletionRoutine.c)
 *     sub_1C000E210 @ 0x1C000E210 (sub_1C000E210.c)
 *     sub_1C000E620 @ 0x1C000E620 (sub_1C000E620.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0018364 @ 0x1C0018364 (sub_1C0018364.c)
 *     sub_1C0018750 @ 0x1C0018750 (sub_1C0018750.c)
 *     sub_1C001B180 @ 0x1C001B180 (sub_1C001B180.c)
 *     sub_1C001B724 @ 0x1C001B724 (sub_1C001B724.c)
 *     sub_1C001CE0C @ 0x1C001CE0C (sub_1C001CE0C.c)
 *     sub_1C001CEB4 @ 0x1C001CEB4 (sub_1C001CEB4.c)
 *     sub_1C0036380 @ 0x1C0036380 (sub_1C0036380.c)
 *     sub_1C004A608 @ 0x1C004A608 (sub_1C004A608.c)
 */

void __fastcall sub_1C003BC30(__int64 a1, int a2, int a3, __int64 a4)
{
  __int64 v5; // rsi
  _DWORD *v7; // rbx
  bool v8; // al
  int v9; // r8d
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v10 = a2;
  v5 = a3;
  v7 = sub_1C000F050(a1);
  sub_1C004A608(a1, 0, 85, (unsigned int)&v10, 4, v5, 0, (__int64)aFdopwrC, 1027, 0);
  v7[315] = v5;
  v8 = sub_1C001CEB4(v5);
  v9 = 213;
  if ( !v8 )
    v9 = 212;
  sub_1C001CE0C(a1, v5, v9, v10);
  sub_1C000FD80(a1, 16, 1934645025, v5, 0LL);
  sub_1C001B724(a1);
  sub_1C0018364(a1, *(_QWORD *)(a4 + 72));
  sub_1C0036380(a1, *(_QWORD *)(a4 + 72));
  sub_1C0018750(a1, a4);
  sub_1C001B180(a1);
}
