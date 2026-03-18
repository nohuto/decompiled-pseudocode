/*
 * XREFs of AslStringPatternMatchW @ 0x14073E6C0
 * Callers:
 *     SdbpFindNextIndexedWildCardTag @ 0x14073C2C8 (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x14073E6C0 (AslStringPatternMatchW.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140742258 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckAttribute @ 0x14079A3AC (SdbpCheckAttribute.c)
 *     KseLookupHardwareId @ 0x1408BC2C4 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x14095FE3C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x140960BD0 (SdbpCheckPackageAttributes.c)
 *     AslpProcessMatchRegNode @ 0x14096577C (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x14025C2B0 (NLS_UPCASE.c)
 *     AslStringPatternMatchW @ 0x14073E6C0 (AslStringPatternMatchW.c)
 */

__int64 __fastcall AslStringPatternMatchW(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned __int16 v2; // r10
  unsigned __int16 *v4; // rdi
  unsigned int v5; // ebx
  unsigned __int16 v6; // r10
  unsigned __int16 v7; // ax
  __int16 v8; // r9
  unsigned __int16 v10; // ax
  __int64 v11; // r11
  __int16 v12; // r9

  v2 = *a1;
  v4 = a1;
  v5 = 0;
  while ( v2 || *a2 )
  {
    if ( v2 != 42 )
    {
      if ( v2 != 63 )
      {
        NLS_UPCASE(*a2);
        v7 = NLS_UPCASE(v6);
        if ( v7 != v8 )
          return v5;
      }
      ++v4;
      goto LABEL_7;
    }
    v2 = v4[1];
    if ( v2 == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !v2 )
        return 1;
      NLS_UPCASE(v2);
      v10 = NLS_UPCASE(*a2);
      if ( v12 == v10 )
      {
        if ( (unsigned int)AslStringPatternMatchW(v11, a2) )
          return 1;
      }
LABEL_7:
      if ( !*a2 )
        return v5;
      v2 = *v4;
      ++a2;
    }
  }
  return 1;
}
