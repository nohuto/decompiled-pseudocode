/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230
 * Callers:
 *     rimInputApc @ 0x1C0049940 (rimInputApc.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C004F1F8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0059A04 (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDev @ 0x1C005A5A8 (RIMOpenDev.c)
 *     RIMWatchDog @ 0x1C006AD90 (RIMWatchDog.c)
 *     RIMDeviceClassNotify @ 0x1C009F050 (RIMDeviceClassNotify.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0174BE8 (RIMVirtDeviceClassNotify.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C017D40C (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
