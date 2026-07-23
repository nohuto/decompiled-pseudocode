/*
 * XREFs of BiCloseKey @ 0x1407721AC
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405BE5A0 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405BE684 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x14076638C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 *     BiCloseStore @ 0x14076F920 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x14076F9F8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14076FBF8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x1407717EC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140772684 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096BAE0 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14096BEB4 (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096C3C0 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14096D440 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140356790 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x140398820 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140772200 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
