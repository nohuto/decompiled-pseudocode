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

int __fastcall RtlpGetTokenNamedObjectPath(int a1, _DWORD *a2, char a3, PUNICODE_STRING a4)
{
  _DWORD *v4; // ebx
  int v6; // ecx
  int InformationToken; // esi
  int v8; // esi
  bool v9; // al
  const wchar_t *v10; // eax
  int v11; // eax
  int *v12; // eax
  int v13; // esi
  size_t v14; // esi
  wchar_t *StringRoutine; // eax
  wchar_t *v16; // ebx
  char v18; // [esp+Fh] [ebp-611h]
  int v19; // [esp+10h] [ebp-610h] BYREF
  int v20; // [esp+14h] [ebp-60Ch] BYREF
  int v21; // [esp+18h] [ebp-608h]
  char v22[4]; // [esp+1Ch] [ebp-604h] BYREF
  int v23; // [esp+20h] [ebp-600h] BYREF
  int v24; // [esp+24h] [ebp-5FCh]
  int v25; // [esp+28h] [ebp-5F8h]
  UNICODE_STRING DestinationString; // [esp+2Ch] [ebp-5F4h] BYREF
  char Args[4]; // [esp+34h] [ebp-5ECh] BYREF
  PSID v28; // [esp+38h] [ebp-5E8h] BYREF
  const void *v29[2]; // [esp+3Ch] [ebp-5E4h] BYREF
  UNICODE_STRING UnicodeString; // [esp+44h] [ebp-5DCh] BYREF
  int v31; // [esp+4Ch] [ebp-5D4h] BYREF
  UNICODE_STRING v32; // [esp+50h] [ebp-5D0h] BYREF
  PSID Sid[20]; // [esp+58h] [ebp-5C8h] BYREF
  _DWORD *v34; // [esp+A8h] [ebp-578h] BYREF
  PCWSTR v35; // [esp+F0h] [ebp-530h] BYREF
  char v36; // [esp+F4h] [ebp-52Ch]
  wchar_t Src[260]; // [esp+208h] [ebp-418h] BYREF
  WCHAR SourceString[262]; // [esp+410h] [ebp-210h] BYREF
  int v39; // [esp+628h] [ebp+8h]

  v4 = 0;
  v21 = a1;
  v28 = 0;
  memset(Src, 0, sizeof(Src));
  memset(SourceString, 0, 0x208u);
  v29[1] = L"\\";
  v29[0] = (const void *)262146;
  if ( !a4 )
    return -1073741811;
  v6 = v21;
  if ( !v21 )
    return -1073741811;
  v20 = a3 & 1;
  v24 = a3 & 2;
  v25 = a3 & 8;
  v39 = a3 & 4;
  *(_DWORD *)&a4->Length = 0;
  a4->Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0;
  v19 = 0;
  v18 = 1;
  v23 = 0;
  if ( a2 )
  {
    v4 = a2;
    v19 = 1;
  }
  else
  {
    InformationToken = ZwQueryInformationToken(v6, 29, (int)&v19, 4, (int)v22);
    if ( InformationToken < 0 )
      goto LABEL_65;
    if ( v19 )
    {
      InformationToken = ZwQueryInformationToken(v21, 31, (int)&v34, 72, (int)v22);
      if ( InformationToken < 0 )
        goto LABEL_65;
      v4 = v34;
      if ( !v34 )
      {
        InformationToken = -1073741823;
        goto LABEL_65;
      }
    }
  }
  InformationToken = ZwQueryInformationToken(v21, 42, (int)&v23, 4, (int)v22);
  if ( InformationToken >= 0 )
  {
    if ( !v23
      || (InformationToken = ZwQueryInformationToken(v21, 1, (int)Sid, 76, (int)v22), InformationToken >= 0)
      && (InformationToken = RtlConvertSidToUnicodeString(&UnicodeString, Sid[0], 1u), InformationToken >= 0) )
    {
      InformationToken = ZwQueryInformationToken(v21, 12, (int)Args, 4, (int)v22);
      if ( InformationToken >= 0 )
      {
        if ( !v19 )
          goto LABEL_14;
        InformationToken = RtlGetAppContainerSidType((int)v4, &v31);
        if ( InformationToken >= 0 )
        {
          if ( v31 == 2 )
          {
            InformationToken = RtlConvertSidToUnicodeString(&DestinationString, v4, 1u);
            if ( InformationToken >= 0 )
              goto LABEL_14;
          }
          else
          {
            InformationToken = RtlGetAppContainerParent((int)v4, (int *)&v28);
            if ( InformationToken >= 0 )
            {
              InformationToken = RtlConvertSidToUnicodeString(&DestinationString, v28, 1u);
              if ( InformationToken >= 0 )
              {
                InformationToken = RtlStringCchPrintfW(
                                     SourceString,
                                     260,
                                     (wchar_t *)L"%s\\%u-%u-%u-%u",
                                     DestinationString.Buffer,
                                     v4[10],
                                     v4[11],
                                     v4[12],
                                     v4[13]);
                if ( InformationToken >= 0 )
                {
                  RtlFreeAnsiString(&DestinationString);
                  RtlInitUnicodeString(&DestinationString, SourceString);
                  v18 = 0;
LABEL_14:
                  InformationToken = ZwQueryInformationToken(v21, 44, (int)&v35, 280, (int)v22);
                  if ( InformationToken >= 0 )
                  {
                    v8 = v19;
                    v9 = !v23 && !v19 && *(void **)Args == RtlGetCurrentServiceSessionId();
                    if ( (_BYTE)v20 )
                    {
                      if ( v39 )
                      {
                        v11 = RtlStringCchCopyW(Src, 260, (int)L"AppContainerNamedObjects");
                      }
                      else
                      {
                        v12 = (int *)L"\\AppContainerNamedObjects";
                        if ( !v8 )
                          v12 = &dword_4B285DEC;
                        v11 = RtlStringCchPrintfW(Src, 260, (wchar_t *)L"Global\\Session\\%ld%s", *(_DWORD *)Args, v12);
                      }
                    }
                    else if ( v9 )
                    {
                      v11 = RtlStringCchCopyW(Src, 260, (int)L"\\BaseNamedObjects");
                    }
                    else
                    {
                      v10 = L"AppContainerNamedObjects";
                      if ( !v8 )
                        v10 = L"BaseNamedObjects";
                      v11 = RtlStringCchPrintfW(
                              Src,
                              260,
                              (wchar_t *)L"%s\\%ld\\%s",
                              L"\\Sessions",
                              *(_DWORD *)Args,
                              v10);
                    }
                    InformationToken = v11;
                    if ( v11 >= 0 )
                    {
                      v20 = 0;
                      InformationToken = RtlStringCbLengthW(Src, &v20);
                      if ( InformationToken >= 0 )
                      {
                        if ( !v23 || v24 )
                          v13 = v20;
                        else
                          v13 = v20 + UnicodeString.Length + 2;
                        if ( v19 )
                          v13 += DestinationString.Length + 2;
                        if ( v36 && !v25 )
                        {
                          RtlInitUnicodeString(&v32, v35);
                          v13 += v32.Length + 2;
                        }
                        v14 = v13 + 2;
                        StringRoutine = (wchar_t *)NtdllpAllocateStringRoutine(v14);
                        v16 = StringRoutine;
                        if ( StringRoutine )
                        {
                          memset(StringRoutine, 0, v14);
                          *(_DWORD *)&a4->Length = 0;
                          a4->MaximumLength = v14;
                          a4->Buffer = v16;
                          InformationToken = RtlAppendUnicodeToString(&a4->Length, Src);
                          if ( InformationToken >= 0 )
                          {
                            if ( !v23
                              || v24
                              || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v29),
                                  InformationToken >= 0)
                              && (InformationToken = RtlAppendUnicodeStringToString(
                                                       &a4->Length,
                                                       (const void **)&UnicodeString),
                                  InformationToken >= 0) )
                            {
                              if ( !v19
                                || (InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v29),
                                    InformationToken >= 0)
                                && (InformationToken = RtlAppendUnicodeStringToString(
                                                         &a4->Length,
                                                         (const void **)&DestinationString),
                                    InformationToken >= 0) )
                              {
                                if ( v36 )
                                {
                                  if ( !v25 )
                                  {
                                    InformationToken = RtlAppendUnicodeStringToString(&a4->Length, v29);
                                    if ( InformationToken >= 0 )
                                      InformationToken = RtlAppendUnicodeStringToString(
                                                           &a4->Length,
                                                           (const void **)&v32);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_65:
  RtlFreeAnsiString(&UnicodeString);
  if ( InformationToken < 0 )
    RtlFreeAnsiString(a4);
  if ( v18 )
    RtlFreeAnsiString(&DestinationString);
  if ( v28 )
    RtlFreeHeap((int)NtCurrentPeb()->ProcessHeap, 0, (int)v28);
  return InformationToken;
}
