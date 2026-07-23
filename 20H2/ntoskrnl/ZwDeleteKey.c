/*
 * XREFs of ZwDeleteKey @ 0x1403F9BF0
 * Callers:
 *     BiZwDeleteKey @ 0x14038C928 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405D0860 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763768 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x140778440 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x140788290 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140790B40 (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x1407A5B60 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x140879410 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x14087A298 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x140884A28 (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x14093D3D8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A72088 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A769A4 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A93A90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
