/*
 * XREFs of _LdrpFindLoadedDllByNameLockHeld@20 @ 0x4B2CDF40
 * Callers:
 *     _LdrpFastpthReloadedDll@16 @ 0x4B2CE2E0 (_LdrpFastpthReloadedDll@16.c)
 *     _LdrpLoadKnownDll@4 @ 0x4B2CEF5D (_LdrpLoadKnownDll@4.c)
 *     _LdrpMapDllWithSectionHandle@8 @ 0x4B2D1302 (_LdrpMapDllWithSectionHandle@8.c)
 *     _LdrpFindExistingModule@20 @ 0x4B2DE476 (_LdrpFindExistingModule@20.c)
 * Callees:
 *     _RtlEqualUnicodeString@12 @ 0x4B2D1250 (_RtlEqualUnicodeString@12.c)
 */

unsigned int __fastcall LdrpFindLoadedDllByNameLockHeld(
        unsigned __int16 *a1,
        _UNICODE_STRING *a2,
        char a3,
        int **a4,
        int a5)
{
  int v6; // ecx
  int *v7; // eax
  BOOLEAN v8; // bl
  int *v9; // edi
  int *v10; // esi
  int v11; // ecx
  unsigned __int16 *v12; // eax
  unsigned __int16 *v13; // edx
  int v14; // ecx
  unsigned int v15; // edi
  unsigned int v16; // ebx
  _DWORD *v17; // eax
  __int16 v19; // cx
  __int16 v20; // cx
  int *v21; // [esp+8h] [ebp-1Ch]
  unsigned __int16 *v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]
  int *v25; // [esp+18h] [ebp-Ch]
  char *v26; // [esp+1Ch] [ebp-8h]

  v6 = a5;
  v22 = a1;
  v7 = &LdrpHashTable[2 * (a5 & 0x1F)];
  v8 = 0;
  v9 = (int *)*v7;
  v25 = (int *)*v7;
  if ( (int *)*v7 == v7 )
    return v8 != 0 ? 0 : 0xC0000135;
  while ( 2 )
  {
    v10 = v9 - 15;
    v21 = v9 - 15;
    if ( v6 != v9[21] || (a3 & 8) != 0 && (v10[13] & 1) == 0 )
      goto LABEL_28;
    if ( a2 )
    {
      v8 = RtlEqualUnicodeString(a2, (PUNICODE_STRING)(v10 + 9), 1u);
      if ( !v8 )
      {
        v7 = &LdrpHashTable[2 * (a5 & 0x1F)];
        goto LABEL_28;
      }
      goto LABEL_13;
    }
    if ( (v10[13] & 0x10000000) != 0 )
      goto LABEL_32;
    v11 = *a1;
    if ( v11 != *((unsigned __int16 *)v10 + 22) )
      goto LABEL_42;
    v12 = (unsigned __int16 *)*((_DWORD *)a1 + 1);
    v13 = (unsigned __int16 *)((char *)v12 + v11);
    v26 = (char *)v12 + v11;
    if ( v12 >= (unsigned __int16 *)((char *)v12 + v11) )
    {
LABEL_12:
      v8 = 1;
LABEL_13:
      v17 = (_DWORD *)v10[20];
      if ( v17[3] != -1 && (*(_BYTE *)(*v17 - 32) & 0x20) == 0 )
        _InterlockedIncrement(v10 + 39);
      *a4 = v10;
      return v8 != 0 ? 0 : 0xC0000135;
    }
    v14 = v10[12] - (_DWORD)v12;
    v23 = v14;
    while ( 1 )
    {
      v15 = *v12;
      v16 = *(unsigned __int16 *)((char *)v12 + v14);
      if ( (_WORD)v15 != (_WORD)v16 )
        break;
LABEL_10:
      if ( ++v12 >= v13 )
      {
        v10 = v21;
        goto LABEL_12;
      }
    }
    if ( v15 < 0x61 )
      goto LABEL_19;
    if ( v15 > 0x7A )
    {
      if ( !Nls844UnicodeUpcaseTable || (unsigned __int16)v15 < 0xC0u )
        goto LABEL_19;
      v13 = (unsigned __int16 *)v26;
      v20 = v15
          + *(_WORD *)(Nls844UnicodeUpcaseTable
                     + 2
                     * ((v15 & 0xF)
                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                            + 2
                                            * (((unsigned __int8)v15 >> 4)
                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v15 >> 8))))));
    }
    else
    {
      v20 = v15 - 32;
    }
    LOWORD(v15) = v20;
LABEL_19:
    if ( v16 < 0x61 )
      goto LABEL_27;
    if ( v16 <= 0x7A )
    {
      v19 = v16 - 32;
      goto LABEL_22;
    }
    if ( Nls844UnicodeUpcaseTable && (unsigned __int16)v16 >= 0xC0u )
    {
      v13 = (unsigned __int16 *)v26;
      v19 = v16
          + *(_WORD *)(Nls844UnicodeUpcaseTable
                     + 2
                     * ((v16 & 0xF)
                      + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable
                                            + 2
                                            * (((unsigned __int8)v16 >> 4)
                                             + *(unsigned __int16 *)(Nls844UnicodeUpcaseTable + 2 * (v16 >> 8))))));
    }
    else
    {
LABEL_27:
      v19 = v16;
    }
LABEL_22:
    if ( (_WORD)v15 == v19 )
    {
      v14 = v23;
      goto LABEL_10;
    }
    v9 = v25;
LABEL_42:
    v7 = &LdrpHashTable[2 * (a5 & 0x1F)];
LABEL_32:
    v8 = 0;
LABEL_28:
    v9 = (int *)*v9;
    v25 = v9;
    if ( v9 != v7 )
    {
      v6 = a5;
      a1 = v22;
      continue;
    }
    return v8 != 0 ? 0 : 0xC0000135;
  }
}
