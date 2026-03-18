/*
 * XREFs of SdbReadQWORDTag @ 0x14079FAD4
 * Callers:
 *     SdbpMatchOsVersion @ 0x14073F118 (SdbpMatchOsVersion.c)
 *     SdbpCheckAllAttributes @ 0x14079E53C (SdbpCheckAllAttributes.c)
 *     KsepDbReadKFlag @ 0x14079FA34 (KsepDbReadKFlag.c)
 *     SdbQueryDataExTagID @ 0x1407AF428 (SdbQueryDataExTagID.c)
 *     KsepDbReadKData @ 0x1408BC730 (KsepDbReadKData.c)
 *     SdbpCheckPackageAttributes @ 0x140961F70 (SdbpCheckPackageAttributes.c)
 *     SdbpGetRegistryMatchingAttributes @ 0x140962638 (SdbpGetRegistryMatchingAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1407405C4 (AslLogCallPrintf.c)
 *     SdbpReadTagData @ 0x140744590 (SdbpReadTagData.c)
 *     SdbGetTagFromTagID @ 0x140744A44 (SdbGetTagFromTagID.c)
 */

__int64 __fastcall SdbReadQWORDTag(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  int TagData; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  v9 = a3;
  v4 = a2;
  if ( (SdbGetTagFromTagID(a1, a2) & 0xF000) == 0x5000 )
  {
    TagData = SdbpReadTagData(a1, v4, (__int64)&v9, 8u);
    v7 = v9;
    if ( !TagData )
      return a3;
    return v7;
  }
  else
  {
    SdbGetTagFromTagID(a1, v4);
    AslLogCallPrintf(1LL);
    return a3;
  }
}
