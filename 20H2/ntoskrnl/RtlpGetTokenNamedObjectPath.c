/*
 * XREFs of RtlpGetTokenNamedObjectPath @ 0x140916DB8
 * Callers:
 *     RtlGetAppContainerNamedObjectPath @ 0x1405850A0 (RtlGetAppContainerNamedObjectPath.c)
 *     RtlGetTokenNamedObjectPath @ 0x140916140 (RtlGetTokenNamedObjectPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x140267DE0 (RtlAppendUnicodeToString.c)
 *     RtlStringCbLengthW @ 0x140312FE0 (RtlStringCbLengthW.c)
 *     RtlAppendUnicodeStringToString @ 0x140340C70 (RtlAppendUnicodeStringToString.c)
 *     RtlStringCchPrintfW @ 0x140340D00 (RtlStringCchPrintfW.c)
 *     RtlSubAuthoritySid @ 0x140340E50 (RtlSubAuthoritySid.c)
 *     RtlGetCurrentServiceSessionId @ 0x1403A57B0 (RtlGetCurrentServiceSessionId.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     memset @ 0x140411300 (memset.c)
 *     NtQueryInformationToken @ 0x14061D520 (NtQueryInformationToken.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     ExpAllocateStringRoutine @ 0x1406C4F70 (ExpAllocateStringRoutine.c)
 *     RtlGetAppContainerSidType @ 0x1406FB810 (RtlGetAppContainerSidType.c)
 *     RtlConvertSidToUnicodeString @ 0x1406FDB70 (RtlConvertSidToUnicodeString.c)
 *     RtlGetAppContainerParent @ 0x140916010 (RtlGetAppContainerParent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetTokenNamedObjectPath(HANDLE TokenHandle, char *Sid, char a3, UNICODE_STRING *a4)
{
  char *v8; // r12
  PSID v9; // r14
  int v10; // eax
  int v11; // esi
  int v12; // edi
  signed int AppContainerSidType; // ebx
  __int64 v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  int CurrentServiceSessionId; // eax
  int v19; // r9d
  char v20; // al
  PULONG v21; // rsi
  PULONG v22; // rdi
  PULONG v23; // rbx
  const wchar_t *v24; // rcx
  NTSTATUS v25; // eax
  wchar_t *v26; // rcx
  wchar_t v27; // ax
  wchar_t *v28; // rax
  wchar_t *v29; // rdx
  wchar_t v30; // ax
  int v31; // esi
  size_t v32; // rbx
  int v33; // r14d
  SIZE_T v34; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v36; // rdi
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  PULONG ReturnLengtha; // [rsp+20h] [rbp-E0h]
  char v39; // [rsp+40h] [rbp-C0h]
  PSID v40; // [rsp+48h] [rbp-B8h] BYREF
  int TokenInformation; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v42; // [rsp+54h] [rbp-ACh] BYREF
  int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  int v45; // [rsp+60h] [rbp-A0h] BYREF
  int v46; // [rsp+64h] [rbp-9Ch]
  int v47; // [rsp+68h] [rbp-98h]
  size_t pcbLength; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  int v50; // [rsp+88h] [rbp-78h]
  UNICODE_STRING Source; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+A0h] [rbp-60h] BYREF
  UNICODE_STRING v53; // [rsp+B0h] [rbp-50h] BYREF
  PSID Sida[12]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v55[10]; // [rsp+120h] [rbp+20h] BYREF
  wchar_t psz[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR SourceString; // [rsp+380h] [rbp+280h] BYREF
  char v58; // [rsp+388h] [rbp+288h]
  wchar_t pszDest[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  v45 = 0;
  v40 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  memset(v55, 0, sizeof(v55));
  v42 = 0;
  v44 = 0;
  memset(psz, 0, 0x208uLL);
  memset(pszDest, 0, 0x208uLL);
  memset(Sida, 0, 0x58uLL);
  *(_QWORD *)&Source.Length = 262146LL;
  Source.Buffer = (wchar_t *)L"\\";
  v53 = 0LL;
  if ( !a4 || !TokenHandle )
    return 3221225485LL;
  TokenInformation = 0;
  v43 = 0;
  v46 = a3 & 2;
  v39 = 1;
  v10 = a3 & 8;
  v11 = a3 & 1;
  v12 = a3 & 4;
  LODWORD(pcbLength) = v11;
  v47 = v10;
  v50 = v12;
  *a4 = 0LL;
  DestinationString = 0LL;
  UnicodeString = 0LL;
  if ( Sid )
  {
    v8 = Sid;
    TokenInformation = 1;
    goto LABEL_17;
  }
  AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v42);
  if ( AppContainerSidType >= 0 )
  {
    if ( !TokenInformation )
      goto LABEL_17;
    AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenAppContainerSid, v55, 0x50u, &v42);
    if ( AppContainerSidType >= 0 )
    {
      v8 = (char *)v55[0];
      if ( !v55[0] )
      {
        AppContainerSidType = -1073741823;
        goto LABEL_10;
      }
LABEL_17:
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenPrivateNameSpace, &v43, 4u, &v42);
      if ( AppContainerSidType < 0 )
        goto LABEL_10;
      if ( v43 )
      {
        AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenUser, Sida, 0x58u, &v42);
        if ( AppContainerSidType < 0 )
          goto LABEL_10;
        AppContainerSidType = RtlConvertSidToUnicodeString(&UnicodeString, Sida[0], 1u);
        if ( AppContainerSidType < 0 )
          goto LABEL_10;
      }
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenSessionId, &v44, 4u, &v42);
      if ( AppContainerSidType < 0 )
        goto LABEL_10;
      v15 = 260LL;
      if ( TokenInformation )
      {
        AppContainerSidType = RtlGetAppContainerSidType(v8, &v45);
        if ( AppContainerSidType < 0 )
          goto LABEL_35;
        if ( v45 == 2 )
        {
          AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v8, 1u);
          if ( AppContainerSidType >= 0 )
            goto LABEL_26;
          goto LABEL_35;
        }
        AppContainerSidType = RtlGetAppContainerParent(v8, (ULONG **)&v40);
        if ( AppContainerSidType < 0
          || (AppContainerSidType = RtlConvertSidToUnicodeString(&DestinationString, v40, 1u), AppContainerSidType < 0)
          || (v21 = RtlSubAuthoritySid(v8, 0xBu),
              v22 = RtlSubAuthoritySid(v8, 0xAu),
              v23 = RtlSubAuthoritySid(v8, 9u),
              LODWORD(ReturnLength) = *RtlSubAuthoritySid(v8, 8u),
              AppContainerSidType = RtlStringCchPrintfW(
                                      pszDest,
                                      0x104uLL,
                                      L"%s\\%u-%u-%u-%u",
                                      DestinationString.Buffer,
                                      ReturnLength,
                                      *v23,
                                      *v22,
                                      *v21),
              AppContainerSidType < 0) )
        {
LABEL_35:
          v9 = v40;
          goto LABEL_10;
        }
        RtlFreeAnsiString(&DestinationString);
        RtlInitUnicodeString(&DestinationString, pszDest);
        v12 = v50;
        LOBYTE(v11) = pcbLength;
        v39 = 0;
      }
LABEL_26:
      AppContainerSidType = NtQueryInformationToken(TokenHandle, TokenBnoIsolation, &SourceString, 0x120u, &v42);
      if ( AppContainerSidType < 0 )
      {
LABEL_73:
        v9 = v40;
        goto LABEL_10;
      }
      if ( v43 || TokenInformation )
      {
        v19 = v44;
      }
      else
      {
        CurrentServiceSessionId = RtlGetCurrentServiceSessionId(v17, v16);
        v19 = v44;
        if ( v44 == CurrentServiceSessionId )
        {
          v20 = 1;
          goto LABEL_38;
        }
      }
      v20 = 0;
LABEL_38:
      if ( (_BYTE)v11 )
      {
        if ( !v12 )
        {
          v25 = RtlStringCchPrintfW(psz, 0x104uLL, L"Global\\Session\\%ld%s");
LABEL_52:
          AppContainerSidType = v25;
LABEL_60:
          if ( AppContainerSidType >= 0 )
          {
            pcbLength = 0LL;
            AppContainerSidType = RtlStringCbLengthW(psz, 0x208uLL, &pcbLength);
            if ( AppContainerSidType >= 0 )
            {
              v31 = v46;
              if ( !v43 || v46 )
                v32 = pcbLength;
              else
                v32 = UnicodeString.Length + pcbLength + 2;
              if ( TokenInformation )
                v32 += DestinationString.Length + 2LL;
              v33 = v47;
              if ( v58 && !v47 )
              {
                RtlInitUnicodeString(&v53, SourceString);
                v32 += v53.Length + 2LL;
              }
              v34 = v32 + 2;
              StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v34);
              v36 = StringRoutine;
              if ( StringRoutine )
              {
                memset(StringRoutine, 0, v34);
                *a4 = 0LL;
                a4->MaximumLength = v34;
                a4->Buffer = v36;
                AppContainerSidType = RtlAppendUnicodeToString(a4, psz);
                if ( AppContainerSidType >= 0 )
                {
                  if ( !v43
                    || v31
                    || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                    && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &UnicodeString),
                        AppContainerSidType >= 0) )
                  {
                    if ( !TokenInformation
                      || (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source), AppContainerSidType >= 0)
                      && (AppContainerSidType = RtlAppendUnicodeStringToString(a4, &DestinationString),
                          AppContainerSidType >= 0) )
                    {
                      if ( v58 )
                      {
                        if ( !v33 )
                        {
                          AppContainerSidType = RtlAppendUnicodeStringToString(a4, &Source);
                          if ( AppContainerSidType >= 0 )
                            AppContainerSidType = RtlAppendUnicodeStringToString(a4, &v53);
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                AppContainerSidType = -1073741670;
              }
            }
          }
          goto LABEL_73;
        }
        v29 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v30 = *(wchar_t *)((char *)v29 + (char *)L"AppContainerNamedObjects" - (char *)psz);
          if ( !v30 )
            break;
          *v29++ = v30;
          --v15;
        }
        while ( v15 );
        v28 = v29 - 1;
        if ( v15 )
          v28 = v29;
      }
      else
      {
        if ( !v20 )
        {
          v24 = L"AppContainerNamedObjects";
          if ( !TokenInformation )
            v24 = L"BaseNamedObjects";
          LODWORD(ReturnLengtha) = v19;
          v25 = RtlStringCchPrintfW(psz, 0x104uLL, L"%s\\%ld\\%s", L"\\Sessions", ReturnLengtha, v24);
          goto LABEL_52;
        }
        v26 = psz;
        do
        {
          if ( v15 == -2147483386 )
            break;
          v27 = *(wchar_t *)((char *)v26 + (char *)L"\\BaseNamedObjects" - (char *)psz);
          if ( !v27 )
            break;
          *v26++ = v27;
          --v15;
        }
        while ( v15 );
        v28 = v26 - 1;
        if ( v15 )
          v28 = v26;
      }
      *v28 = 0;
      AppContainerSidType = v15 == 0 ? 0x80000005 : 0;
      goto LABEL_60;
    }
  }
LABEL_10:
  RtlFreeAnsiString(&UnicodeString);
  if ( AppContainerSidType < 0 )
    RtlFreeAnsiString(a4);
  if ( v39 )
    RtlFreeAnsiString(&DestinationString);
  if ( v9 )
    ExFreePoolWithTag(v9, 0);
  return (unsigned int)AppContainerSidType;
}
