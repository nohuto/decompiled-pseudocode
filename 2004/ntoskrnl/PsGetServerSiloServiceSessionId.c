/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x140202160
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C7ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     SeQuerySessionIdTokenEx @ 0x1405D7DD0 (SeQuerySessionIdTokenEx.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405ECE00 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     PnpNotifyTargetDeviceChange @ 0x140648470 (PnpNotifyTargetDeviceChange.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtQueryInformationJobObject @ 0x140698FB0 (NtQueryInformationJobObject.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     SeGetTokenDeviceMap @ 0x1406E253C (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x140710368 (PsIsServiceSession.c)
 *     PnpNotifyDeviceClassChange @ 0x14072CDB4 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140884280 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140903A14 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140919230 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x140919398 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1272);
  return *v1[140];
}
