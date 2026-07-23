/*
 * XREFs of _RtlpLocateActivationContextSection@20 @ 0x4B2CA5C0
 * Callers:
 *     _RtlQueryActivationContextApplicationSettings@28 @ 0x4B2B4270 (_RtlQueryActivationContextApplicationSettings@28.c)
 *     _RtlpFindActivationContextSection_FillOutReturnedData@32 @ 0x4B2B43E8 (_RtlpFindActivationContextSection_FillOutReturnedData@32.c)
 *     _RtlpLocateActivationContextSectionForQuery@44 @ 0x4B2B7EEA (_RtlpLocateActivationContextSectionForQuery@44.c)
 *     _RtlFindActivationContextSectionString@20 @ 0x4B2CA130 (_RtlFindActivationContextSectionString@20.c)
 *     _RtlpFindNextActivationContextSection@16 @ 0x4B2CD550 (_RtlpFindNextActivationContextSection@16.c)
 *     _RtlFindActivationContextSectionGuid@20 @ 0x4B2CD660 (_RtlFindActivationContextSectionGuid@20.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _bsearch @ 0x4B2F8160 (_bsearch.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _ARRAY_FITS@16 @ 0x4B33DB3F (_ARRAY_FITS@16.c)
 *     _DbgPrintEx @ 0x4B33EE00 (_DbgPrintEx.c)
 */

int __fastcall RtlpLocateActivationContextSection(_DWORD *a1, const void *a2, unsigned int a3, _DWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  int v7; // ebx
  _DWORD *v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int *v12; // esi
  unsigned int v13; // eax
  int v14; // ecx
  unsigned int *v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  unsigned int v19; // ecx
  int v21; // eax
  bool v22; // zf
  int v23; // eax
  char *v24; // ecx
  unsigned int v25; // ecx
  size_t v26; // [esp-4h] [ebp-48h]
  int (__cdecl *v27)(const void *, const void *); // [esp+4h] [ebp-40h]
  unsigned int v29; // [esp+18h] [ebp-2Ch]
  char *v30; // [esp+18h] [ebp-2Ch]
  unsigned int v31; // [esp+1Ch] [ebp-28h]
  char *i; // [esp+24h] [ebp-20h]
  int v33; // [esp+28h] [ebp-1Ch]
  int v34; // [esp+28h] [ebp-1Ch]
  unsigned int Key[4]; // [esp+2Ch] [ebp-18h] BYREF

  v6 = a1[3];
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      51,
      0,
      (int)"SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      (int)a1);
    return -1072365565;
  }
  if ( a2 )
  {
    v21 = a1[5];
    if ( !v21 )
      return -1072365567;
    v22 = (unsigned __int8)ARRAY_FITS(v21, 1, 16, v6) == 0;
    v23 = a1[5];
    if ( v22 )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
        v23);
      return -1072365565;
    }
    v31 = *(_DWORD *)((char *)a1 + v23 + 4);
    v33 = *(_DWORD *)((char *)a1 + v23 + 8);
    if ( !(unsigned __int8)ARRAY_FITS(v33, v31, 24, v6) )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds "
             "of activation context data (%lu bytes)\n",
        v33);
      return -1072365565;
    }
    v24 = (char *)a1 + v33;
    v34 = 0;
    v30 = v24;
    if ( !v31 )
      return -1072365567;
    for ( i = v24; ; i += 24 )
    {
      LODWORD(v26) = 16;
      if ( !memcmp(a2, v24, v26) )
        break;
      v24 = i + 24;
      if ( ++v34 >= v31 )
        return -1072365567;
    }
    v7 = *(_DWORD *)&v30[24 * v34 + 16];
    if ( !(unsigned __int8)ARRAY_FITS(v7, 1, 16, a1[3]) )
    {
      DbgPrintEx(
        51,
        0,
        (int)"SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v34);
      return -1072365565;
    }
  }
  else
  {
    v7 = a1[4];
    if ( !v7 )
      return -1072365567;
  }
  v8 = (_DWORD *)((char *)a1 + v7);
  if ( !(_DWORD *)((char *)a1 + v7) )
    return -1072365567;
  v9 = v8[1];
  if ( !v9 )
    return -1072365567;
  v10 = 16 * v9;
  if ( is_mul_ok(0x10u, v9) )
  {
    v11 = v8[2];
    v29 = v10 + v11;
    v12 = 0;
    if ( v10 + v11 >= v10 )
    {
      v13 = a1[3];
      if ( v11 < v13 && v29 <= v13 )
      {
        v14 = v8[3];
        v15 = (_DWORD *)((char *)a1 + v11);
        if ( (v14 & 2) != 0 )
        {
          v16 = *v15;
          if ( a3 < *v15 )
            return -1072365567;
          if ( (v14 & 1) != 0 )
          {
            if ( a3 - v16 >= v9 )
              return -1072365567;
            v12 = &v15[4 * (a3 - v16)];
            goto LABEL_16;
          }
          LODWORD(v26) = RtlpCompareActivationContextStringSectionEntryByPseudoKey;
          Key[0] = a3;
          v15 = (unsigned int *)bsearch(Key, v15, v9 | 0x1000000000LL, v26, v27);
        }
        else
        {
          v25 = 0;
          while ( *v15 != a3 )
          {
            ++v25;
            v15 += 4;
            if ( v25 >= v9 )
              goto LABEL_16;
          }
        }
        v12 = v15;
LABEL_16:
        if ( v12 )
        {
          v17 = v12[1];
          if ( v17 )
          {
            v18 = v12[2];
            v19 = a1[3];
            if ( v18 + v17 >= v18 && v17 < v19 && v18 + v17 <= v19 )
            {
              *a4 = (char *)a1 + v17;
              *a5 = v12[2];
              return 0;
            }
            DbgPrintEx(
              51,
              0,
              (int)"SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
              v17);
            return -1072365565;
          }
        }
        return -1072365567;
      }
    }
  }
  else
  {
    v11 = v8[2];
  }
  DbgPrintEx(
    51,
    0,
    (int)"SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context da"
         "ta (%lu bytes)\n",
    v11);
  return -1072365565;
}
