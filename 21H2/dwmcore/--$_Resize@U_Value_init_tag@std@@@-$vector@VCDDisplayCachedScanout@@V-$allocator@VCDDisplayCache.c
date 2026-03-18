/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279C0C
 * Callers:
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18027B90C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1802799C8 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x180279CB0 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDD.c)
 */

__int64 *__fastcall std::vector<CDDisplayCachedScanout>::_Resize<std::_Value_init_tag>(_QWORD *a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  unsigned __int64 v4; // rcx
  __int64 *v5; // rdi
  __int64 *result; // rax
  unsigned __int64 v7; // rdi

  v2 = (__int64 *)a1[1];
  v4 = ((__int64)v2 - *a1) >> 5;
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      if ( a2 <= (__int64)(a1[2] - *a1) >> 5 )
      {
        v7 = a2 - v4;
        if ( a2 != v4 )
        {
          do
          {
            *v2 = 0LL;
            v2[1] = 0LL;
            v2[2] = 0LL;
            v2[3] = 0LL;
            v2 += 4;
            --v7;
          }
          while ( v7 );
        }
        result = std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v2, v2);
        a1[1] = v2;
      }
      else
      {
        return (__int64 *)std::vector<CDDisplayCachedScanout>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    v5 = (__int64 *)(*a1 + 32 * a2);
    result = std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(v5, v2);
    a1[1] = v5;
  }
  return result;
}
