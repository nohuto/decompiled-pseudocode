/*
 * XREFs of sub_1C0017660 @ 0x1C0017660
 * Callers:
 *     sub_1C00109A0 @ 0x1C00109A0 (sub_1C00109A0.c)
 *     sub_1C0010E28 @ 0x1C0010E28 (sub_1C0010E28.c)
 *     sub_1C0016F40 @ 0x1C0016F40 (sub_1C0016F40.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C001820C @ 0x1C001820C (sub_1C001820C.c)
 *     sub_1C0018BE0 @ 0x1C0018BE0 (sub_1C0018BE0.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

_DWORD *__fastcall sub_1C0017660(__int64 a1, __int64 a2, __int64 a3, int a4, int a5)
{
  _DWORD *result; // rax
  __int64 v6; // rcx
  _DWORD *v7; // rdx
  __int64 v8; // rdx

  if ( !a2 )
    goto LABEL_10;
  result = *(_DWORD **)(a2 + 64);
  if ( !result )
    sub_1C002DC78(a2, 0LL);
  if ( *result != 1329877064 )
    sub_1C002DC78(a2, *(_QWORD *)(a2 + 64));
  v6 = *(_QWORD *)(a1 + 8);
  if ( !v6 )
LABEL_10:
    sub_1C002DC78(0LL, 0LL);
  v7 = *(_DWORD **)(v6 + 64);
  if ( !v7 )
    sub_1C002DC78(v6, 0LL);
  if ( *v7 != 541218120 )
    sub_1C002DC78(v6, v7);
  v8 = ((unsigned __int8)result[2] + 1) & 7;
  result[2] = v8;
  v8 *= 32LL;
  *(_DWORD *)((char *)result + v8 + 272) = a5;
  *(_DWORD *)((char *)result + v8 + 276) = result[282];
  *(_DWORD *)((char *)result + v8 + 280) = a4;
  result[282] = a4;
  return result;
}
