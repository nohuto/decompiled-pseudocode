/*
 * XREFs of SeTokenIsNoChildProcessRestrictionEnforced @ 0x140591698
 * Callers:
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 */

bool __fastcall SeTokenIsNoChildProcessRestrictionEnforced(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v3 = *(_DWORD *)(a1 + 200);
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v4, v5, v6);
  return (v3 & 0x80000) != 0;
}
