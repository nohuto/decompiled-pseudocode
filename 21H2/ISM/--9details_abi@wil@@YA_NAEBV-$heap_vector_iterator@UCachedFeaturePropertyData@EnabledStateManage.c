/*
 * XREFs of ??9details_abi@wil@@YA_NAEBV?$heap_vector_iterator@UCachedFeaturePropertyData@EnabledStateManager@details@wil@@@01@0@Z @ 0x18003D9DC
 * Callers:
 *     ?OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ @ 0x1800661C8 (-OnStateChange@EnabledStateManager@details@wil@@QEAAXXZ.c)
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800665DC (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 *     ?OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z @ 0x180088F70 (-OnSystemCommand@GameControllerRawInputProvider@@UEAAXI_K0E_N@Z.c)
 *     ?CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FDC84 (-CancelResize@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEDE0 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180135740 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall wil::details_abi::operator!=(_QWORD *a1, _QWORD *a2)
{
  return *a1 != *a2;
}
