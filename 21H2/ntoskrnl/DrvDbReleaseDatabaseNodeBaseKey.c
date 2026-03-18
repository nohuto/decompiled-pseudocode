/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x140782BB0
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1407827F0 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A2DA0C (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A2EF0C (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406C59F0 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v5; // ebx

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v5;
}
