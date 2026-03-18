/*
 * XREFs of ObReferenceProcessHandleTable @ 0x140678474
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140505650 (IoRevokeHandlesForProcess.c)
 *     NtClose @ 0x140611680 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140611900 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCreateHandle @ 0x140616FD0 (ObpCreateHandle.c)
 *     ObpCloseHandle @ 0x140627DB0 (ObpCloseHandle.c)
 *     ObSetHandleAttributes @ 0x1406295A0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140629840 (ObQueryObjectAuditingByHandle.c)
 *     ObInitProcess @ 0x1406301EC (ObInitProcess.c)
 *     PspRundownSingleProcess @ 0x140631344 (PspRundownSingleProcess.c)
 *     NtQueryInformationProcess @ 0x140636B80 (NtQueryInformationProcess.c)
 *     ObCompleteObjectDuplication @ 0x14065718C (ObCompleteObjectDuplication.c)
 *     ObDuplicateObject @ 0x140677E70 (ObDuplicateObject.c)
 *     ObWaitForMultipleObjects @ 0x140688460 (ObWaitForMultipleObjects.c)
 *     PspApplyMitigationOptions @ 0x140698088 (PspApplyMitigationOptions.c)
 *     NtSetInformationProcess @ 0x14069AAC0 (NtSetInformationProcess.c)
 *     ObCaptureObjectStateForDuplication @ 0x1406A5B84 (ObCaptureObjectStateForDuplication.c)
 *     ObFindHandleForObject @ 0x1406B1130 (ObFindHandleForObject.c)
 *     ObGetProcessHandleCount @ 0x1406D614C (ObGetProcessHandleCount.c)
 *     IopQueryProcessIdsUsingFile @ 0x140898438 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x1408A3D7C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x14090A1C8 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x14094095C (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
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
