/*
 * XREFs of IopGetDevicePDO @ 0x14033DEB8
 * Callers:
 *     IoAllowExecution @ 0x14033DE7C (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     IopGetSetSecurityObject @ 0x1405E3500 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     IoRegisterContainerNotification @ 0x1408904D0 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x140891338 (IopGetNumaNodeInformation.c)
 * Callees:
 *     KeReleaseQueuedSpinLock @ 0x14022B8C0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14022B960 (KeAcquireQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x14025A2D0 (ObfReferenceObjectWithTag.c)
 *     IopGetDeviceAttachmentBase @ 0x14033DF1C (IopGetDeviceAttachmentBase.c)
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
