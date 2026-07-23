/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403F48D0
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406D22DC (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406D2BF4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x140726670 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x14072FAFC (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x14075D7D0 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140766628 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x14076E3CC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140890880 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14094E28C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A54148 (IopStoreSystemPartitionInformation.c)
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
