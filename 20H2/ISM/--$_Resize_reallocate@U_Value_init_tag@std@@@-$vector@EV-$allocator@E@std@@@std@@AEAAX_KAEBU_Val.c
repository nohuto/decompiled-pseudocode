/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x18015545C
 * Callers:
 *     ?Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z @ 0x1801597A0 (-Allocate@VariableSizeStructWrapperBase@Holographic@Internal@Windows@@QEAAJ_K@Z.c)
 *     ?HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z @ 0x18015F0EC (-HandleCompletion@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXJ_K@Z.c)
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163B5C (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 *     ?SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z @ 0x180163CF8 (-SetValue@PropertyCache@Holographic@Internal@Windows@@QEAA_NAEBU_GUID@@PEBX_K@Z.c)
 *     ?StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ @ 0x1801647C8 (-StartIo@V2PropertyRequest@Holographic@Internal@Windows@@QEAAXXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800130F0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C540 (memset_0.c)
 *     memmove_0 @ 0x18004A647 (memmove_0.c)
 */

char *__fastcall std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // r15
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  const struct std::nothrow_t *v7; // rdi
  _QWORD *v8; // rax
  void *v9; // rsi
  char *v10; // r14
  char *result; // rax
  void *v12; // [rsp+40h] [rbp+8h]

  if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector<T> too long");
  v4 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
  v5 = *(_QWORD *)(a1 + 16) - *(_QWORD *)a1;
  v6 = v5 >> 1;
  if ( v5 <= 0x7FFFFFFFFFFFFFFFLL - (v5 >> 1) )
  {
    v7 = (const struct std::nothrow_t *)(v6 + v5);
    if ( v6 + v5 < a2 )
      v7 = (const struct std::nothrow_t *)a2;
  }
  else
  {
    v7 = (const struct std::nothrow_t *)a2;
  }
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>((size_t)v7);
  v9 = v8;
  v12 = v8;
  try
  {
    v10 = (char *)v8 + a2;
    memset_0((char *)v8 + v4, 0, v10 - ((char *)v8 + v4));
    memmove_0(v9, *(const void **)a1, *(_QWORD *)(a1 + 8) - *(_QWORD *)a1);
    if ( *(_QWORD *)a1 )
      std::_Deallocate<16,0>(*(void **)a1, (const struct std::nothrow_t *)(*(_QWORD *)(a1 + 16) - *(_QWORD *)a1));
    *(_QWORD *)a1 = v9;
    *(_QWORD *)(a1 + 8) = v10;
    result = (char *)v7 + (_QWORD)v9;
    *(_QWORD *)(a1 + 16) = (char *)v7 + (_QWORD)v9;
  }
  catch ( ... )
  {
    std::_Deallocate<16,0>(v12, v7);
    throw;
  }
  return result;
}
