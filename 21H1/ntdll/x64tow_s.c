/*
 * XREFs of x64tow_s @ 0x4B2FF23E
 * Callers:
 *     __i64tow_s @ 0x4B2FF370 (__i64tow_s.c)
 *     __ui64tow_s @ 0x4B2FF3F0 (__ui64tow_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 *     __aulldvrm @ 0x4B2F6720 (__aulldvrm.c)
 */

int __fastcall x64tow_s(_WORD *a1, unsigned int a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v5; // rax
  bool v6; // zf
  int v7; // ebx
  unsigned int v8; // edi
  unsigned __int64 v9; // rcx
  unsigned int v10; // ecx
  __int16 *v11; // edx
  __int16 *v12; // ebx
  __int16 v13; // cx
  unsigned __int64 v15; // [esp-14h] [ebp-30h]
  __int16 *v17; // [esp+Ch] [ebp-10h]
  __int16 *v20; // [esp+14h] [ebp-8h]
  int v21; // [esp+18h] [ebp-4h]
  _WORD *v22; // [esp+28h] [ebp+Ch]
  _WORD *v23; // [esp+30h] [ebp+14h]

  if ( !a1 || !a2 )
    goto LABEL_16;
  *a1 = 0;
  if ( a2 <= (unsigned int)(a5 != 0) + 1 )
  {
LABEL_4:
    _invalid_parameter();
    return 34;
  }
  if ( a4 - 2 > 0x22 )
  {
LABEL_16:
    _invalid_parameter();
    return 22;
  }
  v5 = __PAIR64__(HIDWORD(a3), (unsigned int)a1);
  v21 = 0;
  v6 = a5 == 0;
  v23 = a1;
  v7 = a3;
  if ( !v6 )
  {
    v7 = -(int)a3;
    *a1 = 45;
    LODWORD(v5) = a1 + 1;
    v21 = 1;
    v23 = a1 + 1;
    HIDWORD(v5) = (unsigned __int64)-a3 >> 32;
  }
  v8 = a2;
  v17 = (__int16 *)v5;
  do
  {
    v20 = (__int16 *)v5;
    v15 = __PAIR64__(HIDWORD(v5), v7);
    v9 = __PAIR64__(HIDWORD(v5), v7) % a4;
    v5 = v15 / a4;
    v7 = v5;
    v22 = v23 + 1;
    *v23 = v9 + ((unsigned int)v9 > 9 ? 87 : 48);
    v10 = ++v21;
    if ( !v5 )
      break;
    LODWORD(v5) = ++v23;
  }
  while ( v10 < v8 );
  if ( v10 >= v8 )
  {
    *a1 = 0;
    goto LABEL_4;
  }
  v11 = v17;
  v12 = v20;
  *v22 = 0;
  do
  {
    v13 = *v12;
    *v12-- = *v11;
    *v11++ = v13;
  }
  while ( v11 < v12 );
  return 0;
}
