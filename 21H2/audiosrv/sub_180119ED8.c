/*
 * XREFs of sub_180119ED8 @ 0x180119ED8
 * Callers:
 *     sub_1800592F4 @ 0x1800592F4 (sub_1800592F4.c)
 *     sub_18005B9E8 @ 0x18005B9E8 (sub_18005B9E8.c)
 *     sub_1801195CC @ 0x1801195CC (sub_1801195CC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180119ED8(__int64 *a1, __int64 a2, _OWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdx
  _OWORD *v11; // r8
  _OWORD *v12; // rdx

  v5 = o__recalloc(*a1, *((_DWORD *)a1 + 4) + 1, 16LL);
  if ( !v5 )
    return 0LL;
  v6 = a1[1];
  *a1 = v5;
  v7 = o__recalloc(v6, *((_DWORD *)a1 + 4) + 1, 16LL);
  v8 = v7;
  if ( !v7 )
    return 0LL;
  v9 = *a1;
  v10 = 16LL * *((int *)a1 + 4);
  a1[1] = v7;
  v11 = (_OWORD *)(v10 + v9);
  if ( v11 )
  {
    *v11 = xmmword_18015B798;
    v8 = a1[1];
  }
  v12 = (_OWORD *)(v8 + v10);
  if ( v12 )
    *v12 = *a3;
  ++*((_DWORD *)a1 + 4);
  return 1LL;
}
