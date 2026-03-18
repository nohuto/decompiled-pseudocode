/*
 * XREFs of PsGetCurrentServerSilo @ 0x1402044D0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C6ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405DFE40 (PsLookupThreadByThreadId.c)
 *     ObpReferenceDeviceMap @ 0x1405DFEE0 (ObpReferenceDeviceMap.c)
 *     PsLookupProcessByProcessId @ 0x1405E0070 (PsLookupProcessByProcessId.c)
 *     PspThreadFromTicket @ 0x1405E0120 (PspThreadFromTicket.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     SeCreateClientSecurityEx @ 0x14060A240 (SeCreateClientSecurityEx.c)
 *     SepCreateClientSecurityEx @ 0x14060A440 (SepCreateClientSecurityEx.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x140629910 (ExpGetProcessInformation.c)
 *     ExpWnfGenerateStateName @ 0x14066B970 (ExpWnfGenerateStateName.c)
 *     SepIsMinTCB @ 0x14066EA54 (SepIsMinTCB.c)
 *     SepIsNgenImage @ 0x14066EF0C (SepIsNgenImage.c)
 *     SepReferenceLogonSession @ 0x1406740A8 (SepReferenceLogonSession.c)
 *     NtImpersonateAnonymousToken @ 0x1406778C0 (NtImpersonateAnonymousToken.c)
 *     EtwpStartLogger @ 0x1406798DC (EtwpStartLogger.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1406B3480 (IoRegisterPlugPlayNotification.c)
 *     PsCaptureUserProcessParameters @ 0x1406B65B0 (PsCaptureUserProcessParameters.c)
 *     SepCreateLogonSessionTrack @ 0x1406CFF3C (SepCreateLogonSessionTrack.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     PopTransitionCheckpoint @ 0x1407618D8 (PopTransitionCheckpoint.c)
 *     SepBlockAccessForLogonSession @ 0x140764BCC (SepBlockAccessForLogonSession.c)
 *     SepDeleteLogonSessionTrack @ 0x140765CD0 (SepDeleteLogonSessionTrack.c)
 *     MiSessionCreateInternal @ 0x140772420 (MiSessionCreateInternal.c)
 *     NtGetNextProcess @ 0x1407760C0 (NtGetNextProcess.c)
 *     ExInitLicenseData @ 0x140791B78 (ExInitLicenseData.c)
 *     SepMakeLogonSessionsSiblings @ 0x14091F0DC (SepMakeLogonSessionsSiblings.c)
 *     SLUpdateLicenseDataInternal @ 0x140949960 (SLUpdateLicenseDataInternal.c)
 *     PopTransitionSystemPowerStateEx @ 0x14098DAE8 (PopTransitionSystemPowerStateEx.c)
 *     ExpSystemErrorHandler2 @ 0x1409AF330 (ExpSystemErrorHandler2.c)
 * Callees:
 *     PsIsServerSilo @ 0x1402D9650 (PsIsServerSilo.c)
 */

struct _LIST_ENTRY *PsGetCurrentServerSilo()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _LIST_ENTRY *Blink; // rcx

  CurrentThread = KeGetCurrentThread();
  Blink = CurrentThread[1].WaitBlock[3].WaitListEntry.Blink;
  if ( Blink == (struct _LIST_ENTRY *)-3LL )
    return *(struct _LIST_ENTRY **)&CurrentThread->Process[2].Header.Lock;
  if ( Blink )
  {
    while ( !(unsigned __int8)PsIsServerSilo() )
      ;
  }
  return Blink;
}
