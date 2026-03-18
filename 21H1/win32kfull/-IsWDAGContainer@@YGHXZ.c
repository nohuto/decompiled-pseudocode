/*
 * XREFs of ?IsWDAGContainer@@YGHXZ @ 0xF02F2
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __stdcall IsWDAGContainer()
{
  BOOL v0; // ebx
  NTSTATUS v2; // esi
  void *KeyHandle; // [esp+Ch] [ebp-54h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+10h] [ebp-50h] BYREF
  ULONG ResultLength; // [esp+18h] [ebp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+1Ch] [ebp-44h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+34h] [ebp-2Ch] BYREF
  int v8; // [esp+38h] [ebp-28h]
  int v9; // [esp+40h] [ebp-20h]

  v0 = 0;
  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  if ( dword_273878 )
    return dword_273874;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Hvsi");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v2 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"IsHvsiContainer");
    v2 = ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength);
    if ( v2 >= 0 && v8 == 4 )
      v0 = v9 != 0;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v2 == -1073741772 || v2 >= 0 )
  {
    dword_273874 = v0;
    dword_273878 = 1;
  }
  return v0;
}
