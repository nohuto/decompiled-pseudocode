/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1406E55A8
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1406E4E80 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206FC0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140362150 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupNamespaceEntry @ 0x1406E5668 (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v6; // rbp
  char *v7; // rbx
  char *v8; // rax
  __int64 *v9; // rcx

  v3 = -1073741771;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals(a1, a2);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
  v7 = CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v7, a1) )
  {
    v8 = &v7[16 * *(unsigned __int8 *)(a1 + 40)];
    v9 = (__int64 *)*((_QWORD *)v8 + 1);
    if ( (char *)*v9 != v8 )
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v9;
    *v9 = a1;
    *((_QWORD *)v8 + 1) = a1;
    ++*((_DWORD *)v7 + 150);
    v3 = 0;
  }
  ExReleasePushLockEx(v6, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
