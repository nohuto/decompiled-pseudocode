/*
 * XREFs of IopGetDevicePDO @ 0x1403618D8
 * Callers:
 *     IoAllowExecution @ 0x14036189C (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     IopGetSetSecurityObject @ 0x1405F9B20 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     IoRegisterContainerNotification @ 0x140897470 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x1408982D8 (IopGetNumaNodeInformation.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402089E0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402981B0 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x140298250 (KeAcquireQueuedSpinLock.c)
 *     IopGetDeviceAttachmentBase @ 0x14036193C (IopGetDeviceAttachmentBase.c)
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
