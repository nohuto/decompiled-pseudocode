/*
 * XREFs of strtoxlX @ 0x4B2FA1E6
 * Callers:
 *     _strtol @ 0x4B2FA3E0 (_strtol.c)
 *     _strtolX @ 0x4B2FA401 (_strtolX.c)
 *     _strtoul @ 0x4B2FA430 (_strtoul.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

int __cdecl strtoxlX(int a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5, int a6)
{
  unsigned __int8 v6; // al
  unsigned __int8 *v7; // edi
  unsigned __int64 v8; // rcx
  unsigned __int8 v9; // cl
  int v10; // eax
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned __int8 **v15; // ecx
  unsigned __int8 *v16; // edi
  int v18; // [esp-10h] [ebp-24h]
  unsigned __int64 v19; // [esp+0h] [ebp-14h]
  int v20; // [esp+8h] [ebp-Ch]
  int v21; // [esp+Ch] [ebp-8h]
  unsigned __int8 v22; // [esp+13h] [ebp-1h]

  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (a4 < 2 || a4 > 36) )
  {
    _invalid_parameter();
    return 0;
  }
  v6 = *a2;
  v7 = a2 + 1;
  HIDWORD(v8) = 0;
  while ( 1 )
  {
    v22 = v6;
    if ( (__pctype_func()[v6] & 8) == 0 )
      break;
    v6 = *v7++;
  }
  v9 = v22;
  v10 = a5;
  if ( v22 == 45 )
  {
    v10 = a5 | 2;
LABEL_13:
    v9 = *v7++;
    v22 = v9;
    goto LABEL_14;
  }
  if ( v22 == 43 )
    goto LABEL_13;
LABEL_14:
  v21 = v10;
  if ( a4 )
  {
    v11 = a4;
    if ( a4 != 16 || v9 != 48 )
      goto LABEL_27;
  }
  else
  {
    if ( v9 != 48 )
    {
      v18 = 10;
LABEL_17:
      v11 = v18;
      goto LABEL_27;
    }
    if ( *v7 != 120 && *v7 != 88 )
    {
      v18 = 8;
      goto LABEL_17;
    }
    v11 = 16;
  }
  if ( *v7 == 120 || *v7 == 88 )
  {
    v9 = v7[1];
    v7 += 2;
    v22 = v9;
  }
  while ( 1 )
  {
LABEL_27:
    v20 = v9;
    if ( (__pctype_func()[v9] & 4) != 0 )
    {
      LODWORD(v8) = (char)v22 - 48;
      goto LABEL_33;
    }
    if ( (__pctype_func()[v20] & 0x103) == 0 )
      break;
    v12 = (char)v22;
    if ( (unsigned __int8)(v22 - 97) <= 0x19u )
      v12 = (char)v22 - 32;
    LODWORD(v8) = v12 - 55;
LABEL_33:
    LOBYTE(v13) = v21;
    if ( (unsigned int)v8 >= v11 )
      goto LABEL_41;
    v14 = v21 | 8;
    v21 |= 8u;
    if ( a6 || (HIDWORD(v19) = 0xFFFFFFFF / v11, LODWORD(v19) = 0xFFFFFFFF % v11, v8 <= v19) )
    {
      HIDWORD(v8) = v8 + v11 * HIDWORD(v8);
    }
    else
    {
      v15 = a3;
      v13 = v14 | 4;
      v21 = v13;
      if ( !a3 )
        goto LABEL_42;
    }
    v9 = *v7++;
    v22 = v9;
  }
  LOBYTE(v13) = v21;
LABEL_41:
  v15 = a3;
LABEL_42:
  v16 = v7 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_56;
      if ( (v13 & 2) != 0 )
      {
        if ( HIDWORD(v8) <= 0x80000000 )
          goto LABEL_56;
      }
      else if ( HIDWORD(v8) <= 0x7FFFFFFF )
      {
        goto LABEL_56;
      }
    }
    if ( !a6 )
    {
      *_errno() = 34;
      LOBYTE(v13) = v21;
      if ( (v21 & 1) != 0 )
        HIDWORD(v8) = -1;
      else
        HIDWORD(v8) = ((v21 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( v15 )
      v16 = a2;
    HIDWORD(v8) = 0;
  }
LABEL_56:
  if ( a3 )
    *a3 = v16;
  if ( (v13 & 2) != 0 )
    HIDWORD(v8) = -HIDWORD(v8);
  return HIDWORD(v8);
}
