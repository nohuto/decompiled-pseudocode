/*
 * XREFs of ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x180018178
 * Callers:
 *     ?GetTargetFromInputSite@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV?$ComPtr@VInputSite@@@34@W4InputType@@AEBUHitTestResult@@AEBU_LUID@@AEAV?$ComPtr@UIDCompInputTarget@@@34@@Z @ 0x180017EB0 (-GetTargetFromInputSite@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBV-$Com.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800B6708 (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180176DD0 (-OnHitTest@InputForwardProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcesso.c)
 *     ?OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801781B0 (-OnHitTest@EdgyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitial.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ToCompositionInputType(int a1)
{
  __int64 result; // rax

  if ( (a1 & 0x2000028) != 0 )
    return 3LL;
  if ( (a1 & 0x10) != 0 )
    return 4LL;
  if ( (a1 & 2) != 0 )
    return 1LL;
  result = 0LL;
  if ( (a1 & 4) != 0 )
    return 2LL;
  return result;
}
