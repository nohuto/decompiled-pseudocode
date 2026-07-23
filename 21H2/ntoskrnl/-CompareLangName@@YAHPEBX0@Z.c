/*
 * XREFs of ?CompareLangName@@YAHPEBX0@Z @ 0x1403BDBF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CompareLangName(unsigned __int16 *a1, unsigned __int16 **a2)
{
  unsigned __int16 *v2; // r8
  unsigned __int16 i; // dx
  unsigned __int16 v4; // r10
  unsigned __int16 v5; // r9
  unsigned __int16 v6; // dx
  unsigned int v7; // edx

  v2 = *a2;
  for ( i = *a1; *a1; i = *a1 )
  {
    v4 = *v2;
    if ( !*v2 )
      break;
    v5 = i | 0x20;
    if ( (unsigned __int16)(i - 65) > 0x19u )
      v5 = i;
    v6 = v4 | 0x20;
    if ( (unsigned __int16)(v4 - 65) > 0x19u )
      v6 = *v2;
    if ( v5 == 95 )
      v5 = 45;
    if ( v6 == 95 )
      v6 = 45;
    v7 = v5 - v6;
    if ( v7 )
      return v7;
    ++a1;
    ++v2;
  }
  if ( *a1 || *v2 )
    return *a1 != 0 ? 1 : -1;
  else
    return 0LL;
}
