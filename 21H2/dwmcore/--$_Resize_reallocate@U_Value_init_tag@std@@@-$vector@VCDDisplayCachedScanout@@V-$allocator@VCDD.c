/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279CB0
 * Callers:
 *     ??$_Resize@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279C0C (--$_Resize@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCache.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$0CA@@std@@YA_K_K@Z @ 0x1800B6FCC (--$_Get_size_of_n@$0CA@@std@@YA_K_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802799C8 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 */

__int64 __fastcall std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(
        __int64 **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v5; // rbp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  unsigned __int64 v8; // rdx
  SIZE_T size_of; // rax
  __int64 v10; // r14
  __int64 *v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *v14; // rcx
  __int64 *i; // rdx
  __int64 v16; // rax

  v2 = 0x7FFFFFFFFFFFFFFLL;
  if ( a2 > 0x7FFFFFFFFFFFFFFLL )
    std::_Xlength_error("vector too long");
  v5 = (char *)a1[1] - (char *)*a1;
  v6 = ((char *)a1[2] - (char *)*a1) >> 5;
  v7 = v5 >> 5;
  v8 = v6 >> 1;
  if ( v6 <= 0x7FFFFFFFFFFFFFFLL - (v6 >> 1) )
  {
    v2 = v8 + v6;
    if ( v8 + v6 < a2 )
      v2 = a2;
  }
  size_of = std::_Get_size_of_n<32>(v2);
  v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  v11 = (__int64 *)(v10 + 32 * v7);
  v12 = a2 - v7;
  if ( a2 != v7 )
  {
    do
    {
      *v11 = 0LL;
      v11[1] = 0LL;
      v11[2] = 0LL;
      v11[3] = 0LL;
      v11 += 4;
      --v12;
    }
    while ( v12 );
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v11, v11);
  v13 = a1[1];
  v14 = (__int64 *)v10;
  for ( i = *a1; i != v13; i += 4 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    v14[2] = 0LL;
    *v14 = *i;
    v14[1] = i[1];
    v14[2] = i[2];
    *i = 0LL;
    i[1] = 0LL;
    i[2] = 0LL;
    v16 = i[3];
    i[3] = 0LL;
    v14[3] = v16;
    v14 += 4;
  }
  std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v14, v14);
  return std::vector<CDDisplayCachedScanout>::_Change_array(a1, v10, a2, v2);
}
