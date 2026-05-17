/*
 * XREFs of _RtlValidAcl@4 @ 0x4B2D3740
 * Callers:
 *     _RtlDeleteAce@8 @ 0x4B2A9340 (_RtlDeleteAce@8.c)
 *     _RtlAddAce@20 @ 0x4B2AAF90 (_RtlAddAce@20.c)
 *     _RtlpAddKnownAce@24 @ 0x4B2D363E (_RtlpAddKnownAce@24.c)
 *     _RtlAddMandatoryAce@24 @ 0x4B2D66E0 (_RtlAddMandatoryAce@24.c)
 *     _RtlValidSecurityDescriptor@4 @ 0x4B2E8170 (_RtlValidSecurityDescriptor@4.c)
 *     _RtlValidRelativeSecurityDescriptor@12 @ 0x4B2EB6E0 (_RtlValidRelativeSecurityDescriptor@12.c)
 *     _RtlpConvertAclToAutoInherit@36 @ 0x4B347B85 (_RtlpConvertAclToAutoInherit@36.c)
 *     _RtlAddAccessFilterAce@32 @ 0x4B34AD40 (_RtlAddAccessFilterAce@32.c)
 *     _RtlAddCompoundAce@24 @ 0x4B34B010 (_RtlAddCompoundAce@24.c)
 *     _RtlAddProcessTrustLabelAce@24 @ 0x4B34B140 (_RtlAddProcessTrustLabelAce@24.c)
 *     _RtlAddResourceAttributeAce@28 @ 0x4B34B260 (_RtlAddResourceAttributeAce@28.c)
 *     _RtlAddScopedPolicyIDAce@20 @ 0x4B34B5F0 (_RtlAddScopedPolicyIDAce@20.c)
 *     _RtlpAddKnownObjectAce@32 @ 0x4B34B856 (_RtlpAddKnownObjectAce@32.c)
 * Callees:
 *     _RtlpValidKnownAce@4 @ 0x4B2D381B (_RtlpValidKnownAce@4.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpValidAccessFilterAce@4 @ 0x4B34CA34 (_RtlpValidAccessFilterAce@4.c)
 *     _RtlpValidAttributeAce@4 @ 0x4B34CBBA (_RtlpValidAttributeAce@4.c)
 *     _RtlpValidCompoundAce@4 @ 0x4B34CC52 (_RtlpValidCompoundAce@4.c)
 *     _RtlpValidObjectAce@4 @ 0x4B34CCBA (_RtlpValidObjectAce@4.c)
 */

char __stdcall RtlValidAcl(int a1)
{
  unsigned int v1; // ebx
  _WORD *v2; // ecx
  unsigned __int8 *v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  unsigned __int8 v6; // cl
  char valid; // al

  v1 = 0;
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFE) == a1 + 2 && *v2 >= 8u )
    {
      v3 = (unsigned __int8 *)(a1 + 8);
      while ( 1 )
      {
        if ( v1 >= *(unsigned __int16 *)(a1 + 4) )
          return 1;
        v4 = a1 + (unsigned __int16)*v2;
        if ( (unsigned int)(v3 + 4) >= v4 )
          return 0;
        if ( (unsigned __int8 *)((unsigned int)(v3 + 3) & 0xFFFFFFFE) != v3 + 2 )
          return 0;
        v5 = *((unsigned __int16 *)v3 + 1);
        if ( (unsigned int)&v3[v5] > v4 )
          return 0;
        v6 = *v3;
        if ( *v3 <= 3u || v6 <= 0xAu && v6 >= 9u || v6 <= 0xEu && v6 >= 0xDu || v6 == 17 || v6 == 19 || v6 == 20 )
        {
          valid = RtlpValidKnownAce(v3);
          goto LABEL_11;
        }
        if ( v6 == 4 )
        {
          if ( *(_BYTE *)a1 < 3u )
            return 0;
          valid = RtlpValidCompoundAce(v3);
          goto LABEL_11;
        }
        if ( v6 >= 5u && v6 <= 8u || v6 >= 0xBu && v6 <= 0xCu || (unsigned __int8)(v6 - 15) <= 1u )
        {
          if ( *(_BYTE *)a1 < 4u )
            return 0;
          valid = RtlpValidObjectAce(v3);
          goto LABEL_11;
        }
        if ( v6 == 18 )
          break;
        if ( v6 == 21 )
        {
          valid = RtlpValidAccessFilterAce(v3);
LABEL_11:
          if ( !valid )
            return 0;
          goto LABEL_12;
        }
        if ( v5 < 4 )
          return 0;
LABEL_12:
        v3 += *((unsigned __int16 *)v3 + 1);
        ++v1;
        v2 = (_WORD *)(a1 + 2);
      }
      valid = RtlpValidAttributeAce(v3);
      goto LABEL_11;
    }
  }
  return 0;
}
