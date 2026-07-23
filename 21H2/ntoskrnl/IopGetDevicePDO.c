/*
 * XREFs of IopGetDevicePDO @ 0x1402717B8
 * Callers:
 *     IoAllowExecution @ 0x14027177C (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     IopGetSetSecurityObject @ 0x140644580 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x140718340 (IopParseDevice.c)
 *     IoRegisterContainerNotification @ 0x140894BA0 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x140895A08 (IopGetNumaNodeInformation.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14027181C (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 */

_DWORD *__fastcall IopGetDevicePDO(__int64 a1)
{
  KIRQL v2; // di
  _DWORD *DeviceAttachmentBase; // rax
  _DWORD *v4; // rbx

  v2 = KeAcquireQueuedSpinLock(0xAuLL);
  DeviceAttachmentBase = (_DWORD *)IopGetDeviceAttachmentBase(a1);
  v4 = DeviceAttachmentBase;
  if ( (DeviceAttachmentBase[12] & 0x1000) != 0 )
    ObfReferenceObjectWithTag(DeviceAttachmentBase, 0x746C6644u);
  else
    v4 = 0LL;
  KeReleaseQueuedSpinLock(0xAuLL, v2);
  return v4;
}
