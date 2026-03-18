/*
 * XREFs of PsIsCurrentThreadInServerSilo @ 0x14025ED10
 * Callers:
 *     RtlGetNtProductType @ 0x140312380 (RtlGetNtProductType.c)
 *     RtlGetActiveConsoleId @ 0x14035DBC0 (RtlGetActiveConsoleId.c)
 *     IopLoadDriverImage @ 0x140396978 (IopLoadDriverImage.c)
 *     PspCreateSilo @ 0x1405CE8BC (PspCreateSilo.c)
 *     NtSetSystemInformation @ 0x1405CF400 (NtSetSystemInformation.c)
 *     ExpQuerySystemInformation @ 0x1405E5DF0 (ExpQuerySystemInformation.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     CmpOKToFollowLink @ 0x140623500 (CmpOKToFollowLink.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     ObpParseSymbolicLinkEx @ 0x140677D90 (ObpParseSymbolicLinkEx.c)
 *     NtPlugPlayControl @ 0x1406A7520 (NtPlugPlayControl.c)
 *     RtlIsMultiSessionSku @ 0x1406CCA90 (RtlIsMultiSessionSku.c)
 *     RtlGetSuiteMask @ 0x1406D82C0 (RtlGetSuiteMask.c)
 *     RtlSetConsoleSessionForegroundProcessId @ 0x1406DECB0 (RtlSetConsoleSessionForegroundProcessId.c)
 *     RtlGetNtSystemRoot @ 0x1406E62F0 (RtlGetNtSystemRoot.c)
 *     NtPowerInformation @ 0x14070B1B0 (NtPowerInformation.c)
 *     PsQueryCurrentApiSetSchema @ 0x140746300 (PsQueryCurrentApiSetSchema.c)
 *     IopUnloadDriver @ 0x140754A50 (IopUnloadDriver.c)
 *     EtwShutdown @ 0x140760200 (EtwShutdown.c)
 *     NtInitiatePowerAction @ 0x140761120 (NtInitiatePowerAction.c)
 *     PoUserShutdownInitiated @ 0x1407617A0 (PoUserShutdownInitiated.c)
 *     PoUserShutdownCancelled @ 0x1407654B0 (PoUserShutdownCancelled.c)
 *     MiInitializeSessionGlobals @ 0x140772CB0 (MiInitializeSessionGlobals.c)
 *     CmpAcceptBoot @ 0x140778D80 (CmpAcceptBoot.c)
 *     RtlSetActiveConsoleId @ 0x14077A280 (RtlSetActiveConsoleId.c)
 *     MiCreatePagingFile @ 0x14079E69C (MiCreatePagingFile.c)
 *     SepInitializationPhase1 @ 0x1407A6578 (SepInitializationPhase1.c)
 *     SepRmSetAuditEventWrkr @ 0x1407AF7A0 (SepRmSetAuditEventWrkr.c)
 *     NtSetDefaultHardErrorPort @ 0x1407BC630 (NtSetDefaultHardErrorPort.c)
 *     NtSetInformationSymbolicLink @ 0x1408D82C0 (NtSetInformationSymbolicLink.c)
 *     PspConvertSiloToServerSilo @ 0x140901E34 (PspConvertSiloToServerSilo.c)
 *     PsShutdownSystem @ 0x140906374 (PsShutdownSystem.c)
 *     RtlGetConsoleSessionForegroundProcessId @ 0x14090B9A0 (RtlGetConsoleSessionForegroundProcessId.c)
 *     EtwQueryPerformanceTraceInformation @ 0x1409335CC (EtwQueryPerformanceTraceInformation.c)
 *     EtwSetPerformanceTraceInformation @ 0x140933CC0 (EtwSetPerformanceTraceInformation.c)
 *     EtwpGetSoftRestartInformation @ 0x140943D70 (EtwpGetSoftRestartInformation.c)
 *     EtwpSetSoftRestartInformation @ 0x140944B54 (EtwpSetSoftRestartInformation.c)
 *     NtSetSystemTime @ 0x140947400 (NtSetSystemTime.c)
 *     ExpRaiseHardError @ 0x140951A4C (ExpRaiseHardError.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x1402D95B0 (PsGetEffectiveServerSilo.c)
 */

char PsIsCurrentThreadInServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 EffectiveServerSilo; // rax

  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    EffectiveServerSilo = *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  else
    EffectiveServerSilo = PsGetEffectiveServerSilo(Blink);
  if ( EffectiveServerSilo )
    LOBYTE(EffectiveServerSilo) = 1;
  return EffectiveServerSilo;
}
