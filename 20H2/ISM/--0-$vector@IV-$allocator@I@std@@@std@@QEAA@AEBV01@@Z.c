/*
 * XREFs of ??0?$vector@IV?$allocator@I@std@@@std@@QEAA@AEBV01@@Z @ 0x1800AE214
 * Callers:
 *     ?UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z @ 0x1800B2834 (-UpdateGestureTargetingDecisions@Win32kInterop@@SAXIIPEAI@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 */

_QWORD *__fastcall std::vector<unsigned int>::vector<unsigned int>(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rax
  __int64 v6; // rbx
  size_t v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  size_t v10; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 != v4 )
  {
    v5 = (v4 - *(_QWORD *)a2) >> 2;
    v6 = 4 * v5;
    v7 = 4 * v5;
    if ( v5 > 0x3FFFFFFFFFFFFFFFLL )
      v7 = -1LL;
    v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(v7);
    *a1 = v8;
    v9 = v8;
    a1[1] = v8;
    a1[2] = (char *)v8 + v6;
    v10 = *(_QWORD *)(a2 + 8) - *(_QWORD *)a2;
    memmove_0(v8, *(const void **)a2, v10);
    a1[1] = (char *)v9 + v10;
  }
  return a1;
}
