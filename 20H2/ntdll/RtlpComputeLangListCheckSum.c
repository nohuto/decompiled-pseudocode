/*
 * XREFs of RtlpComputeLangListCheckSum @ 0x18001532C
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180035CA0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1800102F0 (RtlCopyUnicodeString.c)
 *     RtlUpcaseUnicodeString @ 0x180015D20 (RtlUpcaseUnicodeString.c)
 *     NLS_UPCASE @ 0x180016160 (NLS_UPCASE.c)
 *     RtlIntegerToUnicodeString @ 0x1800164A0 (RtlIntegerToUnicodeString.c)
 *     RtlInitUnicodeStringEx @ 0x18001C270 (RtlInitUnicodeStringEx.c)
 *     RtlLCIDToCultureName @ 0x18003B020 (RtlLCIDToCultureName.c)
 *     __security_check_cookie @ 0x18008C340 (__security_check_cookie.c)
 *     memset @ 0x1800A4180 (memset.c)
 */

__int64 __fastcall RtlpComputeLangListCheckSum(__int64 a1)
{
  __int64 v2; // rbx
  NTSTATUS inited; // edi
  __int64 v4; // r15
  unsigned int v5; // r14d
  __int64 v6; // r8
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  __int128 *v10; // rcx
  __int64 v11; // rax
  unsigned int v12; // r10d
  wchar_t *Buffer; // r9
  wchar_t *v14; // r11
  int v15; // r10d
  __int64 v16; // r9
  LCID v18; // ecx
  __int64 Length; // r8
  unsigned __int8 *v20; // r9
  unsigned __int64 v21; // r10
  __int64 v22; // rcx
  __int64 v23; // rax
  int v24; // r8d
  int v25; // r8d
  int v26; // r8d
  int v27; // r8d
  int v28; // r8d
  int v29; // r8d
  _UNICODE_STRING String_8; // [rsp+28h] [rbp-E0h] BYREF
  __int16 v31; // [rsp+38h] [rbp-D0h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v33; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h]
  int v35; // [rsp+68h] [rbp-A0h]
  _BYTE v36[176]; // [rsp+78h] [rbp-90h] BYREF

  v2 = 0LL;
  memset(v36, 0, 0xAAuLL);
  inited = 0;
  String_8 = 0LL;
  if ( !a1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
    return 3221225485LL;
  v5 = 0;
  if ( !*(_WORD *)(a1 + 4) )
    goto LABEL_18;
  while ( 1 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v33 = 0LL;
    v7 = *(unsigned __int16 *)(v6 + 6LL * v5);
    v34 = 0LL;
    v35 = 0;
    if ( v7 )
      break;
LABEL_16:
    if ( ++v5 >= *(unsigned __int16 *)(a1 + 4) )
      goto LABEL_17;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v10 = (__int128 *)(*(_QWORD *)(*(_QWORD *)(v4 + 24) + 16LL) + 28LL * *(__int16 *)(v6 + 6LL * v5 + 4));
      goto LABEL_8;
    }
    if ( v9 != 1 )
      return (unsigned int)-1073741595;
    WORD3(v33) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  else
  {
    WORD2(v33) = *(_WORD *)(v6 + 6LL * v5 + 4);
  }
  v10 = &v33;
LABEL_8:
  v11 = *((__int16 *)v10 + 3);
  if ( (__int16)v11 > 0 )
  {
    inited = RtlInitUnicodeStringEx(
               &DestinationString,
               (PCWSTR)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 24LL)
                      + 2LL * *(__int16 *)(*(_QWORD *)(*(_QWORD *)(v4 + 32) + 16LL) + 2 * v11)));
    if ( inited < 0 )
      return (unsigned int)inited;
    *(_DWORD *)&String_8.Length = 11141120;
    String_8.Buffer = (wchar_t *)v36;
    RtlCopyUnicodeString(&String_8, &DestinationString);
LABEL_11:
    if ( !v2 )
    {
      v12 = 314159;
      Buffer = String_8.Buffer;
      v14 = &String_8.Buffer[(unsigned __int64)String_8.Length >> 1];
      while ( Buffer < v14 )
      {
        v31 = NLS_UPCASE(*Buffer);
        Buffer = (wchar_t *)(v16 + 2);
        v12 = HIBYTE(v31) + 37 * ((unsigned __int8)v31 + 37 * v15);
      }
      v2 = v12;
      goto LABEL_16;
    }
    RtlUpcaseUnicodeString(&String_8, &String_8, 0);
    Length = String_8.Length;
    v20 = (unsigned __int8 *)String_8.Buffer;
    if ( String_8.Length >= 8uLL )
    {
      v21 = (unsigned __int64)String_8.Length >> 3;
      Length = String_8.Length - 8 * v21;
      do
      {
        v22 = v20[6]
            + 37 * (v20[5] + 37 * (v20[4] + 37 * (v20[3] + 37 * (v20[2] + 37 * (v20[1] + 37 * (*v20 + 37 * v2))))));
        v23 = v20[7];
        v20 += 8;
        v2 = v23 + 37 * v22;
        --v21;
      }
      while ( v21 );
    }
    if ( (unsigned __int64)(Length - 1) > 6 )
      goto LABEL_28;
    v24 = Length - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        v26 = v25 - 1;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            v28 = v27 - 1;
            if ( v28 )
            {
              v29 = v28 - 1;
              if ( v29 )
              {
                if ( v29 != 1 )
                  goto LABEL_28;
                LODWORD(v2) = *v20++ + 37 * v2;
              }
              LODWORD(v2) = *v20++ + 37 * v2;
            }
            LODWORD(v2) = *v20++ + 37 * v2;
          }
          LODWORD(v2) = *v20++ + 37 * v2;
        }
        LODWORD(v2) = *v20++ + 37 * v2;
      }
      LODWORD(v2) = *v20++ + 37 * v2;
    }
    LODWORD(v2) = *v20 + 37 * v2;
LABEL_28:
    v2 = (unsigned int)v2;
    goto LABEL_16;
  }
  v18 = *((unsigned __int16 *)v10 + 2);
  String_8.Buffer = (wchar_t *)v36;
  *(_DWORD *)&String_8.Length = 11141120;
  if ( RtlLCIDToCultureName(v18, &String_8) )
    goto LABEL_11;
  inited = -1073741595;
LABEL_17:
  if ( inited < 0 )
    return (unsigned int)inited;
LABEL_18:
  *(_DWORD *)&String_8.Length = 1310720;
  String_8.Buffer = (wchar_t *)(a1 + 44);
  return (unsigned int)RtlIntegerToUnicodeString(v2, 0x10u, &String_8);
}
