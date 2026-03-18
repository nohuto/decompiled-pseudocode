/*
 * XREFs of ?LoadWin32PoolTrackingSettings@@YGXXZ @ 0x183353
 * Callers:
 *     _InitializeWin32PoolTracking@0 @ 0xEBEE8 (_InitializeWin32PoolTracking@0.c)
 * Callees:
 *     <none>
 */

void __stdcall LoadWin32PoolTrackingSettings()
{
  _DWORD *PoolWithTag; // esi
  unsigned int v1; // edx
  _DWORD *v2; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+8h] [ebp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-18h] BYREF
  struct _UNICODE_STRING ValueName; // [esp+28h] [ebp-10h] BYREF
  void *KeyHandle; // [esp+30h] [ebp-8h] BYREF
  ULONG ResultLength; // [esp+34h] [ebp-4h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&ValueName.Length = 0;
  ValueName.Buffer = 0;
  KeyHandle = 0;
  ResultLength = 0;
  if ( gpxsGlobals )
  {
    *((_DWORD *)gpxsGlobals + 5) = 0;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.Length = 24;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.SecurityDescriptor = 0;
    ObjectAttributes.SecurityQualityOfService = 0;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0, 0, &ResultLength) != -1073741772 )
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
            *((_DWORD *)gpxsGlobals + 6) = ExAllocatePoolWithTag(PagedPool, PoolWithTag[2], 0x746C7355u);
            if ( *((_DWORD *)gpxsGlobals + 6) )
            {
              v1 = 0;
              *((_DWORD *)gpxsGlobals + 5) = PoolWithTag[2] >> 2;
              v2 = gpxsGlobals;
              if ( *((_DWORD *)gpxsGlobals + 5) )
              {
                do
                {
                  *(_DWORD *)(v2[6] + 4 * v1) = PoolWithTag[v1 + 3];
                  ++v1;
                  v2 = gpxsGlobals;
                }
                while ( v1 < *((_DWORD *)gpxsGlobals + 5) );
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
