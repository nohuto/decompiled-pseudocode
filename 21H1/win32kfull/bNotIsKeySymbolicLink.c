/*
 * XREFs of bNotIsKeySymbolicLink @ 0xEBC78
 * Callers:
 *     bReadUserSystemEUDCRegistry @ 0xDB9B6 (bReadUserSystemEUDCRegistry.c)
 *     bAddAllFlEntry @ 0xDBBB8 (bAddAllFlEntry.c)
 *     bWriteUserSystemEUDCRegistry @ 0x1F8DC4 (bWriteUserSystemEUDCRegistry.c)
 * Callees:
 *     IsRegNameEqual @ 0x1F8099 (IsRegNameEqual.c)
 */

BOOL __fastcall bNotIsKeySymbolicLink(PCWSTR SourceString, PHANDLE KeyHandle, PHANDLE KeyHandlea, int a4)
{
  BOOL result; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+10h] [ebp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  *KeyHandle = 0;
  DestinationString.Buffer = 0;
  *KeyHandlea = 0;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  ObjectAttributes.Length = 24;
  ObjectAttributes.Attributes = 576;
  result = 0;
  if ( ZwOpenKey(KeyHandle, (ACCESS_MASK)&loc_F003E + 1, &ObjectAttributes) >= 0 )
  {
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 832;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(KeyHandlea, 0xF003Fu, &ObjectAttributes) >= 0 && IsRegNameEqual(*KeyHandle, a4) >= 0 )
      return 1;
  }
  return result;
}
