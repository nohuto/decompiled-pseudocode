/*
 * XREFs of _WriteTiltCalibrationData@20 @ 0x13F29A
 * Callers:
 *     __SetCalibrationData@16 @ 0x1448D3 (__SetCalibrationData@16.c)
 * Callees:
 *     ?RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z @ 0xD7734 (-RtlUnicodeStringCatString@@YGJPAU_UNICODE_STRING@@PBG@Z.c)
 *     ?RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z @ 0xD9756 (-RtlUnicodeStringCopy@@YGJPAU_UNICODE_STRING@@PBU1@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z @ 0x13E265 (-GetTiltKeyName@@YGJU_UNICODE_STRING@@PAPAGH@Z.c)
 */

BOOL __fastcall WriteTiltCalibrationData(size_t a1, ULONG a2, void *a3, struct _UNICODE_STRING a4)
{
  int TiltKeyName; // esi
  unsigned __int16 **v7; // [esp+0h] [ebp-5C4h]
  int v8; // [esp+4h] [ebp-5C0h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-5B8h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-5A0h] BYREF
  PVOID Data; // [esp+2Ch] [ebp-598h]
  ULONG DataSize; // [esp+30h] [ebp-594h]
  ULONG Disposition; // [esp+34h] [ebp-590h] BYREF
  size_t v14[2]; // [esp+38h] [ebp-58Ch] BYREF
  PCWSTR SourceString; // [esp+40h] [ebp-584h] BYREF
  void *KeyHandle; // [esp+44h] [ebp-580h] BYREF
  char v17; // [esp+48h] [ebp-57Ch] BYREF

  Data = a3;
  DataSize = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  DestinationString.Buffer = 0;
  SourceString = 0;
  KeyHandle = 0;
  TiltKeyName = GetTiltKeyName(&SourceString, a4, v7, v8);
  if ( TiltKeyName >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    v14[0] = 91750400;
    v14[1] = (size_t)&v17;
    TiltKeyName = RtlUnicodeStringCopy((unsigned __int16 *)(_grpWinStaList + 112), v14, a1);
    if ( TiltKeyName >= 0 )
    {
      TiltKeyName = RtlUnicodeStringCatString(v14, (size_t)off_24D4E0[a1]);
      if ( TiltKeyName >= 0 )
      {
        ObjectAttributes.Length = 24;
        Disposition = 0;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)v14;
        ObjectAttributes.RootDirectory = 0;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.SecurityDescriptor = 0;
        ObjectAttributes.SecurityQualityOfService = 0;
        TiltKeyName = ZwCreateKey(&KeyHandle, (ACCESS_MASK)&loc_20006, &ObjectAttributes, 0, 0, 0, &Disposition);
        if ( TiltKeyName >= 0 )
        {
          TiltKeyName = ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, Data, DataSize);
          ZwClose(KeyHandle);
        }
      }
    }
    Win32FreePool(SourceString);
  }
  return TiltKeyName >= 0;
}
