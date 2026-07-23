/*
 * XREFs of __RtlpMuiRegValidateInstalled@4 @ 0x4B2AC387
 * Callers:
 *     __RtlpMuiRegLoadInstalled@16 @ 0x4B2AC2C1 (__RtlpMuiRegLoadInstalled@16.c)
 * Callees:
 *     __RtlpRemovePendingDeleteLanguages@8 @ 0x4B2AC58A (__RtlpRemovePendingDeleteLanguages@8.c)
 *     _RtlpGetNameFromLangInfoNode@12 @ 0x4B2AC660 (_RtlpGetNameFromLangInfoNode@12.c)
 *     __RtlpMuiRegAddNeutralLanguage@12 @ 0x4B2ACADE (__RtlpMuiRegAddNeutralLanguage@12.c)
 *     _MuiRegAllocArray @ 0x4B2AD7D8 (_MuiRegAllocArray.c)
 *     _RtlpMuiRegGetOrAddString@16 @ 0x4B2AD813 (_RtlpMuiRegGetOrAddString@16.c)
 *     _RtlFreeHeap@12 @ 0x4B2C3B70 (_RtlFreeHeap@12.c)
 *     _RtlpIsALicensedRegularLanguage@8 @ 0x4B2D437C (_RtlpIsALicensedRegularLanguage@8.c)
 *     _RtlLCIDToCultureName@8 @ 0x4B2D4F10 (_RtlLCIDToCultureName@8.c)
 *     _RtlpMuiRegGetInstalledLanguageIndexByLangId@16 @ 0x4B2D4FD4 (_RtlpMuiRegGetInstalledLanguageIndexByLangId@16.c)
 *     _RtlpMuiRegGetOrAddLangInfo@12 @ 0x4B2EA745 (_RtlpMuiRegGetOrAddLangInfo@12.c)
 *     _ZwIsUILanguageComitted@0 @ 0x4B2F39B0 (_ZwIsUILanguageComitted@0.c)
 *     _NtQueryInstallUILanguage@4 @ 0x4B2F3E80 (_NtQueryInstallUILanguage@4.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     __RtlpMuiRegValidateLIPLanguage@8 @ 0x4B36CDB5 (__RtlpMuiRegValidateLIPLanguage@8.c)
 *     __RtlpMuiRegValidatePartialLanguage@8 @ 0x4B36CFBA (__RtlpMuiRegValidatePartialLanguage@8.c)
 */

NTSTATUS __thiscall _RtlpMuiRegValidateInstalled(int this)
{
  int v2; // edi
  int v3; // ebx
  NTSTATUS v4; // eax
  int InstalledLanguageIndexByLangId; // eax
  int v6; // eax
  int v7; // ebx
  int v8; // ecx
  int v9; // ebx
  int v10; // edx
  int v11; // edi
  int v12; // ebx
  int v13; // edx
  int v14; // edi
  int v15; // edi
  int v16; // ebx
  int v17; // edx
  NTSTATUS result; // eax
  void *v19; // ecx
  int v20; // eax
  LANGID v21; // cx
  int v22; // eax
  __int16 v23; // dx
  size_t v24; // [esp-4h] [ebp-114h]
  _UNICODE_STRING v25; // [esp+10h] [ebp-100h] BYREF
  _UNICODE_STRING String; // [esp+18h] [ebp-F8h] BYREF
  PVOID BaseAddress; // [esp+20h] [ebp-F0h]
  NTSTATUS v28; // [esp+24h] [ebp-ECh]
  int v29; // [esp+28h] [ebp-E8h] BYREF
  int v30; // [esp+2Ch] [ebp-E4h] BYREF
  unsigned int v31; // [esp+30h] [ebp-E0h]
  int v32; // [esp+34h] [ebp-DCh]
  LANGID InstallUILanguageId[8]; // [esp+38h] [ebp-D8h] BYREF
  int v34; // [esp+48h] [ebp-C8h]
  int v35; // [esp+4Ch] [ebp-C4h]
  int v36; // [esp+50h] [ebp-C0h]
  int v37; // [esp+54h] [ebp-BCh]
  _BYTE v38[180]; // [esp+58h] [ebp-B8h] BYREF

  InstallUILanguageId[0] = 0;
  LODWORD(v24) = 170;
  v2 = -1;
  v31 = 0;
  BaseAddress = 0;
  LOWORD(v3) = -1;
  v32 = -1;
  LOWORD(v29) = -1;
  memset(v38, 0, v24);
  v4 = -ZwIsUILanguageComitted();
  LOBYTE(v4) = v4 == 0;
  v28 = v4;
  if ( *(_WORD *)(this + 4) )
  {
    InstallUILanguageId[0] = *(_WORD *)(this + 4);
  }
  else
  {
    result = NtQueryInstallUILanguage(InstallUILanguageId);
    if ( result < 0 )
      return result;
  }
  InstalledLanguageIndexByLangId = RtlpMuiRegGetInstalledLanguageIndexByLangId(0, &v29);
  if ( InstalledLanguageIndexByLangId == -1073741772 || InstalledLanguageIndexByLangId == -1073741637 )
  {
    LOWORD(v30) = -1;
    v19 = (void *)MuiRegAllocArray();
    BaseAddress = v19;
    if ( !v19 )
      return -1073741801;
    String.Buffer = (wchar_t *)v19;
    *(_DWORD *)&String.Length = 11141120;
    if ( !RtlLCIDToCultureName(InstallUILanguageId[0], &String) )
      goto LABEL_12;
    v20 = RtlpMuiRegGetOrAddString(1, &v30);
    v21 = -1;
    if ( v20 >= 0 )
      v21 = v30;
    InstallUILanguageId[2] = 49;
    InstallUILanguageId[5] = v21;
    InstallUILanguageId[3] = 0;
    InstallUILanguageId[4] = InstallUILanguageId[0];
    InstallUILanguageId[6] = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    v37 = 0;
    _RtlpMuiRegAddNeutralLanguage((PCWSTR)String.Buffer);
    if ( (int)RtlpMuiRegGetOrAddLangInfo(0) < 0 )
      goto LABEL_12;
    v6 = *(_DWORD *)(this + 20);
    v3 = *(unsigned __int16 *)(v6 + 6) - 1;
    goto LABEL_7;
  }
  if ( InstalledLanguageIndexByLangId >= 0 )
  {
    v3 = (__int16)v29;
    v6 = *(_DWORD *)(this + 20);
LABEL_7:
    v32 = v3;
    if ( v3 != -1 )
    {
      v7 = 28 * v3;
      v25.Buffer = (wchar_t *)v38;
      v25.MaximumLength = 170;
      if ( RtlpGetNameFromLangInfoNode(this, v7 + *(_DWORD *)(v6 + 12), &v25) >= 0 )
      {
        if ( RtlpIsALicensedRegularLanguage(this, v25.Buffer) < 0 )
        {
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 20) + 12) + v7) &= ~0x20u;
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 20) + 12) + v7) |= 0x8000u;
        }
        else
        {
          v31 = 1;
        }
      }
      LOWORD(v3) = v32;
    }
  }
