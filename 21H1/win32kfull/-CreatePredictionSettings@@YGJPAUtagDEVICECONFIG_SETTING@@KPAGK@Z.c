/*
 * XREFs of ?CreatePredictionSettings@@YGJPAUtagDEVICECONFIG_SETTING@@KPAGK@Z @ 0x99582
 * Callers:
 *     _ReadPointerDeviceSettingsFull@8 @ 0xF3780 (_ReadPointerDeviceSettingsFull@8.c)
 * Callees:
 *     ?RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0x998EA (-RtlUnicodeStringCopyString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __userpurge CreatePredictionSettings@<eax>(
        int a1@<ecx>,
        struct tagDEVICECONFIG_SETTING *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        unsigned int a5)
{
  NTSTATUS v6; // esi
  int v7; // ebx
  struct _UNICODE_STRING *v9; // [esp+0h] [ebp-300h]
  struct _UNICODE_STRING *v10; // [esp+0h] [ebp-300h]
  const unsigned __int16 *v11; // [esp+4h] [ebp-2FCh]
  const unsigned __int16 *v12; // [esp+4h] [ebp-2FCh]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-2F0h] BYREF
  ULONG Disposition; // [esp+28h] [ebp-2D8h] BYREF
  _DWORD v15[2]; // [esp+2Ch] [ebp-2D4h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-2CCh] BYREF
  char v17; // [esp+38h] [ebp-2C8h] BYREF

  v15[0] = 45875200;
  KeyHandle = 0;
  v15[1] = &v17;
  v6 = RtlUnicodeStringCopyString(v9, v11);
  if ( v6 >= 0 )
  {
    v6 = RtlUnicodeStringCatString(v10, v12);
    if ( v6 >= 0 )
    {
      ObjectAttributes.Length = 24;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
      ObjectAttributes.RootDirectory = 0;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.SecurityDescriptor = 0;
      ObjectAttributes.SecurityQualityOfService = 0;
      Disposition = 0;
      v6 = ZwCreateKey(&KeyHandle, 0x20019u, &ObjectAttributes, 0, 0, 0, &Disposition);
      if ( v6 >= 0 )
      {
        v6 = 0;
        v7 = 3;
        do
        {
          if ( (int)ReadPointerDeviceCfgDWORDSetting(KeyHandle, a1) < 0 )
            *(_DWORD *)(a1 + 8) = -1;
          a1 += 12;
          --v7;
        }
        while ( v7 );
        ZwClose(KeyHandle);
      }
    }
  }
  return v6;
}
