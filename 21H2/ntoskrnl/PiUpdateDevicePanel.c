/*
 * XREFs of PiUpdateDevicePanel @ 0x14076E168
 * Callers:
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x14076E9B8 (PiProcessNewDeviceNode.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x1402B1080 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmUpdateDevicePanel @ 0x14076E224 (_CmUpdateDevicePanel.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14076E894 (PnpDeviceObjectToDeviceInstance.c)
 */

__int64 __fastcall PiUpdateDevicePanel(__int64 a1, HANDLE a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    updated = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), &Handle, 131097LL);
    if ( updated < 0 )
      goto LABEL_4;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  updated = CmUpdateDevicePanel(*(_QWORD *)&PiPnpRtlCtx, *(_QWORD *)(a1 + 48), Handle);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegion();
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)updated;
}
