/*
 * XREFs of _ReadTiltCalibrationData@12 @ 0x13ED9B
 * Callers:
 *     _CheckPointerDeviceConfiguration@0 @ 0xD56E0 (_CheckPointerDeviceConfiguration@0.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265 (-GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z.c)
 *     ?ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z @ 0x13E304 (-ReadCalibrationDataImp@@YGJU_UNICODE_STRING@@0PAKPAPAE@Z.c)
 */

int __userpurge ReadTiltCalibrationData@<eax>(int a1@<ecx>, size_t a2@<ebx>, struct _UNICODE_STRING a3)
{
  int v3; // esi
  int v4; // edi
  NTSTATUS TiltKeyName; // ebx
  unsigned __int16 **v7; // [esp+0h] [ebp-8A0h]
  unsigned int *v8; // [esp+0h] [ebp-8A0h]
  int v9; // [esp+4h] [ebp-89Ch]
  unsigned __int8 **v10; // [esp+4h] [ebp-89Ch]
  void **v11; // [esp+Ch] [ebp-894h]
  int v12; // [esp+10h] [ebp-890h]
  struct _UNICODE_STRING DestinationString; // [esp+14h] [ebp-88Ch] BYREF
  UNICODE_STRING v14; // [esp+1Ch] [ebp-884h] BYREF
  struct _UNICODE_STRING v15; // [esp+24h] [ebp-87Ch] BYREF
  PCWSTR SourceString; // [esp+2Ch] [ebp-874h] BYREF
  _DWORD v17[4]; // [esp+30h] [ebp-870h]
  _DWORD v18[4]; // [esp+40h] [ebp-860h]
  _DWORD v19[4]; // [esp+50h] [ebp-850h]
  _BYTE v20[1400]; // [esp+60h] [ebp-840h] BYREF
  char v21; // [esp+5D8h] [ebp-2C8h] BYREF

  v3 = *(_DWORD *)(a1 + 316);
  v4 = 0;
  v12 = *(_DWORD *)(a1 + 212);
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  SourceString = 0;
  if ( !v3 )
    return -1073741668;
  *(_DWORD *)&v14.Length = 45875200;
  v14.Buffer = (PWSTR)&v21;
  TiltKeyName = RtlUnicodeStringCopy((unsigned __int16 *)(_grpWinStaList + 112), (size_t *)&v14.Length, a2);
  if ( TiltKeyName >= 0 )
  {
    v17[0] = 1;
    v18[0] = v3 + 12;
    v17[1] = 2;
    v18[1] = v3 + 20;
    v18[2] = v3 + 28;
    v18[3] = v3 + 36;
    v19[0] = v3 + 8;
    v19[1] = v3 + 16;
    v19[2] = v3 + 24;
    v19[3] = v3 + 32;
    v17[2] = 3;
    v17[3] = 4;
    TiltKeyName = GetTiltKeyName(&SourceString, a3, v7, v9);
    if ( TiltKeyName >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      do
      {
        memset(v20, 0, sizeof(v20));
        *(_DWORD *)&v15.Length = 91750400;
        v15.Buffer = (PWSTR)v20;
        RtlCopyUnicodeString(&v15, &v14);
        TiltKeyName = RtlUnicodeStringCatString((size_t *)&v15.Length, (size_t)off_24D4E0[v4]);
        if ( TiltKeyName >= 0 )
        {
          v11 = (void **)v19[v4];
          TiltKeyName = ReadCalibrationDataImp(v11, (WCHAR *)v18[v4], DestinationString, v15, v8, v10);
          if ( TiltKeyName >= 0 && v12 == v17[v4] )
            *(_DWORD *)(v3 + 44) = *v11;
        }
        ++v4;
      }
      while ( v4 < 4 );
      Win32FreePool(SourceString);
    }
  }
  return TiltKeyName;
}
