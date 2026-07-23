/*
 * XREFs of BiCloseKey @ 0x14078474C
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405C3C80 (BiOpenStoreKeyFromObject.c)
 *     BiSetFirmwareModifiedFromObject @ 0x1405C3D64 (BiSetFirmwareModifiedFromObject.c)
 *     BiUnloadHiveByHandle @ 0x14077952C (BiUnloadHiveByHandle.c)
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BiCloseStore @ 0x140781EC0 (BiCloseStore.c)
 *     BiAddStoreFromFile @ 0x140781F98 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140782198 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140783C00 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140783D8C (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14078419C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096EEEC (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096F1A8 (BiCreateObject.c)
 *     BiSetObjectDescription @ 0x14096F57C (BiSetObjectDescription.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096FA88 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140246A18 (CmSiCloseSection.c)
 *     BiZwSetSecurityObject @ 0x14039B6FC (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407847A0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
