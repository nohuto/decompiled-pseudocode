/*
 * XREFs of ExtractAggregateFieldTypes @ 0x1B68E3
 * Callers:
 *     TlgAggregateAbsorbEvent @ 0x1B6CA9 (TlgAggregateAbsorbEvent.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ExtractAggregateFieldTypes(int a1, int a2)
{
  unsigned __int8 v3; // bh
  int v4; // ecx
  unsigned int v5; // esi
  const char *v6; // ecx
  char v7; // al
  const char *v8; // ecx
  char *v9; // ecx
  char v10; // al
  char v11; // bl
  char v12; // dl
  int v13; // eax

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 16);
  v5 = v4 + *(_DWORD *)(a2 + 24);
  v6 = (const char *)(v4 + 2);
  do
    v7 = *v6++;
  while ( v7 < 0 );
  v8 = &v6[strlen(v6) + 1];
  while ( (unsigned int)v8 < v5 )
  {
    v9 = (char *)&v8[strlen(v8) + 1];
    if ( *v9 >= 0 )
      break;
    v10 = v9[1];
    v11 = *v9 & 0x7F;
    v8 = v9 + 2;
    if ( v10 >= 0 )
      break;
    while ( 1 )
    {
      v12 = *v8;
      if ( *v8 >= 0 )
        break;
      if ( v12 != (char)0x80 )
        return v3;
      ++v8;
    }
    if ( v11 != 9 || (unsigned __int8)(v12 - 113) > 2u )
      break;
    v13 = 2 * v3++;
    *(_BYTE *)(a2 + 8 * v13 + 45) = v12;
  }
  return v3;
}
