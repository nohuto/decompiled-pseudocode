/*
 * XREFs of PsGetServerSiloServiceSessionId @ 0x1402E5A50
 * Callers:
 *     PnpNotifyTargetDeviceChangeNotifyEntry @ 0x1405C6ACC (PnpNotifyTargetDeviceChangeNotifyEntry.c)
 *     NtQueryInformationJobObject @ 0x1405EFAA0 (NtQueryInformationJobObject.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140622420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     PnpNotifyTargetDeviceChange @ 0x140684748 (PnpNotifyTargetDeviceChange.c)
 *     SeQuerySessionIdTokenEx @ 0x1406A6400 (SeQuerySessionIdTokenEx.c)
 *     IoRegisterPlugPlayNotification @ 0x1406B3480 (IoRegisterPlugPlayNotification.c)
 *     SeGetTokenDeviceMap @ 0x1406C1FBC (SeGetTokenDeviceMap.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsIsServiceSession @ 0x1406EC848 (PsIsServiceSession.c)
 *     PnpNotifyDeviceClassChange @ 0x140722CF8 (PnpNotifyDeviceClassChange.c)
 *     DbgkpSendErrorMessage @ 0x140882F60 (DbgkpSendErrorMessage.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x140902C04 (PspTerminateSiloSubsystemProcesses.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 *     SepCopyClientTokenAndSetSilo @ 0x1409180E8 (SepCopyClientTokenAndSetSilo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloServiceSessionId(__int64 a1)
{
  unsigned int **v1; // rax

  v1 = (unsigned int **)&PspHostSiloGlobals;
  if ( a1 )
    v1 = *(unsigned int ***)(a1 + 1272);
  return *v1[139];
}
