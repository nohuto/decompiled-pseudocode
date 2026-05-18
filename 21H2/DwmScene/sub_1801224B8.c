/*
 * XREFs of sub_1801224B8 @ 0x1801224B8
 * Callers:
 *     sub_180120630 @ 0x180120630 (sub_180120630.c)
 * Callees:
 *     ?_Xlen@?$vector@PEAXV?$allocator@PEAX@std@@@std@@IEBAXXZ_0 @ 0x180010BD8 (-_Xlen@-$vector@PEAXV-$allocator@PEAX@std@@@std@@IEBAXXZ_0.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     sub_1800ABC44 @ 0x1800ABC44 (sub_1800ABC44.c)
 *     sub_180122640 @ 0x180122640 (sub_180122640.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall sub_1801224B8(__int64 a1, __int64 *a2)
{
  unsigned __int64 v4; // rdx
  _QWORD **v5; // rdi
  _QWORD *i; // rbx
  _QWORD *v7; // rax

  *(_OWORD *)a2 = 0LL;
  a2[2] = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v4 = *(_QWORD *)(a1 + 80);
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFLL )
      std::vector<void *>::_Xlen();
    sub_180122640(a2);
  }
  v5 = *(_QWORD ***)(a1 + 72);
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = (_QWORD *)a2[1];
    if ( (_QWORD *)a2[2] == v7 )
    {
      sub_1800ABC44(a2, (_QWORD *)a2[1], (__int64)(i + 2));
    }
    else
    {
      v7[2] = 0LL;
      v7[3] = 0LL;
      sub_18001277C(v7, (__int64)(i + 2));
      a2[1] += 32LL;
    }
  }
  return a2;
}
