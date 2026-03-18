/*
 * XREFs of PpMarkDeviceStackExtensionFlag @ 0x1403703B8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x1407333F0 (PiProcessNewDeviceNode.c)
 *     PnpStartDeviceNode @ 0x14073AFA8 (PnpStartDeviceNode.c)
 *     IopDoDeferredSetInterfaceState @ 0x14074379C (IopDoDeferredSetInterfaceState.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 */

void __fastcall PpMarkDeviceStackExtensionFlag(__int64 a1, int a2, char a3)
{
  KIRQL v6; // r9
  __int64 v7; // rcx
  int v8; // edx
  int v9; // edx

  v6 = KeAcquireQueuedSpinLock(0xAuLL);
  while ( a1 )
  {
    v7 = *(_QWORD *)(a1 + 312);
    v8 = *(_DWORD *)(v7 + 32);
    if ( a3 )
      v9 = a2 | v8;
    else
      v9 = ~a2 & v8;
    *(_DWORD *)(v7 + 32) = v9;
    a1 = *(_QWORD *)(a1 + 24);
  }
  KeReleaseQueuedSpinLock(0xAuLL, v6);
}
