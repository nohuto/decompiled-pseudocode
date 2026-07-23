/*
 * XREFs of BiCloseKey @ 0x14076FD9C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405BDE80 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405BDF64 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x1407649D8 (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140764FC0 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14076D510 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14076D5E8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14076D7E8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14076D8B8 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14076E9AC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14076F02C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14076F9D0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140770274 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096A484 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096A740 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14096AB14 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096B020 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14096C0A0 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140318BA0 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039808C (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x14076FDF0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
