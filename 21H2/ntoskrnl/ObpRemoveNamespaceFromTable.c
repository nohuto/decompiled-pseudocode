/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1406059BC
 * Callers:
 *     ObpCloseDirectoryObject @ 0x140605990 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x1408DF750 (NtDeletePrivateNamespace.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(PADAPTER_OBJECT DmaAdapter, __int64 a2)
{
  unsigned int v3; // edi
  _DWORD *CurrentServerSiloGlobals; // rsi
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v3;
}
