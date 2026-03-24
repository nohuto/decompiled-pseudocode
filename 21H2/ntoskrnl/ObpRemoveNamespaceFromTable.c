/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1406A7F3C
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1406A7F10 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x1408DF5F0 (NtDeletePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  unsigned int v3; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx

  v3 = -1072103391;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals((__int64)DmaAdapter, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  _InterlockedOr((volatile signed __int32 *)&DmaAdapter[21], 2u);
  v6 = *(_QWORD **)&DmaAdapter[20].Version;
  if ( v6 )
  {
    *(_QWORD *)&DmaAdapter[20].Version = 0LL;
    v6[2] = 0LL;
    v7 = *v6;
    if ( *(_QWORD **)(*v6 + 8LL) != v6 || (v8 = (_QWORD *)v6[1], (_QWORD *)*v8 != v6) )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    --CurrentServerSiloGlobals[182];
    HalPutDmaAdapter(DmaAdapter);
    v3 = 0;
  }
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
