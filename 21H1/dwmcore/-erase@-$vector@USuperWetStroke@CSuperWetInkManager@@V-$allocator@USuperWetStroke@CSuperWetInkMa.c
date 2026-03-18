/*
 * XREFs of ?erase@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@@2@@Z @ 0x18019A2AC
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x1800BA114 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z @ 0x180199890 (-RemoveSourceLocal@CSuperWetInkManager@@AEAAXPEAVCSuperWetSource@@@Z.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x180199F60 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800269B4 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@00@Z @ 0x180198A88 (--$_Move_unchecked@PEAUSuperWetStroke@CSuperWetInkManager@@PEAU12@@std@@YAPEAUSuperWetStroke@CSu.c)
 */

__int64 *__fastcall std::vector<CSuperWetInkManager::SuperWetStroke>::erase(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 *result; // rax

  std::_Move_unchecked<CSuperWetInkManager::SuperWetStroke *,CSuperWetInkManager::SuperWetStroke *>(
    (__int64 *)(a3 + 80),
    *(__int64 **)(a1 + 8),
    a3);
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>(*(_QWORD *)(a1 + 8) - 72LL);
  *(_QWORD *)(a1 + 8) -= 80LL;
  result = a2;
  *a2 = a3;
  return result;
}
