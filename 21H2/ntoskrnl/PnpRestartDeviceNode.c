/*
 * XREFs of PnpRestartDeviceNode @ 0x14066044C
 * Callers:
 *     PiProcessQueryRemoveNoFdo @ 0x1406602DC (PiProcessQueryRemoveNoFdo.c)
 *     PiProcessClearDeviceProblem @ 0x140660388 (PiProcessClearDeviceProblem.c)
 *     PiRestartDevice @ 0x1406617B0 (PiRestartDevice.c)
 *     PiRestartRemovalRelations @ 0x1406EAC14 (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1407655BC (PnpProcessQueryRemoveAndEject.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14094F860 (PiProfileUpdateDeviceTreeCallback.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14028A160 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402AF9B0 (KeReleaseGuardedMutex.c)
 *     PipSetDevNodeState @ 0x1402DE844 (PipSetDevNodeState.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PpDevNodeUnlockTree @ 0x140775698 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14077572C (PpDevNodeLockTree.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpRestartDeviceNode(__int64 a1)
{
  unsigned int v2; // edi
  int v3; // eax
  void *v4; // rcx

  PpDevNodeLockTree(4LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x10) != 0 )
  {
    PipClearDevNodeUserFlags(a1, 5LL);
    PipClearDevNodeFlags(a1, 1081344LL);
    *(_DWORD *)(a1 + 704) &= 0xFFFE3C03;
    v2 = 0;
    v3 = *(_DWORD *)(a1 + 300);
    *(_DWORD *)(a1 + 296) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( (unsigned int)(v3 - 769) > 1 )
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
  PpDevNodeUnlockTree(4LL);
  return v2;
}
