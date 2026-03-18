/*
 * XREFs of IopGetDevicePDO @ 0x140277508
 * Callers:
 *     IoAllowExecution @ 0x1402774CC (IoAllowExecution.c)
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     IopGetSetSecurityObject @ 0x14068C9D0 (IopGetSetSecurityObject.c)
 *     IoRegisterContainerNotification @ 0x1408917F0 (IoRegisterContainerNotification.c)
 *     IopGetNumaNodeInformation @ 0x140892658 (IopGetNumaNodeInformation.c)
 * Callees:
 *     IopGetDeviceAttachmentBase @ 0x14027756C (IopGetDeviceAttachmentBase.c)
 *     ObfReferenceObjectWithTag @ 0x140296B50 (ObfReferenceObjectWithTag.c)
 *     KeReleaseQueuedSpinLock @ 0x1402BE540 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x1402BE5E0 (KeAcquireQueuedSpinLock.c)
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
