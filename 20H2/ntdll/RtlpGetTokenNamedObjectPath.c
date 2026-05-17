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

__int64 __fastcall RtlpGetTokenNamedObjectPath(__int64 a1, void *a2, char a3, UNICODE_STRING *a4)
{
  void *v7; // r14
  PSID v8; // rdi
  char v10; // r13
  int v11; // eax
  int v12; // r12d
  signed int InformationToken; // ebx
  __int64 v14; // rdi
  int v15; // r14d
  char v16; // al
  wchar_t *v17; // rcx
  int v18; // r11d
  int v19; // r14d
  __int64 v20; // rbx
  int v21; // r15d
  size_t v22; // rbx
  wchar_t *StringRoutine; // rax
  wchar_t *v24; // rdi
  wchar_t v26; // ax
  wchar_t *v27; // rax
  bool v28; // zf
  wchar_t v29; // ax
  char v30; // [rsp+40h] [rbp-C0h]
  PSID Sid; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+50h] [rbp-B0h] BYREF
  int v33; // [rsp+58h] [rbp-A8h] BYREF
  int v34; // [rsp+5Ch] [rbp-A4h]
  int v35; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+78h] [rbp-88h] BYREF
  int v38; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  const void *v40[2]; // [rsp+88h] [rbp-78h] BYREF
  UNICODE_STRING v41; // [rsp+98h] [rbp-68h] BYREF
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-58h] BYREF
  PSID v43[12]; // [rsp+C0h] [rbp-40h] BYREF
  void *v44; // [rsp+120h] [rbp+20h] BYREF
  wchar_t Buffer[264]; // [rsp+170h] [rbp+70h] BYREF
  PCWSTR v46; // [rsp+380h] [rbp+280h] BYREF
  char v47; // [rsp+388h] [rbp+288h]
  WCHAR SourceString[264]; // [rsp+4A0h] [rbp+3A0h] BYREF

  Sid = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  memset(Buffer, 0, 0x208uLL);
  memset(SourceString, 0, 0x208uLL);
  LODWORD(v40[0]) = 262146;
  v40[1] = L"\\";
  if ( !a4 || !a1 )
    return 3221225485LL;
  v30 = 1;
  v34 = a3 & 2;
  v10 = a3 & 1;
  v11 = a3 & 8;
  v12 = a3 & 4;
  v35 = v11;
  v32 = 0;
  v33 = 0;
  *a4 = 0LL;
  UnicodeString = 0LL;
  v41 = 0LL;
  if ( a2 )
  {
    v7 = a2;
    v32 = 1;
    goto LABEL_8;
  }
  InformationToken = NtQueryInformationToken(a1, 29LL, &v32);
  if ( InformationToken >= 0 )
  {
    if ( !v32 )
      goto LABEL_8;
    InformationToken = NtQueryInformationToken(a1, 31LL, &v44);
    if ( InformationToken >= 0 )
    {
      v7 = v44;
      if ( !v44 )
      {
        InformationToken = -1073741823;
        goto LABEL_37;
      }
LABEL_8:
      InformationToken = NtQueryInformationToken(a1, 42LL, &v33);
      if ( InformationToken < 0 )
        goto LABEL_37;
      if ( v33 )
      {
        InformationToken = NtQueryInformationToken(a1, 1LL, v43);
        if ( InformationToken < 0 )
          goto LABEL_37;
        InformationToken = RtlConvertSidToUnicodeString(&v41, v43[0], 1u);
        if ( InformationToken < 0 )
          goto LABEL_37;
      }
      InformationToken = NtQueryInformationToken(a1, 12LL, &v38);
      if ( InformationToken < 0 )
        goto LABEL_37;
      v14 = 260LL;
      if ( v32 )
      {
        InformationToken = RtlGetAppContainerSidType(v7, &v37);
        if ( InformationToken < 0 )
          goto LABEL_36;
        if ( v37 == 2 )
        {
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, v7, 1u);
          if ( InformationToken < 0 )
            goto LABEL_36;
        }
        else
        {
          InformationToken = RtlGetAppContainerParent((__int64)v7, (__int64 *)&Sid);
          if ( InformationToken < 0 )
            goto LABEL_36;
          InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
          if ( InformationToken < 0 )
            goto LABEL_36;
          InformationToken = RtlStringCchPrintfW(SourceString);
          if ( InformationToken < 0 )
            goto LABEL_36;
          RtlFreeAnsiString(&UnicodeString);
          RtlInitUnicodeString(&UnicodeString, SourceString);
          v30 = 0;
        }
      }
      InformationToken = NtQueryInformationToken(a1, 44LL, &v46);
      if ( InformationToken >= 0 )
      {
        v15 = v38;
        if ( v33 || v32 || (v28 = v15 == (unsigned int)RtlGetCurrentServiceSessionId(), v16 = 1, !v28) )
          v16 = 0;
        if ( v10 )
        {
          if ( !v12 )
            goto LABEL_21;
          v17 = Buffer;
          do
          {
            if ( v14 == -2147483386 )
              break;
            v26 = *(wchar_t *)((char *)v17 + (char *)L"AppContainerNamedObjects" - (char *)Buffer);
            if ( !v26 )
              break;
            *v17++ = v26;
            --v14;
          }
          while ( v14 );
        }
        else
        {
          v17 = Buffer;
          if ( !v16 )
          {
LABEL_21:
            InformationToken = RtlStringCchPrintfW(Buffer);
LABEL_22:
            if ( InformationToken >= 0 )
            {
              v39 = 0LL;
              InformationToken = RtlStringCbLengthW(Buffer, 520LL, &v39);
              if ( InformationToken >= 0 )
              {
                v19 = v34;
                if ( v33 == v18 || v34 )
                  v20 = v39;
                else
                  v20 = v39 + v41.Length + 2LL;
                if ( v32 != v18 )
                  v20 += UnicodeString.Length + 2LL;
                v21 = v35;
                if ( v47 != (_BYTE)v18 && !v35 )
                {
                  RtlInitUnicodeString(&DestinationString, v46);
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
                  InformationToken = RtlAppendUnicodeToString(&a4->Length, Buffer);
                  if ( InformationToken >= 0 )
                  {
                    if ( !v33
                      || v19
                      || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v40), InformationToken >= 0)
                      && (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, (const void **)&v41),
                          InformationToken >= 0) )
                    {
                      if ( !v32
                        || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v40), InformationToken >= 0)
                        && (InformationToken = RtlAppendUnicodeStringToString(
                                                 &a4->Length,
                                                 (const void **)&UnicodeString),
                            InformationToken >= 0) )
                      {
                        if ( v47 )
                        {
                          if ( !v21 )
                          {
                            InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v40);
                            if ( InformationToken >= 0 )
                              InformationToken = RtlAppendUnicodeStringToString(
                                                   &a4->Length,
                                                   (const void **)&DestinationString);
                          }
                        }
                      }
                    }
                  }
                }
                else
                {
                  InformationToken = -1073741670;
                }
              }
            }
            goto LABEL_36;
          }
          do
          {
            if ( v14 == -2147483386 )
              break;
            v29 = *(wchar_t *)((char *)v17 + (char *)L"\\BaseNamedObjects" - (char *)Buffer);
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
        InformationToken = v14 == 0 ? 0x80000005 : 0;
        *v27 = 0;
        goto LABEL_22;
      }
LABEL_36:
      v8 = Sid;
    }
  }
LABEL_37:
  RtlFreeAnsiString(&v41);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v30 )
    RtlFreeAnsiString(&UnicodeString);
  if ( v8 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (__int64)Sid);
  return (unsigned int)InformationToken;
}
