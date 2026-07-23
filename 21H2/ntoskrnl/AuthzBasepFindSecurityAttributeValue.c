/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x1402F56EC
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x1402F54F4 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405C14C4 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x1406C5E64 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x1402F2400 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x1403D2B50 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  char v3; // bl
  __int64 *v4; // r12
  __int64 *v5; // rsi
  unsigned __int64 v9; // r15
  _QWORD *v10; // rsi
  const UNICODE_STRING *v12; // rdx
  const UNICODE_STRING *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  UNICODE_STRING v16; // [rsp+20h] [rbp-20h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  v3 = 0;
  v4 = (__int64 *)(a1 + 72);
  v5 = *(__int64 **)(a1 + 72);
  v9 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  while ( v5 != v4 )
  {
    v9 = (unsigned __int64)v5;
    if ( !a3 )
      goto LABEL_18;
    if ( a3 <= 2u )
      goto LABEL_25;
    switch ( a3 )
    {
      case 3u:
        v12 = (const UNICODE_STRING *)(v5 + 5);
        v16.Length = *(_WORD *)a2;
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 8);
        goto LABEL_17;
      case 4u:
        v16.Length = *(_WORD *)(a2 + 8);
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 16);
        LOWORD(v17) = *((_WORD *)v5 + 24);
        WORD1(v17) = v17;
        *((_QWORD *)&v17 + 1) = v5[7];
        if ( *(_QWORD *)a2 != v5[5] )
          break;
        v12 = (const UNICODE_STRING *)&v17;
LABEL_17:
        if ( AuthzBasepEqualUnicodeString(&v16, v12) )
          goto LABEL_24;
        break;
      case 5u:
        goto LABEL_48;
      case 6u:
LABEL_25:
        if ( a2 == v5[5] )
          v3 = 1;
        break;
      case 0x10u:
LABEL_48:
        v14 = *(_DWORD *)(a2 + 8);
        if ( v14 == *((_DWORD *)v5 + 12) && !memcmp(*(const void **)a2, (const void *)v5[5], v14) )
LABEL_24:
          v3 = 1;
        break;
    }
LABEL_18:
    v5 = (__int64 *)*v5;
    if ( v3 )
      break;
  }
  v10 = *(_QWORD **)(a1 + 96);
  while ( 2 )
  {
    if ( !v3 && v10 != (_QWORD *)(a1 + 96) )
    {
      v9 = (unsigned __int64)(v10 - 2);
      if ( (v10[2] & 1) != 0 || !a3 )
        goto LABEL_12;
      if ( a3 <= 2u )
        goto LABEL_10;
      if ( a3 == 3 )
      {
        v13 = (const UNICODE_STRING *)(v9 + 40);
        v16.Length = *(_WORD *)a2;
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 8);
      }
      else
      {
        if ( a3 != 4 )
        {
          switch ( a3 )
          {
            case 5u:
              goto LABEL_49;
            case 6u:
LABEL_10:
              if ( a2 == *(_QWORD *)(v9 + 40) )
                v3 = 1;
              goto LABEL_12;
            case 0x10u:
LABEL_49:
              v15 = *(_DWORD *)(a2 + 8);
              if ( v15 == *(_DWORD *)(v9 + 48) && !memcmp(*(const void **)a2, *(const void **)(v9 + 40), v15) )
                goto LABEL_23;
              break;
          }
          goto LABEL_12;
        }
        v16.Length = *(_WORD *)(a2 + 8);
        v16.MaximumLength = v16.Length;
        v16.Buffer = *(wchar_t **)(a2 + 16);
        LOWORD(v17) = *(_WORD *)(v9 + 48);
        WORD1(v17) = v17;
        *((_QWORD *)&v17 + 1) = *(_QWORD *)(v9 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v9 + 40) )
          goto LABEL_12;
        v13 = (const UNICODE_STRING *)&v17;
      }
      if ( AuthzBasepEqualUnicodeString(&v16, v13) )
LABEL_23:
        v3 = 1;
LABEL_12:
      v10 = (_QWORD *)*v10;
      continue;
    }
    return v9 & -(__int64)(v3 != 0);
  }
}
