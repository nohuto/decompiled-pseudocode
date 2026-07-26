/*
 * XREFs of ?ndisValidateTrailingElementSpace@@YAEKPEBU_NDIS_OBJECT_HEADER@@KKK@Z @ 0x1C001E764
 * Callers:
 *     ?ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z @ 0x1C001E444 (-ndisValidatePDConfigBuffer@@YAEKPEBU_NDIS_PD_CONFIG@@@Z.c)
 *     ?ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z @ 0x1C001E4DC (-ndisValidateGFPExactMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_EXACT_MATCH_PROFILE@@@Z.c)
 *     ?ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z @ 0x1C001E5D8 (-ndisValidatePDCapsBuffer@@YAEKPEBU_NDIS_PD_CAPABILITIES@@@Z.c)
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C007E118 (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall ndisValidateTrailingElementSpace(
        unsigned int a1,
        const struct _NDIS_OBJECT_HEADER *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned __int64 v6; // rax
  unsigned int v7; // ecx
  bool result; // al

  result = 0;
  if ( (a5 & 0xFFFFFFF8) == (unsigned __int64)a5 && (a3 & 0xFFFFFFF8) == (unsigned __int64)a3 )
  {
    v6 = a5 * (unsigned __int64)a4;
    if ( v6 <= 0xFFFFFFFF )
    {
      v7 = v6 + a3;
      if ( (unsigned int)v6 + a3 >= a3 && v7 <= a1 && (a3 >= ((a2->Size + 7LL) & 0xFFFFFFFFFFFFFFF8uLL) || !v7) )
        return 1;
    }
  }
  return result;
}