LABEL_12:
  if ( (_BYTE)v28 )
    v2 = (unsigned __int16)v3;
  _RtlpRemovePendingDeleteLanguages(this, v2);
  v8 = *(_DWORD *)(this + 20);
  v9 = 0;
  if ( *(_WORD *)(v8 + 6) )
  {
    v10 = *(_DWORD *)(this + 20);
    v11 = 0;
    do
    {
      v8 = v10;
      if ( (*(_BYTE *)(v11 + *(_DWORD *)(v10 + 12)) & 0x22) == 0x22 )
      {
        _RtlpMuiRegValidatePartialLanguage(this, v9);
        v22 = *(_DWORD *)(this + 20);
        v30 = *(_DWORD *)(v22 + 12);
        v23 = *(_WORD *)(v30 + v11);
        if ( (v23 & 0x1000) == 0 )
          ++v31;
        v8 = v22;
        if ( (_BYTE)v28 && v9 != v32 && v31 > *(_DWORD *)(this + 72) )
        {
          *(_WORD *)(v30 + v11) = v23 & 0xFFDF;
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 20) + 12) + v11) |= 0x8000u;
          v8 = *(_DWORD *)(this + 20);
        }
      }
      ++v9;
      v11 += 28;
      v10 = v8;
    }
    while ( v9 < *(unsigned __int16 *)(v8 + 6) );
  }
  v12 = 0;
  if ( *(_WORD *)(v8 + 6) )
  {
    v13 = v8;
    v14 = 0;
    do
    {
      v8 = v13;
      v29 = *(_DWORD *)(v13 + 12);
      v30 = *(unsigned __int16 *)(v29 + v14);
      if ( (v30 & 0x21) == 0x21 )
      {
        if ( (v30 & 0x1000) == 0 )
          ++v31;
        v8 = v13;
        if ( (_BYTE)v28 )
        {
          if ( v12 != v32 )
          {
            v8 = v13;
            if ( v31 > *(_DWORD *)(this + 72) )
            {
              *(_WORD *)(v29 + v14) = v30 & 0xFFDF;
              *(_WORD *)(*(_DWORD *)(*(_DWORD *)(this + 20) + 12) + v14) |= 0x8000u;
              v8 = *(_DWORD *)(this + 20);
            }
          }
        }
      }
      ++v12;
      v14 += 28;
      v13 = v8;
    }
    while ( v12 < *(unsigned __int16 *)(v8 + 6) );
  }
  v15 = 0;
  if ( *(_WORD *)(v8 + 6) )
  {
    v16 = 0;
    do
    {
      v17 = v8;
      if ( (*(_BYTE *)(v16 + *(_DWORD *)(v8 + 12)) & 4) != 0 )
      {
        _RtlpMuiRegValidateLIPLanguage(this, v15);
        v17 = *(_DWORD *)(this + 20);
      }
      ++v15;
      v16 += 28;
      v8 = v17;
    }
    while ( v15 < *(unsigned __int16 *)(v17 + 6) );
  }
  if ( BaseAddress )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
  return 0;
}
