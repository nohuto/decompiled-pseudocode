/*
 * XREFs of OpenGlobalizationUserSettingsKey_ForMua @ 0x180119D58
 * Callers:
 *     OpenGlobalizationUserSettingsKey @ 0x18006F4B4 (OpenGlobalizationUserSettingsKey.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlGetPersistedStateLocation @ 0x180057DC0 (RtlGetPersistedStateLocation.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtClose @ 0x18009D290 (NtClose.c)
 *     NtOpenKey @ 0x18009D2F0 (NtOpenKey.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x18011A028 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 */

__int64 __fastcall OpenGlobalizationUserSettingsKey_ForMua(unsigned int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v5; // rdi
  int v8; // r14d
  __int64 *Heap; // rsi
  int InformationToken; // ebx
  unsigned __int8 v11; // al
  unsigned __int16 v12; // bx
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v16; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v19; // [rsp+78h] [rbp-88h]
  __int64 v20; // [rsp+80h] [rbp-80h]
  _QWORD *v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+98h] [rbp-68h]
  _WORD v24[264]; // [rsp+B0h] [rbp-50h] BYREF

  v5 = 0LL;
  v8 = 0;
  Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 84LL);
  if ( Heap )
  {
    InformationToken = ZwQueryInformationToken();
    if ( InformationToken < 0 )
      goto LABEL_26;
    v5 = *Heap;
  }
  else
  {
    InformationToken = -1073741801;
  }
  if ( InformationToken >= 0 )
  {
    v11 = *(_BYTE *)(v5 + 1);
    if ( v11 < 2u || v11 == 5 && *(_DWORD *)(v5 + 8) == 21 && *(_DWORD *)(v5 + 24) == 503 )
    {
      *a4 = 0;
      InformationToken = -1073741514;
      v8 = 1;
    }
    if ( InformationToken >= 0 )
    {
      InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, (PSID)v5, 1u);
      if ( InformationToken >= 0 )
      {
        LODWORD(v16) = 0;
        InformationToken = RtlGetPersistedStateLocation(
                             L"GlobalizationUserSettings",
                             L"TargetNtPath",
                             L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\International",
                             0,
                             v24,
                             0x208u,
                             (unsigned int *)&v16);
        if ( InformationToken >= 0 )
        {
          v12 = v16 + UnicodeString.Length + 4;
          v13 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v12);
          v14 = v13;
          if ( v13 )
          {
            v17[0] = 0LL;
            WORD1(v17[0]) = v12;
            v17[1] = v13;
            InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v17, v24);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlAppendUnicodeToString((unsigned __int16 *)v17, L"\\");
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlAppendUnicodeStringToString(
                                     (unsigned __int16 *)v17,
                                     (const void **)&UnicodeString);
                if ( InformationToken >= 0 )
                {
                  v20 = 0LL;
                  v21 = v17;
                  v19 = 48;
                  v22 = 576;
                  v23 = 0LL;
                  if ( (int)ZwOpenKey() < 0 )
                  {
                    v8 = 1;
                    *a4 = 1;
                  }
                  else
                  {
                    ZwClose((HANDLE)v17[3]);
                    *a4 = 2;
                    InformationToken = ZwOpenKey();
                  }
                }
              }
            }
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v14);
          }
          else
          {
            InformationToken = -1073741801;
          }
        }
        RtlFreeAnsiString(&UnicodeString);
      }
    }
    if ( v8 )
      InformationToken = OpenGlobalizationUserSettingsKey_ForSingleUserModel(a1, a3);
  }
LABEL_26:
  if ( Heap )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Heap);
  return (unsigned int)InformationToken;
}
