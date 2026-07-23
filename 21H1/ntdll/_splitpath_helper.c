/*
 * XREFs of _splitpath_helper @ 0x4B2F721C
 * Callers:
 *     __splitpath @ 0x4B2F71D0 (__splitpath.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     _strncpy_s @ 0x4B300210 (_strncpy_s.c)
 */

int __cdecl splitpath_helper(
        _BYTE *a1,
        char *Destination,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        char *a6,
        unsigned int a7,
        char *a8,
        unsigned int a9)
{
  _BYTE *v9; // edi
  int v10; // ebx
  char *v11; // edx
  char *v12; // eax
  _BYTE *v13; // esi
  int v14; // eax
  char v15; // al
  _BYTE *v16; // ecx
  unsigned int v17; // ebx
  _BYTE *v18; // esi
  const char *v19; // esi
  const char *v20; // esi
  rsize_t v22; // [esp-Ch] [ebp-20h]
  rsize_t v23; // [esp-Ch] [ebp-20h]
  rsize_t v24; // [esp-Ch] [ebp-20h]
  rsize_t v25; // [esp-Ch] [ebp-20h]
  rsize_t v26; // [esp-Ch] [ebp-20h]
  rsize_t v28; // [esp+0h] [ebp-14h]
  _BYTE *v29; // [esp+Ch] [ebp-8h]

  v9 = a1;
  v10 = 0;
  if ( !a1 )
    goto LABEL_4;
  if ( Destination )
  {
    if ( !a3 )
      goto LABEL_4;
  }
  else if ( a3 )
  {
LABEL_4:
    v11 = a6;
LABEL_5:
    v10 = 1;
LABEL_6:
    v12 = a8;
    goto LABEL_60;
  }
  if ( a4 )
  {
    if ( !a5 )
      goto LABEL_4;
  }
  else if ( a5 )
  {
    goto LABEL_4;
  }
  v11 = a6;
  if ( a6 )
  {
    if ( !a7 )
      goto LABEL_5;
  }
  else if ( a7 )
  {
    goto LABEL_5;
  }
  if ( a8 )
  {
    if ( !a9 )
      goto LABEL_5;
  }
  else if ( a9 )
  {
    goto LABEL_5;
  }
  v13 = a1;
  v14 = 1;
  do
  {
    if ( !*v13 )
      break;
    ++v13;
    --v14;
  }
  while ( v14 );
  if ( *v13 == 58 )
  {
    if ( Destination )
    {
      if ( a3 < 3 )
        goto LABEL_6;
      HIDWORD(v22) = a1;
      LODWORD(v22) = -1;
      strncpy_s(Destination, v22, (const char *)2, v28);
      v11 = a6;
    }
    v9 = v13 + 1;
  }
  else if ( Destination )
  {
    *Destination = 0;
  }
  v15 = *v9;
  v16 = 0;
  v17 = 0;
  v18 = v9;
  if ( !*v9 )
    goto LABEL_42;
  do
  {
    if ( v15 == 47 || v15 == 92 )
    {
      v16 = v18 + 1;
    }
    else if ( v15 == 46 )
    {
      v17 = (unsigned int)v18;
    }
    v15 = *++v18;
  }
  while ( *v18 );
  v29 = v16;
  if ( v16 )
  {
    if ( a4 )
    {
      if ( a5 <= v16 - v9 )
        goto LABEL_58;
      HIDWORD(v23) = v9;
      LODWORD(v23) = -1;
      strncpy_s(a4, v23, (const char *)(v16 - v9), v28);
      v16 = v29;
    }
    v9 = v16;
  }
  else
  {
LABEL_42:
    if ( a4 )
      *a4 = 0;
  }
  if ( !v17 || v17 < (unsigned int)v9 )
  {
    v11 = a6;
    if ( a6 )
    {
      v20 = (const char *)(v18 - v9);
      if ( a7 <= (unsigned int)v20 )
        goto LABEL_58;
      HIDWORD(v26) = v9;
      LODWORD(v26) = -1;
      strncpy_s(a6, v26, v20, v28);
    }
    if ( a8 )
      *a8 = 0;
    return 0;
  }
  v11 = a6;
  if ( a6 )
  {
    if ( a7 > v17 - (unsigned int)v9 )
    {
      HIDWORD(v24) = v9;
      LODWORD(v24) = -1;
      strncpy_s(a6, v24, (const char *)(v17 - (_DWORD)v9), v28);
      v11 = a6;
      goto LABEL_49;
    }
LABEL_58:
    v12 = a8;
    goto LABEL_59;
  }
LABEL_49:
  v12 = a8;
  if ( !a8 )
    return 0;
  v19 = &v18[-v17];
  if ( a9 > (unsigned int)v19 )
  {
    HIDWORD(v25) = v17;
    LODWORD(v25) = -1;
    strncpy_s(a8, v25, v19, v28);
    return 0;
  }
LABEL_59:
  v10 = 0;
LABEL_60:
  if ( Destination && a3 )
    *Destination = 0;
  if ( a4 && a5 )
    *a4 = 0;
  if ( v11 && a7 )
    *v11 = 0;
  if ( v12 && a9 )
    *v12 = 0;
  if ( v9 && !v10 )
    return 34;
  _invalid_parameter();
  return 22;
}
