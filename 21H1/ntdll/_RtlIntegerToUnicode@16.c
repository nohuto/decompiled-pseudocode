/*
 * XREFs of _RtlIntegerToUnicode@16 @ 0x4B2D3B50
 * Callers:
 *     _RtlpMuiRegTryToAppendLangId@20 @ 0x4B2D3519 (_RtlpMuiRegTryToAppendLangId@20.c)
 *     _RtlConvertSidToUnicodeString@12 @ 0x4B2D3990 (_RtlConvertSidToUnicodeString@12.c)
 *     _RtlGetFileMUIPath@28 @ 0x4B3519E0 (_RtlGetFileMUIPath@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcpy @ 0x4B2F88B0 (_memcpy.c)
 */

int __fastcall RtlIntegerToUnicode(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v4; // ebx
  int v6; // eax
  int v7; // edx
  _WORD *v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  int v11; // ebx
  int v12; // edi
  char *v13; // ecx
  int v15; // edx
  char v16; // cf
  unsigned int v17; // ecx
  char *v18; // edi
  int i; // ecx
  size_t v20; // [esp-4h] [ebp-84h]
  int v21; // [esp+14h] [ebp-6Ch]
  int v22; // [esp+18h] [ebp-68h]
  char *v23; // [esp+1Ch] [ebp-64h]
  _BYTE v24[2]; // [esp+62h] [ebp-1Eh] BYREF
  CPPEH_RECORD ms_exc; // [esp+68h] [ebp-18h]

  v4 = a2;
  v23 = a4;
  if ( a2 != 10 )
  {
    switch ( a2 )
    {
      case 0u:
        v4 = 10;
        break;
      case 2u:
        v6 = 1;
        goto LABEL_19;
      case 8u:
        v6 = 3;
        goto LABEL_19;
      case 0x10u:
        v6 = 4;
LABEL_19:
        v7 = (1 << v6) - 1;
        goto LABEL_3;
      default:
        return -1073741811;
    }
  }
  v6 = 0;
  v7 = 0;
LABEL_3:
  v21 = v7;
  v22 = v6;
  v8 = v24;
  do
  {
    if ( v6 )
    {
      v10 = a1 & v7;
      a1 >>= v6;
    }
    else
    {
      if ( v4 == 10 )
      {
        v9 = a1 / 0xA;
        v10 = a1 % 0xA;
      }
      else
      {
        v10 = a1 % v4;
        v9 = a1 / v4;
      }
      a1 = v9;
    }
    *--v8 = RtlpIntegerWChars[v10];
    v6 = v22;
    v7 = v21;
  }
  while ( a1 );
  v11 = (v24 - (_BYTE *)v8) >> 1;
  v12 = a3;
  if ( a3 >= 0 || (v12 = -a3, -a3 <= v11) )
  {
    v13 = a4;
  }
  else
  {
    v15 = v12 - v11;
    v16 = (v12 - v11) & 1;
    v17 = (unsigned int)(v12 - v11) >> 1;
    memset32(a4, 3145776, v17);
    v18 = &a4[4 * v17];
    for ( i = v16; i; --i )
    {
      *(_WORD *)v18 = 48;
      v18 += 2;
    }
    v12 = (v24 - (_BYTE *)v8) >> 1;
    v13 = &a4[2 * v15];
    v23 = v13;
  }
  if ( v11 > v12 )
    return -2147483643;
  ms_exc.registration.TryLevel = 0;
  LODWORD(v20) = 2 * v11;
  memcpy(v13, v8, v20);
  if ( v11 < v12 )
    *(_WORD *)&v23[2 * v11] = 0;
  ms_exc.registration.TryLevel = -2;
  return 0;
}
