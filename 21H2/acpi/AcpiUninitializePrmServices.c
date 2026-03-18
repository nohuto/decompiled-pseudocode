/*
 * XREFs of AcpiUninitializePrmServices @ 0x1C005E704
 * Callers:
 *     ACPIRootIrpRemoveDevice @ 0x1C005FC60 (ACPIRootIrpRemoveDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS AcpiUninitializePrmServices()
{
  NTSTATUS result; // eax

  if ( NotificationEntry )
  {
    result = IoUnregisterPlugPlayNotification(NotificationEntry);
    NotificationEntry = 0LL;
  }
  if ( qword_1C0081C80 )
  {
    result = IoUnregisterPlugPlayNotification(qword_1C0081C80);
    qword_1C0081C80 = 0LL;
  }
  return result;
}
