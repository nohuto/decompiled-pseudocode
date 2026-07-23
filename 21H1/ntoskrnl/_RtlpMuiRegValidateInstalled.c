/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x140794530
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x1407941D0 (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     _MuiRegAllocArray @ 0x1403B378C (_MuiRegAllocArray.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1403B3914 (_RtlpRemovePendingDeleteLanguages.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1403B3C50 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     NtQueryInstallUILanguage @ 0x1406DF450 (NtQueryInstallUILanguage.c)
 *     RtlpIsALicensedRegularLanguage @ 0x1407948D4 (RtlpIsALicensedRegularLanguage.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140794C88 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpMuiRegGetOrAddString @ 0x140794E64 (RtlpMuiRegGetOrAddString.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x1407B96C0 (RtlpMuiRegGetOrAddLangInfo.c)
 *     RtlLCIDToCultureName @ 0x1409119B0 (RtlLCIDToCultureName.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x14097DFB4 (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x14097E1F0 (_RtlpMuiRegValidatePartialLanguage.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  __int16 v2; // di
  int v3; // esi
  int v4; // r15d
  wchar_t *v5; // r12
  LANGID v6; // r14
  unsigned int v7; // r13d
  NTSTATUS result; // eax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v14; // r14d
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r10d
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // rdi
  __int16 v21; // r11
  unsigned int v22; // r8d
  int v23; // edi
  __int64 v24; // rsi
  __int64 v25; // r8
  wchar_t *v26; // rax
  __int64 v27; // r8
  bool v28; // sf
  LANGID v29; // ax
  unsigned int v30; // r8d
  __int64 v31; // r9
  __int16 v32; // cx
  LANGID InstallUILanguageId[4]; // [rsp+28h] [rbp-E0h] BYREF
  wchar_t *v34; // [rsp+30h] [rbp-D8h]
  UNICODE_STRING String; // [rsp+38h] [rbp-D0h] BYREF
  UNICODE_STRING v36; // [rsp+48h] [rbp-C0h] BYREF
  int v37; // [rsp+58h] [rbp-B0h] BYREF
  LANGID v38; // [rsp+5Ch] [rbp-ACh]
  int v39; // [rsp+5Eh] [rbp-AAh]
  __int16 v40; // [rsp+62h] [rbp-A6h]
  __int128 v41; // [rsp+64h] [rbp-A4h]
  _BYTE v42[176]; // [rsp+78h] [rbp-90h] BYREF

  InstallUILanguageId[0] = 0;
  v2 = -1;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  InstallUILanguageId[2] = -1;
  v34 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  v41 = 0LL;
  v36 = 0LL;
  memset(v42, 0, 0xAAuLL);
  v6 = *(_WORD *)(a1 + 4);
  v7 = PsUILanguageComitted == 0 ? 0xC0000034 : 0;
  if ( !v6 )
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
    v6 = InstallUILanguageId[0];
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v6, 0LL, &InstallUILanguageId[2]);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    InstallUILanguageId[0] = -1;
    v26 = (wchar_t *)MuiRegAllocArray(v10, 0x55u);
    v34 = v26;
    v5 = v26;
    if ( !v26 )
      return -1073741801;
    String.Buffer = v26;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(v6, &String) )
      goto LABEL_12;
    LOBYTE(v27) = 1;
    v28 = (int)RtlpMuiRegGetOrAddString(a1, String.Buffer, v27, InstallUILanguageId) < 0;
    v29 = -1;
    if ( !v28 )
      v29 = InstallUILanguageId[0];
    v39 = v29;
    v37 = 49;
    v38 = v6;
    v41 = 0uLL;
    v40 = 0;
    if ( (int)RtlpMuiRegGetOrAddLangInfo(a1 + 24, &v37, 0LL) < 0 )
      goto LABEL_12;
    v11 = *(_QWORD *)(a1 + 24);
    v3 = *(unsigned __int16 *)(v11 + 6) - 1;
    goto LABEL_8;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = (__int16)InstallUILanguageId[2];
    v11 = *(_QWORD *)(a1 + 24);
LABEL_8:
    if ( v3 != -1 )
    {
      v12 = *(_QWORD *)(v11 + 16);
      v36.Buffer = (wchar_t *)v42;
      v36.MaximumLength = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v12, &v36) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage(a1, v36.Buffer) < 0 )
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
        else
        {
          v4 = 1;
        }
      }
    }
  }
LABEL_12:
  if ( !v7 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v13 = *(_QWORD *)(a1 + 24);
  v14 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v15 = *(_QWORD *)(a1 + 24);
    v16 = 0LL;
    do
    {
      v13 = v15;
      if ( (*(_BYTE *)(v16 + *(_QWORD *)(v15 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v14);
        v30 = v4 + 1;
        v13 = *(_QWORD *)(a1 + 24);
        v31 = *(_QWORD *)(v13 + 16);
        v32 = *(_WORD *)(v31 + v16);
        if ( (v32 & 0x1000) != 0 )
          v30 = v4;
        v4 = v30;
        if ( !v7 && v14 != v3 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v31 + v16) = v32 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v16) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v14;
      v16 += 28LL;
      v15 = v13;
    }
    while ( v14 < *(unsigned __int16 *)(v13 + 6) );
    v5 = v34;
  }
  v17 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v18 = v13;
    v19 = 0LL;
    do
    {
      v20 = *(_QWORD *)(v18 + 16);
      v13 = v18;
      v21 = *(_WORD *)(v20 + v19);
      if ( (v21 & 0x21) == 0x21 )
      {
        v22 = v4 + 1;
        if ( (v21 & 0x1000) != 0 )
          v22 = v4;
        v4 = v22;
        if ( !v7 && v17 != v3 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v20 + v19) = v21 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v19) |= 0x8000u;
          v13 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v17;
      v19 += 28LL;
      v18 = v13;
    }
    while ( v17 < *(unsigned __int16 *)(v13 + 6) );
    v5 = v34;
  }
  v23 = 0;
  if ( *(_WORD *)(v13 + 6) )
  {
    v24 = 0LL;
    do
    {
      v25 = v13;
      if ( (*(_BYTE *)(v24 + *(_QWORD *)(v13 + 16)) & 4) != 0 )
      {
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v23, v13);
        v25 = *(_QWORD *)(a1 + 24);
      }
      ++v23;
      v24 += 28LL;
      v13 = v25;
    }
    while ( v23 < *(unsigned __int16 *)(v25 + 6) );
  }
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return 0;
}
