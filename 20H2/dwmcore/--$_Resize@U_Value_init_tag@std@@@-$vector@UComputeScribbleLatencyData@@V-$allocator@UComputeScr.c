/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5348
 * Callers:
 *     ?DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KPEAUIUnknown@@AEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x1800EA500 (-DispatchScribbles@CComputeScribbleFramebuffer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbl.c)
 * Callees:
 *     memset_0 @ 0x1800E3DCC (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801A5400 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UComputeScribbleLatencyData@@V-$allocator@.c)
 */

__int64 __fastcall std::vector<ComputeScribbleLatencyData>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  __int64 result; // rax
  unsigned __int64 v5; // r9
  __int64 v6; // rcx
  unsigned __int64 v7; // r8
  __int64 v8; // rbx

  v2 = (char *)a1[1];
  result = (unsigned __int64)((unsigned __int128)((__int64)&v2[-*a1] * (__int128)0x4924924924924925LL) >> 64) >> 63;
  v5 = (__int64)&v2[-*a1] / 56;
  if ( a2 >= v5 )
  {
    if ( a2 > v5 )
    {
      v6 = a1[2] - *a1;
      result = (unsigned __int64)((unsigned __int128)(v6 * (__int128)0x4924924924924925LL) >> 64) >> 63;
      if ( a2 <= v6 / 56 )
      {
        v7 = a2 - v5;
        if ( a2 != v5 )
        {
          v8 = 56 * v7;
          result = (__int64)memset_0(v2, 0, 56 * v7);
          v2 += v8;
        }
        a1[1] = v2;
      }
      else
      {
        return std::vector<ComputeScribbleLatencyData>::_Resize_reallocate<std::_Value_init_tag>(a1, a2);
      }
    }
  }
  else
  {
    result = *a1 + 56 * a2;
    a1[1] = result;
  }
  return result;
}
