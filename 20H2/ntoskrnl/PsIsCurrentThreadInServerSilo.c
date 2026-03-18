/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x140227380
 * Callers:
 *     RtlGetNtProductType @ 0x1403207E0 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x1403637A0 (RtlGetActiveConsoleId.c)
 *     IopLoadDriverImage @ 0x140399A08 (IopLoadDriverImage.c)
 *     RtlSetSystemGlobalData @ 0x1403F6A54 (RtlSetSystemGlobalData.c)
 *     ExpWriteTimeZoneBias @ 0x1405CF98C (ExpWriteTimeZoneBias.c)
 *     ExpWriteTimeZoneBiasStartEnd @ 0x1405CF9DC (ExpWriteTimeZoneBiasStartEnd.c)
 *     PspCreateSilo @ 0x1405D613C (PspCreateSilo.c)
 *     ExpQuerySystemInformation @ 0x140608060 (ExpQuerySystemInformation.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     CmpOKToFollowLink @ 0x14061C0A0 (CmpOKToFollowLink.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     NtPlugPlayControl @ 0x14063D7D0 (NtPlugPlayControl.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x14068D9C0 (ObpParseSymbolicLinkEx.c)
 *     RtlIsMultiSessionSku @ 0x1406C1D10 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406CE650 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406D5380 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x1406DC560 (RtlGetNtSystemRoot.c)
 *     NtSetSystemInformation @ 0x1406F5A80 (NtSetSystemInformation.c)
 *     NtPowerInformation @ 0x1406F7470 (NtPowerInformation.c)
 *     PsQueryCurrentApiSetSchema @ 0x140756A60 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x140766018 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x1407700F0 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140771010 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x140771690 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x140775EA0 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x1407836C0 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x140789790 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14078AC90 (RtlSetActiveConsoleId.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     SepInitializationPhase1 @ 0x1407A88DC (SepInitializationPhase1.c)
 *     MiCreatePagingFile @ 0x1407B19AC (MiCreatePagingFile.c)
 *     SepRmSetAuditEventWrkr @ 0x1407C0860 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407CE030 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408DF470 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x1409088A4 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x14090D244 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x140912880 (RtlGetConsoleSessionForegroundProcessId.c)
 *     RtlCapabilityCheck @ 0x140915BA0 (RtlCapabilityCheck.c)
 *     EtwQueryPerformanceTraceInformation @ 0x14093A69C (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x14093AD90 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x14094ADA4 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x14094BB84 (EtwpSetSoftRestartInformation.c)
 *     ExpSetTimeZoneInformation @ 0x14094DBAC (ExpSetTimeZoneInformation.c)
 *     NtSetSystemTime @ 0x14094E540 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x140958BAC (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x14023CDA0 (PsGetEffectiveServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 */

bool PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return 0;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread[1].WaitBlock[3].WaitListEntry.Blink == (struct _LIST_ENTRY *)-3LL )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock != 0LL;
  else
    return PsGetEffectiveServerSilo() != 0;
}
