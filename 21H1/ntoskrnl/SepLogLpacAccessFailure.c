/*
 * XREFs of SepLogLpacAccessFailure @ 0x140590668
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     SepGetStackTraceHash @ 0x140590550 (SepGetStackTraceHash.c)
 *     DbgkQueueUserExceptionReport @ 0x140882400 (DbgkQueueUserExceptionReport.c)
 *     EtwTraceLpacAccessFailure @ 0x14093B740 (EtwTraceLpacAccessFailure.c)
 */

__int64 SepLogLpacAccessFailure()
{
  ULONG v0; // ebx
  unsigned __int8 v1; // di
  _QWORD v3[19]; // [rsp+28h] [rbp-49h] BYREF
  ULONG v4; // [rsp+D8h] [rbp+67h] BYREF

  v4 = 0;
  if ( KeGetCurrentIrql() >= 2u || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    return 3221225659LL;
  SepGetStackTraceHash(&v4);
  v0 = v4;
  v1 = v4 ^ BYTE2(v4) ^ ((unsigned __int16)(v4 ^ HIWORD(v4)) >> 8);
  EtwTraceLpacAccessFailure(v4);
  if ( !SeLpacEnableWatsonReporting )
    return 3221226326LL;
  if ( SeLpacEnableWatsonThrottling )
  {
    if ( _interlockedbittestandset(&dword_140CF9F50[(unsigned __int64)v1 >> 5], v1 & 0x1F) )
      return 0LL;
    v0 = v4;
  }
  memset(v3, 0, sizeof(v3));
  v3[2] = 0LL;
  v3[5] = v0;
  v3[0] = 3221226505LL;
  LODWORD(v3[3]) = 2;
  v3[4] = 43LL;
  return DbgkQueueUserExceptionReport((PADAPTER_OBJECT)KeGetCurrentThread());
}
