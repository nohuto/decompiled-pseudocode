/*
 * XREFs of _ResourceEntryBinarySearch@32 @ 0x4B306E16
 * Callers:
 *     _LdrpSearchResourceSection_U@20 @ 0x4B2BC6A0 (_LdrpSearchResourceSection_U@20.c)
 * Callees:
 *     _LdrpCompareResourceNamesWithValidation@24 @ 0x4B306D17 (_LdrpCompareResourceNamesWithValidation@24.c)
 */

char __fastcall ResourceEntryBinarySearch(
        int a1,
        int a2,
        unsigned __int16 a3,
        int a4,
        unsigned int a5,
        wchar_t *String1,
        unsigned int *a7,
        unsigned int *a8)
{
  unsigned __int16 v8; // bx
  unsigned int v9; // esi
  int *v11; // ecx
  int *v12; // eax
  char v13; // bl
  int v14; // eax
  unsigned __int16 v15; // ax
  unsigned int v16; // eax
  unsigned int v18; // edx
  int v19; // eax
  bool v20; // cc
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  unsigned int v24; // [esp+Ch] [ebp-18h]
  int v25; // [esp+10h] [ebp-14h]
  unsigned __int16 v26; // [esp+14h] [ebp-10h]
  int *v27; // [esp+18h] [ebp-Ch]
  int var1; // [esp+23h] [ebp-1h] BYREF

  v8 = a3;
  v9 = 0;
  v25 = a2;
  *a7 = 0;
  v11 = (int *)a5;
  *a8 = 0;
  v24 = a5 + 8 * (a3 - 1);
  if ( a5 > v24 )
  {
LABEL_12:
    v16 = 0;
LABEL_13:
    *a7 = v9;
    *a8 = v16;
    return 1;
  }
  else
  {
    while ( 1 )
    {
      v26 = v8 >> 1;
      if ( !(v8 >> 1) )
        break;
      v12 = &v11[2 * (v8 >> 1)];
      v27 = v12;
      v13 = v8 & 1;
      if ( !v13 )
      {
        v12 -= 2;
        v27 = v12;
      }
      v14 = LdrpCompareResourceNamesWithValidation(a1, a2, String1, a4, v12, &var1);
      if ( !(_BYTE)var1 )
        return 0;
      if ( !v14 )
      {
        v18 = (a1 & 0xFFFFFFFC) + v25;
        v19 = v27[1];
        if ( v19 >= 0 )
        {
          v16 = a4 + v19;
          if ( v16 <= v18 )
            goto LABEL_13;
          return 0;
        }
        v9 = (v19 & 0x7FFFFFFF) + a4;
        v20 = v9 <= v18;
        goto LABEL_23;
      }
      if ( v14 >= 0 )
      {
        v15 = v26;
        v11 = v27 + 2;
        a5 = (unsigned int)(v27 + 2);
      }
      else
      {
        v11 = (int *)a5;
        v24 = (unsigned int)(v27 - 2);
        v15 = v26;
        if ( !v13 )
          v15 = v26 - 1;
      }
      a2 = v25;
      v8 = v15;
      if ( (unsigned int)v11 > v24 )
        goto LABEL_12;
    }
    if ( !v8 )
      goto LABEL_12;
    v21 = LdrpCompareResourceNamesWithValidation(a1, a2, String1, a4, v11, &var1);
    if ( !(_BYTE)var1 )
      return 0;
    if ( v21 )
      goto LABEL_12;
    v22 = (a1 & 0xFFFFFFFC) + v25;
    v23 = *(_DWORD *)(a5 + 4);
    if ( v23 < 0 )
    {
      v9 = (v23 & 0x7FFFFFFF) + a4;
      v20 = v9 <= v22;
LABEL_23:
      if ( v20 )
      {
        v16 = 0;
        goto LABEL_13;
      }
      return 0;
    }
    v16 = a4 + v23;
    if ( v16 <= v22 )
      goto LABEL_13;
    return 0;
  }
}
