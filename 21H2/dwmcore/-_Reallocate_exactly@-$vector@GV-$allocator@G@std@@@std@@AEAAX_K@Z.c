/*
 * XREFs of ?_Reallocate_exactly@?$vector@GV?$allocator@G@std@@@std@@AEAAX_K@Z @ 0x1800CF100
 * Callers:
 *     ?UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z @ 0x18006A09C (-UpdatePrimitive@CMegaRect@@QEAAJAEAUUpdatePrimitiveWorkingBuffers@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180050B88 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1800F47E7 (memmove_0.c)
 */

__int64 __fastcall std::vector<unsigned short>::_Reallocate_exactly(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rdi
  SIZE_T v5; // rcx
  __int64 v6; // rdi
  void *v7; // rbx

  v3 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = 2 * a2;
  v6 = v3 >> 1;
  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    v5 = -1LL;
  v7 = (void *)std::_Allocate<16,std::_Default_allocate_traits,0>(v5);
  memmove_0(v7, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
  return std::vector<unsigned short>::_Change_array(a1, v7, v6, a2);
}
