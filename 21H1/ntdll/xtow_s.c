/*
 * XREFs of xtow_s @ 0x4B2FF43A
 * Callers:
 *     __itow_s @ 0x4B2FF3B0 (__itow_s.c)
 *     __ultow_s @ 0x4B2FF420 (__ultow_s.c)
 * Callees:
 *     __invalid_parameter @ 0x4B2F4A77 (__invalid_parameter.c)
 */

int __stdcall xtow_s(unsigned int a1, __int16 *a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v6; // eax
  __int16 *v7; // esi
  unsigned int v8; // edi
  __int16 *v9; // ebx
  _WORD *v10; // edx
  bool v11; // cf
  __int16 *v12; // edi
  __int16 v13; // cx
  int v16; // [esp+Ch] [ebp-4h]
  __int16 *v17; // [esp+28h] [ebp+18h]

  if ( !a2 || !a3 )
    goto LABEL_17;
  *a2 = 0;
  if ( a3 <= (unsigned int)(a5 != 0) + 1 )
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
  v17 = a2;
  v16 = 0;
  if ( a5 )
  {
    *a2 = 45;
    v17 = a2 + 1;
    v16 = 1;
    v6 = -a1;
  }
  else
  {
    v6 = a1;
  }
  v7 = v17;
  v8 = v16;
  do
  {
    v9 = v7;
    v10 = v7 + 1;
    *v7 = v6 % a4 + (v6 % a4 > 9 ? 87 : 48);
    ++v8;
    v6 /= a4;
    if ( !v6 )
      break;
    ++v7;
  }
  while ( v8 < a3 );
  v11 = v8 < a3;
  v12 = v17;
  if ( !v11 )
  {
    *a2 = 0;
    goto LABEL_4;
  }
  *v10 = 0;
  do
  {
    v13 = *v9;
    *v9-- = *v12;
    *v12++ = v13;
  }
  while ( v12 < v9 );
  return 0;
}
