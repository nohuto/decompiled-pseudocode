/*
 * XREFs of xtoa @ 0x4B2F6BDA
 * Callers:
 *     __ltoa @ 0x4B2F6B50 (__ltoa.c)
 *     __ultoa @ 0x4B2F6BC0 (__ultoa.c)
 * Callees:
 *     <none>
 */

char __stdcall xtoa(unsigned int a1, char *a2, unsigned int a3, int a4)
{
  char *v4; // ecx
  unsigned int v5; // ebx
  unsigned int v6; // edx
  char *v7; // edi
  char *v8; // esi
  char result; // al
  char v10; // cl
  char *v11; // [esp+Ch] [ebp-8h]
  _BYTE *v12; // [esp+10h] [ebp-4h]

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
