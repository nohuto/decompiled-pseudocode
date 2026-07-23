/*
 * XREFs of MiProbeAndLockComplete @ 0x1402358B0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140235640 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiUnlockProbePacketWorkingSet @ 0x140235CE0 (MiUnlockProbePacketWorkingSet.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x140530A94 (MiAddMdlTracker.c)
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
    ++dword_140C4E7E0;
  }
  return (unsigned int)a2;
}
