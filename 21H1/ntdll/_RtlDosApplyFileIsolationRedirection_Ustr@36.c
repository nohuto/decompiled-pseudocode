/*
 * XREFs of _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830
 * Callers:
 *     _LdrpQuerySxSMUIFile@20 @ 0x4B2B9006 (_LdrpQuerySxSMUIFile@20.c)
 *     _RtlDosSearchPath_Ustr@36 @ 0x4B2C5170 (_RtlDosSearchPath_Ustr@36.c)
 *     _LdrpPreprocessDllName@16 @ 0x4B2CB090 (_LdrpPreprocessDllName@16.c)
 *     _LdrpLoadDependentModule@24 @ 0x4B2CB610 (_LdrpLoadDependentModule@24.c)
 * Callees:
 *     _RtlDeleteBoundaryDescriptor@4 @ 0x4B2ABA40 (_RtlDeleteBoundaryDescriptor@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlGetFullPathName_UstrEx@32 @ 0x4B2C9650 (_RtlGetFullPathName_UstrEx@32.c)
 *     sxsisol_SearchActCtxForDllName @ 0x4B2C9D90 (sxsisol_SearchActCtxForDllName.c)
 *     _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20 (_RtlFindCharInUnicodeString@16.c)
 *     _RtlMultiAppendUnicodeStringBuffer@12 @ 0x4B2E13B0 (_RtlMultiAppendUnicodeStringBuffer@12.c)
 *     sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success @ 0x4B2EBA54 (sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     sxsisol_RespectDotLocal @ 0x4B33D7A3 (sxsisol_RespectDotLocal.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 */

