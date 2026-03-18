/*
 * XREFs of MiProbeAndLockComplete @ 0x14031A4F0
 * Callers:
 *     MmProbeAndLockSelectedPages @ 0x140247CF0 (MmProbeAndLockSelectedPages.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     IopProbeAndLockPages_1 @ 0x1403198A0 (IopProbeAndLockPages_1.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     MmLockPhysicalPagesByVa @ 0x14096A278 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     MiAddMdlTracker @ 0x140584030 (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x14096A384 (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // r8
  struct _MDL *v6; // rdi
  unsigned __int64 v8; // rax

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (*(_BYTE *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(_QWORD *)a1 )
      {
        MmUnlockPhysicalPagesByVa(*(_QWORD *)a1, v8 - *(_QWORD *)a1, v5, *(unsigned int *)(a1 + 96));
        v8 = *(_QWORD *)(a1 + 8);
      }
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL),
        -(__int64)((*(_QWORD *)(a1 + 16) - v8) >> 12));
    }
    else
    {
      MmUnlockPages(v6);
    }
    ++dword_140C52A94;
  }
  return (unsigned int)a2;
}
