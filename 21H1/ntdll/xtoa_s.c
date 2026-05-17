/*
 * XREFs of xtoa_s @ 0x4B2FF14A
 * Callers:
 *     __itoa_s @ 0x4B2FF0C0 (__itoa_s.c)
 *     __ultoa_s @ 0x4B2FF130 (__ultoa_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

int __stdcall xtoa_s(unsigned int a1, char *a2, unsigned int a3, unsigned int a4, int a5)
{
  int v5; // eax
  unsigned int v8; // eax
  char *v9; // ecx
  unsigned int v10; // esi
  char *v11; // edi
  _BYTE *v12; // edx
  bool v13; // cf
  char *v14; // esi
  char v15; // cl
  char *v18; // [esp+20h] [ebp+10h]
  int v19; // [esp+28h] [ebp+18h]

  v5 = 0;
  if ( !a2 || !a3 )
    goto LABEL_17;
  *a2 = 0;
  LOBYTE(v5) = a5 != 0;
  if ( a3 <= v5 + 1 )
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
  v18 = a2;
  v19 = 0;
  if ( a5 )
  {
    *a2 = 45;
    v18 = a2 + 1;
    v19 = 1;
    v8 = -a1;
  }
  else
  {
    v8 = a1;
  }
  v9 = v18;
  v10 = v19;
  do
  {
    v11 = v9;
    v12 = v9 + 1;
    *v9 = v8 % a4 + (v8 % a4 > 9 ? 87 : 48);
    ++v10;
    v8 /= a4;
    if ( !v8 )
      break;
    ++v9;
  }
  while ( v10 < a3 );
  v13 = v10 < a3;
  v14 = v18;
  if ( !v13 )
  {
    *a2 = 0;
    goto LABEL_4;
  }
  *v12 = 0;
  do
  {
    v15 = *v11;
    *v11-- = *v14;
    *v14++ = v15;
  }
  while ( v14 < v11 );
  return 0;
}
