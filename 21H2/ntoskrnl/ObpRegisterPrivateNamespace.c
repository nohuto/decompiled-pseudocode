/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x1406BC888
 * Callers:
 *     NtCreatePrivateNamespace @ 0x1406BC160 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402F6FB0 (PsGetCurrentServerSiloGlobals.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140355BE0 (ExReleasePushLockEx.c)
 *     ObpLookupNamespaceEntry @ 0x1406BC948 (ObpLookupNamespaceEntry.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v3;
}
