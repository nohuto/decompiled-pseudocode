/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B69E4
 * Callers:
 *     ?ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z @ 0x18027A42C (-ComputeCachedHdrMetadata@CDDisplaySwapChain@@IEAAJW4DXGI_HDR_METADATA_TYPE@@PEBX@Z.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B6A5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 */

void __fastcall std::vector<unsigned char>::_Resize<std::_Value_init_tag>(__int64 *a1, unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 v4; // rdx
  char *v6; // rcx
  size_t v7; // rbx
  char *v8; // rax

  v2 = (char *)a1[1];
  v4 = *a1;
  v6 = &v2[-*a1];
  if ( a2 < (unsigned __int64)v6 )
  {
    v8 = (char *)(v4 + a2);
  }
  else
  {
    if ( a2 <= (unsigned __int64)v6 )
      return;
    if ( a2 > a1[2] - v4 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      return;
    }
    v7 = a2 - (_QWORD)v6;
    memset_0(v2, 0, v7);
    v8 = &v2[v7];
  }
  a1[1] = (__int64)v8;
}
