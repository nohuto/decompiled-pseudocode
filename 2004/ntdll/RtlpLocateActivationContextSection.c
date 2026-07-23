/*
 * XREFs of RtlpLocateActivationContextSection @ 0x18001D0FC
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x18001C6C0 (RtlFindActivationContextSectionString.c)
 *     RtlpFindNextActivationContextSection @ 0x18001CF60 (RtlpFindNextActivationContextSection.c)
 *     RtlpLocateActivationContextSectionForQuery @ 0x180078238 (RtlpLocateActivationContextSectionForQuery.c)
 *     RtlQueryActivationContextApplicationSettings @ 0x180079CD0 (RtlQueryActivationContextApplicationSettings.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x1800808DC (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     DbgPrintEx @ 0x1800502F0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x18008C240 (__security_check_cookie.c)
 *     bsearch @ 0x18008ECC0 (bsearch.c)
 *     ARRAY_FITS @ 0x1800DFA60 (ARRAY_FITS.c)
 */

__int64 __fastcall RtlpLocateActivationContextSection(_DWORD *a1, _QWORD *a2, unsigned int a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // r9d
  unsigned int v7; // r11d
  unsigned int v10; // ebx
  unsigned int v11; // ecx
  char *v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  unsigned int *v16; // rax
  unsigned int *v17; // rcx
  __int64 v18; // r9
  unsigned int v19; // edx
  unsigned int v20; // eax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // r9d
  unsigned int v25; // edx
  __int64 v26; // rcx
  int v27; // r8d
  int v28; // r9d
  char *v29; // rcx
  unsigned int v30; // esi
  __int64 v31; // rax
  unsigned int v32; // r11d
  __int64 v33; // rcx
  unsigned int v34; // edx
  _DWORD *i; // r8
  _DWORD Key[4]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a1[3];
  v7 = a3;
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v6,
      a1[1]);
    return (unsigned int)-1072365565;
  }
  v10 = 0;
  if ( a2 )
  {
    v22 = (unsigned int)a1[5];
    if ( !(_DWORD)v22 )
      return (unsigned int)-1072365567;
    if ( !(unsigned __int8)ARRAY_FITS(v22, 1LL, 16LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v23,
        v24);
      return (unsigned int)-1072365565;
    }
    if ( !(unsigned __int8)ARRAY_FITS(
                             *(unsigned int *)((char *)a1 + v23 + 8),
                             *(unsigned int *)((char *)a1 + v23 + 4),
                             24LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        (unsigned int)v26,
        v25,
        v27,
        v28);
      return (unsigned int)-1072365565;
    }
    v29 = (char *)a1 + v26;
    v30 = 0;
    if ( !v25 )
      return (unsigned int)-1072365567;
    while ( 1 )
    {
      v31 = *a2 - *(_QWORD *)&v29[24 * v30];
      if ( *a2 == *(_QWORD *)&v29[24 * v30] )
        v31 = a2[1] - *(_QWORD *)&v29[24 * v30 + 8];
      if ( !v31 )
        break;
      if ( ++v30 >= v25 )
        return (unsigned int)-1072365567;
    }
    if ( !(unsigned __int8)ARRAY_FITS(*(unsigned int *)&v29[24 * v30 + 16], 1LL, 16LL) )
    {
      DbgPrintEx(
        0x33u,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v30,
        v11,
        16,
        v6);
      return (unsigned int)-1072365565;
    }
  }
  else
  {
    v11 = a1[4];
    if ( !v11 )
      return (unsigned int)-1072365567;
  }
  v12 = (char *)a1 + v11;
  if ( !v12 )
    return (unsigned int)-1072365567;
  v13 = *((_DWORD *)v12 + 1);
  if ( !v13 )
    return (unsigned int)-1072365567;
  v14 = *((unsigned int *)v12 + 2);
  v15 = 16LL * v13;
  if ( v15 > 0xFFFFFFFF
    || (int)v15 + (int)v14 < (unsigned int)v15
    || (unsigned int)v14 >= v6
    || (int)v15 + (int)v14 > v6 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      (unsigned int)v14,
      *((_DWORD *)v12 + 1),
      16,
      v6);
    return (unsigned int)-1072365565;
  }
  v16 = (_DWORD *)((char *)a1 + v14);
  if ( (v12[12] & 2) == 0 )
  {
    v34 = 0;
    for ( i = (_DWORD *)((char *)a1 + v14); *i != v7; i += 4 )
    {
      if ( ++v34 >= v13 )
        return (unsigned int)-1072365567;
    }
    v33 = v34;
    goto LABEL_48;
  }
  if ( v7 < *v16 )
    return (unsigned int)-1072365567;
  if ( (v12[12] & 1) != 0 )
  {
    v32 = v7 - *v16;
    if ( v32 < v13 )
    {
      v33 = v32;
LABEL_48:
      v17 = &v16[4 * v33];
      goto LABEL_15;
    }
    return (unsigned int)-1072365567;
  }
  Key[0] = v7;
  v17 = (unsigned int *)bsearch(Key, v16, v13, 0x10uLL, RtlpCompareActivationContextDataTOCEntryById);
LABEL_15:
  if ( !v17 )
    return (unsigned int)-1072365567;
  v18 = v17[1];
  if ( !(_DWORD)v18 )
    return (unsigned int)-1072365567;
  v19 = v17[2];
  v20 = a1[3];
  if ( (unsigned int)v18 + v19 > v20 || (unsigned int)v18 + v19 < v19 || (unsigned int)v18 >= v20 )
  {
    DbgPrintEx(
      0x33u,
      0,
      "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
      v18,
      v19,
      a1[3]);
    return (unsigned int)-1072365565;
  }
  *a4 = (char *)a1 + v18;
  *a5 = v17[2];
  return v10;
}
