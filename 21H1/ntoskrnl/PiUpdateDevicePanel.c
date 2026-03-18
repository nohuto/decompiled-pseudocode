/*
 * XREFs of PiUpdateDevicePanel @ 0x14072D924
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140729B20 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14073045C (PipProcessStartPhase3.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140261FD0 (ExAcquireResourceSharedLite.c)
 *     ZwClose @ 0x1403F2510 (ZwClose.c)
 *     PnpDeviceObjectToDeviceInstance @ 0x14072C784 (PnpDeviceObjectToDeviceInstance.c)
 *     _CmUpdateDevicePanel @ 0x14072CD38 (_CmUpdateDevicePanel.c)
 */

__int64 __fastcall PiUpdateDevicePanel(__int64 a1, HANDLE a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int updated; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  if ( a2 )
  {
    Handle = a2;
  }
  else
  {
    updated = PnpDeviceObjectToDeviceInstance(*(_QWORD *)(a1 + 32), (__int64)&Handle, 131097);
    if ( updated < 0 )
      goto LABEL_4;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(&PnpRegistryDeviceResource, 1u);
  updated = CmUpdateDevicePanel(*(__int64 *)&PiPnpRtlCtx, *(const WCHAR **)(a1 + 48), (__int64)Handle);
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
LABEL_4:
  if ( Handle && Handle != a2 )
    ZwClose(Handle);
  return (unsigned int)updated;
}
