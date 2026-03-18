/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404D963C
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404CFCC4 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404D9514 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
