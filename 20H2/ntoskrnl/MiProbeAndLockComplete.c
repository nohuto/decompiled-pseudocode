/*
 * XREFs of MiProbeAndLockComplete @ 0x140316E30
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140316BC0 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MmUnlockPages @ 0x1402936A0 (MmUnlockPages.c)
 *     MiUnlockProbePacketWorkingSet @ 0x140316FF8 (MiUnlockProbePacketWorkingSet.c)
 *     MiAddMdlTracker @ 0x14052ED54 (MiAddMdlTracker.c)
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
    ++dword_140C4E620;
  }
  return (unsigned int)a2;
}
