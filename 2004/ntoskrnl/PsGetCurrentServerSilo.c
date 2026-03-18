/*
 * XREFs of PsGetCurrentServerSilo @ 0x14027D7E0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C7ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1405F43A0 (ExpGetProcessInformation.c)
 *     SepIsMinTCB @ 0x1406174A4 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x140617A84 (SepIsNgenImage.c)
 *     ExpWnfGenerateStateName @ 0x140626250 (ExpWnfGenerateStateName.c)
 *     SepReferenceLogonSession @ 0x14062F868 (SepReferenceLogonSession.c)
 *     NtImpersonateAnonymousToken @ 0x140630BF0 (NtImpersonateAnonymousToken.c)
 *     PnpNotifyTargetDeviceChange @ 0x140648470 (PnpNotifyTargetDeviceChange.c)
 *     PsLookupThreadByThreadId @ 0x140666140 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1406661E0 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x140666370 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x140666420 (PspThreadFromTicket.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     SeCreateClientSecurityEx @ 0x140682390 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x140682590 (SepCreateClientSecurityEx.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     EtwpStartLogger @ 0x1406C7A14 (EtwpStartLogger.c)
 *     PsCaptureUserProcessParameters @ 0x1406D4940 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1406F12DC (SepCreateLogonSessionTrack.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x1407631B8 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x14076658C (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x1407680B4 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140774830 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x1407784D0 (NtGetNextProcess.c)
 *     ExpRefreshTimeZoneInformation @ 0x140792C10 (ExpRefreshTimeZoneInformation.c)
 *     ExInitLicenseData @ 0x1407943A8 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x14092038C (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x14094AD00 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098E104 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x14027B380 (PsIsServerSilo.c)
 */

__int64 PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 Blink; // rcx

  CurrentThread = KeGetCurrentThread();
  Blink = (__int64)CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == -3 )
    return *(_QWORD *)&CurrentThread->Process[2].Header.Lock;
  if ( Blink )
  {
    while ( !PsIsServerSilo(Blink) )
      Blink = *(_QWORD *)(Blink + 1072);
  }
  return Blink;
}
