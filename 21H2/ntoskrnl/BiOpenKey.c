/*
 * XREFs of BiOpenKey @ 0x140813164
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x14064CC20 (BiOpenStoreKeyFromObject.c)
 *     BiGetObjectDescription @ 0x140800ADC (BiGetObjectDescription.c)
 *     BiDeleteElement @ 0x14080271C (BiDeleteElement.c)
 *     BcdSetElementDataWithFlags @ 0x140803250 (BcdSetElementDataWithFlags.c)
 *     BiDeleteKey @ 0x14080422C (BiDeleteKey.c)
 *     BiCleanupLoadedStores @ 0x140811F10 (BiCleanupLoadedStores.c)
 *     BiAddStoreFromFile @ 0x14081210C (BiAddStoreFromFile.c)
 *     BiDeleteRegistryValue @ 0x140812318 (BiDeleteRegistryValue.c)
 *     BiSetRegistryValue @ 0x1408123B4 (BiSetRegistryValue.c)
 *     BcdOpenObject @ 0x140812B74 (BcdOpenObject.c)
 *     BcdGetElementDataWithFlags @ 0x140812D44 (BcdGetElementDataWithFlags.c)
 *     BiGetRegistryValue @ 0x140812F84 (BiGetRegistryValue.c)
 *     BiOpenSystemStore @ 0x140813744 (BiOpenSystemStore.c)
 *     BcdEnumerateObjects @ 0x140A1CC78 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x140A1CF34 (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x140A1D808 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x140A1E890 (BiBuildIdentifierList.c)
 * Callees:
 *     CmSiCloseSection @ 0x140250FF0 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14025DBFC (BiSanitizeHandle.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     BiZwOpenKey @ 0x1403A7830 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x1403A7848 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140813344 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiOpenKey(__int64 a1, const WCHAR *a2, ACCESS_MASK a3, _QWORD *a4)
{
  unsigned int i; // esi
  void *KeySecurityDescriptor; // r14
  ACCESS_MASK v10; // edx
  NTSTATUS v11; // ebx
  __int64 v13; // rdx
  HANDLE v14; // [rsp+28h] [rbp-90h] BYREF
  HANDLE v15; // [rsp+30h] [rbp-88h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-80h] BYREF
  OBJECT_ATTRIBUTES v17[2]; // [rsp+48h] [rbp-70h] BYREF
  void *v18; // [rsp+C0h] [rbp+8h]

  v15 = 0LL;
  DestinationString = 0LL;
  *(&v17[0].Length + 1) = 0;
  *(&v17[0].Attributes + 1) = 0;
  for ( i = 0; ; ++i )
  {
    v14 = 0LL;
    KeySecurityDescriptor = 0LL;
    RtlInitUnicodeString(&DestinationString, a2);
    v18 = (void *)BiSanitizeHandle(a1);
    a3 |= 0x40000u;
    v17[0].Length = 48;
    v17[0].RootDirectory = v18;
    v17[0].Attributes = 576;
    v17[0].ObjectName = &DestinationString;
    *(_OWORD *)&v17[0].SecurityDescriptor = 0LL;
    v10 = 0x40000;
    if ( (a3 & 0x60019) == a3 )
      v10 = a3;
    v11 = BiZwOpenKey(&v14, v10, v17);
    if ( v11 >= 0 )
    {
      if ( (a3 & 0x60019) == a3 )
        goto LABEL_6;
      KeySecurityDescriptor = (void *)BiCreateKeySecurityDescriptor(983103);
      v11 = BiZwSetSecurityObject(v14, v13, KeySecurityDescriptor);
      if ( v11 >= 0 )
      {
        v11 = BiZwOpenKey(&v15, a3, v17);
        if ( v11 >= 0 )
        {
          CmSiCloseSection(v14);
          v14 = v15;
LABEL_6:
          *a4 = v14;
        }
      }
    }
    if ( v11 < 0 && v14 )
      CmSiCloseSection(v14);
    if ( KeySecurityDescriptor )
      ExFreePoolWithTag(KeySecurityDescriptor, 0x4B444342u);
    if ( v11 == -1073741443 )
    {
      __debugbreak();
      a1 = (__int64)v18;
      if ( i < 5 )
        continue;
    }
    break;
  }
  return (unsigned int)v11;
}
