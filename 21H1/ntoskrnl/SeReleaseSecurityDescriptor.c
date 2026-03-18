/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1405E2F00
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObOpenObjectByNameEx @ 0x1405EB110 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405EB880 (ObpCaptureObjectCreateInformation.c)
 *     ObpFreeObject @ 0x1405FB360 (ObpFreeObject.c)
 *     IopAllocRealFileObject @ 0x140600890 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601F10 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140602150 (ObInsertObjectEx.c)
 *     ObpInsertOrLocateNamedObject @ 0x140616B1C (ObpInsertOrLocateNamedObject.c)
 *     CmpCreateKeyBody @ 0x140622E40 (CmpCreateKeyBody.c)
 *     AlpcpConnectPort @ 0x140647DB4 (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x14064B8F0 (ObReferenceObjectByNameEx.c)
 *     NtCreateWnfStateName @ 0x14066BA80 (NtCreateWnfStateName.c)
 *     ObDeleteCapturedInsertInfo @ 0x14068DEB0 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x1406C5ED0 (NtSetSecurityObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D5CC0 (NtOpenObjectAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406E6388 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x14086C9CC (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
