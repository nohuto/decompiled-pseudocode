/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x1407773A0
 * Callers:
 *     HalpMcUpdateUnlock @ 0x140384230 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1403F6534 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x14077717C (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x140322E50 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x1403A11A0 (MiUnlockCodePage.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
