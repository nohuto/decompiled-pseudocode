/*
 * XREFs of PnpReallocateResources @ 0x1408B32C0
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x1408A2848 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140212600 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     memset @ 0x140414300 (memset.c)
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 *     PnpStartDeviceNode @ 0x14073E0C4 (PnpStartDeviceNode.c)
 *     PipSetDevNodeFlags @ 0x1407457DC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140746C34 (PipClearDevNodeFlags.c)
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14075028C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpReleaseResourcesInternal @ 0x140751154 (PnpReleaseResourcesInternal.c)
 *     IopCommitConfiguration @ 0x140752800 (IopCommitConfiguration.c)
 *     PnpFindBestConfiguration @ 0x1407528A4 (PnpFindBestConfiguration.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1407531D0 (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpUpdateRebootRequiredReason @ 0x1408A2264 (PnpUpdateRebootRequiredReason.c)
 *     PnpRestoreResourcesInternal @ 0x1408B34A8 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x1408B8904 (PnpRebalance.c)
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
