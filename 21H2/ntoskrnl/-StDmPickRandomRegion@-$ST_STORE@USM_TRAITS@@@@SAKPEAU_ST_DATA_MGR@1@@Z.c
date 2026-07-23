/*
 * XREFs of ?StDmPickRandomRegion@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@@Z @ 0x14059C260
 * Callers:
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14059B53C (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     ?StStagingRegionFind@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z @ 0x14059D04C (-StStagingRegionFind@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_STAGING_REGION@1@PEAU_ST_DATA_MGR@1@K@Z.c)
 */

__int64 __fastcall ST_STORE<SM_TRAITS>::StDmPickRandomRegion(__int64 a1)
{
  __int64 v1; // r10
  __int64 v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // r9
  unsigned int v7; // ecx

  v1 = a1;
  v2 = 0xFFFFFFFFLL;
  v3 = *(_DWORD *)(a1 + 856);
  if ( v3 )
  {
    v4 = (unsigned int)(__rdtsc() >> 4) % v3 + 1;
    v5 = 0xFFFFFFFFLL;
    if ( v4 )
      v5 = v4 - 1;
    v6 = 0LL;
    do
    {
      if ( !ST_STORE<SM_TRAITS>::StStagingRegionFind(v1, v5, v2, v6) )
        break;
      v7 = v5 + 1;
      v6 = (unsigned int)(v6 + 1);
      v5 = 0LL;
      if ( v7 != *(_DWORD *)(v1 + 788) )
        v5 = v7;
    }
    while ( (unsigned int)v6 < 7 );
    if ( (unsigned int)v6 >= 7 )
      LODWORD(v5) = v2;
    LODWORD(v2) = v5;
  }
  return (unsigned int)v2;
}
