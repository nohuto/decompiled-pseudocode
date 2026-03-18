/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405E9CC4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501D80 (IoRevokeHandlesForProcess.c)
 *     ObDuplicateObject @ 0x1405E96C0 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405F5CD0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x1405F6330 (ObpCreateHandle.c)
 *     NtClose @ 0x1405F78C0 (NtClose.c)
 *     ObpCloseHandle @ 0x140602550 (ObpCloseHandle.c)
 *     PspApplyMitigationOptions @ 0x140612B6C (PspApplyMitigationOptions.c)
 *     ObInitProcess @ 0x140617FD0 (ObInitProcess.c)
 *     ObCompleteObjectDuplication @ 0x14062607C (ObCompleteObjectDuplication.c)
 *     PspRundownSingleProcess @ 0x14065C39C (PspRundownSingleProcess.c)
 *     NtQueryInformationProcess @ 0x140661E20 (NtQueryInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x14066F900 (ObWaitForMultipleObjects.c)
 *     NtSetInformationProcess @ 0x1406A02E0 (NtSetInformationProcess.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406D4430 (ObQueryObjectAuditingByHandle.c)
 *     ObFindHandleForObject @ 0x1406D7370 (ObFindHandleForObject.c)
 *     ObSetHandleAttributes @ 0x1406E1A90 (ObSetHandleAttributes.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406E908C (ObCaptureObjectStateForDuplication.c)
 *     ObGetProcessHandleCount @ 0x14070310C (ObGetProcessHandleCount.c)
 *     IopQueryProcessIdsUsingFile @ 0x1408927B8 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14089E24C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409045A8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093AB2C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140298F30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402993F0 (ExAcquireRundownProtection_0.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( ExAcquireRundownProtection_0(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      ExReleaseRundownProtection_0(v1);
  }
  return Count;
}
