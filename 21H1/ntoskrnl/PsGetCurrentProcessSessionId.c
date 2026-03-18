/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x1402D7070
 * Callers:
 *     EtwpEventWriteFull @ 0x140256EC0 (EtwpEventWriteFull.c)
 *     IopParseDevice @ 0x1405FDEC0 (IopParseDevice.c)
 *     ObpLookupObjectName @ 0x140627610 (ObpLookupObjectName.c)
 *     EtwpWriteUserEvent @ 0x140669E00 (EtwpWriteUserEvent.c)
 *     NtSetInformationObject @ 0x1406C12A0 (NtSetInformationObject.c)
 *     PopCreatePowerRequestObject @ 0x1406FF910 (PopCreatePowerRequestObject.c)
 *     PnpNotifyDriverCallback @ 0x14070D040 (PnpNotifyDriverCallback.c)
 *     PfpProcessScenarioPhase @ 0x1407787A8 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x140890450 (IoGetContainerInformation.c)
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
