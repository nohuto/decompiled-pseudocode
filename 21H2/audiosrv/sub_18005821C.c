/*
 * XREFs of sub_18005821C @ 0x18005821C
 * Callers:
 *     sub_1800581F0 @ 0x1800581F0 (sub_1800581F0.c)
 * Callees:
 *     sub_180008EAC @ 0x180008EAC (sub_180008EAC.c)
 *     sub_180058330 @ 0x180058330 (sub_180058330.c)
 *     sub_180058370 @ 0x180058370 (sub_180058370.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18005821C(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // rax
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rbx
  SIZE_T v11; // rcx
  _QWORD *v12; // rsi
  __int64 *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // r8
  __int64 v17; // rcx

  v5 = (a2 - *a1) >> 3;
  v6 = (a1[1] - *a1) >> 3;
  if ( v6 == 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v7 = v6 + 1;
  v8 = (a1[2] - *a1) >> 3;
  v9 = v8 >> 1;
  if ( v8 > 0x1FFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v10 = v6 + 1;
  }
  else
  {
    v10 = v9 + v8;
    if ( v9 + v8 < v7 )
      v10 = v6 + 1;
  }
  v11 = 8 * v10;
  if ( v10 > 0x1FFFFFFFFFFFFFFFLL )
    v11 = -1LL;
  v12 = sub_180008EAC(v11);
  v13 = &v12[v5];
  v14 = *a3;
  *v13 = *a3;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = a1[1];
  v16 = v12;
  v17 = *a1;
  if ( a2 != v15 )
  {
    sub_180058330(v17, a2, v12);
    v16 = v13 + 1;
    v15 = a1[1];
    v17 = a2;
  }
  sub_180058330(v17, v15, v16);
  sub_180058370(a1, v12, v7, v10, v12);
  return *a1 + 8 * v5;
}
