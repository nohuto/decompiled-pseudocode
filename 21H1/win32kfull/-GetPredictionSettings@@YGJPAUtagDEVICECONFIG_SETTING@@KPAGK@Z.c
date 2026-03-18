/*
 * XREFs of ?GetPredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x9968E
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __userpurge GetPredictionSettings@<eax>(
        int a1@<ecx>,
        struct tagDEVICECONFIG_SETTING *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  NTSTATUS PointerDeviceCfgDWORDSetting; // esi
  int v7; // ebx
  struct _UNICODE_STRING *v9; // [esp+0h] [ebp-2F8h]
  struct _UNICODE_STRING *v10; // [esp+0h] [ebp-2F8h]
  const unsigned __int16 *v11; // [esp+4h] [ebp-2F4h]
  const unsigned __int16 *v12; // [esp+4h] [ebp-2F4h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2ECh] BYREF
  _DWORD v14[2]; // [esp+24h] [ebp-2D4h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-2CCh] BYREF
  char v16; // [esp+30h] [ebp-2C8h] BYREF

  v14[0] = 45875200;
  KeyHandle = 0;
  v14[1] = &v16;
  PointerDeviceCfgDWORDSetting = RtlUnicodeStringCopyString(v9, v11);
  if ( PointerDeviceCfgDWORDSetting >= 0 )
  {
    PointerDeviceCfgDWORDSetting = RtlUnicodeStringCatString(v10, v12);
    if ( PointerDeviceCfgDWORDSetting >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      PointerDeviceCfgDWORDSetting = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( PointerDeviceCfgDWORDSetting >= 0 )
      {
        v7 = 3;
        do
        {
          PointerDeviceCfgDWORDSetting = ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1);
          if ( PointerDeviceCfgDWORDSetting < 0 )
            *(_DWORD *)(a1 + 8) = -1;
          a1 += 12;
          --v7;
        }
        while ( v7 );
        ZwClose(KeyHandle);
      }
    }
  }
  return PointerDeviceCfgDWORDSetting;
}
