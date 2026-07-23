/*
 * XREFs of ZwDeleteKey @ 0x1403F5020
 * Callers:
 *     BiZwDeleteKey @ 0x14038A688 (BiZwDeleteKey.c)
 *     VrpDestroyNamespaceNode @ 0x1405CA6A0 (VrpDestroyNamespaceNode.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140754B28 (_RegRtlDeleteKeyTransacted.c)
 *     NtEnableLastKnownGood @ 0x140769E30 (NtEnableLastKnownGood.c)
 *     ExpSetPendingUILanguage @ 0x140779C90 (ExpSetPendingUILanguage.c)
 *     IopCopyBootLogRegistryToFile @ 0x140783150 (IopCopyBootLogRegistryToFile.c)
 *     IoReportDetectedDevice @ 0x140796830 (IoReportDetectedDevice.c)
 *     CmDeleteKeyRecursive @ 0x1408738C0 (CmDeleteKeyRecursive.c)
 *     CmpMoveBiosAliasTable @ 0x140874748 (CmpMoveBiosAliasTable.c)
 *     CmpDoReDoRecord @ 0x14087EE9C (CmpDoReDoRecord.c)
 *     EtwpRemoveMicroarchitecturalPmcFromPmcGroup @ 0x1409375A8 (EtwpRemoveMicroarchitecturalPmcFromPmcGroup.c)
 *     PiLastGoodCopyKeyContents @ 0x140A6B7A4 (PiLastGoodCopyKeyContents.c)
 *     MfgInitSystem @ 0x140A7056C (MfgInitSystem.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A8DD90 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
