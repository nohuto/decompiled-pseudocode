/*
 * XREFs of ObReferenceProcessHandleTable @ 0x1406E4F14
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140507150 (IoRevokeHandlesForProcess.c)
 *     ObCaptureObjectStateForDuplication @ 0x1405E261C (ObCaptureObjectStateForDuplication.c)
 *     ObQueryObjectAuditingByHandle @ 0x1405E2BC0 (ObQueryObjectAuditingByHandle.c)
 *     ObCompleteObjectDuplication @ 0x1405E36D0 (ObCompleteObjectDuplication.c)
 *     ObFindHandleForObject @ 0x1405E3D40 (ObFindHandleForObject.c)
 *     ObSetHandleAttributes @ 0x1405F1710 (ObSetHandleAttributes.c)
 *     ObGetProcessHandleCount @ 0x1406138EC (ObGetProcessHandleCount.c)
 *     ObpCloseHandle @ 0x140684820 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14068AF10 (NtQueryInformationProcess.c)
 *     ObInitProcess @ 0x1406970D4 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x1406AFCFC (PspApplyMitigationOptions.c)
 *     ObDuplicateObject @ 0x1406E4910 (ObDuplicateObject.c)
 *     ObWaitForMultipleObjects @ 0x1406EC520 (ObWaitForMultipleObjects.c)
 *     PspRundownSingleProcess @ 0x1406F3E68 (PspRundownSingleProcess.c)
 *     NtClose @ 0x140707D60 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140707FE0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x14070D930 (ObpCreateHandle.c)
 *     NtSetInformationProcess @ 0x140721890 (NtSetInformationProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x140895B68 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A14AC (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x140907AD8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14093E2FC (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 */

unsigned __int64 __fastcall ObReferenceProcessHandleTable(struct _EX_RUNDOWN_REF *a1)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  unsigned __int64 Count; // rbx

  v1 = a1 + 139;
  Count = 0LL;
  if ( ExAcquireRundownProtection(a1 + 139) )
  {
    Count = a1[174].Count;
    if ( !Count )
      ExReleaseRundownProtection(v1);
  }
  return Count;
}
