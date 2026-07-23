/*
 * XREFs of ZwDeleteKey @ 0x1403F3D90
 * Callers:
 *     BiZwDeleteKey @ 0x140389618 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405C92D0 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140750498 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x140767A50 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x140777880 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x14077A748 (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x140796A80 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x1408725D0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140873458 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x14087DBAC (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x140936308 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6B51C (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A6F9A4 (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8E7A0 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
