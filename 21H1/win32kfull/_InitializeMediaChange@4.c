/*
 * XREFs of _InitializeMediaChange@4 @ 0xEA80E
 * Callers:
 *     <none>
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __stdcall InitializeMediaChange(HANDLE Handle)
{
  NTSTATUS v1; // esi
  struct _FAST_MUTEX *v2; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-58h] BYREF
  ULONG ResultLength; // [esp+24h] [ebp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+28h] [ebp-3Ch] BYREF
  PVOID Object; // [esp+30h] [ebp-34h] BYREF
  void *KeyHandle; // [esp+34h] [ebp-30h] BYREF
  _BYTE KeyValueInformation[4]; // [esp+38h] [ebp-2Ch] BYREF
  int v10; // [esp+3Ch] [ebp-28h]
  unsigned int v11; // [esp+44h] [ebp-20h]

  KeyHandle = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"MaxOpenAttempts");
    if ( ZwQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x28u,
           &ResultLength) >= 0
      && v10 == 4 )
    {
      gdwMaxRetries = v11;
    }
    ZwClose(KeyHandle);
  }
  if ( _gProtocolType )
    return 0;
  Object = 0;
  InitializeListHead(&gCDROMNotifyList);
  InitializeListHead(&gMediaChangeList);
  v1 = ObReferenceObjectByHandle(Handle, (ACCESS_MASK)&loc_1F0002 + 1, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0);
  gpEventMediaChange = Object;
  if ( v1 >= 0 )
  {
    v2 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(32, 1886417749);
    gMediaChangeMutex = v2;
    if ( v2 )
    {
      v2->Owner = 0;
      v2->Contention = 0;
      v2->Count = 1;
      KeInitializeEvent(&v2->Event, SynchronizationEvent, 0);
    }
    else
    {
      return -1073741801;
    }
  }
  return v1;
}
