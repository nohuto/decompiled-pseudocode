/*
 * XREFs of ?DbgPrintWarning@@YAXPEADZZ @ 0x1C00AECC4
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00ABE60 (RIMCreateHidDesc.c)
 *     RIMAllocateHidDesc @ 0x1C00AF298 (RIMAllocateHidDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0164EF8 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01652FC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0169BF8 (RIMIDECreatePointerDeviceInfo.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C017B434 (rimExtractDigitizerPageButtonUsages.c)
 * Callees:
 *     <none>
 */

void DbgPrintWarning(PCCH Format, ...)
{
  va_list va; // [rsp+48h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 1u, Format, va);
}
