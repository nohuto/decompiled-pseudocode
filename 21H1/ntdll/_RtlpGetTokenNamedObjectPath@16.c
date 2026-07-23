/*
 * XREFs of _RtlpGetTokenNamedObjectPath@16 @ 0x4B348B45
 * Callers:
 *     _RtlGetAppContainerNamedObjectPath@16 @ 0x4B2E7930 (_RtlGetAppContainerNamedObjectPath@16.c)
 *     _RtlGetTokenNamedObjectPath@12 @ 0x4B3464D0 (_RtlGetTokenNamedObjectPath@12.c)
 * Callees:
 *     _RtlAppendUnicodeToString@8 @ 0x4B2BFE00 (_RtlAppendUnicodeToString@8.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _NtdllpAllocateStringRoutine@4 @ 0x4B2C5D10 (_NtdllpAllocateStringRoutine@4.c)
 *     _RtlAppendUnicodeStringToString@8 @ 0x4B2D10A0 (_RtlAppendUnicodeStringToString@8.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _ZwQueryInformationToken@20 @ 0x4B2F2B90 (_ZwQueryInformationToken@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _RtlInitUnicodeString@8 @ 0x4B2F5020 (_RtlInitUnicodeString@8.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     _RtlGetAppContainerParent@8 @ 0x4B3462F0 (_RtlGetAppContainerParent@8.c)
 *     _RtlGetAppContainerSidType@8 @ 0x4B3463A0 (_RtlGetAppContainerSidType@8.c)
 *     _RtlStringCbLengthW@12 @ 0x4B3475AA (_RtlStringCbLengthW@12.c)
 *     _RtlStringCchCopyW@12 @ 0x4B3475EA (_RtlStringCchCopyW@12.c)
 *     _RtlStringCchPrintfW @ 0x4B34761F (_RtlStringCchPrintfW.c)
 */

