/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C013CB90
 * Callers:
 *     RIMStartDeviceSpecificRead @ 0x1C0020CCC (RIMStartDeviceSpecificRead.c)
 *     RIMOpenDev @ 0x1C0022754 (RIMOpenDev.c)
 *     RIMDeviceClassNotify @ 0x1C0026220 (RIMDeviceClassNotify.c)
 *     RIMWatchDog @ 0x1C0063100 (RIMWatchDog.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00BD338 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C016C488 (RIMVirtDeviceClassNotify.c)
 *     rimInputApc @ 0x1C01739B0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017435C (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C01752DC (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
