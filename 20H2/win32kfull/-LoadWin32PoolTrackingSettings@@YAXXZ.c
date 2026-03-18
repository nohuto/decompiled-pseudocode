/*
 * XREFs of ?LoadWin32PoolTrackingSettings@@YAXXZ @ 0x1C021F82C
 * Callers:
 *     InitializeWin32PoolTracking @ 0x1C012C760 (InitializeWin32PoolTracking.c)
 * Callees:
 *     <none>
 */

void LoadWin32PoolTrackingSettings(void)
{
  unsigned int v0; // ebx
  _DWORD *PoolWithTag; // rdi
  int v2; // eax
  __int64 v3; // rdx
  struct _UNICODE_STRING ValueName; // [rsp+30h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+10h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+18h] BYREF

  v0 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  DestinationString = 0LL;
  ValueName = 0LL;
  if ( gpxsGlobals )
  {
    *((_DWORD *)gpxsGlobals + 9) = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &ResultLength) != -1073741772 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPoolSession, ResultLength, 0x746C7355u);
        if ( PoolWithTag )
        {
          if ( ZwQueryValueKey(
                 KeyHandle,
                 &ValueName,
                 KeyValuePartialInformation,
                 PoolWithTag,
                 ResultLength,
                 &ResultLength) >= 0
            && PoolWithTag[1] == 3 )
          {
            *((_QWORD *)gpxsGlobals + 5) = ExAllocatePoolWithTag(PagedPool, (unsigned int)PoolWithTag[2], 0x746C7355u);
            if ( *((_QWORD *)gpxsGlobals + 5) )
            {
              v2 = PoolWithTag[2] >> 2;
              *((_DWORD *)gpxsGlobals + 9) = v2;
              if ( v2 )
              {
                do
                {
                  v3 = v0++;
                  *(_DWORD *)(*((_QWORD *)gpxsGlobals + 5) + 4 * v3) = PoolWithTag[v3 + 3];
                }
                while ( v0 < *((_DWORD *)gpxsGlobals + 9) );
              }
            }
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
      ZwClose(KeyHandle);
    }
  }
}
