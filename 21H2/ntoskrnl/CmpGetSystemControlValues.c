/*
 * XREFs of CmpGetSystemControlValues @ 0x140A60C0C
 * Callers:
 *     CmInitSystem0 @ 0x140A60694 (CmInitSystem0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     memset @ 0x140414300 (memset.c)
 *     CmpFindValueByName @ 0x14065E45C (CmpFindValueByName.c)
 *     CmpInitSecurityCache @ 0x1406F8190 (CmpInitSecurityCache.c)
 *     HvHiveInitialize @ 0x1406F81CC (HvHiveInitialize.c)
 *     HvHiveStartMemoryBacked @ 0x14076FFD4 (HvHiveStartMemoryBacked.c)
 *     CmpWalkPath @ 0x1407AC8F0 (CmpWalkPath.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 *     CmpFindControlSet @ 0x1407ACD40 (CmpFindControlSet.c)
 *     CmSelectQualifiedInstallLanguage @ 0x140A607C0 (CmSelectQualifiedInstallLanguage.c)
 *     CmpGetBootValueData @ 0x140A60FE0 (CmpGetBootValueData.c)
 *     CmpConvertLangId @ 0x140A611F0 (CmpConvertLangId.c)
 */

__int64 __fastcall CmpGetSystemControlValues(_DWORD *a1, __int64 a2, char a3)
{
  wchar_t **v3; // rbx
  int started; // eax
  unsigned int v7; // edi
  unsigned int ControlSet; // eax
  __int64 result; // rax
  ULONG_PTR v10; // rdi
  unsigned int SubKeyByName; // r14d
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // eax
  __int64 v15; // r15
  unsigned int ValueByName; // r15d
  unsigned int *v17; // rax
  unsigned int v18; // eax
  unsigned int *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rcx
  unsigned int v22; // edx
  wchar_t *v23; // rcx
  __int64 v24; // rdi
  int v25; // [rsp+78h] [rbp-90h] BYREF
  _DWORD v26[2]; // [rsp+80h] [rbp-88h] BYREF
  int v27; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  _DWORD v29[2]; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v30[54]; // [rsp+A8h] [rbp-60h] BYREF

  v3 = CmControlVector;
  v29[1] = 0;
  LOWORD(v25) = 0;
  v27 = 0;
  v26[1] = 0;
  v29[0] = -1;
  v26[0] = -1;
  DestinationString = 0LL;
  memset(&v30[1], 0, 0x1A8uLL);
  memset(&CmControlHive, 0, 0x12E8uLL);
  CmpInitSecurityCache((__int64)&CmControlHive);
  HvHiveInitialize(&CmControlHive);
  v30[0] = &CmControlHive;
  qword_140D5C798 = (__int64)v30;
  started = HvHiveStartMemoryBacked(
              (ULONG_PTR)&CmControlHive,
              4LL,
              1,
              0LL,
              a1,
              0LL,
              1,
              0LL,
              0LL,
              0LL,
              &v25,
              0LL,
              (__int64)v30);
  if ( started < 0 )
    KeBugCheckEx(0x74u, 1uLL, 1uLL, (ULONG_PTR)&CmControlHive, started);
  qword_140D5C798 = 0LL;
  v7 = a1[9];
  if ( a3 == 1 )
  {
    result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v7, v26);
    v24 = result;
    if ( !result )
      return result;
    RtlInitUnicodeString(&DestinationString, L"ControlSetOverride");
    result = CmpFindSubKeyByName((__int64)&CmControlHive, v24, (__int64)&DestinationString);
    SubKeyByName = result;
    if ( (_DWORD)result == -1 )
      return result;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, L"current");
    ControlSet = CmpFindControlSet((ULONG_PTR)&CmControlHive, v7, (__int64)&DestinationString, (_BYTE *)&v25 + 1);
    if ( ControlSet == -1 )
      KeBugCheckEx(0x74u, 1uLL, 2uLL, (ULONG_PTR)&CmControlHive, (ULONG_PTR)&DestinationString);
    result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, ControlSet, v26);
    v10 = result;
    if ( !result )
      return result;
    RtlInitUnicodeString(&DestinationString, L"control");
    SubKeyByName = CmpFindSubKeyByName((__int64)&CmControlHive, v10, (__int64)&DestinationString);
    if ( SubKeyByName == -1 )
      KeBugCheckEx(0x74u, 1uLL, 3uLL, v10, (ULONG_PTR)&DestinationString);
  }
  ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v26);
  if ( CmControlVector[0] )
  {
    do
    {
      if ( a3 != 1 || *((_BYTE *)v3 + 40) )
      {
        v13 = -1;
        v14 = CmpWalkPath((__int64)&CmControlHive, SubKeyByName, *v3);
        if ( v14 != -1 )
        {
          result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(&CmControlHive, v14, v26);
          v15 = result;
          if ( !result )
            return result;
          RtlInitUnicodeString(&DestinationString, v3[1]);
          ValueByName = CmpFindValueByName((__int64)&CmControlHive, v15, (__int64)&DestinationString);
          ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v26);
          if ( ValueByName != -1 )
          {
            v19 = (unsigned int *)v3[3];
            v13 = 4;
            if ( v19 )
              v13 = *v19;
            result = ((__int64 (__fastcall *)(ULONG_PTR *, _QWORD, _DWORD *))qword_140D5C768)(
                       &CmControlHive,
                       ValueByName,
                       v29);
            v20 = result;
            if ( !result )
              return result;
            v21 = *(unsigned int *)(result + 4);
            LOBYTE(v25) = (unsigned int)v21 >= 0x80000000;
            v22 = v21 + 0x80000000;
            if ( (unsigned int)v21 < 0x80000000 )
              v22 = v21;
            if ( v13 >= v22 )
              v13 = v22;
            if ( v13 && !(unsigned __int8)CmpGetBootValueData(v21, result, v3[2], v13) )
              return ((__int64 (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v29);
            v23 = v3[4];
            if ( v23 )
              *(_DWORD *)v23 = *(_DWORD *)(v20 + 12);
            ((void (__fastcall *)(ULONG_PTR *, _DWORD *))qword_140D5C770)(&CmControlHive, v29);
          }
        }
        v17 = (unsigned int *)v3[3];
        if ( v17 )
          *v17 = v13;
      }
      v3 += 6;
    }
    while ( *v3 );
  }
  if ( CmDefaultLanguageIdType == 1 )
  {
    PsDefaultSystemLocaleId = (unsigned __int16)CmpConvertLangId(
                                                  CmDefaultLanguageId,
                                                  (unsigned int)CmDefaultLanguageIdLength);
  }
  else if ( !a3 )
  {
    PsDefaultSystemLocaleId = 1033;
  }
  if ( CmInstallUILanguageIdType == 1 )
    PsInstallUILanguageId = CmpConvertLangId(CmInstallUILanguageId, (unsigned int)CmInstallUILanguageIdLength);
  if ( !a3 )
  {
    v18 = CmSelectQualifiedInstallLanguage(v12, SubKeyByName, &v27, (unsigned __int16)PsInstallUILanguageId);
    if ( v18 )
    {
      if ( !psMUITest )
        KeBugCheckEx(0x12Au, 1uLL, v18, 0LL, 0LL);
      PsInstallUILanguageId = PsDefaultSystemLocaleId;
    }
    else if ( (unsigned __int16)PsInstallUILanguageId != v27 )
    {
      PsInstallUILanguageId = v27;
      CmInstallUILanguageFallbackToOOBm = 1;
    }
  }
  result = (unsigned int)PsDefaultSystemLocaleId;
  PsDefaultThreadLocaleId = PsDefaultSystemLocaleId;
  if ( !PsMachineUILanguageId || a3 == 1 )
  {
    result = (unsigned __int16)PsInstallUILanguageId;
    PsMachineUILanguageId = PsInstallUILanguageId;
  }
  return result;
}
