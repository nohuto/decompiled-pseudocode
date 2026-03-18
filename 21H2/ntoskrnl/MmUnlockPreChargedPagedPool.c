/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x140800560
 * Callers:
 *     HalpMcUpdateUnlock @ 0x14038D400 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1405AED7C (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x140800338 (PopFreeHiberContext.c)
 * Callees:
 *     MiUnlockCodePage @ 0x140256158 (MiUnlockCodePage.c)
 *     MiGetPteAddress @ 0x140313C70 (MiGetPteAddress.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
