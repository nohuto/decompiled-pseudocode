/*
 * XREFs of PnpRestartDeviceNode @ 0x14071D838
 * Callers:
 *     PiProcessQueryRemoveNoFdo @ 0x14071D6C4 (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x14071D768 (PiProcessClearDeviceProblem.c)
 *     PiRestartRemovalRelations @ 0x14071F48C (PiRestartRemovalRelations.c)
 *     PiRestartDevice @ 0x14071FC3C (PiRestartDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14073279C (PnpProcessQueryRemoveAndEject.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1408A6C60 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x1402600D0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140263BB0 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x14036B368 (PipSetDevNodeState.c)
 *     PpDevNodeUnlockTree @ 0x140710630 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14071075C (PpDevNodeLockTree.c)
 *     PipClearDevNodeFlags @ 0x14072C104 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x14072EA8C (PipClearDevNodeUserFlags.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  bool v3; // zf
  void *v4; // rcx

  PpDevNodeLockTree(4);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5LL);
    PipClearDevNodeFlags(a1, 1081344LL);
    *(_DWORD *)(a1 + 704) &= 0xFFFFBC03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300) == 769;
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( !v3 )
    {
      PipClearDevNodeFlags(a1, 2082475264LL);
      if ( *(_WORD *)(a1 + 56) )
      {
        ExFreePoolWithTag(*(PVOID *)(a1 + 64), 0);
        *(_DWORD *)(a1 + 56) = 0;
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      ExAcquireFastMutex(&PiResourceListLock);
      v4 = *(void **)(a1 + 440);
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        *(_QWORD *)(a1 + 440) = 0LL;
        PipClearDevNodeFlags(a1, 512LL);
      }
      KeReleaseGuardedMutex(&PiResourceListLock);
    }
    *(_DWORD *)(a1 + 660) = -1;
    PipSetDevNodeState(a1, 769);
  }
  else
  {
    v2 = -1073741823;
  }
  PpDevNodeUnlockTree(4);
  return v2;
}
