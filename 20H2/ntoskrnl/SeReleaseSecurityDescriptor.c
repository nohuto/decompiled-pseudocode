/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x14061F930
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140229080 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405DFEC4 (ObpInsertOrLocateNamedObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1405E2910 (NtOpenObjectAuditAlarm.c)
 *     NtSetSecurityObject @ 0x1405E30E0 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E3AB0 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObReferenceObjectByNameEx @ 0x1405E566C (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x1405E658C (AlpcpConnectPort.c)
 *     IopAllocRealFileObject @ 0x140600550 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x140601B80 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByNameEx @ 0x14060CAF0 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectCreateInformation @ 0x14060D260 (ObpCaptureObjectCreateInformation.c)
 *     CmpCreateKeyBody @ 0x14060E320 (CmpCreateKeyBody.c)
 *     ObpFreeObject @ 0x140611220 (ObpFreeObject.c)
 *     NtCreateWnfStateName @ 0x140652140 (NtCreateWnfStateName.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1406DC5F8 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObDeleteCapturedInsertInfo @ 0x140700E80 (ObDeleteCapturedInsertInfo.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
