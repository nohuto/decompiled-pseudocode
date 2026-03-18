/*
 * XREFs of PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x14098C04C
 * Callers:
 *     PopIssueDirectedPowerTransition @ 0x1409977F0 (PopIssueDirectedPowerTransition.c)
 *     PopDirectedDripsBuildBroadcastTreeFull @ 0x14099F3A0 (PopDirectedDripsBuildBroadcastTreeFull.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x1402D30A0 (IoGetAttachedDeviceReferenceWithTag.c)
 */

bool __fastcall PopDirectedDripsIsPnpSoftwareDeviceNode(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rbx
  PDEVICE_OBJECT AttachedDeviceReferenceWithTag; // rax
  bool v3; // bl

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  AttachedDeviceReferenceWithTag = IoGetAttachedDeviceReferenceWithTag(v1, 0x78466F50u);
  v3 = v1 == AttachedDeviceReferenceWithTag && v1->DriverObject == PiSwDeviceDriverObject;
  ObfDereferenceObject(AttachedDeviceReferenceWithTag);
  return v3;
}
