/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x140356DAC
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x140357094 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x14070B8DC (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14070EA48 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, int a2)
{
  unsigned int v2; // eax

  --*(_WORD *)(a1 + 486);
  if ( a2 == -1 )
    v2 = *(_DWORD *)(a1 + 1304) & 0xFFFFF0FF;
  else
    v2 = (a2 << 9) | *(_DWORD *)(a1 + 1304) & 0xFFFFF1FF;
  *(_DWORD *)(a1 + 1304) = v2;
  return KiLeaveGuardedRegionUnsafe(a1);
}
