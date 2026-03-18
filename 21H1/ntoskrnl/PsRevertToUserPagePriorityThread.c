/*
 * XREFs of PsRevertToUserPagePriorityThread @ 0x1402C381C
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1402C3780 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsRevertToUserPagePriorityThread(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // eax

  --*(_WORD *)(a1 + 486);
  if ( (_DWORD)a2 == -1 )
  {
    v4 = *(_DWORD *)(a1 + 1304) & 0xFFFFF0FF;
  }
  else
  {
    a2 = (unsigned int)((_DWORD)a2 << 9);
    v4 = a2 | *(_DWORD *)(a1 + 1304) & 0xFFFFF1FF;
  }
  *(_DWORD *)(a1 + 1304) = v4;
  return KiLeaveGuardedRegionUnsafe(a1, a2, a3, a4);
}
