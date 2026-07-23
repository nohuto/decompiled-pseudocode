/*
 * XREFs of BiOpenKey @ 0x140772024
 * Callers:
 *     BiOpenStoreKeyFromObject @ 0x1405BE5A0 (BiOpenStoreKeyFromObject.c)
 *     BiDeleteKey @ 0x140766980 (BiDeleteKey.c)
 *     BiAddStoreFromFile @ 0x14076F9F8 (BiAddStoreFromFile.c)
 *     BiGetObjectDescription @ 0x14076FBF8 (BiGetObjectDescription.c)
 *     BiCleanupLoadedStores @ 0x14076FCC8 (BiCleanupLoadedStores.c)
 *     BiDeleteRegistryValue @ 0x14076FE04 (BiDeleteRegistryValue.c)
 *     BiDeleteElement @ 0x140770DBC (BiDeleteElement.c)
 *     BiOpenSystemStore @ 0x14077143C (BiOpenSystemStore.c)
 *     BcdOpenObject @ 0x140771660 (BcdOpenObject.c)
 *     BiGetRegistryValue @ 0x140771A18 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x140771BFC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140771DE0 (BcdGetElementDataWithFlags.c)
 *     BiSetRegistryValue @ 0x140772684 (BiSetRegistryValue.c)
 *     BcdEnumerateObjects @ 0x14096B824 (BcdEnumerateObjects.c)
 *     BiCreateObject @ 0x14096BAE0 (BiCreateObject.c)
 *     BiIsPortableWorkspaceBoot @ 0x14096C3C0 (BiIsPortableWorkspaceBoot.c)
 *     BiBuildIdentifierList @ 0x14096D440 (BiBuildIdentifierList.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140298F60 (RtlInitUnicodeString.c)
 *     CmSiCloseSection @ 0x140356790 (CmSiCloseSection.c)
 *     BiSanitizeHandle @ 0x14036044C (BiSanitizeHandle.c)
 *     BiZwOpenKey @ 0x1403987F8 (BiZwOpenKey.c)
 *     BiZwSetSecurityObject @ 0x140398820 (BiZwSetSecurityObject.c)
 *     BiCreateKeySecurityDescriptor @ 0x140772200 (BiCreateKeySecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
