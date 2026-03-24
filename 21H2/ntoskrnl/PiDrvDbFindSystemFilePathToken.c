/*
 * XREFs of PiDrvDbFindSystemFilePathToken @ 0x1408B5DE4
 * Callers:
 *     PiDrvDbResolveSystemFilePath @ 0x1408B7ABC (PiDrvDbResolveSystemFilePath.c)
 * Callees:
 *     iswalnum @ 0x1403D27F0 (iswalnum.c)
 *     iswalpha @ 0x1403D280C (iswalpha.c)
 *     RtlFindUnicodeSubstring @ 0x1405ED870 (RtlFindUnicodeSubstring.c)
 */

char *__fastcall PiDrvDbFindSystemFilePathToken(__m128i *a1, unsigned __int16 *a2)
{
  __int64 v2; // rbx
  _WORD *v5; // rsi
  __int16 v6; // r15
  char *UnicodeSubstring; // rax
  char *v8; // rdi
  __int64 v9; // r14
  wint_t v10; // r12
  wint_t v11; // cx
  _WORD *v12; // r8
  __int16 v13; // ax
  __m128i v15; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v15 = *a1;
  v5 = (_WORD *)_mm_srli_si128(v15, 8).m128i_u64[0];
  v15.m128i_i64[1] = (__int64)v5;
  if ( *v5 )
  {
    v6 = v15.m128i_i16[0];
    do
    {
      UnicodeSubstring = RtlFindUnicodeSubstring((unsigned __int16 *)&v15, a2, 1);
      v8 = UnicodeSubstring;
      if ( !UnicodeSubstring )
        return (char *)v2;
      v9 = *a2 >> 1;
      if ( (unsigned __int64)UnicodeSubstring > a1->m128i_i64[1] )
      {
        v10 = *((_WORD *)UnicodeSubstring - 1);
        v11 = **((_WORD **)a2 + 1);
        if ( v11 == 92 )
        {
          if ( iswalnum(v10) || v10 == 92 )
            goto LABEL_17;
        }
        else if ( iswalpha(v11) && iswalnum(v10) )
        {
          goto LABEL_17;
        }
      }
      if ( v6 == *a2 && !*(_WORD *)&v8[2 * v9] )
        return v8;
      v12 = (_WORD *)*((_QWORD *)a2 + 1);
      v13 = v12[(unsigned int)(v9 - 1)];
      if ( v13 == 92 || *(_WORD *)&v8[2 * v9] == 92 || v13 == 37 && *v12 == 37 )
        return v8;
LABEL_17:
      v6 -= *a2;
      v5 += v9;
      v15.m128i_i64[1] = (__int64)v5;
      v15.m128i_i16[0] = v6;
    }
    while ( *v5 );
  }
  return (char *)v2;
}
