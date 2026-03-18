/*
 * XREFs of ?WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z @ 0x16FA91
 * Callers:
 *     _WritePointerDeviceSettingsFull@12 @ 0xF3990 (_WritePointerDeviceSettingsFull@12.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?WritePointerDeviceCfgSetting@@YGJPAXPBGIPAEI@Z @ 0x16FA59 (-WritePointerDeviceCfgSetting@@YGJPAXPBGIPAEI@Z.c)
 */

BOOL __stdcall WritePredictionSettings(
        struct tagDEVICECONFIG_SETTING *a1,
        unsigned int a2,
        const unsigned __int16 *a3,
        unsigned int a4)
{
  unsigned int v4; // edi
  NTSTATUS v5; // esi
  unsigned __int8 *v7; // [esp+0h] [ebp-2F8h]
  unsigned int v8; // [esp+4h] [ebp-2F4h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-2ECh] BYREF
  UNICODE_STRING v10; // [esp+24h] [ebp-2D4h] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-2CCh] BYREF
  char v12; // [esp+30h] [ebp-2C8h] BYREF

  *(_DWORD *)&v10.Length = 45875200;
  v4 = 0;
  v10.Buffer = (PWSTR)&v12;
  KeyHandle = 0;
  v5 = RtlUnicodeStringCopyString(&v10);
  if ( v5 >= 0 )
  {
    v5 = RtlUnicodeStringCatString((size_t *)&v10.Length, (size_t)L"\\Software\\Microsoft\\TouchPrediction");
    if ( v5 >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = &v10;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      v5 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v5 >= 0 )
      {
        do
        {
          v5 = WritePointerDeviceCfgSetting(
                 *(const WCHAR **)((char *)&gaPredictionSettings + v4 * 4),
                 KeyHandle,
                 4u,
                 &dword_2660C0[v4],
                 4u,
                 v7,
                 v8);
          if ( v5 < 0 )
            break;
          v4 += 3;
        }
        while ( v4 < 9 );
        ZwClose(KeyHandle);
      }
    }
  }
  return v5 >= 0;
}
