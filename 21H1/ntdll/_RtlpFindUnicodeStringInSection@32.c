/*
 * XREFs of _RtlpFindUnicodeStringInSection@32 @ 0x4B2CA720
 * Callers:
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 * Callees:
 *     _RtlHashUnicodeString@16 @ 0x4B2A7970 (_RtlHashUnicodeString@16.c)
 *     _RtlCompareUnicodeString@12 @ 0x4B2D0490 (_RtlCompareUnicodeString@12.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

NTSTATUS __fastcall RtlpFindUnicodeStringInSection(
        int a1,
        unsigned int a2,
        _UNICODE_STRING *a3,
        int *a4,
        _DWORD *a5,
        int *a6,
        int a7,
        int a8)
{
  int v8; // ebx
  int *v9; // esi
  bool v10; // zf
  _DWORD *v11; // edi
  BOOLEAN v12; // dl
  unsigned int v13; // ecx
  int v14; // eax
  PUNICODE_STRING v15; // ebx
  wchar_t *Buffer; // edi
  int v17; // ebx
  unsigned int v18; // ecx
  int v19; // eax
  char v20; // dh
  char v21; // dl
  int v22; // ecx
  unsigned int *v23; // esi
  _DWORD *v24; // ecx
  unsigned __int64 v25; // rax
  unsigned int *v26; // edx
  unsigned int v27; // eax
  int v28; // edi
  unsigned int v29; // edx
  int v30; // eax
  _DWORD *v31; // edx
  ULONG v32; // eax
  unsigned int *i; // esi
  unsigned int v34; // ebx
  NTSTATUS result; // eax
  char *v36; // esi
  char *v37; // edi
  char *v38; // eax
  int v39; // esi
  unsigned int v40; // ecx
  int v41; // edi
  int v42; // ecx
  int v43; // ecx
  int v44; // esi
  int *v45; // ecx
  size_t v46; // [esp-Ch] [ebp-64h]
  size_t v47; // [esp-4h] [ebp-5Ch]
  int (__cdecl *v48)(const void *, const void *); // [esp+4h] [ebp-54h]
  ULONG HashValue; // [esp+10h] [ebp-48h] BYREF
  unsigned int v50; // [esp+14h] [ebp-44h]
  _DWORD *v51; // [esp+18h] [ebp-40h]
  _DWORD *v52; // [esp+1Ch] [ebp-3Ch]
  _UNICODE_STRING String2; // [esp+20h] [ebp-38h] BYREF
  BOOLEAN CaseInSensitive[4]; // [esp+28h] [ebp-30h]
  PUNICODE_STRING String1; // [esp+2Ch] [ebp-2Ch]
  int v56; // [esp+30h] [ebp-28h]
  int *v57; // [esp+34h] [ebp-24h]
  char v58; // [esp+3Bh] [ebp-1Dh]
  int Key[6]; // [esp+3Ch] [ebp-1Ch] BYREF

  v8 = a1;
  String1 = a3;
  v9 = a6;
  v10 = (*(_BYTE *)(a1 + 16) & 1) == 0;
  v11 = a5;
  v50 = a2;
  v56 = a1;
  v51 = a5;
  v57 = a6;
  v58 = 1;
  v12 = !v10;
  v10 = *(_DWORD *)a1 == 1682469715;
  CaseInSensitive[0] = v12;
  if ( !v10 )
    return -1072365565;
  if ( !*(_DWORD *)(a1 + 20) )
    return -1072365560;
  v13 = *(_DWORD *)(a1 + 28);
  if ( v13 == -1 )
  {
    v20 = 0;
    goto LABEL_21;
  }
  if ( *a5 == v13 )
    goto LABEL_20;
  v14 = 0;
  if ( String1 && a6 )
  {
    v15 = String1;
    Buffer = String1->Buffer;
    *a6 = 0;
    v17 = v15->Length >> 1;
    if ( v13 > 1 )
      goto LABEL_64;
    if ( v17 )
    {
      if ( v12 )
      {
        do
        {
          v18 = *Buffer++;
          --v17;
          v52 = (_DWORD *)v18;
          if ( v18 >= 0x61 )
          {
            if ( v18 > 0x7A )
            {
              if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v18 >= 0xC0u )
                LOWORD(v18) = (_WORD)v52
                            + *(_WORD *)(Nls844UnicodeUpcaseTable
                                       + 2
                                       * ((v18 & 0xF)
                                        + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                              + 2
                                                              * ((((unsigned __int16)v18 >> 4) & 0xF)
                                                               + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                                                                     + 2 * BYTE1(v18))))));
            }
            else
            {
              LOWORD(v18) = v18 - 32;
            }
          }
          v14 = (unsigned __int16)v18 + 65599 * v14;
        }
        while ( v17 );
        v9 = v57;
      }
      else
      {
        do
        {
          v43 = *Buffer++;
          v14 = v43 + 65599 * v14;
          --v17;
        }
        while ( v17 );
      }
    }
    v8 = v56;
    v11 = v51;
    *v9 = v14;
    v19 = 0;
  }
  else
  {
    v19 = -1073741811;
  }
  if ( v19 >= 0 )
  {
    *v11 = *(_DWORD *)(v8 + 28);
LABEL_20:
    v20 = v58;
    goto LABEL_21;
  }
LABEL_64:
  result = RtlHashUnicodeString(String1, CaseInSensitive[0], 0, &HashValue);
  if ( result < 0 )
    return result;
  v8 = v56;
  DbgPrintEx(
    51,
    0,
    (int)"RtlpFindUnicodeStringInSection: Unsupported hash algorithm %lu found in string section.\n",
    *(_DWORD *)(v56 + 28));
  v20 = 0;
LABEL_21:
  v10 = *(_DWORD *)(v8 + 8) == 1;
  v21 = v20;
  v58 = v20;
  if ( !v10 )
    v20 = 0;
  v22 = *(_DWORD *)(v8 + 32);
  if ( ((unsigned __int8)-(v22 != 0) & (unsigned __int8)v20) != 0 )
  {
    v23 = (unsigned int *)(v22 + v8);
    v10 = *(_DWORD *)(v22 + v8) == 11;
    v24 = (_DWORD *)*v57;
    v25 = (unsigned int)*v57;
    v51 = (_DWORD *)*v57;
    if ( v10 )
      v26 = (unsigned int *)(v25 % 0xB);
    else
      v26 = (unsigned int *)(v25 % *v23);
    v27 = v23[1];
    v28 = 0;
    v57 = (int *)v26;
    v29 = v27 + 8 * (_DWORD)v26;
    v30 = *(_DWORD *)(v29 + v8 + 4);
    v31 = (_DWORD *)(v8 + v29);
    v32 = v8 + v30;
    v52 = v31;
    HashValue = v32;
    if ( *v31 )
    {
      for ( i = (unsigned int *)v32; *i <= v50; ++i )
      {
        v34 = *i + v8;
        if ( !v58 || *(_DWORD **)v34 == v24 )
        {
          v40 = *(_DWORD *)(v34 + 4);
          if ( v40 > v50 )
          {
            DbgPrintEx(
              51,
              0,
              (int)"SXS: String hash table entry at %p has invalid key offset (= %ld)\n"
                   "   Header = %p; Index = %lu; Bucket = %p; Chain = %p\n",
              v34);
            return -1072365565;
          }
          String2.Length = *(_WORD *)(v34 + 8);
          String2.MaximumLength = String2.Length;
          String2.Buffer = (wchar_t *)(v40 + v56);
          if ( !RtlCompareUnicodeString(String1, &String2, CaseInSensitive[0]) )
            goto LABEL_49;
          v24 = v51;
          v31 = v52;
        }
        v8 = v56;
        if ( (unsigned int)++v28 >= *v31 )
          return -1072365560;
      }
      DbgPrintEx(51, 0, (int)"SXS: String hash collision chain offset at %p (= %ld) out of bounds\n", (int)i);
      return -1072365565;
    }
    return -1072365560;
  }
  if ( !v21 || (*(_BYTE *)(v8 + 16) & 2) == 0 )
  {
    v41 = v56;
    v34 = v56 + *(_DWORD *)(v8 + 24);
    v44 = *(_DWORD *)(v56 + 20);
    if ( v44 )
    {
      v45 = v57;
      do
      {
        String2.Length = *(_WORD *)(v34 + 8);
        String2.MaximumLength = String2.Length;
        String2.Buffer = (wchar_t *)(v41 + *(_DWORD *)(v34 + 4));
        if ( !v21 || *(_DWORD *)v34 == *v45 )
        {
          if ( !RtlCompareUnicodeString(String1, &String2, CaseInSensitive[0]) )
            goto LABEL_50;
          v21 = v58;
          v45 = v57;
        }
        v34 += 24;
        --v44;
      }
      while ( v44 );
    }
    return -1072365560;
  }
  v36 = (char *)(v8 + *(_DWORD *)(v8 + 24));
  LODWORD(v47) = RtlpCompareActivationContextStringSectionEntryByPseudoKey;
  v37 = &v36[24 * *(_DWORD *)(v8 + 20) - 24];
  HIDWORD(v46) = 24;
  LODWORD(v46) = *(_DWORD *)(v8 + 20);
  Key[0] = *v57;
  v38 = (char *)bsearch(Key, v36, v46, v47, v48);
  v34 = (unsigned int)v38;
  if ( !v38 )
    return -1072365560;
  if ( v38 != v36 )
  {
    do
    {
      if ( *(_DWORD *)v34 != *v57 )
        break;
      v34 -= 24;
    }
    while ( (char *)v34 != v36 );
  }
  v39 = *v57;
  if ( *(_DWORD *)v34 != *v57 )
    v34 += 24;
  do
  {
    String2.Length = *(_WORD *)(v34 + 8);
    String2.MaximumLength = String2.Length;
    String2.Buffer = (wchar_t *)(v56 + *(_DWORD *)(v34 + 4));
    if ( !RtlCompareUnicodeString(String1, &String2, CaseInSensitive[0]) )
      break;
    v34 += 24;
    if ( v34 > (unsigned int)v37 )
      return -1072365560;
  }
  while ( *(_DWORD *)v34 == v39 );
  if ( v34 > (unsigned int)v37 || *(_DWORD *)v34 != v39 )
    return -1072365560;
LABEL_49:
  v41 = v56;
LABEL_50:
  if ( !v34 || !*(_DWORD *)(v34 + 12) )
    return -1072365560;
  if ( a4 )
  {
    v42 = *a4;
    a4[1] = *(_DWORD *)(v41 + 12);
    a4[2] = v41 + *(_DWORD *)(v34 + 12);
    a4[3] = *(_DWORD *)(v34 + 16);
    if ( a4 + 10 <= (int *)((char *)a4 + v42) )
      a4[9] = *(_DWORD *)(v34 + 20);
  }
  return 0;
}
