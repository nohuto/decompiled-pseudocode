/*
 * XREFs of ??A?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAAAEAUInitialPointerInfo@ResizeProcessor@@AEBK@Z @ 0x180045BE0
 * Callers:
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x180045C08 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FDC84 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1800FE460 (-OnInput@ResizeProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEDE0 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U?$hash@K@std@@U?$equal_to@K@4@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x180045988 (--$_Try_emplace@AEBK$$V@-$unordered_map@KUInitialPointerInfo@ResizeProcessor@@U-$hash@K@std@@U-$.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::operator[](
        __int64 a1,
        const unsigned __int8 *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::unordered_map<unsigned long,ResizeProcessor::InitialPointerInfo>::_Try_emplace<unsigned long const &,>(
    a1,
    (__int64)v3,
    a2);
  return v3[0] + 20LL;
}
