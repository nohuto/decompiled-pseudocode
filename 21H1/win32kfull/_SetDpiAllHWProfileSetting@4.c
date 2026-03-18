/*
 * XREFs of _SetDpiAllHWProfileSetting@4 @ 0xED186
 * Callers:
 *     _SetDpiSetting@8 @ 0xED0FA (_SetDpiSetting@8.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall SetDpiAllHWProfileSetting(void *this)
{
  ULONG v1; // edi
  void *KeyHandle; // [esp+Ch] [ebp-33Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+10h] [ebp-338h] BYREF
  ULONG ResultLength; // [esp+18h] [ebp-330h] BYREF
  UNICODE_STRING Source; // [esp+1Ch] [ebp-32Ch] BYREF
  void *ValueData; // [esp+24h] [ebp-324h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+28h] [ebp-320h] BYREF
  _BYTE KeyInformation[12]; // [esp+40h] [ebp-308h] BYREF
  int v10; // [esp+4Ch] [ebp-2FCh]
  char v11; // [esp+50h] [ebp-2F8h] BYREF
  char v12; // [esp+140h] [ebp-208h] BYREF

  ValueData = this;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  v1 = 0;
  *(_DWORD *)&Source.Length = 0;
  Source.Buffer = 0;
  KeyHandle = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return -1073741822;
  if ( ZwEnumerateKey(KeyHandle, 0, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 )
  {
    do
    {
      DestinationString.Length = 0;
      Source.Buffer = (PWSTR)&v11;
      ++v1;
      Source.Length = v10;
      Source.MaximumLength = v10;
      DestinationString.MaximumLength = 512;
      DestinationString.Buffer = (PWSTR)&v12;
      if ( RtlAppendUnicodeToString(
             &DestinationString,
             L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\") >= 0
        && RtlAppendUnicodeStringToString(&DestinationString, &Source) >= 0
        && RtlAppendUnicodeToString(&DestinationString, L"\\Software\\Fonts") >= 0 )
      {
        RtlWriteRegistryValue(0, DestinationString.Buffer, L"LogPixels", 4u, &ValueData, 4u);
      }
    }
    while ( ZwEnumerateKey(KeyHandle, v1, KeyBasicInformation, KeyInformation, 0x100u, &ResultLength) >= 0 );
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return 0;
}
