/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404DCBCC
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404D3264 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140411300 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404DCAA4 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
