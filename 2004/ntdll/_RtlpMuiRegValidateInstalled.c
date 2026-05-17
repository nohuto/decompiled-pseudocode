/*
 * XREFs of _RtlpMuiRegValidateInstalled @ 0x1801070A8
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x18010682C (_RtlpMuiRegLoadInstalled.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlpMuiRegGetOrAddString @ 0x18003AB74 (RtlpMuiRegGetOrAddString.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x18003B104 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     _MuiRegAllocArray @ 0x18003B244 (_MuiRegAllocArray.c)
 *     RtlpIsALicensedRegularLanguage @ 0x18003C1F0 (RtlpIsALicensedRegularLanguage.c)
 *     _RtlpMuiRegAddNeutralLanguage @ 0x18006F51C (_RtlpMuiRegAddNeutralLanguage.c)
 *     RtlpGetNameFromLangInfoNode @ 0x18007F760 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     NtIsUILanguageComitted @ 0x18009EE60 (NtIsUILanguageComitted.c)
 *     NtQueryInstallUILanguage @ 0x18009F800 (NtQueryInstallUILanguage.c)
 *     memset @ 0x1800A3EC0 (memset.c)
 *     RtlpMuiRegGetOrAddLangInfo @ 0x180104D2C (RtlpMuiRegGetOrAddLangInfo.c)
 *     _RtlpMuiRegValidateLIPLanguage @ 0x18010747C (_RtlpMuiRegValidateLIPLanguage.c)
 *     _RtlpMuiRegValidatePartialLanguage @ 0x1801076BC (_RtlpMuiRegValidatePartialLanguage.c)
 *     _RtlpRemovePendingDeleteLanguages @ 0x1801077F8 (_RtlpRemovePendingDeleteLanguages.c)
 */

