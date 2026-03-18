/*
 * XREFs of PnpReallocateResources @ 0x140958D9C
 * Callers:
 *     PiProcessResourceRequirementsChanged @ 0x140947934 (PiProcessResourceRequirementsChanged.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x1402D3440 (KeReleaseSemaphore.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1407483B4 (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpStartDeviceNode @ 0x140749C4C (PnpStartDeviceNode.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeFlags @ 0x14076FB70 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x14076FBEC (PipClearDevNodeFlags.c)
 *     PnpBuildCmResourceLists @ 0x14081FCD8 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14081FECC (PnpFreeResourceRequirementsForAssignTable.c)
 *     PnpFindBestConfiguration @ 0x14081FF24 (PnpFindBestConfiguration.c)
 *     PnpReleaseResourcesInternal @ 0x14082052C (PnpReleaseResourcesInternal.c)
 *     IopCommitConfiguration @ 0x140854DB4 (IopCommitConfiguration.c)
 *     PnpUpdateRebootRequiredReason @ 0x140947274 (PnpUpdateRebootRequiredReason.c)
 *     PnpRestoreResourcesInternal @ 0x140958F84 (PnpRestoreResourcesInternal.c)
 *     PnpRebalance @ 0x14095A02C (PnpRebalance.c)
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
