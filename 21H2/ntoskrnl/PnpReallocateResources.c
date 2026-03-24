/*
 * XREFs of PnpReallocateResources @ 0x1408B3160
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1408A26E8 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x14029AC70 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14034B3B0 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414200 (memset.c)
 *     PnpRequestDeviceRemoval @ 0x140736688 (PnpRequestDeviceRemoval.c)
 *     PnpStartDeviceNode @ 0x14073DF04 (PnpStartDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x14074561C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140746A74 (PipClearDevNodeFlags.c)
 *     PnpBuildCmResourceLists @ 0x14074F54C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1407500CC (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReleaseResourcesInternal @ 0x140750F94 (PnpReleaseResourcesInternal.c)
 *     IopCommitConfiguration @ 0x140752640 (IopCommitConfiguration.c)
 *     PnpFindBestConfiguration @ 0x1407526E4 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140753010 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2104 (PnpUpdateRebootRequiredReason.c)
 *     PnpRestoreResourcesInternal @ 0x1408B3348 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B87A4 (PnpRebalance.c)
 */

void __fastcall PnpReallocateResources(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  int v3; // r14d
  __int64 v4; // rax
  int ResourceRequirementsForAssignTable; // eax
  unsigned int v6; // esi
  int BestConfiguration; // edi
  int started; // eax
  int v9; // r9d
  int v10; // r8d
  __int64 v11; // rdx
  int v12; // esi
  __int128 v13; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v14[8]; // [rsp+40h] [rbp-40h] BYREF
  _BYTE vars0[24]; // [rsp+80h] [rbp+0h] BYREF
  unsigned int v16; // [rsp+A0h] [rbp+20h] BYREF

  memset(v14, 0, sizeof(v14));
  v16 = 0;
  v13 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  if ( (*(_DWORD *)(a1 + 396) & 0x400) == 0 )
    goto LABEL_17;
  v3 = *(_DWORD *)(a1 + 396) & 0x100;
  PipClearDevNodeFlags(a1, 256);
  if ( (*(_DWORD *)(a1 + 396) & 0x800) != 0 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v14[3] = 0LL;
    LODWORD(v14[1]) |= 0x280u;
    v14[0] = v4;
    HIDWORD(v14[1]) = 4;
    ResourceRequirementsForAssignTable = PnpGetResourceRequirementsForAssignTable(
                                           (unsigned __int64)v14,
                                           (unsigned __int64)vars0,
                                           (int *)&v16);
    v6 = v16;
    BestConfiguration = ResourceRequirementsForAssignTable;
    if ( !v16 )
      goto LABEL_15;
    if ( *(_QWORD *)(a1 + 416) )
      PnpReleaseResourcesInternal((_QWORD *)a1);
    BestConfiguration = PnpFindBestConfiguration((__int64)v14, v6, (__int64)&v13);
    if ( BestConfiguration < 0 || (BestConfiguration = IopCommitConfiguration((_QWORD **)&v13), BestConfiguration < 0) )
    {
      v12 = PnpRestoreResourcesInternal(a1);
      if ( v12 < 0 )
      {
        PnpUpdateRebootRequiredReason(*(_QWORD *)(a1 + 48), v11, 0x4000LL);
        v9 = v12;
        v10 = 14;
        goto LABEL_12;
      }
    }
    else
    {
      PipClearDevNodeFlags(a1, 3072);
      PnpBuildCmResourceLists((unsigned __int64)v14, (unsigned __int64)vars0, 1);
      started = PnpStartDeviceNode(a1, 1, 1);
      BestConfiguration = started;
      if ( started < 0 )
      {
        v9 = started;
        v10 = 12;
LABEL_12:
        PnpRequestDeviceRemoval(a1, 0, v10, v9);
      }
    }
    PnpFreeResourceRequirementsForAssignTable((unsigned __int64)v14, (unsigned __int64)vars0);
    goto LABEL_15;
  }
  BestConfiguration = PnpRebalance(a1, 0LL, 0LL, 0LL);
LABEL_15:
  if ( BestConfiguration < 0 )
  {
    PipClearDevNodeFlags(a1, 256);
    PipSetDevNodeFlags(a1, v3);
  }
LABEL_17:
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KeLeaveCriticalRegion();
}
