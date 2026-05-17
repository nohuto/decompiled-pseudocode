/*
 * XREFs of wcstoxlX @ 0x4B2FAA19
 * Callers:
 *     _wcstol @ 0x4B2FAC20 (_wcstol.c)
 *     _wcstolX @ 0x4B2FAC41 (_wcstolX.c)
 *     _wcstoul @ 0x4B2FAC70 (_wcstoul.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __iswctype_l @ 0x4B2F86D6 (__iswctype_l.c)
 *     __wchartodigit @ 0x4B2FCED1 (__wchartodigit.c)
 *     __errno @ 0x4B33D420 (__errno.c)
 */

int __cdecl wcstoxlX(int a1, unsigned __int16 *a2, unsigned __int16 **a3, int a4, int a5, int a6)
{
  unsigned __int16 v6; // di
  unsigned __int16 *v7; // esi
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // edx
  int v13; // eax
  unsigned __int16 **v14; // edi
  unsigned __int16 *v15; // esi
  int v16; // edx
  int v17; // eax
  int v19; // [esp-10h] [ebp-20h]
  unsigned __int64 v20; // [esp+0h] [ebp-10h]
  int v21; // [esp+Ch] [ebp-4h]

  if ( a3 )
    *a3 = a2;
  if ( !a2 || a4 && (a4 < 2 || a4 > 36) )
  {
    _invalid_parameter();
    return 0;
  }
  v6 = *a2;
  v7 = a2 + 1;
  v8 = 0;
  while ( _iswctype_l(v6, 8u, 0) )
    v6 = *v7++;
  v9 = a5;
  if ( v6 == 45 )
  {
    v9 = a5 | 2;
  }
  else if ( v6 != 43 )
  {
    goto LABEL_14;
  }
  v6 = *v7++;
LABEL_14:
  v21 = v9;
  v10 = a4;
  if ( a4 )
    goto LABEL_22;
  if ( !_wchartodigit(v6) )
  {
    if ( *v7 != 120 && *v7 != 88 )
    {
      v19 = 8;
      goto LABEL_17;
    }
    v10 = 16;
    a4 = 16;
LABEL_22:
    if ( v10 == 16 && !_wchartodigit(v6) && (*v7 == 120 || *v7 == 88) )
    {
      v6 = v7[1];
      v7 += 2;
    }
    v11 = a4;
    goto LABEL_28;
  }
  v19 = 10;
LABEL_17:
  v11 = v19;
  a4 = v19;
LABEL_28:
  LODWORD(v20) = 0xFFFFFFFF % v11;
  HIDWORD(v20) = 0xFFFFFFFF / v11;
  while ( 1 )
  {
    v12 = _wchartodigit(v6);
    if ( v12 != -1 )
      goto LABEL_42;
    if ( (v6 < 0x41u || v6 > 0x5Au) && (unsigned __int16)(v6 - 97) > 0x19u )
      break;
    v16 = v6;
    if ( (unsigned __int16)(v6 - 97) <= 0x19u )
      v16 = v6 - 32;
    v12 = v16 - 55;
LABEL_42:
    LOBYTE(v13) = v21;
    if ( v12 >= a4 )
      goto LABEL_34;
    v17 = v21 | 8;
    v21 |= 8u;
    if ( a6 || __PAIR64__(v8, v12) <= v20 )
    {
      v8 = v12 + a4 * v8;
    }
    else
    {
      v14 = a3;
      v13 = v17 | 4;
      v21 = v13;
      if ( !a3 )
        goto LABEL_35;
    }
    v6 = *v7++;
  }
  LOBYTE(v13) = v21;
LABEL_34:
  v14 = a3;
LABEL_35:
  v15 = v7 - 1;
  if ( (v13 & 8) != 0 )
  {
    if ( (v13 & 4) == 0 )
    {
      if ( (v13 & 1) != 0 )
        goto LABEL_59;
      if ( (v13 & 2) != 0 )
      {
        if ( v8 <= 0x80000000 )
          goto LABEL_59;
      }
      else if ( v8 <= 0x7FFFFFFF )
      {
        goto LABEL_59;
      }
    }
    if ( !a6 )
    {
      *_errno() = 34;
      LOBYTE(v13) = v21;
      if ( (v21 & 1) != 0 )
        v8 = -1;
      else
        v8 = ((v21 & 2) != 0) + 0x7FFFFFFF;
    }
  }
  else
  {
    if ( v14 )
      v15 = a2;
    v8 = 0;
  }
LABEL_59:
  if ( v14 )
    *v14 = v15;
  if ( (v13 & 2) != 0 )
    return -v8;
  return v8;
}
