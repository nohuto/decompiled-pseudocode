/*
 * XREFs of AuthzBasepFindSecurityAttributeValue @ 0x140268DC0
 * Callers:
 *     AuthzBasepAddSecurityAttributeValues @ 0x140268674 (AuthzBasepAddSecurityAttributeValues.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1405BBE94 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepCompareSecurityAttribute @ 0x1406E8B40 (AuthzBasepCompareSecurityAttribute.c)
 * Callees:
 *     AuthzBasepEqualUnicodeString @ 0x140269168 (AuthzBasepEqualUnicodeString.c)
 *     memcmp @ 0x1403CF3E0 (memcmp.c)
 */

__int64 __fastcall AuthzBasepFindSecurityAttributeValue(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  bool v3; // bl
  __int64 *v4; // r12
  __int64 *v5; // rsi
  unsigned __int64 v9; // r15
  _QWORD *v10; // rsi
  __int128 *v12; // rdx
  __int128 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF
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
      goto LABEL_17;
    if ( a3 <= 2u )
      goto LABEL_24;
    switch ( a3 )
    {
      case 3u:
        v12 = (__int128 *)(v5 + 5);
        LOWORD(v16) = *(_WORD *)a2;
        WORD1(v16) = v16;
        *((_QWORD *)&v16 + 1) = *(_QWORD *)(a2 + 8);
        goto LABEL_16;
      case 4u:
        LOWORD(v16) = *(_WORD *)(a2 + 8);
        WORD1(v16) = v16;
        *((_QWORD *)&v16 + 1) = *(_QWORD *)(a2 + 16);
        LOWORD(v17) = *((_WORD *)v5 + 24);
        WORD1(v17) = v17;
        *((_QWORD *)&v17 + 1) = v5[7];
        if ( *(_QWORD *)a2 != v5[5] )
          break;
        v12 = &v17;
LABEL_16:
        if ( (unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v12) )
          goto LABEL_23;
        break;
      case 5u:
        goto LABEL_47;
      case 6u:
LABEL_24:
        if ( a2 == v5[5] )
          v3 = 1;
        break;
      case 0x10u:
LABEL_47:
        v14 = *(_DWORD *)(a2 + 8);
        if ( v14 == *((_DWORD *)v5 + 12) && !memcmp(*(const void **)a2, (const void *)v5[5], v14) )
LABEL_23:
          v3 = 1;
        break;
    }
LABEL_17:
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
        goto LABEL_11;
      if ( a3 <= 2u )
        goto LABEL_10;
      if ( a3 == 3 )
      {
        v13 = (__int128 *)(v9 + 40);
        LOWORD(v16) = *(_WORD *)a2;
        WORD1(v16) = v16;
        *((_QWORD *)&v16 + 1) = *(_QWORD *)(a2 + 8);
      }
      else
      {
        if ( a3 != 4 )
        {
          if ( a3 != 5 )
          {
            if ( a3 == 6 )
            {
LABEL_10:
              v3 = a2 == *(_QWORD *)(v9 + 40);
LABEL_11:
              v10 = (_QWORD *)*v10;
              continue;
            }
            if ( a3 != 16 )
              goto LABEL_11;
          }
          v15 = *(_DWORD *)(a2 + 8);
          if ( v15 != *(_DWORD *)(v9 + 48) || memcmp(*(const void **)a2, *(const void **)(v9 + 40), v15) )
            goto LABEL_11;
LABEL_22:
          v3 = 1;
          goto LABEL_11;
        }
        LOWORD(v16) = *(_WORD *)(a2 + 8);
        WORD1(v16) = v16;
        *((_QWORD *)&v16 + 1) = *(_QWORD *)(a2 + 16);
        LOWORD(v17) = *(_WORD *)(v9 + 48);
        WORD1(v17) = v17;
        *((_QWORD *)&v17 + 1) = *(_QWORD *)(v9 + 56);
        if ( *(_QWORD *)a2 != *(_QWORD *)(v9 + 40) )
          goto LABEL_11;
        v13 = &v17;
      }
      if ( !(unsigned __int8)AuthzBasepEqualUnicodeString(&v16, v13) )
        goto LABEL_11;
      goto LABEL_22;
    }
    return v9 & -(__int64)v3;
  }
}
