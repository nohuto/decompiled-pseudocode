/*
 * XREFs of AslStringPatternMatchA @ 0x140759ACC
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x1407537AC (SdbpFindNextIndexedWildCardTag.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759948 (SdbpFindFirstIndexedWildCardTag.c)
 *     AslStringPatternMatchA @ 0x140759ACC (AslStringPatternMatchA.c)
 * Callees:
 *     toupper @ 0x1403D3EA0 (toupper.c)
 *     AslStringPatternMatchA @ 0x140759ACC (AslStringPatternMatchA.c)
 */

__int64 __fastcall AslStringPatternMatchA(_BYTE *a1, _BYTE *a2)
{
  int v2; // esi
  _BYTE *v4; // r14
  unsigned int v5; // edi
  int v6; // ebx
  int v7; // ebx

  LOBYTE(v2) = *a1;
  v4 = a1;
  v5 = 1;
  while ( (_BYTE)v2 || *a2 )
  {
    if ( (_BYTE)v2 == 42 )
    {
      v2 = (char)v4[1];
      if ( v4[1] != 42 )
      {
        if ( !(_BYTE)v2 )
          return v5;
        v6 = toupper(v2);
        if ( v6 == toupper((char)*a2) )
        {
          if ( (unsigned int)AslStringPatternMatchA(v4 + 1, a2) )
            return v5;
        }
        goto LABEL_7;
      }
      ++v4;
    }
    else
    {
      if ( (_BYTE)v2 != 63 )
      {
        v7 = toupper((char)*a2);
        if ( toupper((char)v2) != v7 )
          return 0;
      }
      ++v4;
LABEL_7:
      if ( !*a2 )
        return 0;
      LOBYTE(v2) = *v4;
      ++a2;
    }
  }
  return v5;
}
