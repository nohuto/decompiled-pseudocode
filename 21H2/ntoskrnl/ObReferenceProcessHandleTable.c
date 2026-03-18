/*
 * XREFs of ObReferenceProcessHandleTable @ 0x14066B3D8
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x140558960 (IoRevokeHandlesForProcess.c)
 *     ObFindHandleForObject @ 0x14066A830 (ObFindHandleForObject.c)
 *     ObCaptureObjectStateForDuplication @ 0x14066B04C (ObCaptureObjectStateForDuplication.c)
 *     ObCompleteObjectDuplication @ 0x14066B204 (ObCompleteObjectDuplication.c)
 *     ObGetProcessHandleCount @ 0x14066C174 (ObGetProcessHandleCount.c)
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 *     ObInitProcess @ 0x1406A6448 (ObInitProcess.c)
 *     PspApplyMitigationOptions @ 0x14070E104 (PspApplyMitigationOptions.c)
 *     ObpCreateHandle @ 0x140731DA0 (ObpCreateHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140732D40 (ObpReferenceObjectByHandleWithTag.c)
 *     ObpCloseHandle @ 0x140734160 (ObpCloseHandle.c)
 *     NtQueryInformationProcess @ 0x14073DA00 (NtQueryInformationProcess.c)
 *     ObWaitForMultipleObjects @ 0x1407A1400 (ObWaitForMultipleObjects.c)
 *     ObSetHandleAttributes @ 0x1407A1B10 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1407A2A70 (ObQueryObjectAuditingByHandle.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x140939830 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140946508 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     PsSetProcessHandleTracingInformation @ 0x1409AD704 (PsSetProcessHandleTracingInformation.c)
 *     EtwpObjectHandleRundown @ 0x1409EA9A0 (EtwpObjectHandleRundown.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
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
