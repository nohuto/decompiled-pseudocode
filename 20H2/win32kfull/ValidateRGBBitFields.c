/*
 * XREFs of ValidateRGBBitFields @ 0x1C006E130
 * Callers:
 *     ValidateHTSI @ 0x1C006DEE0 (ValidateHTSI.c)
 *     GetDstBFInfo @ 0x1C0260FF8 (GetDstBFInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateRGBBitFields(__int128 *a1)
{
  __int128 v1; // xmm1
  __int64 v2; // rdx
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rax
  int v6; // r10d
  __int64 i; // rcx
  unsigned int v8; // eax
  char v9; // r8
  char v10; // r9
  bool v11; // cf
  __int64 result; // rax
  __int64 v13; // xmm1_8
  int v14; // r8d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int128 v17; // [rsp+0h] [rbp-20h]
  __int64 v18; // [rsp+10h] [rbp-10h]

  v1 = *a1;
  v2 = 0LL;
  v4 = *(_QWORD *)a1;
  v18 = *((_QWORD *)a1 + 2);
  v5 = v4 >> 8;
  v17 = v1;
  if ( !(_BYTE)v5 )
    return 0LL;
  if ( (unsigned __int8)v5 > 3u )
  {
    if ( (_BYTE)v5 == 4 )
      goto LABEL_30;
    if ( (unsigned __int8)v5 <= 6u )
    {
LABEL_5:
      v6 = v18 | HIDWORD(v17) | DWORD2(v17);
      if ( v6 && ((HIDWORD(v17) | DWORD2(v17)) & (unsigned int)v18) == 0 && (HIDWORD(v17) & DWORD2(v17)) == 0 )
      {
        for ( i = 0LL; i < 3; ++i )
        {
          v8 = *((_DWORD *)&v17 + i + 2);
          v9 = 0;
          v10 = 0;
          if ( v8 )
          {
            while ( (v8 & 1) == 0 )
            {
              v8 >>= 1;
              ++v10;
            }
            do
            {
              ++v9;
              v8 >>= 1;
            }
            while ( (v8 & 1) != 0 );
            if ( v8 )
              return 0LL;
          }
          *((_BYTE *)&v17 + i + 2) = v10;
          *((_BYTE *)&v17 + i + 5) = v9;
        }
        if ( v6 == 0xFFFFFF && *(_WORD *)((char *)&v17 + 5) == 2056 && BYTE7(v17) == 8 )
          LOBYTE(v17) = v17 | 1;
        v11 = HIDWORD(v17) < DWORD2(v17);
        if ( HIDWORD(v17) > DWORD2(v17) )
        {
          if ( DWORD2(v17) < (unsigned int)v18 )
          {
            LOBYTE(v2) = HIDWORD(v17) >= (unsigned int)v18;
LABEL_23:
            HIDWORD(v18) = SrcOrderTable[v2];
            goto LABEL_24;
          }
          v11 = HIDWORD(v17) < DWORD2(v17);
        }
        if ( v11 && HIDWORD(v17) < (unsigned int)v18 )
          v2 = 3LL - (DWORD2(v17) < (unsigned int)v18);
        else
          v2 = (DWORD2(v17) < HIDWORD(v17)) + 4LL;
        goto LABEL_23;
      }
      return 0LL;
    }
    if ( (_BYTE)v5 == 0xFC || (_BYTE)v5 == 0xFD )
    {
LABEL_30:
      WORD5(v17) = 0;
      HIWORD(v17) = 0;
      WORD1(v18) = 0;
      goto LABEL_5;
    }
    return 0LL;
  }
  WORD3(v17) = 2056;
  v14 = 255;
  BYTE5(v17) = 8;
  HIDWORD(v18) = SrcOrderTable[BYTE4(v18)];
  v15 = 0LL;
  do
  {
    v16 = *((unsigned __int8 *)&v18 + v15++ + 5);
    *((_DWORD *)&v17 + v16 + 2) = v14;
    *((_BYTE *)&v17 + v16 + 2) = v2;
    LOBYTE(v2) = v2 + 8;
    v14 <<= 8;
  }
  while ( v15 < 3 );
LABEL_24:
  result = 1LL;
  v13 = v18;
  *a1 = v17;
  *((_QWORD *)a1 + 2) = v13;
  return result;
}
