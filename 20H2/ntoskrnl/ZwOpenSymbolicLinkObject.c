/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403FA730
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406C667C (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406C8854 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x140737670 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x1407439BC (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x14076E0F0 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140777018 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x14077EDDC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140897820 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x1409553EC (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A5A548 (IopStoreSystemPartitionInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwOpenSymbolicLinkObject(
        PHANDLE LinkHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(LinkHandle);
}
