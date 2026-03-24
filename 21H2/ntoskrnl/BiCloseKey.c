/*
 * XREFs of BiCloseKey @ 0x14078458C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405C3A50 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3B34 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x14077936C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140779960 (BiDeleteKey.c)
 *     BiCloseStore @ 0x140781D00 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140781DD8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140781FD8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x1407820A8 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14078319C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14078381C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140783A40 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783BCC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140783FDC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407841C0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140784A64 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096ED0C (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096EFC8 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14096F39C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096F8A8 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140970928 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x1402C81B8 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039B5AC (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407845E0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall BiCloseKey(void *a1)
{
  void *KeySecurityDescriptor; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(393241);
  v4 = KeySecurityDescriptor;
  if ( KeySecurityDescriptor )
  {
    BiZwSetSecurityObject(a1, v3, KeySecurityDescriptor);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return CmSiCloseSection(a1);
}
