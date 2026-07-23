/*
 * XREFs of BiCloseKey @ 0x1407807AC
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405C2220 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C2304 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1407753BC (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x1407759B0 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14077DF20 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14077DFF8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14077E1F8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14077E2C8 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14077F3BC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14077FA3C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14077FC60 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14077FDEC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x1407801FC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407803E0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140780C84 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x1409715F4 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x1409718B0 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x140971C84 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x140972190 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140973210 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140326FE0 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039ACE0 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140780800 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241LL);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
