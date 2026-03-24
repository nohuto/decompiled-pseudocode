/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x1405BA900
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x1403A484C (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140265A40 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14027F0B0 (RtlAppendUnicodeStringToString.c)
 *     ExFreeHeapPool @ 0x140341AC0 (ExFreeHeapPool.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA580 (ZwClose.c)
 *     ZwOpenKey @ 0x1403FA5E0 (ZwOpenKey.c)
 *     ZwQueryInformationToken @ 0x1403FA7C0 (ZwQueryInformationToken.c)
 *     AllocateMemory @ 0x1405BA8B4 (AllocateMemory.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x1405BAB90 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     RtlGetPersistedStateLocation @ 0x14063F9C0 (RtlGetPersistedStateLocation.c)
 *     RtlConvertSidToUnicodeString @ 0x1406745A0 (RtlConvertSidToUnicodeString.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(__int64 a1, __int64 a2, HANDLE *a3, _DWORD *a4)
{
  __int64 v4; // rdi
  int v7; // r14d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *Memory; // rsi
  __int64 v11; // r8
  _DWORD *v12; // r9
  NTSTATUS InformationToken; // ebx
  unsigned __int8 v14; // al
  unsigned __int16 v15; // bx
  wchar_t *v16; // rax
  ULONG_PTR v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  _DWORD *v20; // r9
  ULONG ReturnLength[2]; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+58h] [rbp-A8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  WCHAR Source[264]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = 0LL;
  v7 = 0;
  UnicodeString = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Memory = (__int64 *)AllocateMemory(0x54uLL);
  if ( Memory )
  {
    ReturnLength[0] = 0;
    InformationToken = ZwQueryInformationToken((HANDLE)0xFFFFFFFFFFFFFFFALL, TokenUser, Memory, 0x54u, ReturnLength);
    if ( InformationToken < 0 )
      goto LABEL_26;
    v4 = *Memory;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v14 = *(_BYTE *)(v4 + 1);
    if ( v14 < 2u || v14 == 5 && *(_DWORD *)(v4 + 8) == 21 && *(_DWORD *)(v4 + 24) == 503 )
    {
      *a4 = 0;
      InformationToken = -1073741514;
      v7 = 1;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v4, 1u);
      if ( InformationToken >= 0 )
      {
        ReturnLength[0] = 0;
        InformationToken = RtlGetPersistedStateLocation(
                             L"GlobalizationUserSettings",
                             Source,
                             520,
                             (__int64)ReturnLength);
        if ( InformationToken >= 0 )
        {
          v15 = LOWORD(ReturnLength[0]) + UnicodeString.Length + 4;
          v16 = (wchar_t *)AllocateMemory(v15);
          v17 = (ULONG_PTR)v16;
          if ( v16 )
          {
            *(_QWORD *)&Destination.Length = 0LL;
            Destination.MaximumLength = v15;
            Destination.Buffer = v16;
            InformationToken = RtlAppendUnicodeToString(&Destination, Source);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString(&Destination, L"\\");
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlAppendUnicodeStringToString(&Destination, &UnicodeString);
                if ( InformationToken >= 0 )
                {
                  ObjectAttributes.RootDirectory = 0LL;
                  *(_QWORD *)ReturnLength = 0LL;
                  ObjectAttributes.ObjectName = &Destination;
                  ObjectAttributes.Length = 48;
                  ObjectAttributes.Attributes = 576;
                  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
                  if ( ZwOpenKey((PHANDLE)ReturnLength, 0x20019u, &ObjectAttributes) < 0 )
                  {
                    v7 = 1;
                    *a4 = 1;
                  }
                  else
                  {
                    ZwClose(*(HANDLE *)ReturnLength);
                    *a4 = 2;
                    InformationToken = ZwOpenKey(a3, 8u, &ObjectAttributes);
                  }
                }
              }
            }
            ExFreeHeapPool(v17, v18, v19, v20);
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v7 )
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(v9, a3);
  }
LABEL_26:
  if ( Memory )
    ExFreeHeapPool((ULONG_PTR)Memory, v8, v11, v12);
  return (unsigned int)InformationToken;
}
