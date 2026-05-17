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
  size_t v9; // ebx
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
  size_t v25; // ecx
  unsigned int v27; // [esp+18h] [ebp-2Ch]
  char *v28; // [esp+18h] [ebp-2Ch]
  unsigned int v29; // [esp+1Ch] [ebp-28h]
  unsigned int v30; // [esp+20h] [ebp-24h]
  char *v31; // [esp+24h] [ebp-20h]
  int v32; // [esp+28h] [ebp-1Ch]
  unsigned int v33; // [esp+28h] [ebp-1Ch]
  unsigned int Key[4]; // [esp+2Ch] [ebp-18h] BYREF

  v6 = a1[3];
  v30 = v6;
  if ( v6 < 0x20 || a1[1] < 0x20u )
  {
    DbgPrintEx(
      51,
      0,
      "SXS/RTL: Activation context data at %p too small; TotalSize = %lu; HeaderSize = %lu\n",
      a1,
      v6,
      a1[1]);
    return -1072365565;
  }
  if ( !a2 )
  {
    v7 = a1[4];
    if ( !v7 )
      return -1072365567;
LABEL_5:
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
      v27 = v10 + v11;
      v12 = 0;
      if ( v10 + v11 >= v10 )
      {
        v13 = a1[3];
        if ( v11 < v13 && v27 <= v13 )
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
            Key[0] = a3;
            v15 = (unsigned int *)bsearch(
                                    Key,
                                    v15,
                                    v9,
                                    0x10u,
                                    RtlpCompareActivationContextStringSectionEntryByPseudoKey);
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
                "SXS/RTL: Section found (offset %ld; length %lu) extends past end of activation context data (%lu bytes)\n",
                v17,
                v18,
                a1[3]);
              return -1072365565;
            }
          }
          return -1072365567;
        }
        goto LABEL_44;
      }
    }
    else
    {
      v11 = v8[2];
    }
    v13 = v30;
LABEL_44:
    DbgPrintEx(
      51,
      0,
      "SXS/RTL: TOC entry array (offset: %ld; count = %lu; entry size = %u) is outside bounds of activation context data (%lu bytes)\n",
      v11,
      v9,
      16,
      v13);
    return -1072365565;
  }
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
      "SXS/RTL: Extended TOC offset (%ld) is outside bounds of activation context data (%lu bytes)\n",
      v23,
      v6);
  }
  else
  {
    v29 = *(_DWORD *)((char *)a1 + v23 + 4);
    v32 = *(_DWORD *)((char *)a1 + v23 + 8);
    if ( (unsigned __int8)ARRAY_FITS(v32, v29, 24, v6) )
    {
      v24 = (char *)a1 + v32;
      v33 = 0;
      v28 = v24;
      if ( !v29 )
        return -1072365567;
      v31 = v24;
      while ( memcmp(a2, v24, 0x10u) )
      {
        v24 = v31 + 24;
        ++v33;
        v31 += 24;
        if ( v33 >= v29 )
          return -1072365567;
      }
      v7 = *(_DWORD *)&v28[24 * v33 + 16];
      if ( (unsigned __int8)ARRAY_FITS(v7, 1, 16, a1[3]) )
        goto LABEL_5;
      DbgPrintEx(
        51,
        0,
        "SXS/RTL: Extended TOC section TOC %d (offset: %ld, size: %u) is outside activation context data bounds (%lu bytes)\n",
        v33,
        v7,
        16,
        v30);
    }
    else
    {
      DbgPrintEx(
        51,
        0,
        "SXS/RTL: Extended TOC entry array (starting at offset %ld; count = %lu; entry size = %u) is outside bounds of ac"
        "tivation context data (%lu bytes)\n",
        v32,
        v29,
        24,
        v6);
    }
  }
  return -1072365565;
}
