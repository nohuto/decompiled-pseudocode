/*
 * XREFs of ??A?$unordered_map@KUtagPOINT@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINT@@@std@@@3@@std@@QEAAAEAUtagPOINT@@AEBK@Z @ 0x1800FD790
 * Callers:
 *     ?CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2@Z @ 0x180044DC8 (-CreatePointerInfoAndUpdatePositionData@ResizeProcessor@@AEAAXKUtagPOINT@@PEAVInputSite@@PEAU2@2.c)
 *     ?OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1800FDFB0 (-OnHitTest@ResizeProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 *     ?StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEFFC (-StartResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     ??$_Try_emplace@AEBK$$V@?$unordered_map@KUtagPOINTF@@U?$hash@K@std@@U?$equal_to@K@3@V?$allocator@U?$pair@$$CBKUtagPOINTF@@@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUtagPOINTF@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1800F73C0 (--$_Try_emplace@AEBK$$V@-$unordered_map@KUtagPOINTF@@U-$hash@K@std@@U-$equal_to@K@3@V-$allocator.c)
 */

__int64 __fastcall std::unordered_map<unsigned long,tagPOINT>::operator[](__int64 a1, const unsigned __int8 *a2)
{
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  std::unordered_map<unsigned long,tagPOINTF>::_Try_emplace<unsigned long const &,>(a1, (__int64)v3, a2);
  return v3[0] + 20LL;
}
