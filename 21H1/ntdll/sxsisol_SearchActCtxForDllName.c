/*
 * XREFs of sxsisol_SearchActCtxForDllName @ 0x4B2C9D90
 * Callers:
 *     _RtlDosApplyFileIsolationRedirection_Ustr@36 @ 0x4B2C9830 (_RtlDosApplyFileIsolationRedirection_Ustr@36.c)
 * Callees:
 *     _RtlReleaseActivationContext@4 @ 0x4B2B2660 (_RtlReleaseActivationContext@4.c)
 *     _RtlFreeAnsiString@4 @ 0x4B2C3B40 (_RtlFreeAnsiString@4.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 *     _RtlFindCharInUnicodeString@16 @ 0x4B2CAA20 (_RtlFindCharInUnicodeString@16.c)
 *     _RtlpEnsureBufferSize@12 @ 0x4B2E1480 (_RtlpEnsureBufferSize@12.c)
 *     _RtlGetAssemblyStorageRoot@24 @ 0x4B2E2564 (_RtlGetAssemblyStorageRoot@24.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memmove @ 0x4B2F8BF0 (_memmove.c)
 *     _memset @ 0x4B2F8F30 (_memset.c)
 *     sxsisol_ExpandEnvironmentStrings_UEx @ 0x4B33D614 (sxsisol_ExpandEnvironmentStrings_UEx.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 *     _RtlAssert@16 @ 0x4B34FBC0 (_RtlAssert@16.c)
 */

