/*
 * XREFs of ObReferenceProcessHandleTable @ 0x14061F2E4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140501730 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x1405DBB20 (NtQueryInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x1405F7860 (ObWaitForMultipleObjects.c)
 *     ObDuplicateObject @ 0x14061ECE0 (ObDuplicateObject.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14062B240 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14062B8A0 (ObpCreateHandle.c)
 *     NtClose @ 0x14062C900 (NtClose.c)
 *     ObpCloseHandle @ 0x140637590 (ObpCloseHandle.c)
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 *     ObCompleteObjectDuplication @ 0x14066B79C (ObCompleteObjectDuplication.c)
 *     ObInitProcess @ 0x14066F6F0 (ObInitProcess.c)
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406B60A0 (ObQueryObjectAuditingByHandle.c)
 *     ObFindHandleForObject @ 0x1406B8270 (ObFindHandleForObject.c)
 *     ObSetHandleAttributes @ 0x1406C1510 (ObSetHandleAttributes.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406C89CC (ObCaptureObjectStateForDuplication.c)
 *     ObGetProcessHandleCount @ 0x1406E037C (ObGetProcessHandleCount.c)
 *     PspApplyMitigationOptions @ 0x1406F5FD0 (PspApplyMitigationOptions.c)
 *     IopQueryProcessIdsUsingFile @ 0x140891498 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14089CF2C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409032C8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093988C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
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
