/*
 * XREFs of ?ndisValidateGFPWildcardMatchHGProfileBuffer@@YAEKPEBU_NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C007D9D8
 * Callers:
 *     ?ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z @ 0x1C007DA38 (-ndisValidateGFPWildcardMatchProfileBuffer@@YAEKPEBU_NDIS_GFP_WILDCARD_MATCH_PROFILE@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall ndisValidateGFPWildcardMatchHGProfileBuffer(
        unsigned int a1,
        const struct _NDIS_GFP_HEADER_GROUP_WILDCARD_MATCH_PROFILE *a2)
{
  char v2; // cl

  if ( a1 < 0x38 )
    return 0;
  if ( a2->Header.Size < 0x31u )
    return 0;
  if ( a2->Header.Type != 0x80 )
    return 0;
  v2 = 1;
  if ( a2->Header.Revision != 1
    || a2->Flags
    || (a2->HeadersPresent & 0xFFFFF000) != 0
    || (a2->MatchFields & 0xFFFFFFFFFF000000uLL) != 0
    || a2->SourceIPv4AddressMatchType >= NdisGfpWildcardMatchTypeMax
    || a2->DestinationIPv4AddressMatchType >= NdisGfpWildcardMatchTypeMax
    || a2->SourceIPv6AddressMatchType >= NdisGfpWildcardMatchTypeMax
    || a2->DestinationIPv6AddressMatchType >= NdisGfpWildcardMatchTypeMax
    || a2->SourcePortMatchType >= NdisGfpWildcardMatchTypeMax
    || a2->DestinationPortMatchType >= NdisGfpWildcardMatchTypeMax )
  {
    return 0;
  }
  return v2;
}
