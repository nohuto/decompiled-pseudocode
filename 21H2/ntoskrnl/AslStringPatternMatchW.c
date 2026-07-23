/*
 * XREFs of AslStringPatternMatchW @ 0x1407538DC
 * Callers:
 *     SdbpCheckApplicationTypeAttributes @ 0x1403F98F0 (SdbpCheckApplicationTypeAttributes.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407537AC (SdbpFindNextIndexedWildCardTag.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x140759948 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpCheckAttribute @ 0x1407B23DC (SdbpCheckAttribute.c)
 *     KseLookupHardwareId @ 0x1408C0C64 (KseLookupHardwareId.c)
 *     SdbpCheckMatchingRegistryValue @ 0x140964A2C (SdbpCheckMatchingRegistryValue.c)
 *     SdbpCheckPackageAttributes @ 0x1409657C0 (SdbpCheckPackageAttributes.c)
 *     AslpProcessMatchRegNode @ 0x14096A354 (AslpProcessMatchRegNode.c)
 * Callees:
 *     NLS_UPCASE @ 0x1402AB420 (NLS_UPCASE.c)
 *     AslStringPatternMatchW @ 0x1407538DC (AslStringPatternMatchW.c)
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
