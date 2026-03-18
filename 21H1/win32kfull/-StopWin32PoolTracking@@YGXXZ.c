/*
 * XREFs of ?StopWin32PoolTracking@@YGXXZ @ 0xED75A
 * Callers:
 *     _InitializeWin32PoolTracking@0 @ 0xEBEE8 (_InitializeWin32PoolTracking@0.c)
 * Callees:
 *     <none>
 */

void __stdcall StopWin32PoolTracking()
{
  int v0; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+4h] [ebp-2Ch] BYREF
  struct _UNICODE_STRING ValueName; // [esp+1Ch] [ebp-14h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-Ch] BYREF
  void *KeyHandle; // [esp+2Ch] [ebp-4h] BYREF

  v0 = *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3);
  if ( *((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) )
  {
    *(_DWORD *)(*((_DWORD *)&WPP_MAIN_CB.Queue.Wcb.1 + 3) + 44) = 0;
    *(_DWORD *)(v0 + 40) = 0;
  }
  if ( gpxsGlobals )
  {
    if ( *((_DWORD *)gpxsGlobals + 4) )
    {
      *(_DWORD *)&DestinationString.Length = 0;
      DestinationString.Buffer = 0;
      *(_DWORD *)&ValueName.Length = 0;
      ValueName.Buffer = 0;
      KeyHandle = 0;
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
        if ( ZwDeleteValueKey(KeyHandle, &ValueName) >= 0 )
          ZwFlushKey(KeyHandle);
        ZwClose(KeyHandle);
      }
    }
  }
}
