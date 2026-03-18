/*
 * XREFs of ?GrepDwmCreateComposedEvent@@YGJPAUDwmState@@@Z @ 0xE243C
 * Callers:
 *     _GreDwmStartup@4 @ 0xE1BEA (_GreDwmStartup@4.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPAGIPBGZZ @ 0x7F16E (-RtlStringCchPrintfW@@YAJPAGIPBGZZ.c)
 *     ?RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ @ 0xE25C0 (-RtlStringCchPrintfExW@@YAJPAGIPAPAGPAIKPBGZZ.c)
 */

int __thiscall GrepDwmCreateComposedEvent(unsigned __int16 *this)
{
  const WCHAR *v1; // edi
  int v2; // ebx
  NTSTATUS v3; // esi
  unsigned __int16 *v4; // edi
  unsigned int v5; // ecx
  unsigned __int16 *v6; // edi
  int result; // eax
  NTSTATUS v8; // eax
  unsigned __int16 *v9; // ecx
  void *v10; // eax
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [esp+Ch] [ebp-34h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+24h] [ebp-1Ch] BYREF
  unsigned __int16 *v13; // [esp+2Ch] [ebp-14h]
  unsigned int v14; // [esp+30h] [ebp-10h] BYREF
  unsigned __int16 *v15; // [esp+34h] [ebp-Ch] BYREF
  void *DirectoryHandle; // [esp+38h] [ebp-8h] BYREF
  void *EventHandle; // [esp+3Ch] [ebp-4h] BYREF

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  v1 = this + 56;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  DirectoryHandle = 0;
  EventHandle = 0;
  v15 = 0;
  v14 = 0;
  ++*(_DWORD *)(_gpGdiSharedMemory + 1048732);
  v13 = this;
  v2 = *(_DWORD *)(_gpGdiSharedMemory + 1048732);
  v3 = RtlStringCchPrintfExW(this + 56, 0x44u, &v15, &v14, 0x1000u, L"\\Sessions\\%ld\\BaseNamedObjects", _gSessionId);
  if ( v3 < 0 )
    goto LABEL_14;
  RtlInitUnicodeString(&DestinationString, v1);
  ObjectAttributes.Length = 24;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = 0;
  ObjectAttributes.SecurityQualityOfService = 0;
  v3 = ZwOpenDirectoryObject(&DirectoryHandle, (ACCESS_MASK)&loc_2000F, &ObjectAttributes);
  if ( v3 < 0 )
  {
LABEL_14:
    v10 = EventHandle;
LABEL_8:
    if ( v10 )
      ObCloseHandle(v10, 0);
    if ( DirectoryHandle )
      ObCloseHandle(DirectoryHandle, 0);
    return v3;
  }
  else
  {
    v4 = v15;
    v5 = v14;
    *v15 = 92;
    v6 = v4 + 1;
    ObjectAttributes.SecurityQualityOfService = 0;
    ObjectAttributes.RootDirectory = DirectoryHandle;
    v14 = v5 - 1;
    ObjectAttributes.Length = 24;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.SecurityDescriptor = &gComposeEventCompiledSd;
    for ( result = RtlStringCchPrintfW(v6, v5 - 1, L"DwmComposedEvent_%x", v2);
          result >= 0;
          result = RtlStringCchPrintfW(v6, v14, L"DwmComposedEvent_%x", v2) )
    {
      RtlInitUnicodeString(&DestinationString, v6);
      v8 = ZwCreateEvent(&EventHandle, (ACCESS_MASK)&loc_1F0002 + 1, &ObjectAttributes, NotificationEvent, 0);
      v3 = v8;
      if ( v8 != -1073741771 )
      {
        if ( v8 < 0 )
          return v3;
        v9 = v13;
        *(_DWORD *)(_gpGdiSharedMemory + 1048732) = v2;
        *((_DWORD *)v9 + 62) = EventHandle;
        v10 = 0;
        EventHandle = 0;
        goto LABEL_8;
      }
      ++v2;
    }
  }
  return result;
}
