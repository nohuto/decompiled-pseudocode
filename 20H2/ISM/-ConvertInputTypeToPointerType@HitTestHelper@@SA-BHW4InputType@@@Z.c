/*
 * XREFs of ?ConvertInputTypeToPointerType@HitTestHelper@@SA?BHW4InputType@@@Z @ 0x180148EAC
 * Callers:
 *     ?GetDragManagerInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F92A8 (-GetDragManagerInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOI.c)
 *     ?GetDragSourceInputSite@DragNDropProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOINT@@W4InputType@@PEAVBamoDragManagerClientProxy@@@Z @ 0x1800F93BC (-GetDragSourceInputSite@DragNDropProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@UtagPOIN.c)
 *     ?HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_KPEAPEAXPEAPEAVBamoDragSourceClientProxy@@PEAPEAVBamoDragManagerClientProxy@@PEAPEAVInputSite@@9@Z @ 0x1800F9690 (-HitTest@DragNDropProcessor@@AEAAXUtagPOINT@@W4InputType@@U_GUID@@PEAUHitTestResult@@PEAU2@PEA_K.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x180139274 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 *     ?BuildRequestForHitTestInfo@HitTestHelper@@SA?AUHitTestRequest@1@PEAUHitTestInfo@@@Z @ 0x180148DE4 (-BuildRequestForHitTestInfo@HitTestHelper@@SA-AUHitTestRequest@1@PEAUHitTestInfo@@@Z.c)
 *     ?HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z @ 0x180174E58 (-HitTest@DragNDropProcessorLegacy@@AEAAJUtagPOINT@@W4InputType@@PEA_KPEAU2@23@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HitTestHelper::ConvertInputTypeToPointerType(int a1)
{
  if ( (a1 & 8) != 0 )
    return 2LL;
  if ( (a1 & 0x2000020) != 0 )
    return 5LL;
  if ( (a1 & 0x10) != 0 )
    return 3LL;
  return (a1 & 2) != 0 ? 4 : 1;
}
