/*
 * XREFs of PpDevCfgProcessDevices @ 0x14078C65C
 * Callers:
 *     PnpBootPhaseComplete @ 0x14078C594 (PnpBootPhaseComplete.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     PnpRequestDeviceAction @ 0x14036DAE4 (PnpRequestDeviceAction.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     RtlFreeAnsiString @ 0x14065EA70 (RtlFreeAnsiString.c)
 *     PpDevNodeUnlockTree @ 0x1406A5D00 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406A5E2C (PpDevNodeLockTree.c)
 *     _CmGetDeviceStatus @ 0x1406C1928 (_CmGetDeviceStatus.c)
 *     PipForDeviceNodeSubtree @ 0x140707250 (PipForDeviceNodeSubtree.c)
 *     _CmDeleteDevice @ 0x140719FBC (_CmDeleteDevice.c)
 *     PpDeviceRegistration @ 0x140733C8C (PpDeviceRegistration.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 PpDevCfgProcessDevices()
{
  PVOID *v0; // rbx
  char v1; // si
  int v2; // edi
  PVOID *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  unsigned int v7; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  PVOID v12; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v9 = 0;
  v0 = P;
  LODWORD(v11) = 0;
  v1 = 0;
  LODWORD(v10) = 0;
  P[1] = P;
  P[0] = P;
  if ( (PiDevCfgMode & 2) != 0 )
  {
    v2 = PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, (__int64)P);
    if ( v2 < 0 )
      goto LABEL_18;
    v0 = (PVOID *)P[0];
    if ( P[0] != P )
    {
      v2 = PiPnpRtlBeginOperation(&v12);
      if ( v2 >= 0 )
      {
        for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
        {
          if ( (int)CmGetDeviceStatus(*(__int64 *)&PiPnpRtlCtx, (const WCHAR *)i[3], 0LL, &v9, &v11, &v10, v7) < 0
            || (v9 & 2) == 0 )
          {
            PpDevNodeLockTree(3);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            PpDeviceRegistration((__int64)(i + 2), 0LL, 0LL, 1);
            if ( (int)CmDeleteDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)i[3], 0) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            PpDevNodeUnlockTree(3);
          }
        }
        PiPnpRtlEndOperation((PVOID **)v12);
        if ( v1 )
          PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v2 = 0;
  }
  while ( v0 != P )
  {
    if ( v0[1] != P || (v6 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v6[1] = P;
    RtlFreeAnsiString((PUNICODE_STRING)v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_18:
    v0 = (PVOID *)P[0];
  }
  return (unsigned int)v2;
}
