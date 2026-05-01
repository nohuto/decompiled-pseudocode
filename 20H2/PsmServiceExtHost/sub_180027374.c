/*
 * XREFs of sub_180027374 @ 0x180027374
 * Callers:
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 * Callees:
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_1800089AC @ 0x1800089AC (sub_1800089AC.c)
 *     sub_1800097FC @ 0x1800097FC (sub_1800097FC.c)
 *     sub_180009854 @ 0x180009854 (sub_180009854.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_180025704 @ 0x180025704 (sub_180025704.c)
 *     sub_180027400 @ 0x180027400 (sub_180027400.c)
 *     sub_180027434 @ 0x180027434 (sub_180027434.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180027644 @ 0x180027644 (sub_180027644.c)
 *     sub_18008057C @ 0x18008057C (sub_18008057C.c)
 */

unsigned __int64 __fastcall sub_180027374(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rsi
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdi
  void *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rdx

  sub_1800089AC(a1, a2);
  sub_180009854(*(_QWORD *)a1);
  v3 = *(_QWORD *)a1;
  *(_DWORD *)(a1 + 128) |= 1u;
  sub_1800097FC(v3);
  v4 = (_QWORD *)(a1 + 40);
  while ( (_QWORD *)*v4 != v4 )
  {
    v8 = *v4 - 48LL;
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 24)) <= 1 )
      __fastfail(0xEu);
    sub_180027400(a1);
    if ( !*(_DWORD *)(a1 + 136) && (*(_BYTE *)(a1 + 132) & 1) != 0 )
      sub_180004214(v8, 1, 6656, 0LL, 0);
    sub_180020F50(v8, v9);
    sub_1800274E0(v8);
    sub_1800089AC(a1, v10);
  }
  sub_180027400(a1);
  for ( result = sub_180025704(a1 + 56); ; result = sub_180027434(v6) )
  {
    v6 = result;
    if ( !result )
      break;
    sub_18008057C(result);
  }
  if ( (*(_BYTE *)(a1 + 128) & 2) == 0 )
  {
    v7 = *(void **)(a1 + 112);
    if ( v7 )
      return sub_180027644(v7);
  }
  return result;
}
