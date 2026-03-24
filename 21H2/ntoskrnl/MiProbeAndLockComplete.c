/*
 * XREFs of MiProbeAndLockComplete @ 0x1402B76D0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x1402B7460 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1402B7B00 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x140530854 (MiAddMdlTracker.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  struct _MDL *v4; // rbx

  MiUnlockProbePacketWorkingSet(a1);
  v4 = *(struct _MDL **)(a1 + 56);
  if ( (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker((ULONG_PTR)v4);
  if ( a2 < 0 )
  {
    MmUnlockPages(v4);
    ++dword_140C4E7A0;
  }
  return (unsigned int)a2;
}
