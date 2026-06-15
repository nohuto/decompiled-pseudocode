/*
 * XREFs of sub_1800C6158 @ 0x1800C6158
 * Callers:
 *     sub_18002CA40 @ 0x18002CA40 (sub_18002CA40.c)
 *     sub_1800C7054 @ 0x1800C7054 (sub_1800C7054.c)
 * Callees:
 *     sub_18013CB58 @ 0x18013CB58 (sub_18013CB58.c)
 */

__int64 __fastcall sub_1800C6158(__int64 a1, __int64 a2, int a3, unsigned int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 result; // rax

  *(_QWORD *)a1 = off_180147D48;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = a3;
  *(_DWORD *)(a1 + 20) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  v8 = *(unsigned int *)(a5 + 296);
  if ( a4 == (_DWORD)v8 )
    sub_18013CB58(a1, a4, v8);
  if ( !a4 )
  {
    v9 = *(unsigned int *)(a5 + 296);
    if ( (_DWORD)v9 != 1 )
      sub_18013CB58(a1, 0LL, v9);
  }
  *(_QWORD *)(a5 + 304) = a6;
  result = a1;
  *(_DWORD *)(a5 + 296) = a4;
  return result;
}
