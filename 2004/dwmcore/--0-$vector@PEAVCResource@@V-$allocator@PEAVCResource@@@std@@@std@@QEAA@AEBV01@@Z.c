/*
 * XREFs of ??0?$vector@PEAVCResource@@V?$allocator@PEAVCResource@@@std@@@std@@QEAA@AEBV01@@Z @ 0x1800C94FC
 * Callers:
 *     ?OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ @ 0x1800C93D4 (-OnResourceDestroyed@CWeakResourceReference@@AEAAXXZ.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18004B6F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<CResource *>::vector<CResource *>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  SIZE_T v8; // rcx
  char *v9; // rax
  char *v10; // rdi
  size_t v11; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v6 = (v4 - *(_QWORD *)a2) >> 3;
    v7 = 8 * v6;
    v8 = 8 * v6;
    if ( v6 > 0x1FFFFFFFFFFFFFFFLL )
      v8 = -1LL;
    v9 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
    *a1 = v9;
    v10 = v9;
    a1[1] = v9;
    a1[2] = &v9[v7];
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v9, *(const void **)a2, v11);
    a1[1] = &v10[v11];
  }
  return a1;
}
