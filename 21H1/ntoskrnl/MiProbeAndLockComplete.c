/*
 * XREFs of MiProbeAndLockComplete @ 0x140307CE0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140307A70 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x1402471B0 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140307EA8 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x14052AD34 (MiAddMdlTracker.c)
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
    ++dword_140C4E6E0;
  }
  return (unsigned int)a2;
}
