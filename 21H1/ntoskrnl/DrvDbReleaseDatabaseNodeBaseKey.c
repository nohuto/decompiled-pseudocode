/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x1406ADC48
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x1406ADA5C (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x1409783B4 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x14097968C (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140261C10 (ExAcquireResourceExclusiveLite.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x1406AE260 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v5; // ebx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 144), 1u);
  if ( (*(_DWORD *)(a2 + 56) & 2) == 0 )
  {
    v5 = ZwClose(a4);
    if ( v5 >= 0 )
      v5 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 144));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v9, v10, v11);
  return (unsigned int)v5;
}
