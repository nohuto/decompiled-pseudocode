/*
 * XREFs of CmSelectQualifiedInstallLanguage @ 0x140A607C0
 * Callers:
 *     CmpGetSystemControlValues @ 0x140A60C0C (CmpGetSystemControlValues.c)
 * Callees:
 *     DownLevelLangIDToLanguageName @ 0x140227AFC (DownLevelLangIDToLanguageName.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     DownLevelLanguageNameToLangID @ 0x1403A8368 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1403D2240 (_wcsicmp.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     __report_rangecheckfailure @ 0x1404B66AC (__report_rangecheckfailure.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpCopyCompressedName @ 0x14065ED94 (CmpCopyCompressedName.c)
 *     CmpFindSubKeyByNumber @ 0x1406E2C40 (CmpFindSubKeyByNumber.c)
 *     CmpWalkPath @ 0x1407AC8F0 (CmpWalkPath.c)
 *     CmpValueToData @ 0x1407AD0F4 (CmpValueToData.c)
 */

__int64 __fastcall CmSelectQualifiedInstallLanguage(__int64 a1, unsigned int a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r15d
  char v8; // r14
  char v9; // r12
  unsigned int v10; // ebx
  unsigned int v11; // eax
  __int64 v12; // rdi
  unsigned int ValueByName; // edi
  unsigned int v14; // eax
  _DWORD *v15; // rax
  bool v16; // si
  __int64 v18; // r14
  unsigned int v19; // r15d
  ULONG_PTR v20; // rax
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // esi
  unsigned __int64 v24; // rax
  int v25; // esi
  ULONG_PTR v26; // rax
  PVOID v27; // rax
  char v28; // [rsp+30h] [rbp-D0h]
  char v29; // [rsp+31h] [rbp-CFh]
  unsigned int v30; // [rsp+34h] [rbp-CCh]
  _DWORD *v31; // [rsp+38h] [rbp-C8h]
  size_t Size; // [rsp+40h] [rbp-C0h] BYREF
  int v33; // [rsp+48h] [rbp-B8h]
  _DWORD v34[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v35; // [rsp+58h] [rbp-A8h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  _DWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v39; // [rsp+78h] [rbp-88h] BYREF
  _DWORD v40[2]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD *v41; // [rsp+88h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  wchar_t Str2[88]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v44[176]; // [rsp+150h] [rbp+50h] BYREF
  wchar_t Str1[88]; // [rsp+200h] [rbp+100h] BYREF

  v4 = 0;
  v35 = 0;
  v36[1] = 0;
  v38[1] = 0;
  v36[0] = -1;
  v38[0] = -1;
  v40[0] = -1;
  v34[0] = -1;
  v39 = 0xFFFFFFFFLL;
  v37 = 0xFFFFFFFFLL;
  v8 = 0;
  v41 = a3;
  DestinationString = 0LL;
  v40[1] = 0;
  v9 = 0;
  v34[1] = 0;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  Size = 0LL;
  memset(v44, 0, 0xAAuLL);
  memset(Str2, 0, 0xAAuLL);
  memset(Str1, 0, 0xAAuLL);
  if ( a3 )
  {
    *a3 = 0;
    if ( a4 )
    {
      v10 = 70;
      if ( !(unsigned int)DownLevelLangIDToLanguageName(a4, Str1, 85, 0) )
        a4 = 0;
    }
    else
    {
      v10 = 38;
    }
    v11 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\Settings");
    if ( v11 != -1 )
    {
      v12 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v11, v38);
      if ( v12 )
      {
        RtlInitUnicodeString(&DestinationString, L"PreferredUILanguages");
        ValueByName = CmpFindValueByName((__int64)&CmControlHive, v12, (__int64)&DestinationString);
        if ( ValueByName != -1 )
        {
          v26 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(
                  &CmControlHive,
                  ValueByName,
                  v36);
          if ( v26 )
          {
            if ( *(_DWORD *)(v26 + 12) == 7 )
            {
              v27 = CmpValueToData((ULONG_PTR)&CmControlHive, ValueByName, v26, (unsigned int *)&Size, (__int64)&v37);
              if ( v27 )
              {
                if ( (unsigned int)Size < 0xA8 )
                {
                  memmove(v44, v27, (unsigned int)Size);
                  PsMachineUILanguageId = DownLevelLanguageNameToLangID(v44, 0);
                }
                ((void (__fastcall *)(ULONG_PTR *, __int64 *))qword_140D5C770)(&CmControlHive, &v37);
              }
            }
            ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v36);
          }
        }
        ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v38);
      }
    }
    v14 = CmpWalkPath((__int64)&CmControlHive, a2, L"MUI\\UILanguages");
    if ( v14 == -1 )
      return v10;
    v15 = (_DWORD *)((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v14, v40);
    v31 = v15;
    if ( !v15 )
      return v10;
    v10 &= ~2u;
LABEL_12:
    v16 = 0;
    while ( 1 )
    {
      CmpFindSubKeyByNumber((__int64)&CmControlHive, v15, v4++, &v35);
      v30 = v4;
      if ( v35 == -1 )
        break;
      v18 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v35, v34);
      v15 = v31;
      if ( v18 )
      {
        RtlInitUnicodeString(&DestinationString, L"Type");
        v19 = CmpFindValueByName((__int64)&CmControlHive, v18, (__int64)&DestinationString);
        if ( v19 == -1 )
          goto LABEL_58;
        v20 = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v19, v36);
        if ( !v20 )
          goto LABEL_58;
        if ( *(_DWORD *)(v20 + 12) == 4 )
        {
          v21 = *(_DWORD *)CmpValueToData((ULONG_PTR)&CmControlHive, v19, v20, (unsigned int *)&Size, (__int64)&v39);
          HIDWORD(Size) = v21;
          if ( (v21 & 3) != 0 )
            v16 = (v21 & 0x10) != 0;
          ((void (__fastcall *)(ULONG_PTR *, __int64 *))qword_140D5C770)(&CmControlHive, &v39);
        }
        ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v36);
        if ( !v16 )
          goto LABEL_58;
        v22 = *(unsigned __int16 *)(v18 + 72);
        if ( (*(_BYTE *)(v18 + 2) & 0x20) != 0 )
        {
          v23 = (unsigned __int16)(2 * v22);
          if ( v23 <= 0xA8 )
          {
            CmpCopyCompressedName(Str2, v23, (unsigned __int8 *)(v18 + 76), v22);
            goto LABEL_31;
          }
LABEL_58:
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v34);
          v15 = v31;
          v4 = v30;
          v8 = v28;
        }
        else
        {
          v23 = *(unsigned __int16 *)(v18 + 72);
          if ( v22 > 0xA8 )
            goto LABEL_58;
          memmove(Str2, (const void *)(v18 + 76), *(unsigned __int16 *)(v18 + 72));
LABEL_31:
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v34);
          v24 = v23 & 0xFFFFFFFE;
          if ( v24 >= 0xAA )
            _report_rangecheckfailure();
          *(wchar_t *)((char *)Str2 + v24) = 0;
          v4 = v30;
          v8 = v28;
          v25 = (unsigned __int16)DownLevelLanguageNameToLangID(Str2, 0);
          v15 = v31;
          if ( v25 && v25 != 127 )
          {
            if ( a4 && !v29 && !wcsicmp(Str1, Str2) )
            {
              v29 = 1;
              v10 &= ~0x40u;
            }
            v4 = v30;
            v15 = v31;
            if ( !v28 )
            {
              if ( v9 )
                goto LABEL_12;
              v33 = v25;
              if ( (Size & 0x200000000LL) == 0 )
              {
                v8 = 1;
                v28 = 1;
                goto LABEL_12;
              }
              goto LABEL_42;
            }
            if ( !v9 && (Size & 0x200000000LL) != 0 )
            {
              v33 = v25;
LABEL_42:
              v9 = 1;
              goto LABEL_12;
            }
          }
        }
        goto LABEL_12;
      }
      v8 = v28;
    }
    ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v40);
    if ( v8 || v9 )
      v10 &= ~4u;
    if ( v29 )
    {
      *v41 = a4;
    }
    else
    {
      if ( !v9 && !v8 )
        return v10;
      *v41 = v33;
    }
    return 0;
  }
  return 1LL;
}
