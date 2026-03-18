/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140767CA0
 * Callers:
 *     HalpMcUpdateUnlock @ 0x14038B3D8 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F0884 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x140767A78 (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140221EF0 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x14039E2C0 (MiUnlockCodePage.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
