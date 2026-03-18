/*
 * XREFs of ObpRemoveNamespaceFromTable @ 0x1406BF4AC
 * Callers:
 *     ObpCloseDirectoryObject @ 0x1406BF480 (ObpCloseDirectoryObject.c)
 *     NtDeletePrivateNamespace @ 0x1407F8B60 (NtDeletePrivateNamespace.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140347DB0 (PsGetCurrentServerSiloGlobals.c)
 */

__int64 __fastcall ObpRemoveNamespaceFromTable(volatile signed __int32 *Object)
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
  _InterlockedOr(Object + 84, 2u);
  v5 = (_QWORD *)*((_QWORD *)Object + 40);
  if ( v5 )
  {
    *((_QWORD *)Object + 40) = 0LL;
    v5[2] = 0LL;
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    --CurrentServerSiloGlobals[182];
    ObfDereferenceObject((PVOID)Object);
    v2 = 0;
  }
  ExReleasePushLockEx((ULONG_PTR)(CurrentServerSiloGlobals + 180), 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v2;
}
