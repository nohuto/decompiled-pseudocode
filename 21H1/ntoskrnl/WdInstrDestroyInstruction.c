/*
 * XREFs of WdInstrDestroyInstruction @ 0x1404D912C
 * Callers:
 *     HalpWdatExecuteActionBeforeInitialize @ 0x1404CF814 (HalpWdatExecuteActionBeforeInitialize.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     WdHwDestroyHardwareRegister @ 0x1404D9004 (WdHwDestroyHardwareRegister.c)
 */

void *__fastcall WdInstrDestroyInstruction(void *a1)
{
  WdHwDestroyHardwareRegister((__int64)a1 + 8);
  return memset(a1, 0, 0x40uLL);
}