int __fastcall RtlpGetTokenNamedObjectPath(void *a1, void *a2, char a3, PUNICODE_STRING Destination)
{
  void *v4; // ebx
  HANDLE v6; // ecx
  NTSTATUS appended; // esi
  bool v8; // al
  int v9; // eax
  int v10; // esi
  int v11; // esi
  wchar_t *StringRoutine; // eax
  wchar_t *v13; // ebx
  size_t v15; // [esp-4h] [ebp-624h]
  size_t v16; // [esp-4h] [ebp-624h]
  size_t v17; // [esp-4h] [ebp-624h]
  char v18; // [esp+Fh] [ebp-611h]
  int v19; // [esp+10h] [ebp-610h] BYREF
  int v20; // [esp+14h] [ebp-60Ch] BYREF
  HANDLE TokenHandle; // [esp+18h] [ebp-608h]
  ULONG ReturnLength; // [esp+1Ch] [ebp-604h] BYREF
  int TokenInformation; // [esp+20h] [ebp-600h] BYREF
  int v24; // [esp+24h] [ebp-5FCh]
  int v25; // [esp+28h] [ebp-5F8h]
  _UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-5F4h] BYREF
  wchar_t Format[2]; // [esp+34h] [ebp-5ECh] BYREF
  PSID AppContainerSidParent; // [esp+38h] [ebp-5E8h] BYREF
  UNICODE_STRING v29; // [esp+3Ch] [ebp-5E4h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+44h] [ebp-5DCh] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [esp+4Ch] [ebp-5D4h] BYREF
  _UNICODE_STRING v32; // [esp+50h] [ebp-5D0h] BYREF
  PSID Sid[20]; // [esp+58h] [ebp-5C8h] BYREF
  void *v34; // [esp+A8h] [ebp-578h] BYREF
  PCWSTR v35; // [esp+F0h] [ebp-530h] BYREF
  char v36; // [esp+F4h] [ebp-52Ch]
  WCHAR Source[260]; // [esp+208h] [ebp-418h] BYREF
  WCHAR SourceString[262]; // [esp+410h] [ebp-210h] BYREF
  int v39; // [esp+628h] [ebp+8h]

  v4 = 0;
  TokenHandle = a1;
  AppContainerSidParent = 0;
  LODWORD(v15) = 520;
  memset(Source, 0, v15);
  LODWORD(v16) = 520;
  memset(SourceString, 0, v16);
  v29.Buffer = (wchar_t *)L"\\";
  v29.Length = 2;
  v29.MaximumLength = 4;
  if ( !Destination )
    return -1073741811;
  v6 = TokenHandle;
  if ( !TokenHandle )
    return -1073741811;
  v20 = a3 & 1;
  v24 = a3 & 2;
  v25 = a3 & 8;
  v39 = a3 & 4;
  *(_DWORD *)&Destination->Length = 0;
  Destination->Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  v19 = 0;
  v18 = 1;
  TokenInformation = 0;
  if ( a2 )
  {
    v4 = a2;
    v19 = 1;
  }
  else
  {
    appended = ZwQueryInformationToken(v6, 0x1Du, &v19, 4u, &ReturnLength);
    if ( appended < 0 )
      goto LABEL_61;
    if ( v19 )
    {
      appended = ZwQueryInformationToken(TokenHandle, 0x1Fu, &v34, 0x48u, &ReturnLength);
      if ( appended < 0 )
        goto LABEL_61;
      v4 = v34;
      if ( !v34 )
      {
        appended = -1073741823;
        goto LABEL_61;
      }
    }
  }
  appended = ZwQueryInformationToken(TokenHandle, 0x2Au, &TokenInformation, 4u, &ReturnLength);
  if ( appended >= 0 )
  {
    if ( !TokenInformation
      || (appended = ZwQueryInformationToken(TokenHandle, 1u, Sid, 0x4Cu, &ReturnLength), appended >= 0)
      && (appended = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 1u), appended >= 0) )
    {
      appended = ZwQueryInformationToken(TokenHandle, 0xCu, Format, 4u, &ReturnLength);
      if ( appended >= 0 )
      {
        if ( !v19 )
        {
LABEL_14:
          appended = ZwQueryInformationToken(TokenHandle, 0x2Cu, &v35, 0x118u, &ReturnLength);
          if ( appended >= 0 )
          {
            v8 = !TokenInformation && !v19 && *(_DWORD *)Format == RtlGetCurrentServiceSessionId();
            if ( (_BYTE)v20 )
              v9 = v39
                 ? RtlStringCchCopyW(Source, 260, (int)L"AppContainerNamedObjects")
                 : RtlStringCchPrintfW((wchar_t *)Source, 260, (int)L"Global\\Session\\%ld%s", Format[0]);
            else
              v9 = v8
                 ? RtlStringCchCopyW(Source, 260, (int)L"\\BaseNamedObjects")
                 : RtlStringCchPrintfW((wchar_t *)Source, 260, (int)L"%s\\%ld\\%s", (wchar_t)L"\\Sessions");
            appended = v9;
            if ( v9 >= 0 )
            {
              v20 = 0;
              appended = RtlStringCbLengthW(Source, &v20);
              if ( appended >= 0 )
              {
                if ( !TokenInformation || v24 )
                  v10 = v20;
                else
                  v10 = v20 + UnicodeString.Length + 2;
                if ( v19 )
                  v10 += DestinationString.Length + 2;
                if ( v36 && !v25 )
                {
                  RtlInitUnicodeString(&v32, v35);
                  v10 += v32.Length + 2;
                }
                v11 = v10 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v11);
                v13 = StringRoutine;
                if ( StringRoutine )
                {
                  LODWORD(v17) = v11;
                  memset(StringRoutine, 0, v17);
                  *(_DWORD *)&Destination->Length = 0;
                  Destination->MaximumLength = v11;
                  Destination->Buffer = v13;
                  appended = RtlAppendUnicodeToString(Destination, Source);
                  if ( appended >= 0 )
                  {
                    if ( !TokenInformation
                      || v24
                      || (appended = RtlAppendUnicodeStringToString(Destination, &v29), appended >= 0)
                      && (appended = RtlAppendUnicodeStringToString(Destination, &UnicodeString), appended >= 0) )
                    {
                      if ( !v19
                        || (appended = RtlAppendUnicodeStringToString(Destination, &v29), appended >= 0)
                        && (appended = RtlAppendUnicodeStringToString(Destination, &DestinationString), appended >= 0) )
                      {
                        if ( v36 )
                        {
                          if ( !v25 )
                          {
                            appended = RtlAppendUnicodeStringToString(Destination, &v29);
                            if ( appended >= 0 )
                              appended = RtlAppendUnicodeStringToString(Destination, &v32);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  appended = -1073741670;
                }
              }
            }
          }
          goto LABEL_61;
        }
        appended = RtlGetAppContainerSidType(v4, &AppContainerSidType);
        if ( appended >= 0 )
        {
          if ( AppContainerSidType == ParentAppContainerSidType )
          {
            appended = RtlConvertSidToUnicodeString(&DestinationString, v4, 1u);
            if ( appended >= 0 )
              goto LABEL_14;
          }
          else
          {
            appended = RtlGetAppContainerParent(v4, &AppContainerSidParent);
            if ( appended >= 0 )
            {
              appended = RtlConvertSidToUnicodeString(&DestinationString, AppContainerSidParent, 1u);
              if ( appended >= 0 )
              {
                appended = RtlStringCchPrintfW(
                             (wchar_t *)SourceString,
                             260,
                             (int)L"%s\\%u-%u-%u-%u",
                             (wchar_t)DestinationString.Buffer);
                if ( appended >= 0 )
                {
                  RtlFreeAnsiString(&DestinationString);
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  v18 = 0;
                  goto LABEL_14;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_61:
  RtlFreeAnsiString(&UnicodeString);
  if ( appended < 0 )
    RtlFreeAnsiString(Destination);
  if ( v18 )
    RtlFreeAnsiString(&DestinationString);
  if ( AppContainerSidParent )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return appended;
}
