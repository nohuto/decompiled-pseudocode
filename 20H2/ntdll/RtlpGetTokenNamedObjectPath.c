/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x180044080
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x180043F20 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x180045900 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x180016760 (RtlFreeAnsiString.c)
 *     RtlAppendUnicodeStringToString @ 0x180017270 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180024850 (RtlGetCurrentServiceSessionId.c)
 *     RtlConvertSidToUnicodeString @ 0x180037250 (RtlConvertSidToUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x180037990 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x18003BA40 (RtlInitUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x180043E50 (RtlGetAppContainerParent.c)
 *     RtlStringCchPrintfW @ 0x1800445CC (RtlStringCchPrintfW.c)
 *     RtlStringCbLengthW @ 0x180044648 (RtlStringCbLengthW.c)
 *     RtlGetAppContainerSidType @ 0x1800446C0 (RtlGetAppContainerSidType.c)
 *     NtdllpAllocateStringRoutine @ 0x18006DBB0 (NtdllpAllocateStringRoutine.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     NtQueryInformationToken @ 0x18009D4D0 (NtQueryInformationToken.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, void *a2, char a3, _UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  NTSTATUS AppContainerParent; // ebx
  __int64 v14; // rdi
  int v15; // r14d
  char v16; // al
  WCHAR *v17; // rcx
  int v18; // r11d
  int v19; // r14d
  __int64 v20; // rbx
  int v21; // r15d
  size_t v22; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v24; // rdi
  WCHAR v26; // ax
  WCHAR *v27; // rax
  bool v28; // zf
  WCHAR v29; // ax
  char v30; // [rsp+40h] [rbp-C0h]
  PSID AppContainerSidParent; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG ReturnLength; // [rsp+54h] [rbp-ACh] BYREF
  int v34; // [rsp+58h] [rbp-A8h] BYREF
  int v35; // [rsp+5Ch] [rbp-A4h]
  int v36; // [rsp+60h] [rbp-A0h]
  _UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  _APPCONTAINER_SID_TYPE AppContainerSidType; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v40; // [rsp+80h] [rbp-80h] BYREF
  UNICODE_STRING v41; // [rsp+88h] [rbp-78h] BYREF
  _UNICODE_STRING v42; // [rsp+98h] [rbp-68h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  PSID Sid[12]; // [rsp+C0h] [rbp-40h] BYREF
  void *v45; // [rsp+120h] [rbp+20h] BYREF
  WCHAR Source[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR v47; // [rsp+380h] [rbp+280h] BYREF
  char v48; // [rsp+388h] [rbp+288h]
  WCHAR SourceString[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  AppContainerSidParent = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Source, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  *(_DWORD *)&v41.Length = 262146;
  v41.Buffer = (wchar_t *)L"\\";
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  v30 = 1;
  v35 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v36 = v11;
  TokenInformation = 0;
  v34 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v42 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    TokenInformation = 1;
    goto LABEL_8;
  }
  AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Du, &TokenInformation, 4u, &ReturnLength);
  if ( AppContainerParent >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_8;
    AppContainerParent = NtQueryInformationToken(TokenHandle, 0x1Fu, &v45, 0x50u, &ReturnLength);
    if ( AppContainerParent >= 0 )
    {
      v7 = v45;
      if ( !v45 )
      {
        AppContainerParent = -1073741823;
        goto LABEL_37;
      }
LABEL_8:
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Au, &v34, 4u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_37;
      if ( v34 )
      {
        AppContainerParent = NtQueryInformationToken(TokenHandle, 1u, Sid, 0x58u, &ReturnLength);
        if ( AppContainerParent < 0 )
          goto LABEL_37;
        AppContainerParent = RtlConvertSidToUnicodeString(&v42, Sid[0], 1u);
        if ( AppContainerParent < 0 )
          goto LABEL_37;
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0xCu, &v39, 4u, &ReturnLength);
      if ( AppContainerParent < 0 )
        goto LABEL_37;
      v14 = 260LL;
      if ( TokenInformation )
      {
        AppContainerParent = RtlGetAppContainerSidType(v7, &AppContainerSidType);
        if ( AppContainerParent < 0 )
          goto LABEL_36;
        if ( AppContainerSidType == ParentAppContainerSidType )
        {
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
        }
        else
        {
          AppContainerParent = RtlGetAppContainerParent(v7, &AppContainerSidParent);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          AppContainerParent = RtlConvertSidToUnicodeString(&UnicodeString, AppContainerSidParent, 1u);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          AppContainerParent = RtlStringCchPrintfW(SourceString);
          if ( AppContainerParent < 0 )
            goto LABEL_36;
          RtlFreeAnsiString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v30 = 0;
        }
      }
      AppContainerParent = NtQueryInformationToken(TokenHandle, 0x2Cu, &v47, 0x120u, &ReturnLength);
      if ( AppContainerParent >= 0 )
      {
        v15 = v39;
        if ( v34 || TokenInformation || (v28 = v15 == RtlGetCurrentServiceSessionId(), v16 = 1, !v28) )
          v16 = 0;
        if ( v10 )
        {
          if ( !v12 )
            goto LABEL_21;
          v17 = Source;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v26 = *(WCHAR *)((char *)v17 + (char *)L"AppContainerNamedObjects" - (char *)Source);
            if ( !v26 )
              break;
            *v17++ = v26;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v17 = Source;
          if ( !v16 )
          {
LABEL_21:
            AppContainerParent = RtlStringCchPrintfW(Source);
LABEL_22:
            if ( AppContainerParent >= 0 )
            {
              v40 = 0LL;
              AppContainerParent = RtlStringCbLengthW(Source, 520LL, &v40);
              if ( AppContainerParent >= 0 )
              {
                v19 = v35;
                if ( v34 == v18 || v35 )
                  v20 = v40;
                else
                  v20 = v40 + v42.Length + 2LL;
                if ( TokenInformation != v18 )
                  v20 += UnicodeString.Length + 2LL;
                v21 = v36;
                if ( v48 != (_BYTE)v18 && !v36 )
                {
                  RtlInitUnicodeString(&DestinationString, v47);
                  v20 += DestinationString.Length + 2LL;
                }
                v22 = v20 + 2;
                StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v22);
                v24 = StringRoutine;
                if ( StringRoutine )
                {
                  memset(StringRoutine, 0, v22);
                  *a4 = 0LL;
                  a4->MaximumLength = v22;
                  a4->Buffer = v24;
                  AppContainerParent = RtlAppendUnicodeToString(a4, Source);
                  if ( AppContainerParent >= 0 )
                  {
                    if ( !v34
                      || v19
                      || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
                      && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v42), AppContainerParent >= 0) )
                    {
                      if ( !TokenInformation
                        || (AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41), AppContainerParent >= 0)
                        && (AppContainerParent = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                            AppContainerParent >= 0) )
                      {
                        if ( v48 )
                        {
                          if ( !v21 )
                          {
                            AppContainerParent = RtlAppendUnicodeStringToString(a4, &v41);
                            if ( AppContainerParent >= 0 )
                              AppContainerParent = RtlAppendUnicodeStringToString(a4, &DestinationString);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  AppContainerParent = -1073741670;
                }
              }
            }
            goto LABEL_36;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v29 = *(WCHAR *)((char *)v17 + (char *)L"\\BaseNamedObjects" - (char *)Source);
            if ( !v29 )
              break;
            *v17++ = v29;
            --v14;
          }
          while ( v14 );
        }
        v27 = v17 - 1;
        if ( v14 )
          v27 = v17;
        AppContainerParent = v14 == 0 ? 0x80000005 : 0;
        *v27 = 0;
        goto LABEL_22;
      }
LABEL_36:
      v8 = AppContainerSidParent;
    }
  }
LABEL_37:
  RtlFreeAnsiString(&v42);
  if ( AppContainerParent < 0 )
    RtlFreeAnsiString(a4);
  if ( v30 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, AppContainerSidParent);
  return (unsigned int)AppContainerParent;
}
