/*
 * XREFs of BiOpenKey @ 0x1407845C4
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405C3C80 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140779B20 (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x140781F98 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x140782198 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x140782268 (BiCleanupLoadedStores.c)
 *     BiDeleteRegistryValue @ 0x1407823A4 (BiDeleteRegistryValue.c)
 *     BiDeleteElement @ 0x14078335C (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x1407839DC (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140783C00 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140783FB8 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14078419C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140784380 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140784C24 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096EEEC (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096F1A8 (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096FA88 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140970B08 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140246A18 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14025166C (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     BiZwOpenKey @ 0x14039B6D4 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x14039B6FC (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x1407847A0 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // edi
  void *KeySecurityDescriptor; // r14
  void *v10; // rax
  ACCESS_MASK v11; // edx
  NTSTATUS v12; // ebx
  __int64 v14; // rdx
  HANDLE v15; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v16; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v18[2]; // [rsp+48h] [rbp-70h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+8h]

  v16 = 0LL;
  DestinationString = 0LL;
  *(&v18[0].Length + 1) = 0;
  *(&v18[0].Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    v15 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v10 = (void *)BiSanitizeHandle(a1);
    v19 = (__int64)v10;
    a3 |= 0x40000u;
    v11 = a3;
    if ( (a3 & 0x60019) != a3 )
      v11 = 0x40000;
    v18[0].Length = 48;
    v18[0].RootDirectory = v10;
    v18[0].Attributes = 576;
    v18[0].ObjectName = &DestinationString;
    *(_OWORD *)&v18[0].SecurityDescriptor = 0LL;
    v12 = BiZwOpenKey(&v15, v11, v18);
    if ( v12 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103LL);
      v12 = BiZwSetSecurityObject(v15, v14, KeySecurityDescriptor);
      if ( v12 >= 0 )
      {
        v12 = BiZwOpenKey(&v16, a3, v18);
        if ( v12 >= 0 )
        {
          CmSiCloseSection(v15);
          v15 = v16;
LABEL_6:
          *a4 = v15;
        }
      }
    }
    if ( v12 < 0 && v15 )
      CmSiCloseSection(v15);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v12 == -1073741443 )
    {
      __debugbreak();
      a1 = v19;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v12;
}
