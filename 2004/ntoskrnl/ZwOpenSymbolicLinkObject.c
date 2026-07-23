/*
 * XREFs of ZwOpenSymbolicLinkObject @ 0x1403F5B60
 * Callers:
 *     SiTranslateSymbolicLink @ 0x1406F329C (SiTranslateSymbolicLink.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x1406F57C4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     IopQueryRegistryKeySystemPath @ 0x140728BE0 (IopQueryRegistryKeySystemPath.c)
 *     IopProcessSetInterfaceState @ 0x14073452C (IopProcessSetInterfaceState.c)
 *     IoDeleteSymbolicLink @ 0x14075FA80 (IoDeleteSymbolicLink.c)
 *     SiOpenArcNameObject @ 0x140768A08 (SiOpenArcNameObject.c)
 *     BiTranslateSymbolicLink @ 0x1407707DC (BiTranslateSymbolicLink.c)
 *     IoIsValidNameGraftingBuffer @ 0x140891BA0 (IoIsValidNameGraftingBuffer.c)
 *     ExpTranslateSymbolicLink @ 0x14094F62C (ExpTranslateSymbolicLink.c)
 *     IopStoreSystemPartitionInformation @ 0x140A66F78 (IopStoreSystemPartitionInformation.c)
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