int __stdcall RtlDosApplyFileIsolationRedirection_Ustr(
        int a1,
        int **a2,
        int a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *v9; // esi
  int v10; // ebx
  unsigned int v11; // edx
  _WORD *v12; // eax
  char v13; // dl
  wchar_t *v14; // eax
  int CharInUnicodeString; // eax
  int appended; // esi
  int v17; // edx
  int v18; // eax
  int *v19; // edx
  int *v20; // ecx
  wchar_t *v21; // esi
  unsigned __int16 v22; // ax
  unsigned __int16 Length; // cx
  bool v24; // al
  _DWORD *v26; // edi
  int v27; // edx
  int v28; // edx
  int v29; // eax
  char v30; // [esp+Eh] [ebp-14Ah]
  int *v31; // [esp+10h] [ebp-148h] BYREF
  wchar_t *v32; // [esp+14h] [ebp-144h]
  unsigned __int16 v33; // [esp+18h] [ebp-140h] BYREF
  int *v34; // [esp+1Ch] [ebp-13Ch] BYREF
  int v35; // [esp+20h] [ebp-138h] BYREF
  int v36; // [esp+24h] [ebp-134h]
  int v37; // [esp+28h] [ebp-130h] BYREF
  int v38; // [esp+2Ch] [ebp-12Ch] BYREF
  UNICODE_STRING v39; // [esp+30h] [ebp-128h] BYREF
  _DWORD *v40; // [esp+38h] [ebp-120h]
  _DWORD *v41; // [esp+3Ch] [ebp-11Ch]
  char v42[4]; // [esp+40h] [ebp-118h] BYREF
  int v43; // [esp+44h] [ebp-114h] BYREF
  _DWORD v44[2]; // [esp+48h] [ebp-110h] BYREF
  UNICODE_STRING UnicodeString; // [esp+50h] [ebp-108h] BYREF
  _DWORD v46[4]; // [esp+58h] [ebp-100h] BYREF
  int v47; // [esp+68h] [ebp-F0h] BYREF
  wchar_t *v48; // [esp+6Ch] [ebp-ECh]
  wchar_t *v49; // [esp+70h] [ebp-E8h]
  wchar_t *v50; // [esp+74h] [ebp-E4h]
  int v51; // [esp+78h] [ebp-E0h]
  int v52; // [esp+7Ch] [ebp-DCh]
  _DWORD v53[11]; // [esp+84h] [ebp-D4h] BYREF
  _WORD v54[16]; // [esp+B0h] [ebp-A8h] BYREF
  char v55; // [esp+D0h] [ebp-88h] BYREF

  v41 = a7;
  v35 = 0;
  v36 = 0;
  v9 = a8;
  v44[1] = &v55;
  v40 = a8;
  v44[0] = 0x800000;
  v43 = 0;
  v33 = 0;
  v38 = 0;
  if ( a7 )
    *a7 = 0;
  if ( a8 )
    *a8 = 0;
  if ( a9 )
    *a9 = 520;
  if ( a5 )
  {
    *a5 = 0;
    a5[1] = 0;
  }
  v10 = a4;
  v49 = v54;
  v50 = v54;
  v48 = v54;
  v51 = 32;
  v52 = 32;
  v54[0] = 0;
  v47 = 0x200000;
  if ( a4 )
  {
    v11 = *(unsigned __int16 *)(a4 + 2);
    v12 = *(_WORD **)(a4 + 4);
    if ( v11 < 2 )
    {
      v12 = &v53[6];
      v11 = 2;
    }
    v53[2] = v12;
    v53[4] = v11;
    v53[3] = v12;
    v53[5] = v11;
    v53[1] = v12;
    if ( v12 )
    {
      *v12 = 0;
      v9 = v40;
    }
    HIWORD(v53[0]) = v11;
    LOWORD(v53[0]) = 0;
  }
  else
  {
    v53[4] = 2;
    v53[2] = &v53[6];
    v53[3] = &v53[6];
    v53[1] = &v53[6];
    v53[5] = 2;
    LOWORD(v53[6]) = 0;
    v53[0] = 0x20000;
  }
  v53[7] = a4;
  v53[8] = a5;
  v53[9] = a6;
  LOBYTE(v53[10]) = 1;
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( !a2 )
  {
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( a4 )
  {
    if ( !a5 || a6 )
      goto LABEL_20;
LABEL_92:
    appended = -1073741811;
    goto LABEL_86;
  }
  if ( !a5 && v9 )
    goto LABEL_92;
LABEL_20:
  v13 = 0;
  v31 = *a2;
  v14 = (wchar_t *)a2[1];
  v32 = v14;
  if ( !a3 || !*(_WORD *)a3 )
    goto LABEL_28;
  v30 = 0;
  CharInUnicodeString = RtlFindCharInUnicodeString(1, &v31, &dword_4B281164, v42);
  appended = CharInUnicodeString;
  if ( CharInUnicodeString >= 0 )
  {
    v30 = 1;
LABEL_24:
    appended = 0;
    goto LABEL_25;
  }
  if ( CharInUnicodeString == -1073741275 )
    goto LABEL_24;
LABEL_25:
  if ( appended >= 0 )
  {
    if ( v30 )
    {
      v14 = v32;
      v13 = 0;
LABEL_28:
      appended = 0;
      goto LABEL_29;
    }
    v46[0] = v31;
    v46[1] = v32;
    v46[2] = *(_DWORD *)a3;
    v46[3] = *(_DWORD *)(a3 + 4);
    appended = RtlMultiAppendUnicodeStringBuffer(&v47, 2, v46);
    if ( appended >= 0 )
    {
      v14 = v32;
      v13 = 1;
      goto LABEL_28;
    }
  }
  v14 = v32;
  v13 = 0;
LABEL_29:
  if ( appended < 0 )
    goto LABEL_56;
  if ( v13 )
  {
    v31 = (int *)v47;
    v14 = v48;
    v32 = v48;
  }
  v34 = 0;
  if ( v36 )
  {
    appended = -1073741811;
LABEL_48:
    if ( v36 )
    {
      RtlDeleteBoundaryDescriptor(v36);
      v35 = 0;
      v36 = 0;
    }
    goto LABEL_50;
  }
  if ( (unsigned __int16)v31 < 2u || (v17 = *v14, v17 != 92) && v17 != 47 )
  {
    if ( (unsigned __int16)v31 >= 4u )
    {
      if ( *v14 )
      {
        if ( v14[1] == 58 && (unsigned __int16)v31 >= 6u )
        {
          v18 = v14[2];
          if ( v18 == 92 || v18 == 47 )
          {
            v37 = 2;
            goto LABEL_42;
          }
        }
      }
    }
LABEL_46:
    v24 = 0;
    goto LABEL_47;
  }
  if ( (unsigned __int16)v31 < 4u )
    goto LABEL_46;
  v27 = v14[1];
  if ( v27 != 92 && v27 != 47 )
    goto LABEL_46;
  if ( (unsigned __int16)v31 >= 6u )
  {
    v28 = v14[2];
    if ( v28 == 46 || v28 == 63 )
    {
      if ( (unsigned __int16)v31 >= 8u )
      {
        v29 = v14[3];
        if ( v29 == 92 || v29 == 47 )
        {
          v37 = 6;
          goto LABEL_42;
        }
      }
      if ( (_WORD)v31 == 6 )
        goto LABEL_46;
    }
  }
  v37 = 1;
LABEL_42:
  appended = RtlGetFullPathName_UstrEx((unsigned __int16 *)&v31, (int)v44, (int)&v35, &v34, 0, 0, &v37, 0);
  if ( appended < 0 )
    goto LABEL_48;
  v19 = v34;
  v20 = (int *)*v34;
  v21 = (wchar_t *)v34[1];
  v34 = v20;
  UnicodeString.Buffer = v21;
  *(_DWORD *)&v39.Length = v20;
  if ( v37 == 6 && v32[5] == 58 && v32[6] == 92 )
  {
    HIWORD(v31) -= 8;
    v22 = (_WORD)v31 - 8;
    v32 += 4;
    Length = (_WORD)v20 - 8;
    v21 += 4;
    v39.Length = Length;
    v39.MaximumLength -= 8;
    v34 = *(int **)&v39.Length;
    v10 = a4;
    LOWORD(v31) = (_WORD)v31 - 8;
  }
  else
  {
    v22 = (unsigned __int16)v31;
    Length = v39.Length;
  }
  if ( v22 <= Length )
    goto LABEL_46;
  v24 = v19 == &v35;
  v31 = v34;
  v32 = v21;
LABEL_47:
  appended = 0;
  if ( !v24 )
    goto LABEL_48;
LABEL_50:
  if ( appended < 0 )
    goto LABEL_56;
  if ( (a1 & 1) != 0 )
  {
    if ( NtCurrentPeb()->ProcessParameters )
    {
      if ( (NtCurrentPeb()->ProcessParameters->Flags & 0x1000) != 0 )
      {
        appended = sxsisol_RespectDotLocal(&v38);
        if ( appended < 0 )
          goto LABEL_56;
      }
    }
  }
  if ( (v38 & 1) == 0 )
  {
    appended = sxsisol_SearchActCtxForDllName(&v43, v41, v53);
    if ( appended < 0 )
      goto LABEL_56;
  }
  if ( !a5 && v10 && v53[1] != *(_DWORD *)(v10 + 4) )
  {
    appended = -1073741789;
    goto LABEL_86;
  }
  v26 = v40;
  if ( !v40 )
  {
LABEL_82:
    appended = sxsisol_FreeUnicodeStringBufferAroundUnicodeStrings_Success(v53);
    if ( appended >= 0 )
    {
      if ( v41 )
        *v41 = v38;
      appended = 0;
      goto LABEL_86;
    }
    goto LABEL_56;
  }
  appended = RtlFindCharInUnicodeString(1, v53, &RtlDosPathSeperatorsString, &v33);
  if ( appended >= 0 )
  {
    *v26 = (v33 >> 1) + 1;
    goto LABEL_82;
  }
LABEL_56:
  if ( LOBYTE(v53[10]) )
  {
    if ( v53[2] && v53[2] != v53[3] )
    {
      v39.Buffer = (wchar_t *)v53[2];
      RtlFreeAnsiString(&v39);
    }
    if ( v53[3] )
      *(_WORD *)v53[3] = 0;
  }
  memset(v53, 0, sizeof(v53));
  while ( 1 )
  {
    if ( v36 )
    {
      RtlDeleteBoundaryDescriptor(v36);
      v35 = 0;
      v36 = 0;
    }
    if ( v49 )
    {
      if ( v49 != v50 )
      {
        UnicodeString.Buffer = v49;
        RtlFreeAnsiString(&UnicodeString);
      }
      v49 = v50;
      v51 = v52;
    }
    v48 = v50;
    if ( v50 )
      *v50 = 0;
    LOWORD(v47) = 0;
    HIWORD(v47) = v52;
    if ( appended != -1072365567 )
      return appended;
    RtlAssert(
      "Internal error check failed",
      "minkernel\\ntdll\\sxsisol.cpp",
      434,
      "Status != STATUS_SXS_SECTION_NOT_FOUND");
    appended = -1073741595;
LABEL_86:
    if ( appended < 0 )
      goto LABEL_56;
  }
}
