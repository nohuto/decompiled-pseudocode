/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140205DF0
 * Callers:
 *     RtlGetActiveConsoleId @ 0x1402DCC00 (RtlGetActiveConsoleId.c)
 *     RtlGetNtProductType @ 0x140350110 (RtlGetNtProductType.c)
 *     IopLoadDriverImage @ 0x140397588 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1403F2424 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x1405C9990 (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405C99E0 (ExpWriteTimeZoneBiasStartEnd.c)
 *     PspCreateSilo @ 0x1405CFC8C (PspCreateSilo.c)
 *     NtPlugPlayControl @ 0x1405D8EF0 (NtPlugPlayControl.c)
 *     CmpOKToFollowLink @ 0x1405EDEE0 (CmpOKToFollowLink.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     ObpParseSymbolicLinkEx @ 0x14062F170 (ObpParseSymbolicLinkEx.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     NtPowerInformation @ 0x140649BC0 (NtPowerInformation.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     ExpQuerySystemInformation @ 0x14068F290 (ExpQuerySystemInformation.c)
 *     NtSetSystemInformation @ 0x1406AA390 (NtSetSystemInformation.c)
 *     RtlIsMultiSessionSku @ 0x1406EDD90 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406FBD20 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x140701C00 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x14070A160 (RtlGetNtSystemRoot.c)
 *     PsQueryCurrentApiSetSchema @ 0x140747E80 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x1407573D8 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x140761AE0 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140762A00 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140763080 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140766E70 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x1407750C0 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x14077B190 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14077C690 (RtlSetActiveConsoleId.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     SepInitializationPhase1 @ 0x1407995AC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1407A267C (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x1407B2910 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407BF7A0 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408D9630 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140902C94 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140907624 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14090CC50 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x140910060 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093486C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140934F60 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140944FE4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140945DC4 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x140947DEC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x140948780 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x140952DEC (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14027B2E0 (PsGetEffectiveServerSilo.c)
 */

char PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo();
  if ( EffectiveServerSilo )
    LOBYTE(EffectiveServerSilo) = 1;
  return EffectiveServerSilo;
}