__int64 __fastcall RtlpMuiRegValidateInstalled(__int64 a1)
{
  unsigned __int16 v2; // di
  int v3; // esi
  int v4; // r15d
  __int64 v5; // r12
  int IsUILanguageComitted; // eax
  unsigned __int16 v7; // dx
  bool v8; // r13
  __int64 result; // rax
  int InstalledLanguageIndexByLangId; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  WCHAR *v13; // rax
  __int64 v14; // r8
  int v15; // eax
  unsigned __int16 v16; // cx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // r14d
  __int64 v20; // rcx
  __int64 v21; // rdi
  unsigned int v22; // r8d
  __int64 v23; // r9
  __int16 v24; // cx
  int v25; // r10d
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdi
  __int16 v29; // r11
  unsigned int v30; // r8d
  int v31; // edi
  __int64 v32; // rsi
  __int64 v33; // rcx
  unsigned __int16 v34; // [rsp+28h] [rbp-E0h]
  __int16 v35; // [rsp+2Ch] [rbp-DCh] BYREF
  __int64 v36; // [rsp+30h] [rbp-D8h] BYREF
  WCHAR *v37; // [rsp+38h] [rbp-D0h]
  __int64 v38; // [rsp+40h] [rbp-C8h] BYREF
  WCHAR *v39; // [rsp+48h] [rbp-C0h]
  __int64 v40; // [rsp+50h] [rbp-B8h] BYREF
  wchar_t *v41; // [rsp+58h] [rbp-B0h]
  int v42; // [rsp+60h] [rbp-A8h] BYREF
  unsigned __int16 v43; // [rsp+64h] [rbp-A4h]
  int v44; // [rsp+66h] [rbp-A2h]
  __int64 v45; // [rsp+6Ch] [rbp-9Ch]
  __int64 v46; // [rsp+74h] [rbp-94h]
  _BYTE v47[176]; // [rsp+88h] [rbp-80h] BYREF

  v2 = -1;
  v34 = 0;
  v35 = -1;
  v37 = 0LL;
  v3 = -1;
  v4 = 0;
  v5 = 0LL;
  memset(v47, 0, 0xAAuLL);
  IsUILanguageComitted = NtIsUILanguageComitted();
  v7 = *(_WORD *)(a1 + 4);
  v8 = IsUILanguageComitted == 0;
  if ( v7 )
  {
    v34 = *(_WORD *)(a1 + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage();
    if ( (int)result < 0 )
      return result;
    v7 = 0;
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(a1, v7, 0, &v35);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LOWORD(v36) = -1;
    v13 = (WCHAR *)MuiRegAllocArray(v11, 0x55u);
    v37 = v13;
    v5 = (__int64)v13;
    if ( !v13 )
      return 3221225495LL;
    v39 = v13;
    LODWORD(v38) = 11141120;
    if ( RtlLCIDToCultureName(v34, (__int64)&v38) )
    {
      LOBYTE(v14) = 1;
      v15 = RtlpMuiRegGetOrAddString(a1, v39, v14, (__int16 *)&v36);
      v16 = -1;
      if ( v15 >= 0 )
        v16 = v36;
      v44 = v16;
      v43 = v34;
      v42 = 49;
      v45 = 0LL;
      v46 = 0LL;
      RtlpMuiRegAddNeutralLanguage(a1, (__int64)&v42, v39);
      if ( (int)RtlpMuiRegGetOrAddLangInfo((__int64 *)(a1 + 24), (__int64)&v42, 0LL) >= 0 )
      {
        v12 = *(_QWORD *)(a1 + 24);
        v3 = *(unsigned __int16 *)(v12 + 6) - 1;
        goto LABEL_16;
      }
    }
  }
  else if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = v35;
    v12 = *(_QWORD *)(a1 + 24);
LABEL_16:
    if ( v3 != -1 )
    {
      v17 = *(_QWORD *)(v12 + 16);
      v41 = (wchar_t *)v47;
      WORD1(v40) = 170;
      if ( (int)RtlpGetNameFromLangInfoNode(a1, 28LL * v3 + v17, (__int64)&v40) >= 0 )
      {
        if ( (int)RtlpIsALicensedRegularLanguage((_QWORD *)a1, v41) >= 0 )
        {
          v4 = 1;
        }
        else
        {
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) &= ~0x20u;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 28LL * v3) |= 0x8000u;
        }
      }
    }
  }
  if ( v8 )
    v2 = v3;
  RtlpRemovePendingDeleteLanguages(a1, v2);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v20 = *(_QWORD *)(a1 + 24);
    v21 = 0LL;
    do
    {
      v18 = v20;
      if ( (*(_BYTE *)(v21 + *(_QWORD *)(v20 + 16)) & 0x22) == 0x22 )
      {
        RtlpMuiRegValidatePartialLanguage(a1, (unsigned int)v19);
        v22 = v4 + 1;
        v18 = *(_QWORD *)(a1 + 24);
        v23 = *(_QWORD *)(v18 + 16);
        v24 = *(_WORD *)(v23 + v21);
        if ( (v24 & 0x1000) != 0 )
          v22 = v4;
        v4 = v22;
        if ( v8 && v19 != v3 && v22 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v23 + v21) = v24 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v21) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v19;
      v21 += 28LL;
      v20 = v18;
    }
    while ( v19 < *(unsigned __int16 *)(v18 + 6) );
    v5 = (__int64)v37;
  }
  v25 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v26 = v18;
    v27 = 0LL;
    do
    {
      v28 = *(_QWORD *)(v26 + 16);
      v18 = v26;
      v29 = *(_WORD *)(v28 + v27);
      if ( (v29 & 0x21) == 0x21 )
      {
        v30 = v4 + 1;
        if ( (v29 & 0x1000) != 0 )
          v30 = v4;
        v4 = v30;
        if ( v8 && v25 != v3 && v30 > *(_DWORD *)(a1 + 120) )
        {
          *(_WORD *)(v28 + v27) = v29 & 0xFFDF;
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + v27) |= 0x8000u;
          v18 = *(_QWORD *)(a1 + 24);
        }
      }
      ++v25;
      v27 += 28LL;
      v26 = v18;
    }
    while ( v25 < *(unsigned __int16 *)(v18 + 6) );
    v5 = (__int64)v37;
  }
  v31 = 0;
  if ( *(_WORD *)(v18 + 6) )
  {
    v32 = 0LL;
    do
    {
      v33 = v18;
      if ( (*(_BYTE *)(v32 + *(_QWORD *)(v18 + 16)) & 4) != 0 )
      {
        RtlpMuiRegValidateLIPLanguage(a1, (unsigned int)v31);
        v33 = *(_QWORD *)(a1 + 24);
      }
      ++v31;
      v32 += 28LL;
      v18 = v33;
    }
    while ( v31 < *(unsigned __int16 *)(v33 + 6) );
  }
  if ( v5 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v5);
  return 0LL;
}
