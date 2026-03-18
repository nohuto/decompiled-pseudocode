/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x14023F2F0
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405CCCDC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405F3F40 (CmpCheckOpenAccessOnKeyBody.c)
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 *     SeQuerySessionIdTokenEx @ 0x14063BB10 (SeQuerySessionIdTokenEx.c)
 *     SeGetTokenDeviceMap @ 0x14063C438 (SeGetTokenDeviceMap.c)
 *     PnpNotifyTargetDeviceChange @ 0x140649A60 (PnpNotifyTargetDeviceChange.c)
 *     NtQueryInformationJobObject @ 0x140663E00 (NtQueryInformationJobObject.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IoRegisterPlugPlayNotification @ 0x1406ECA80 (IoRegisterPlugPlayNotification.c)
 *     PsIsServiceSession @ 0x14071C3F0 (PsIsServiceSession.c)
 *     PnpNotifyDeviceClassChange @ 0x14073B830 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140889DD0 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140909634 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x14091EE60 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x14091F008 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1272);
  return *v1[141];
}
