/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1406D52FC
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1406D52D0 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x1408DAC80 (NtDeletePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     HalPutDmaAdapter @ 0x140261190 (HalPutDmaAdapter.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(PADAPTER_OBJECT DmaAdapter)
{
  unsigned int v2; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v8, v9, v10);
  return v2;
}
