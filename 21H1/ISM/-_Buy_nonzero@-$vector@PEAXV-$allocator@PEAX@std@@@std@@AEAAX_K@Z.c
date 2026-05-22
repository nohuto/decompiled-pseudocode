/*
 * XREFs of ?_Buy_nonzero@?$vector@PEAXV?$allocator@PEAX@std@@@std@@AEAAX_K@Z @ 0x180149438
 * Callers:
 *     ??0?$vector@PEAXV?$allocator@PEAX@std@@@std@@QEAA@_KAEBV?$allocator@PEAX@1@@Z @ 0x1801492D0 (--0-$vector@PEAXV-$allocator@PEAX@std@@@std@@QEAA@_KAEBV-$allocator@PEAX@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130C0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180013120 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 */

_QWORD *__fastcall std::vector<void *>::_Buy_nonzero(_QWORD *a1, unsigned __int64 a2)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  _QWORD *result; // rax

  if ( a2 > 0x1FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  size_of = std::_Get_size_of_n<8>(a2);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *a1 = v5;
  a1[1] = v5;
  result = &v5[a2];
  a1[2] = result;
  return result;
}
