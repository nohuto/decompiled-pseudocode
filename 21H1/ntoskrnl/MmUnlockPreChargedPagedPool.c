/*
 * XREFs of MmUnlockPreChargedPagedPool @ 0x14075FBA0
 * Callers:
 *     HalpMcUpdateUnlock @ 0x14037FB70 (HalpMcUpdateUnlock.c)
 *     MiDeleteSubsectionLargePages @ 0x1403EF524 (MiDeleteSubsectionLargePages.c)
 *     PopFreeHiberContext @ 0x14075F980 (PopFreeHiberContext.c)
 * Callees:
 *     MiGetPteAddress @ 0x14027AF40 (MiGetPteAddress.c)
 *     MiUnlockCodePage @ 0x14039DB30 (MiUnlockCodePage.c)
 */

__int64 __fastcall MmUnlockPreChargedPagedPool(unsigned __int64 a1)
{
  unsigned __int64 PteAddress; // rax
  __int64 v2; // rdx
  __int16 v3; // r8

  PteAddress = MiGetPteAddress(a1);
  return MiUnlockCodePage(PteAddress, PteAddress + 8 * ((((unsigned __int64)(v3 & 0xFFF) + v2 + 4095) >> 12) - 1), 0);
}
