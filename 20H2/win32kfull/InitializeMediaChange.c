/*
 * XREFs of InitializeMediaChange @ 0x1C012A480
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall InitializeMediaChange(HANDLE Handle)
{
  NTSTATUS v2; // ebx
  struct _FAST_MUTEX *v3; // rax
  ULONG ResultLength; // [rsp+30h] [rbp-39h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-31h] BYREF
  PVOID Object; // [rsp+40h] [rbp-29h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-11h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+88h] [rbp+1Fh] BYREF
  int v11; // [rsp+8Ch] [rbp+23h]
  unsigned int v12; // [rsp+94h] [rbp+2Bh]

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  ResultLength = 0;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
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
      && v11 == 4 )
    {
      gdwMaxRetries = v12;
    }
    ZwClose(KeyHandle);
  }
  if ( gProtocolType )
  {
    return 0;
  }
  else
  {
    qword_1C033A1F0 = (__int64)&gCDROMNotifyList;
    gCDROMNotifyList.Flink = &gCDROMNotifyList;
    Object = 0LL;
    qword_1C033A1E0 = (__int64)&gMediaChangeList;
    gMediaChangeList.Flink = &gMediaChangeList;
    v2 = ObReferenceObjectByHandle(Handle, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    gpEventMediaChange = Object;
    if ( v2 >= 0 )
    {
      v3 = (struct _FAST_MUTEX *)Win32AllocPoolNonPaged(56LL, 1886417749LL);
      gMediaChangeMutex = v3;
      if ( v3 )
      {
        v3->Owner = 0LL;
        v3->Count = 1;
        v3->Contention = 0;
        KeInitializeEvent(&v3->Event, SynchronizationEvent, 0);
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return (unsigned int)v2;
}
