/*
 * XREFs of sub_1C004BFCC @ 0x1C004BFCC
 * Callers:
 *     sub_1C0056620 @ 0x1C0056620 (sub_1C0056620.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C004BD00 @ 0x1C004BD00 (sub_1C004BD00.c)
 */

__int64 __fastcall sub_1C004BFCC(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 result; // rax

  v4 = sub_1C0011220(a2);
  v5 = *(_QWORD *)(a3 + 184);
  if ( *(_WORD *)(v5 + 16) < 0x28u )
  {
    v7 = -1073741823;
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 24);
    v7 = 0;
    *(_QWORD *)(v6 + 16) = sub_1C004BD00;
    *(_QWORD *)(v6 + 24) = sub_1C004BC30;
    *(_QWORD *)(v6 + 32) = sub_1C004BC60;
    *(_DWORD *)v6 = 65576;
    *(_QWORD *)(v6 + 8) = v4;
    sub_1C004BD00((__int64)v4);
  }
  *(_QWORD *)(a3 + 56) = 0LL;
  result = v7;
  *(_DWORD *)(a3 + 48) = v7;
  return result;
}
