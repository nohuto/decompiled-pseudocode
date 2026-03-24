/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1405F57B4
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1405071D0 (IoRevokeHandlesForProcess.c)
 *     ObDuplicateObject @ 0x1405F51B0 (ObDuplicateObject.c)
 *     ObWaitForMultipleObjects @ 0x1405FCDC0 (ObWaitForMultipleObjects.c)
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x140607644 (ObInitProcess.c)
 *     ObpCloseHandle @ 0x14061ABC0 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x1406212A0 (NtQueryInformationProcess.c)
 *     ObCompleteObjectDuplication @ 0x14062D640 (ObCompleteObjectDuplication.c)
 *     ObQueryObjectAuditingByHandle @ 0x140684FE0 (ObQueryObjectAuditingByHandle.c)
 *     ObCaptureObjectStateForDuplication @ 0x140685408 (ObCaptureObjectStateForDuplication.c)
 *     ObFindHandleForObject @ 0x1406859C0 (ObFindHandleForObject.c)
 *     ObSetHandleAttributes @ 0x1406918A0 (ObSetHandleAttributes.c)
 *     ObGetProcessHandleCount @ 0x1406B471C (ObGetProcessHandleCount.c)
 *     PspApplyMitigationOptions @ 0x1406D8A1C (PspApplyMitigationOptions.c)
 *     NtClose @ 0x1406F0980 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1406F0C00 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x1406F6550 (ObpCreateHandle.c)
 *     NtSetInformationProcess @ 0x14070A4B0 (NtSetInformationProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895A08 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A134C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x140907978 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E12C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
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
