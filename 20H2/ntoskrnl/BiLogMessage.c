/*
 * XREFs of BiLogMessage @ 0x140780FBC
 * Callers:
 *     BiLogFileOwnerProcess @ 0x1405C2350 (BiLogFileOwnerProcess.c)
 *     BiMapEfiDeviceForSpaces @ 0x1405C2644 (BiMapEfiDeviceForSpaces.c)
 *     BiSpacesUpdatePhysicalDevicePath @ 0x1405C27AC (BiSpacesUpdatePhysicalDevicePath.c)
 *     BcdForciblyUnloadStore @ 0x140775328 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1407762E0 (BcdFlushStore.c)
 *     BiLoadSystemStore @ 0x14077DDF4 (BiLoadSystemStore.c)
 *     BiCloseStore @ 0x14077DF20 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14077DFF8 (BiAddStoreFromFile.c)
 *     BcdCloseStore @ 0x14077E634 (BcdCloseStore.c)
 *     BcdGetSystemStorePath @ 0x14077E6D4 (BcdGetSystemStorePath.c)
 *     BcdOpenStore @ 0x14077F068 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     BiLoadHive @ 0x140781C68 (BiLoadHive.c)
 *     SepSecureBootCorrectBcd @ 0x140926A18 (SepSecureBootCorrectBcd.c)
 *     BiCreateObject @ 0x1409718B0 (BiCreateObject.c)
 *     BiAddBootEntry @ 0x140972A20 (BiAddBootEntry.c)
 *     BiBindEfiBootManager @ 0x140972CD4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntries @ 0x140972F10 (BiBindEfiEntries.c)
 *     BiBindEfiNamespaceObjects @ 0x140973170 (BiBindEfiNamespaceObjects.c)
 *     BiBuildIdentifierList @ 0x140973210 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x140973808 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x140973BB8 (BiCreateEfiEntry.c)
 *     BiDeleteBootEntry @ 0x1409740EC (BiDeleteBootEntry.c)
 *     BiDeleteEfiVariable @ 0x14097416C (BiDeleteEfiVariable.c)
 *     BiEnumerateBootEntries @ 0x140974280 (BiEnumerateBootEntries.c)
 *     BiExportBcdObjects @ 0x140974380 (BiExportBcdObjects.c)
 *     BiExportEfiBootManager @ 0x1409744A8 (BiExportEfiBootManager.c)
 *     BiExportStoreAlterationsToEfi @ 0x140974818 (BiExportStoreAlterationsToEfi.c)
 *     BiModifyBootEntry @ 0x1409750D8 (BiModifyBootEntry.c)
 *     BiQueryBootEntryOrder @ 0x140975144 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14097521C (BiQueryBootOptions.c)
 *     BiSetBootEntryOrder @ 0x1409753AC (BiSetBootEntryOrder.c)
 *     BiSetBootOptions @ 0x140975424 (BiSetBootOptions.c)
 *     BiTranslateBootEntryId @ 0x14097549C (BiTranslateBootEntryId.c)
 *     BiTranslateObjectIdentifier @ 0x1409756EC (BiTranslateObjectIdentifier.c)
 *     BiUpdateEfiEntry @ 0x140975A54 (BiUpdateEfiEntry.c)
 * Callees:
 *     <none>
 */

__int64 BiLogMessage(_QWORD a1, _QWORD a2, ...)
{
  return 0LL;
}
