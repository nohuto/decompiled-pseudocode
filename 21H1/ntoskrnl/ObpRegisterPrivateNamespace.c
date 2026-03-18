/*
 * XREFs of ObpRegisterPrivateNamespace @ 0x14067E0DC
 * Callers:
 *     NtCreatePrivateNamespace @ 0x14067DC90 (NtCreatePrivateNamespace.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x1402D9560 (PsGetCurrentServerSiloGlobals.c)
 *     ObpLookupNamespaceEntry @ 0x14067E19C (ObpLookupNamespaceEntry.c)
 */

__int64 __fastcall ObpRegisterPrivateNamespace(__int64 a1)
{
  unsigned int v2; // esi
  char *CurrentServerSiloGlobals; // rbx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v5; // rbp
  char *v6; // rbx
  char *v7; // rax
  char **v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v2 = -1073741771;
  CurrentServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (ULONG_PTR)(CurrentServerSiloGlobals + 720);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)(CurrentServerSiloGlobals + 720), 0LL);
  v6 = CurrentServerSiloGlobals + 128;
  if ( !ObpLookupNamespaceEntry(v6, a1) )
  {
    v7 = &v6[16 * *(unsigned __int8 *)(a1 + 40)];
    v8 = (char **)*((_QWORD *)v7 + 1);
    if ( *v8 != v7 )
      __fastfail(3u);
    *(_QWORD *)a1 = v7;
    *(_QWORD *)(a1 + 8) = v8;
    *v8 = (char *)a1;
    *((_QWORD *)v7 + 1) = a1;
    ++*((_DWORD *)v6 + 150);
    v2 = 0;
  }
  ExReleasePushLockEx(v5, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return v2;
}
