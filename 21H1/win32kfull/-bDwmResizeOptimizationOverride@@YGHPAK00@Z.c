/*
 * XREFs of ?bDwmResizeOptimizationOverride@@YGHPAK00@Z @ 0xE1EFC
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __userpurge bDwmResizeOptimizationOverride@<eax>(
        unsigned int *a1@<edx>,
        unsigned int *a2@<ecx>,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  int v5; // esi
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-440h] BYREF
  unsigned int *v8; // [esp+24h] [ebp-428h]
  unsigned int *v9; // [esp+28h] [ebp-424h]
  unsigned int *v10; // [esp+2Ch] [ebp-420h]
  ULONG ResultLength; // [esp+30h] [ebp-41Ch] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+34h] [ebp-418h] BYREF
  void *KeyHandle; // [esp+3Ch] [ebp-410h] BYREF
  char KeyValueInformation[4]; // [esp+40h] [ebp-40Ch] BYREF
  int v15; // [esp+44h] [ebp-408h]
  unsigned int v16; // [esp+4Ch] [ebp-400h]

  v5 = 0;
  v8 = a3;
  v9 = a1;
  v10 = a2;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  KeyHandle = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\DWM");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"EnableResizeOptimization");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v15 == 4 )
    {
      v5 = 1;
      *v10 = v16;
    }
    RtlInitUnicodeString(&DestinationString, L"ResizeTimeoutGdi");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v15 == 4 )
    {
      *v9 = v16;
    }
    RtlInitUnicodeString(&DestinationString, L"ResizeTimeoutModern");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x400u,
           &ResultLength) >= 0
      && v15 == 4 )
    {
      *v8 = v16;
    }
    ZwClose(KeyHandle);
  }
  return v5;
}
