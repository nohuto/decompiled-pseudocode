/*
 * XREFs of ??$_Resize@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E8F1C
 * Callers:
 *     ?Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommunicationPartner@@@Z @ 0x1801E9EA0 (-Initialize@CComputeScribbleScheduler@@AEAAJPEAUIDXGIOutputDWM@@PEAUIDCompositionDirectInkCommun.c)
 * Callees:
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UScribbleFrame@CComputeScribbleScheduler@@V?$allocator@UScribbleFrame@CComputeScribbleScheduler@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801E918C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UScribbleFrame@CComputeScribbleScheduler@@.c)
 */

unsigned __int64 __fastcall std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Resize<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2)
{
  char *v2; // rsi
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax
  __int64 v6; // rbx

  v2 = (char *)a1[1];
  v4 = (__int64)&v2[-*a1] >> 5;
  if ( a2 >= v4 )
  {
    if ( a2 > v4 )
    {
      result = (__int64)(a1[2] - *a1) >> 5;
      if ( a2 <= result )
      {
        v6 = a2 - v4;
        if ( a2 != v4 )
        {
          result = (unsigned __int64)memset_0(v2, 0, 32 * v6);
          v2 += 32 * v6;
        }
        a1[1] = v2;
      }
      else
      {
        return std::vector<CComputeScribbleScheduler::ScribbleFrame>::_Resize_reallocate<std::_Value_init_tag>(a1);
      }
    }
  }
  else
  {
    a1[1] = *a1 + 32 * a2;
  }
  return result;
}
