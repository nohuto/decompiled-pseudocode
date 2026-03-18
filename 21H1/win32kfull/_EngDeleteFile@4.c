/*
 * XREFs of _EngDeleteFile@4 @ 0x1DA0A6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngDeleteFile(LPWSTR pwszFileName)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-20h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, pwszFileName);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  return ZwDeleteFile(&ObjectAttributes) == 0;
}
