/*
 * XREFs of sub_180122640 @ 0x180122640
 * Callers:
 *     sub_1801224B8 @ 0x1801224B8 (sub_1801224B8.c)
 * Callees:
 *     sub_180037240 @ 0x180037240 (sub_180037240.c)
 */

__int64 __fastcall sub_180122640(__int64 *a1, unsigned __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rax
  __int64 v6; // r10
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v4 = (a1[1] - *a1) >> 5;
  v5 = sub_180037240((__int64)a1, a2);
  v6 = a1[1];
  v7 = *a1;
  if ( *a1 != v6 )
  {
    v8 = v5 + 3;
    do
    {
      *(v8 - 1) = 0LL;
      *v8 = 0LL;
      *(_OWORD *)(v8 - 3) = *(_OWORD *)v7;
      *(_OWORD *)(v8 - 1) = *(_OWORD *)(v7 + 16);
      *(_QWORD *)(v7 + 16) = 0LL;
      *(_QWORD *)(v7 + 24) = 7LL;
      *(_WORD *)v7 = 0;
      v8 += 4;
      v7 += 32LL;
    }
    while ( v7 != v6 );
  }
  return sub_1800B379C((__int64)a1, (__int64)v5, v4, a2);
}
