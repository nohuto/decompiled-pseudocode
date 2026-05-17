/*
 * XREFs of x64toa_s @ 0x4B2FEF5E
 * Callers:
 *     __i64toa_s @ 0x4B2FF080 (__i64toa_s.c)
 *     __ui64toa_s @ 0x4B2FF100 (__ui64toa_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 */

int __fastcall x64toa_s(char *a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v7; // rax
  char *v8; // edi
  int v9; // ebx
  unsigned int v10; // esi
  char *v11; // edi
  unsigned __int64 v12; // rcx
  char *v13; // ecx
  char *v14; // edi
  char *v15; // edx
  char v16; // cl
  unsigned __int64 v18; // [esp-14h] [ebp-30h]
  char *v20; // [esp+Ch] [ebp-10h]
  char *v23; // [esp+14h] [ebp-8h]
  char *v24; // [esp+18h] [ebp-4h]
  int v25; // [esp+30h] [ebp+14h]

  if ( !a1 || !a2 )
    goto LABEL_17;
  *a1 = 0;
  if ( a2 <= (unsigned int)(a5 != 0) + 1 )
  {
LABEL_4:
    _invalid_parameter();
    return 34;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_17:
    _invalid_parameter();
    return 22;
  }
  HIDWORD(v7) = HIDWORD(a3);
  v8 = a1;
  v25 = 0;
  v9 = a3;
  v24 = a1;
  if ( a5 )
  {
    *a1 = 45;
    v8 = a1 + 1;
    v9 = -(int)a3;
    v24 = a1 + 1;
    v25 = 1;
    HIDWORD(v7) = (unsigned __int64)-a3 >> 32;
  }
  v10 = a2;
  v20 = v8;
  v11 = v24;
  while ( 1 )
  {
    v23 = v11;
    v18 = __PAIR64__(HIDWORD(v7), v9);
    v12 = __PAIR64__(HIDWORD(v7), v9) % a4;
    v7 = v18 / a4;
    v9 = v7;
    *v11 = v12 + ((unsigned int)v12 > 9 ? 87 : 48);
    LODWORD(v7) = ++v25;
    if ( !__PAIR64__(HIDWORD(v7), v9) )
      break;
    v13 = ++v11;
    if ( (unsigned int)v7 >= v10 )
      goto LABEL_12;
  }
  v13 = v11 + 1;
LABEL_12:
  v14 = v20;
  if ( (unsigned int)v7 >= v10 )
  {
    *a1 = 0;
    goto LABEL_4;
  }
  v15 = v23;
  *v13 = 0;
  do
  {
    v16 = *v15;
    *v15-- = *v14;
    *v14++ = v16;
  }
  while ( v14 < v15 );
  return 0;
}
