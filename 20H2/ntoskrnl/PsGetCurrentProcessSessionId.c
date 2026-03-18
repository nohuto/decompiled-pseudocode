/*
 * XREFs of PsGetCurrentProcessSessionId @ 0x140245DF0
 * Callers:
 *     IopParseDevice @ 0x1405FE3D0 (IopParseDevice.c)
 *     ObpLookupObjectName @ 0x140614C20 (ObpLookupObjectName.c)
 *     PnpNotifyDriverCallback @ 0x140646E68 (PnpNotifyDriverCallback.c)
 *     EtwpWriteUserEvent @ 0x1406557F0 (EtwpWriteUserEvent.c)
 *     NtSetInformationObject @ 0x1406BB240 (NtSetInformationObject.c)
 *     PopCreatePowerRequestObject @ 0x14071D0A0 (PopCreatePowerRequestObject.c)
 *     PfpProcessScenarioPhase @ 0x1407891B8 (PfpProcessScenarioPhase.c)
 *     IoGetContainerInformation @ 0x1408973F0 (IoGetContainerInformation.c)
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
