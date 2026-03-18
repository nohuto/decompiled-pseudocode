/*
 * XREFs of PsGetCurrentServerSilo @ 0x14023F0F0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     ExpGetProcessInformation @ 0x140611F60 (ExpGetProcessInformation.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     SeCreateClientSecurityEx @ 0x140620380 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140620580 (SepCreateClientSecurityEx.c)
 *     PsLookupThreadByThreadId @ 0x14063AEE0 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x14063AFA0 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x14063B130 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x14063B1E0 (PspThreadFromTicket.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     ExpWnfGenerateStateName @ 0x1406524A4 (ExpWnfGenerateStateName.c)
 *     NtImpersonateAnonymousToken @ 0x14068D4F0 (NtImpersonateAnonymousToken.c)
 *     SepIsNgenImage @ 0x14068FF98 (SepIsNgenImage.c)
 *     SepIsMinTCB @ 0x1406905B8 (SepIsMinTCB.c)
 *     PsCaptureUserProcessParameters @ 0x1406A6320 (PsCaptureUserProcessParameters.c)
 *     SepReferenceLogonSession @ 0x1406A9FF8 (SepReferenceLogonSession.c)
 *     SepCreateLogonSessionTrack @ 0x1406C46DC (SepCreateLogonSessionTrack.c)
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     EtwpStartLogger @ 0x140713B28 (EtwpStartLogger.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x1407717C8 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x1407755BC (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407766C0 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140782E30 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x140786AD0 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x14079F494 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x1407A0C50 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x1409261AC (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x140950AC0 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x1409940F4 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B6100 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14023CE40 (PsIsServerSilo.c)
 *     KeIsExecutingInArbitraryThreadContext @ 0x1403F1894 (KeIsExecutingInArbitraryThreadContext.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx
  __int64 v3; // rcx

  if ( (unsigned int)KeIsExecutingInArbitraryThreadContext() )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( !Blink )
    return 0LL;
  if ( PsIsServerSilo(Blink) )
    return v3;
  while ( !PsIsServerSilo(*(_QWORD *)(v3 + 1072)) )
    ;
  return v3;
}
