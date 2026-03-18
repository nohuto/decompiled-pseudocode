/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x140628670
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140294C80 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     CmpCreateKeyBody @ 0x1405ED820 (CmpCreateKeyBody.c)
 *     NtCreateWnfStateName @ 0x140626360 (NtCreateWnfStateName.c)
 *     NtSetSecurityObject @ 0x140626D40 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140627300 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     AlpcpConnectPort @ 0x14062A204 (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x14062DD40 (ObReferenceObjectByNameEx.c)
 *     ObDeleteCapturedInsertInfo @ 0x140652520 (ObDeleteCapturedInsertInfo.c)
 *     ObpInsertOrLocateNamedObject @ 0x140667CF0 (ObpInsertOrLocateNamedObject.c)
 *     ObpFreeObject @ 0x140673440 (ObpFreeObject.c)
 *     IopAllocRealFileObject @ 0x140678970 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140679FF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14067A230 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x140694650 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x140694DC0 (ObpCaptureObjectCreateInformation.c)
 *     NtOpenObjectAuditAlarm @ 0x1406F9340 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14070A1F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
