/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x14026D6D0
 * Callers:
 *     EtwpEventWriteFull @ 0x140293740 (EtwpEventWriteFull.c)
 *     ObpLookupObjectName @ 0x1405F1FF0 (ObpLookupObjectName.c)
 *     EtwpWriteUserEvent @ 0x1406246E0 (EtwpWriteUserEvent.c)
 *     PnpNotifyDriverCallback @ 0x140648974 (PnpNotifyDriverCallback.c)
 *     PopCreatePowerRequestObject @ 0x14064DBA8 (PopCreatePowerRequestObject.c)
 *     IopParseDevice @ 0x140675FA0 (IopParseDevice.c)
 *     NtSetInformationObject @ 0x1406E1820 (NtSetInformationObject.c)
 *     PfpProcessScenarioPhase @ 0x14077ABB8 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140891770 (IoGetContainerInformation.c)
 * Callees:
 *     <none>
 */

__int64 PsGetCurrentProcessSessionId()
{
  _KPROCESS *Process; // rdx
  unsigned __int64 v1; // rcx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  Process = KeGetCurrentThread()->ApcState.Process;
  v1 = Process[1].AffinityPadding[5];
  if ( !v1 || (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    v2 = -1;
  else
    v2 = *(_DWORD *)(v1 + 8);
  v3 = 0;
  if ( v2 != -1 )
    return v2;
  return v3;
}
