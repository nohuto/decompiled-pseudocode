/*
 * XREFs of RtlGetPersistedStateLocation @ 0x180057D70
 * Callers:
 *     GetOverlayRootFolder @ 0x180038344 (GetOverlayRootFolder.c)
 *     RtlpGetTimeZoneInfoHandle @ 0x180057CB0 (RtlpGetTimeZoneInfoHandle.c)
 *     LdrpAppxGetRemediationRegistryKey @ 0x1800CB9D4 (LdrpAppxGetRemediationRegistryKey.c)
 *     OpenGlobalizationUserSettingsKey_ForMua @ 0x180119848 (OpenGlobalizationUserSettingsKey_ForMua.c)
 * Callees:
 *     RtlExpandEnvironmentStrings @ 0x180015630 (RtlExpandEnvironmentStrings.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     NtClose @ 0x18009CFF0 (NtClose.c)
 *     NtOpenKey @ 0x18009D050 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18009D0F0 (NtQueryValueKey.c)
 *     memmove @ 0x1800A3C00 (memmove.c)
 */

NTSTATUS __cdecl RtlGetPersistedStateLocation(
        PCWSTR SourceID,
        PCWSTR CustomValue,
        PCWSTR DefaultPath,
        STATE_LOCATION_TYPE StateLocationType,
        PWCHAR TargetPath,
        ULONG BufferLengthIn,
        PULONG BufferLengthOut)
{
  WCHAR *Heap; // rdi
  signed int v11; // ebx
  __int64 v12; // r8
  unsigned int v13; // r8d
  unsigned int v14; // eax
  size_t v15; // r8
  const WCHAR *v16; // rdx
  NTSTATUS v18; // eax
  NTSTATUS v19; // eax
  unsigned __int64 v20; // r14
  ULONG Length; // ebx
  ULONG v22; // ecx
  unsigned __int64 v23; // rax
  SIZE_T v24; // r8
  HANDLE KeyHandle; // [rsp+30h] [rbp-41h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-39h] BYREF
  ULONG_PTR ReturnLength; // [rsp+40h] [rbp-31h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-29h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-19h] BYREF
  ULONG ResultLength; // [rsp+D8h] [rbp+67h] BYREF

  KeyHandle = 0LL;
  Handle = 0LL;
  Heap = 0LL;
  if ( (unsigned int)StateLocationType > LocationTypeFileSystem )
    return -1073741583;
  if ( byte_18016B1C0 )
  {
    v11 = -1073741772;
  }
  else
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)((char *)&unk_18011C430 + 16 * StateLocationType);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v18 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    v11 = v18;
    if ( v18 == -1073741772 )
    {
      byte_18016B1C0 = 1;
    }
    else
    {
      if ( v18 < 0 )
        goto LABEL_13;
      RtlInitUnicodeString(&DestinationString, SourceID);
      ObjectAttributes.RootDirectory = KeyHandle;
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Attributes = 64;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v19 = NtOpenKey(&Handle, 0x20019u, &ObjectAttributes);
      v11 = v19;
      if ( v19 != -1073741772 )
      {
        if ( v19 < 0 )
          goto LABEL_13;
        if ( !CustomValue )
          CustomValue = L"TargetPath";
        RtlInitUnicodeString(&DestinationString, CustomValue);
        v20 = BufferLengthIn;
        Length = BufferLengthIn + 16;
        if ( BufferLengthIn + 16 >= BufferLengthIn )
        {
          Heap = (WCHAR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Length);
          if ( !Heap )
          {
            v11 = -1073741801;
            goto LABEL_13;
          }
          v11 = NtQueryValueKey(Handle, &DestinationString, KeyValuePartialInformation, Heap, Length, &ResultLength);
          if ( v11 < 0 )
          {
            if ( v11 != -2147483643 )
              goto LABEL_13;
          }
          else if ( (unsigned int)(*((_DWORD *)Heap + 1) - 1) > 1 )
          {
            v11 = -1073741788;
            goto LABEL_13;
          }
          v22 = *((_DWORD *)Heap + 2);
          v16 = Heap + 6;
          ResultLength = v22;
          if ( v11 >= 0 )
          {
            if ( v16[((unsigned __int64)v22 >> 1) - 1] )
            {
              v23 = v22 + 2;
              ResultLength = v23;
              v22 += 2;
              if ( (unsigned int)v20 < (unsigned int)v23 )
              {
                v11 = -2147483643;
              }
              else
              {
                v16[(v23 >> 1) - 1] = 0;
                v22 = ResultLength;
              }
            }
            if ( v11 >= 0 && *((_DWORD *)Heap + 1) == 2 )
            {
              v24 = -1LL;
              do
                ++v24;
              while ( v16[v24] );
              v11 = RtlExpandEnvironmentStrings(0LL, v16, v24, TargetPath, v20 >> 1, &ReturnLength);
              if ( (int)(v11 + 0x80000000) < 0 || v11 == -1073741789 )
              {
                if ( BufferLengthOut )
                  *BufferLengthOut = 2 * ReturnLength;
                if ( v11 == -1073741789 )
                  v11 = -2147483643;
              }
              goto LABEL_13;
            }
          }
          if ( BufferLengthOut )
            *BufferLengthOut = v22;
          if ( v11 < 0 )
            goto LABEL_13;
          v15 = v22;
          goto LABEL_12;
        }
LABEL_31:
        v11 = -1073741675;
        goto LABEL_13;
      }
    }
  }
  if ( DefaultPath )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( DefaultPath[v12] );
    v13 = v12 + 1;
    v14 = 2 * v13;
    ResultLength = 2 * v13;
    if ( 2 * v13 >= v13 )
    {
      v11 = BufferLengthIn < v14 ? 0x80000005 : 0;
      if ( BufferLengthOut )
        *BufferLengthOut = v14;
      if ( v14 > BufferLengthIn )
        goto LABEL_13;
      v15 = v14;
      v16 = DefaultPath;
LABEL_12:
      memmove(TargetPath, v16, v15);
      goto LABEL_13;
    }
    goto LABEL_31;
  }
LABEL_13:
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Handle )
    NtClose(Handle);
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v11;
}
