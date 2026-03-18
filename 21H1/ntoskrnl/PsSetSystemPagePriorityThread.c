/*
 * XREFs of PsSetSystemPagePriorityThread @ 0x1402C37C4
 * Callers:
 *     SmSetThreadSystemPagePriority @ 0x1402C3780 (SmSetThreadSystemPagePriority.c)
 *     MiRelocateImage @ 0x1406442B0 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x1406C9BB0 (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 */

__int64 __fastcall PsSetSystemPagePriorityThread(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  unsigned int v8; // eax

  --*(_WORD *)(a1 + 486);
  v4 = *(unsigned __int8 *)(a1 + 1305);
  v5 = *(_DWORD *)(a1 + 1304);
  v6 = (unsigned int)(a2 << 9);
  if ( (v4 & 1) != 0 )
  {
    v7 = ((unsigned int)v4 >> 1) & 7;
    v8 = v5 & 0xFFFFF1FF;
  }
  else
  {
    v7 = -1;
    v8 = v5 | 0x100;
  }
  *(_DWORD *)(a1 + 1304) = v6 | v8;
  KiLeaveGuardedRegionUnsafe(a1, v6, v4, a4);
  return v7;
}
