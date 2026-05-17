/*
 * XREFs of strtoxq @ 0x4B2FB4FC
 * Callers:
 *     __strtoi64 @ 0x4B2FB755 (__strtoi64.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 *     ___pctype_func @ 0x4B2FB4F6 (___pctype_func.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

int __cdecl strtoxq(int a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4, int a5)
{
  unsigned __int8 v5; // bl
  unsigned __int8 *v6; // edi
  unsigned __int8 v7; // al
  int v8; // eax
  int v9; // ecx
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bl
  unsigned __int64 v12; // kr00_8
  unsigned int v13; // edx
  int v14; // edx
  int v15; // ebx
  unsigned int v16; // eax
  int v17; // ebx
  unsigned __int8 **v18; // ecx
  int v19; // eax
  unsigned __int8 *v20; // edi
  int result; // eax
  bool v22; // cf
  int v23; // [esp-10h] [ebp-40h]
  __int64 v24; // [esp+0h] [ebp-30h]
  unsigned __int64 v25; // [esp+8h] [ebp-28h]
  unsigned int v26; // [esp+1Ch] [ebp-14h]
  int v27; // [esp+20h] [ebp-10h]
  __int64 v28; // [esp+24h] [ebp-Ch]
  unsigned __int8 v29; // [esp+2Fh] [ebp-1h]

  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (a4 < 2 || a4 > 36) )
  {
    _invalid_parameter();
    return 0;
  }
  v5 = *a2;
  v6 = a2 + 1;
  v28 = 0LL;
  while ( (__pctype_func()[v5] & 8) != 0 )
  {
    do
      v7 = *v6++;
    while ( v7 == v5 );
    v5 = v7;
  }
  v8 = a5;
  v29 = v5;
  if ( v5 == 45 )
  {
    v8 = a5 | 2;
  }
  else if ( v5 != 43 )
  {
    goto LABEL_15;
  }
  v5 = *v6++;
  v29 = v5;
LABEL_15:
  v9 = a4;
  v27 = v8;
  if ( a4 )
    goto LABEL_23;
  if ( v5 == 48 )
  {
    if ( *v6 != 120 && *v6 != 88 )
    {
      v23 = 8;
      goto LABEL_18;
    }
    v9 = 16;
    a4 = 16;
LABEL_23:
    if ( v9 == 16 && v5 == 48 && (*v6 == 120 || *v6 == 88) )
    {
      v10 = v6[1];
      v6 += 2;
      v29 = v10;
    }
    goto LABEL_28;
  }
  v23 = 10;
LABEL_18:
  v9 = v23;
  a4 = v23;
LABEL_28:
  v24 = v9;
  v25 = 0xFFFFFFFFFFFFFFFFuLL % v9;
  v11 = v29;
  v12 = 0xFFFFFFFFFFFFFFFFuLL / v9;
  while ( 1 )
  {
    if ( (__pctype_func()[v11] & 4) != 0 )
    {
      v13 = (char)v11 - 48;
      goto LABEL_35;
    }
    if ( (__pctype_func()[v11] & 0x103) == 0 )
      break;
    v14 = (char)v11;
    if ( (unsigned __int8)(v11 - 97) <= 0x19u )
      v14 = (char)v11 - 32;
    v13 = v14 - 55;
LABEL_35:
    LOBYTE(v15) = v27;
    v16 = v28;
    v26 = v13;
    if ( v13 >= a4 )
      goto LABEL_45;
    v17 = v27 | 8;
    v27 |= 8u;
    if ( __PAIR64__(v28, HIDWORD(v28)) < v12 )
    {
      v26 = v13;
LABEL_42:
      v19 = (v26 + v24 * __PAIR64__(v28, HIDWORD(v28))) >> 32;
      HIDWORD(v28) = v26 + v24 * HIDWORD(v28);
      LODWORD(v28) = v19;
      goto LABEL_43;
    }
    if ( v28 == __PAIR64__(v12, HIDWORD(v12)) && v13 <= v25 )
      goto LABEL_42;
    v18 = a3;
    v15 = v17 | 4;
    v27 = v15;
    if ( !a3 )
      goto LABEL_46;
LABEL_43:
    v11 = *v6++;
  }
  v16 = v28;
  LOBYTE(v15) = v27;
LABEL_45:
  v18 = a3;
LABEL_46:
  v20 = v6 - 1;
  if ( (v15 & 8) != 0 )
  {
    if ( (v15 & 4) != 0 )
      goto LABEL_60;
    if ( (v15 & 1) == 0 )
    {
      if ( (v15 & 2) != 0 )
      {
        v22 = v16 < 0x80000000;
        if ( v16 <= 0x80000000 )
        {
          result = HIDWORD(v28);
          if ( v22 || !HIDWORD(v28) )
            goto LABEL_66;
        }
LABEL_60:
        *_errno() = 34;
        if ( (v15 & 1) != 0 )
        {
          result = -1;
        }
        else if ( (v15 & 2) != 0 )
        {
          result = 0;
        }
        else
        {
          result = -1;
        }
        goto LABEL_66;
      }
      if ( v16 >= 0x7FFFFFFF )
      {
        if ( v16 <= 0x7FFFFFFF )
        {
          result = HIDWORD(v28);
          goto LABEL_66;
        }
        goto LABEL_60;
      }
    }
    result = HIDWORD(v28);
    goto LABEL_66;
  }
  if ( v18 )
    v20 = a2;
  result = 0;
LABEL_66:
  if ( a3 )
    *a3 = v20;
  if ( (v15 & 2) != 0 )
    return -result;
  return result;
}