int __fastcall sxsisol_SearchActCtxForDllName(_UNICODE_STRING *a1, char a2, int *a3, wchar_t *a4, unsigned __int16 *a5)
{
  _ACTIVATION_CONTEXT *hActCtx; // edi
  NTSTATUS ActivationContextSectionString; // eax
  int v8; // esi
  wchar_t *v9; // ecx
  _DWORD *lpData; // ecx
  ULONG v12; // edx
  unsigned int v13; // eax
  ULONG v14; // eax
  ULONG ulSectionTotalLength; // edx
  int v16; // eax
  int v17; // ecx
  int AssemblyStorageRoot; // eax
  int *v19; // esi
  int v20; // eax
  int v21; // ecx
  const void **v22; // edx
  unsigned int v23; // eax
  _DWORD *v24; // ecx
  unsigned int v25; // eax
  int v26; // ecx
  _WORD *v27; // ecx
  unsigned __int16 v28; // dx
  unsigned __int16 v29; // ax
  int v30; // eax
  int v31; // eax
  wchar_t *v32; // eax
  int v33; // edx
  bool v34; // cf
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // eax
  unsigned __int16 v38; // cx
  char *v39; // eax
  unsigned int v40; // ecx
  char *v41; // edx
  unsigned int v42; // eax
  int v43; // ecx
  int v44; // eax
  unsigned __int16 v45; // ax
  unsigned int v46; // ecx
  int v47; // eax
  NTSTATUS CharInUnicodeString; // eax
  unsigned __int16 Length; // dx
  unsigned int v50; // eax
  int *v51; // esi
  int v52; // ecx
  int v53; // eax
  unsigned __int16 v54; // cx
  void *v55; // [esp-8h] [ebp-ACh]
  wchar_t *Buffer; // [esp-8h] [ebp-ACh]
  size_t v57; // [esp-4h] [ebp-A8h]
  size_t v58; // [esp-4h] [ebp-A8h]
  tagACTCTX_SECTION_KEYED_DATA ReturnedData; // [esp+10h] [ebp-94h] BYREF
  _UNICODE_STRING UnicodeString; // [esp+50h] [ebp-54h] BYREF
  int Size; // [esp+58h] [ebp-4Ch]
  size_t Size_4; // [esp+5Ch] [ebp-48h] BYREF
  int v63; // [esp+64h] [ebp-40h]
  char *v64; // [esp+68h] [ebp-3Ch]
  int *v65; // [esp+6Ch] [ebp-38h]
  void *Src; // [esp+70h] [ebp-34h]
  _WORD *v67; // [esp+74h] [ebp-30h] BYREF
  int v68; // [esp+78h] [ebp-2Ch] BYREF
  USHORT NonInclusivePrefixLength[2]; // [esp+7Ch] [ebp-28h] BYREF
  _UNICODE_STRING v70; // [esp+80h] [ebp-24h] BYREF
  wchar_t *v71; // [esp+88h] [ebp-1Ch]
  wchar_t *v72; // [esp+8Ch] [ebp-18h]
  int v73; // [esp+90h] [ebp-14h]
  int v74; // [esp+94h] [ebp-10h]
  __int16 v75; // [esp+98h] [ebp-Ch] BYREF

  v65 = a3;
  LODWORD(v57) = 60;
  UnicodeString.Buffer = a4;
  HIBYTE(NonInclusivePrefixLength[1]) = a2;
  ReturnedData.cbSize = 64;
  memset(&ReturnedData.ulDataFormatVersion, 0, v57);
  Size_4 = *(size_t *)a1;
  hActCtx = 0;
  v71 = (wchar_t *)&v75;
  v72 = (wchar_t *)&v75;
  v70.Buffer = (wchar_t *)&v75;
  v75 = 0;
  v67 = 0;
  v73 = 2;
  v74 = 2;
  *(_DWORD *)&v70.Length = 0x20000;
  ActivationContextSectionString = RtlFindActivationContextSectionString(
                                     3u,
                                     0,
                                     2u,
                                     (PUNICODE_STRING)&Size_4,
                                     &ReturnedData);
  v8 = ActivationContextSectionString;
  if ( ActivationContextSectionString < 0 )
  {
    if ( ActivationContextSectionString == -1072365567 )
      v8 = -1072365560;
    goto LABEL_4;
  }
  if ( HIBYTE(NonInclusivePrefixLength[1]) )
  {
    v8 = 0;
    goto LABEL_4;
  }
  hActCtx = (_ACTIVATION_CONTEXT *)ReturnedData.hActCtx;
  if ( ReturnedData.ulLength < 0x14
    || ReturnedData.ulDataFormatVersion != 1
    || (lpData = ReturnedData.lpData, v12 = *((_DWORD *)ReturnedData.lpData + 4),
                                      v12 > ReturnedData.ulSectionTotalLength)
    || (v13 = *((_DWORD *)ReturnedData.lpData + 3), v13 > 0x1FFFFFFF)
    || v12 > ~(8 * v13)
    || (v14 = 8 * v13 + v12,
        ulSectionTotalLength = ReturnedData.ulSectionTotalLength,
        v14 > ReturnedData.ulSectionTotalLength) )
  {
LABEL_57:
    v8 = -1072365565;
    goto LABEL_4;
  }
  v16 = *((_DWORD *)ReturnedData.lpData + 1);
  if ( (v16 & 2) == 0 )
    goto LABEL_27;
  v17 = 0;
  v68 = 0;
  if ( (v16 & 4) != 0 )
  {
    DbgPrintEx(
      51,
      0,
      (int)"[%x.%x] SXS: %s - Relative redirection plus env var expansion.\n",
      (int)NtCurrentTeb()->ClientId.UniqueProcess);
    goto LABEL_57;
  }
  if ( (ReturnedData.ulFlags & 1) != 0 )
  {
    if ( (ReturnedData.ulFlags & 2) != 0 )
      RtlAssert(
        "Internal error check failed",
        "minkernel\\ntdll\\sxsisol.cpp",
        0x41Bu,
        (PSTR)"!(askd.Flags & ACTIVATION_CONTEXT_SECTION_KEYED_DATA_FLAG_FOUND_IN_SYSTEM_DEFAULT)");
    v17 = 1;
  }
  if ( (ReturnedData.ulFlags & 2) != 0 )
    v17 |= 2u;
  AssemblyStorageRoot = RtlGetAssemblyStorageRoot(ReturnedData.ulAssemblyRosterIndex, &v67, v17, &v68);
  v8 = AssemblyStorageRoot;
  if ( AssemblyStorageRoot < 0 )
  {
    if ( AssemblyStorageRoot == -1073741536 && v68 < 0 )
      v8 = v68;
    goto LABEL_4;
  }
  lpData = ReturnedData.lpData;
  ulSectionTotalLength = ReturnedData.ulSectionTotalLength;
LABEL_27:
  v19 = v65;
  Src = (char *)ReturnedData.lpSectionBase + lpData[4];
  v64 = 0;
  *v65 = 0;
  v20 = lpData[3];
  v21 = 0;
  v68 = v20;
  if ( v20 )
  {
    v39 = 0;
    do
    {
      *(_DWORD *)NonInclusivePrefixLength = 8 * (_DWORD)v39;
      v40 = *((_DWORD *)Src + 2 * (_DWORD)v39 + 1);
      if ( v40 > ulSectionTotalLength )
        goto LABEL_57;
      v19 = v65;
      *(_DWORD *)NonInclusivePrefixLength = *(_DWORD *)((char *)Src + *(_DWORD *)NonInclusivePrefixLength);
      if ( v40 > ~*(_DWORD *)NonInclusivePrefixLength
        || v40 + *(_DWORD *)NonInclusivePrefixLength > ulSectionTotalLength )
      {
        goto LABEL_57;
      }
      v21 = *v65 + NonInclusivePrefixLength[0];
      v39 = v64 + 1;
      *v65 = v21;
      v64 = v39;
    }
    while ( v39 != (char *)v68 );
  }
  v22 = (const void **)v67;
  if ( v67 )
  {
    v21 += (unsigned __int16)*v67;
    *v19 = v21;
  }
  v23 = (unsigned __int16)v21 + 2;
  if ( v23 > 0xFFFE )
  {
    v8 = -1073741562;
    goto LABEL_4;
  }
  v24 = a5 + 4;
  if ( a5 == (unsigned __int16 *)-8 || v23 > *((_DWORD *)a5 + 4) )
  {
    if ( (int)RtlpEnsureBufferSize(0, a5 + 4, v23) < 0 )
    {
LABEL_69:
      v8 = -1073741801;
      goto LABEL_4;
    }
    v22 = (const void **)v67;
    v24 = a5 + 4;
  }
  *((_DWORD *)a5 + 1) = *v24;
  a5[1] = a5[8];
  if ( v22 )
  {
    *a5 = 0;
    v25 = *(unsigned __int16 *)v22 + 2;
    if ( v25 > 0xFFFE )
    {
      v8 = -1073741562;
      goto LABEL_4;
    }
    if ( v25 > *((_DWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0, v24, *(unsigned __int16 *)v22 + 2) < 0 )
      {
        v8 = -1073741801;
        goto LABEL_4;
      }
      v22 = (const void **)v67;
      v24 = a5 + 4;
    }
    v26 = *v24;
    *((_DWORD *)a5 + 1) = v26;
    LODWORD(v58) = *(unsigned __int16 *)v22;
    memmove((void *)(v26 + 2 * (*a5 >> 1)), v22[1], v58);
    v27 = v67;
    v28 = *a5;
    a5[1] = *a5 + *v67 + 2;
    v29 = v28 + *v27;
    *a5 = v29;
    *(_WORD *)(*((_DWORD *)a5 + 1) + 2 * (v29 >> 1)) = 0;
    v24 = a5 + 4;
  }
  v30 = 0;
  *(_DWORD *)NonInclusivePrefixLength = 0;
  if ( v68 )
  {
    do
    {
      v63 = *((unsigned __int16 *)Src + 4 * v30);
      v41 = (char *)ReturnedData.lpSectionBase + *((_DWORD *)Src + 2 * *(_DWORD *)NonInclusivePrefixLength + 1);
      v42 = v63 + *a5 + 2;
      Size = v63;
      v19 = v65;
      v64 = v41;
      if ( v42 > 0xFFFE )
        goto LABEL_84;
      if ( v42 > *((_DWORD *)a5 + 4) )
      {
        if ( (int)RtlpEnsureBufferSize(0, v24, v42) < 0 )
          goto LABEL_69;
        v41 = v64;
        v24 = a5 + 4;
      }
      v43 = *v24;
      LODWORD(v58) = Size;
      v44 = *a5 >> 1;
      *((_DWORD *)a5 + 1) = v43;
      memmove((void *)(v43 + 2 * v44), v41, v58);
      v45 = v63 + *a5;
      v46 = v45;
      a5[1] = v45 + 2;
      v47 = *((_DWORD *)a5 + 1);
      *a5 = v46;
      *(_WORD *)(v47 + 2 * (v46 >> 1)) = 0;
      v24 = a5 + 4;
      v30 = *(_DWORD *)NonInclusivePrefixLength + 1;
      *(_DWORD *)NonInclusivePrefixLength = v30;
    }
    while ( v30 != v68 );
  }
  v31 = *((_DWORD *)ReturnedData.lpData + 1);
  if ( (v31 & 1) == 0 )
  {
    if ( (v31 & 8) != 0 )
    {
      CharInUnicodeString = RtlFindCharInUnicodeString(
                              1u,
                              (PUNICODE_STRING)&Size_4,
                              (PUNICODE_STRING)&RtlDosPathSeperatorsString,
                              NonInclusivePrefixLength);
      v8 = CharInUnicodeString;
      if ( CharInUnicodeString < 0 )
      {
        if ( CharInUnicodeString == -1073741275 )
          RtlAssert(
            "Internal error check failed",
            "minkernel\\ntdll\\sxsisol.cpp",
            0x477u,
            (PSTR)"Status != STATUS_NOT_FOUND");
        goto LABEL_4;
      }
      LOWORD(v33) = -2 - NonInclusivePrefixLength[0] + Size_4;
      v19 = v65;
      v32 = (wchar_t *)(HIDWORD(Size_4) + 2 * (NonInclusivePrefixLength[0] >> 1) + 2);
      v24 = a5 + 4;
    }
    else
    {
      v32 = (wchar_t *)HIDWORD(Size_4);
      LOWORD(v33) = Size_4;
    }
    NonInclusivePrefixLength[1] = v33;
    v33 = (unsigned __int16)v33;
    *v19 += (unsigned __int16)v33;
    v34 = (unsigned int)*v19 < 0xFFFF;
    Src = v32;
    v63 = (unsigned __int16)v33;
    if ( v34 )
    {
      v35 = (unsigned __int16)v33 + *a5 + 2;
      if ( v35 > 0xFFFE )
      {
        v8 = -1073741562;
        goto LABEL_4;
      }
      if ( v35 > *((_DWORD *)a5 + 4) )
      {
        if ( (int)RtlpEnsureBufferSize(0, v24, (unsigned __int16)v33 + *a5 + 2) < 0 )
        {
          v8 = -1073741801;
          goto LABEL_4;
        }
        v33 = v63;
        v24 = a5 + 4;
      }
      v36 = *v24;
      v37 = *a5 >> 1;
      LODWORD(v58) = v33;
      v55 = Src;
      *((_DWORD *)a5 + 1) = v36;
      memmove((void *)(v36 + 2 * v37), v55, v58);
      v38 = NonInclusivePrefixLength[1] + *a5;
      *a5 = v38;
      a5[1] = v38 + 2;
      *(_WORD *)(*((_DWORD *)a5 + 1) + 2 * (v38 >> 1)) = 0;
      v31 = *((_DWORD *)ReturnedData.lpData + 1);
      goto LABEL_49;
    }
LABEL_84:
    v8 = -1073741562;
    goto LABEL_4;
  }
LABEL_49:
  if ( (v31 & 4) != 0 )
  {
    v8 = sxsisol_ExpandEnvironmentStrings_UEx(&v70);
    if ( v8 < 0 )
      goto LABEL_4;
    Length = v70.Length;
    *a5 = 0;
    v50 = Length + 2;
    if ( v50 > 0xFFFE )
    {
      v8 = -1073741562;
      goto LABEL_4;
    }
    v51 = (int *)(a5 + 4);
    if ( v50 > *((_DWORD *)a5 + 4) )
    {
      if ( (int)RtlpEnsureBufferSize(0, a5 + 4, Length + 2) < 0 )
      {
        v8 = -1073741801;
        goto LABEL_4;
      }
      Length = v70.Length;
    }
    v52 = *v51;
    LODWORD(v58) = Length;
    Buffer = v70.Buffer;
    v53 = *a5 >> 1;
    *((_DWORD *)a5 + 1) = *v51;
    memmove((void *)(v52 + 2 * v53), Buffer, v58);
    v54 = v70.Length + *a5;
    *a5 = v54;
    a5[1] = v54 + 2;
    *(_WORD *)(*((_DWORD *)a5 + 1) + 2 * (v54 >> 1)) = 0;
  }
  if ( UnicodeString.Buffer )
    *(_DWORD *)UnicodeString.Buffer |= 2u;
  v8 = 0;
LABEL_4:
  v9 = v72;
  if ( v71 )
  {
    if ( v71 != v72 )
    {
      UnicodeString.Buffer = v71;
      RtlFreeAnsiString(&UnicodeString);
      v9 = v72;
    }
    v71 = v9;
    v73 = v74;
  }
  v70.Buffer = v9;
  if ( v9 )
    *v9 = 0;
  v70.Length = 0;
  v70.MaximumLength = v74;
  if ( hActCtx )
    RtlReleaseActivationContext(hActCtx);
  return v8;
}
