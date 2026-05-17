/*
 * XREFs of RtlpIsDosDeviceName_Ustr @ 0x18001BE90
 * Callers:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlSetCurrentDirectory_U @ 0x18005D030 (RtlSetCurrentDirectory_U.c)
 *     RtlIsDosDeviceName_U @ 0x180077150 (RtlIsDosDeviceName_U.c)
 * Callees:
 *     RtlDetermineDosPathNameType_Ustr @ 0x18001C1AC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlEqualUnicodeString @ 0x180020D10 (RtlEqualUnicodeString.c)
 *     iswdigit @ 0x18008FC20 (iswdigit.c)
 */

__int64 __fastcall RtlpIsDosDeviceName_Ustr(__int64 a1)
{
  __int32 v1; // ebp
  __int16 v2; // di
  int v3; // eax
  __m128i *v4; // r11
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned __int16 v7; // dx
  _WORD *v8; // rbx
  __int16 i; // cx
  __int16 *v10; // rax
  __int16 v11; // cx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  unsigned __int16 v14; // dx
  unsigned __int16 v15; // ax
  _WORD *v16; // rcx
  _WORD *v17; // rdx
  _WORD *v18; // rax
  __int64 v19; // rcx
  int v20; // esi
  __int16 v21; // di
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  void *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r8
  __int64 v30; // r8
  __m128i v31; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  v2 = 0;
  v3 = RtlDetermineDosPathNameType_Ustr(a1);
  if ( (v3 >= 6 || v3 < 2) && v3 >= 0 && (v3 == 6 || v3 <= 1) )
    return 0LL;
  v5 = (unsigned int)_mm_cvtsi128_si32(*v4);
  v31 = *v4;
  v6 = (unsigned __int16)v5;
  v7 = (unsigned __int16)v5 >> 1;
  if ( !((unsigned __int16)v5 >> 1) )
    return 0LL;
  v8 = (_WORD *)v31.m128i_i64[1];
  if ( *(_WORD *)(v31.m128i_i64[1] + 2LL * v7 - 2) == 58 )
  {
    v5 = (unsigned int)(unsigned __int16)v5 - 2;
    --v7;
    v2 = 1;
  }
  if ( !v7 )
    return 0LL;
  for ( i = *(_WORD *)(v31.m128i_i64[1] + 2LL * v7 - 2); i == 46 || i == 32; i = *(_WORD *)(v31.m128i_i64[1]
                                                                                          + 2LL * v7
                                                                                          - 2) )
  {
    LOWORD(v5) = v5 - 2;
    ++v2;
    if ( !--v7 )
      break;
  }
  if ( v7 )
  {
    v10 = (__int16 *)(v31.m128i_i64[1] + 2 * (v7 - 1LL));
    if ( (unsigned __int64)v10 < v31.m128i_i64[1] )
    {
LABEL_16:
      v5 = 43013LL;
    }
    else
    {
      while ( 1 )
      {
        v11 = *v10;
        if ( *v10 == 92 || v11 == 47 || v11 == 58 && v10 == (__int16 *)(v31.m128i_i64[1] + 2) )
          break;
        if ( (unsigned __int64)--v10 < v31.m128i_i64[1] )
          goto LABEL_16;
      }
      v12 = v10 + 1;
      if ( (unsigned __int64)v12 >= v31.m128i_i64[1] + (v6 & 0xFFFFFFFFFFFFFFFEuLL) )
        return 0LL;
      v13 = (*v12 | 0x20) - 97;
      if ( v13 > 0xFu )
        return 0LL;
      v5 = 43013LL;
      if ( !_bittest((const int *)&v5, v13) )
        return 0LL;
      v1 = (_DWORD)v12 - v31.m128i_i32[2];
      v14 = v6 + v31.m128i_i16[4] - (_WORD)v12;
      v31.m128i_i64[1] = (__int64)v12;
      v8 = v12;
      v7 = (v14 >> 1) - v2;
    }
    v15 = (*v8 | 0x20) - 97;
    if ( v15 > 0xFu || !_bittest((const int *)&v5, v15) )
      return 0LL;
  }
  v16 = v8;
  v17 = &v8[v7];
  if ( v8 < v17 )
  {
    do
    {
      if ( *v16 == 46 )
        break;
      if ( *v16 == 58 )
        break;
      ++v16;
    }
    while ( v16 < v17 );
    if ( v16 > v8 )
    {
      do
      {
        v18 = v16 - 1;
        if ( *(v16 - 1) != 32 )
          break;
        --v16;
      }
      while ( v18 > v8 );
    }
  }
  v19 = v16 - v8;
  v20 = (unsigned __int16)v19;
  v21 = 2 * v19;
  v31.m128i_i16[0] = 2 * v19;
  if ( (unsigned __int16)v19 == 5 )
    return 0LL;
  v22 = (unsigned __int16)v19 - 3;
  if ( v20 == 3 )
  {
    LOBYTE(v5) = 1;
    if ( !(unsigned __int8)RtlEqualUnicodeString(&v31, &RtlpDosPRNDevice, v5) )
    {
      LOBYTE(v27) = 1;
      if ( !(unsigned __int8)RtlEqualUnicodeString(&v31, &RtlpDosAUXDevice, v27) )
      {
        LOBYTE(v28) = 1;
        if ( !(unsigned __int8)RtlEqualUnicodeString(&v31, &RtlpDosNULDevice, v28) )
        {
          LOBYTE(v29) = 1;
          if ( !(unsigned __int8)RtlEqualUnicodeString(&v31, &RtlpDosCONDevice, v29) )
            return 0LL;
        }
      }
    }
    return (v1 << 16) | (unsigned int)(2 * v20);
  }
  v23 = v22 - 1;
  if ( v23 )
  {
    v24 = v23 - 2;
    if ( v24 )
    {
      if ( v24 != 1 )
        return 0LL;
      v26 = &RtlpDosCONOUTDevice;
    }
    else
    {
      v26 = &RtlpDosCONINDevice;
    }
  }
  else
  {
    if ( !iswdigit(v8[3]) || v8[3] == 48 )
      return 0LL;
    LOBYTE(v30) = 1;
    v31.m128i_i16[0] = v21 - 2;
    if ( (unsigned __int8)RtlEqualUnicodeString(&v31, &RtlpDosLPTDevice, v30) )
      return (v1 << 16) | (unsigned int)(2 * v20);
    v26 = &RtlpDosCOMDevice;
  }
  LOBYTE(v5) = 1;
  if ( !(unsigned __int8)RtlEqualUnicodeString(&v31, v26, v5) )
    return 0LL;
  return (v1 << 16) | (unsigned int)(2 * v20);
}
