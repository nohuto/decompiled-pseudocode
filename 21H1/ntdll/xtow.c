/*
 * XREFs of xtow @ 0x4B2F6DAA
 * Callers:
 *     __ltow @ 0x4B2F6D20 (__ltow.c)
 *     __ultow @ 0x4B2F6D90 (__ultow.c)
 * Callees:
 *     <none>
 */

__int16 __stdcall xtow(unsigned int a1, __int16 *a2, unsigned int a3, int a4)
{
  __int16 *v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  __int16 *v7; // edi
  __int16 *v8; // esi
  __int16 result; // ax
  __int16 v10; // cx
  __int16 *v11; // [esp+Ch] [ebp-8h]
  _WORD *v12; // [esp+10h] [ebp-4h]

  v4 = a2;
  v5 = a1;
  if ( a4 )
  {
    *a2 = 45;
    v4 = a2 + 1;
    v5 = -a1;
  }
  v11 = v4;
  do
  {
    v6 = v5 % a3;
    v5 /= a3;
    v7 = v4;
    v12 = v4 + 1;
    *v4++ = v6 + (v6 > 9 ? 87 : 48);
  }
  while ( v5 );
  v8 = v11;
  *v12 = 0;
  do
  {
    result = *v8;
    v10 = *v7;
    *v7-- = *v8;
    *v8++ = v10;
  }
  while ( v8 < v7 );
  return result;
}
