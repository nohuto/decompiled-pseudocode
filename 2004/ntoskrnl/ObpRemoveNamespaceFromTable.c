/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1406F877C
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1406F8750 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x1408DBFF0 (NtDeletePrivateNamespace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140207FC0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140208270 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14027B290 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(PADAPTER_OBJECT DmaAdapter)
{
  unsigned int v2; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx

  v2 = -1072103391;
  CurrentServerSiloGlobals = PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  _InterlockedOr((volatile signed __int32 *)&DmaAdapter[21], 2u);
  v5 = *(_QWORD **)&DmaAdapter[20].Version;
  if ( v5 )
  {
    *(_QWORD *)&DmaAdapter[20].Version = 0LL;
    v5[2] = 0LL;
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --CurrentServerSiloGlobals[182];
    HalPutDmaAdapter(DmaAdapter);
    v2 = 0;
  }
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v2;
}
