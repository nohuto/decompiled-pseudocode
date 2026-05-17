/*
 * XREFs of RtlValidAcl @ 0x180037760
 * Callers:
 *     RtlpAddKnownAce @ 0x1800375C4 (RtlpAddKnownAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x180067CF0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAce @ 0x180068160 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x180068780 (RtlAddMandatoryAce.c)
 *     RtlValidSecurityDescriptor @ 0x1800711F0 (RtlValidSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x180074C40 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1800797B0 (RtlDeleteAce.c)
 *     RtlpConvertAclToAutoInherit @ 0x1800E7924 (RtlpConvertAclToAutoInherit.c)
 *     RtlAddAccessFilterAce @ 0x1800E9560 (RtlAddAccessFilterAce.c)
 *     RtlAddCompoundAce @ 0x1800E97E0 (RtlAddCompoundAce.c)
 *     RtlAddResourceAttributeAce @ 0x1800E9950 (RtlAddResourceAttributeAce.c)
 *     RtlAddScopedPolicyIDAce @ 0x1800E9CA0 (RtlAddScopedPolicyIDAce.c)
 *     RtlpAddKnownObjectAce @ 0x1800E9F60 (RtlpAddKnownObjectAce.c)
 * Callees:
 *     RtlpValidKnownAce @ 0x180037900 (RtlpValidKnownAce.c)
 *     RtlpValidAccessFilterAce @ 0x1800EAB54 (RtlpValidAccessFilterAce.c)
 *     RtlpValidAttributeAce @ 0x1800EAD3C (RtlpValidAttributeAce.c)
 *     RtlpValidCompoundAce @ 0x1800EAE34 (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x1800EAEB0 (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r14
  _BYTE *v3; // rbx
  unsigned int i; // esi
  unsigned __int64 v5; // rcx
  unsigned __int16 *v6; // r15
  __int64 v7; // rdx
  int v8; // ecx
  char result; // al

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != a1 + 2 )
      return 0;
    if ( *v2 < 8u )
      return 0;
    v3 = (_BYTE *)(a1 + 8);
    for ( i = 0; ; ++i )
    {
      if ( i >= *(unsigned __int16 *)(a1 + 4) )
        return 1;
      v5 = a1 + (unsigned __int16)*v2;
      if ( (unsigned __int64)(v3 + 4) >= v5 )
        return 0;
      v6 = (unsigned __int16 *)(v3 + 2);
      if ( (_BYTE *)((unsigned __int64)(v3 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v3 + 2 )
        return 0;
      v7 = *v6;
      if ( (unsigned __int64)&v3[v7] > v5 )
        return 0;
      if ( *v3 <= 0x14u && (v8 = 1730063, _bittest(&v8, (unsigned __int8)*v3)) )
      {
        if ( !(unsigned __int8)RtlpValidKnownAce(v3) )
          return 0;
      }
      else if ( *v3 == 4 )
      {
        if ( *(_BYTE *)a1 < 3u )
          return 0;
        result = RtlpValidCompoundAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned __int8)(*v3 - 5) <= 3u
             || (unsigned __int8)(*v3 - 11) <= 1u
             || (unsigned __int8)(*v3 - 15) <= 1u )
      {
        if ( *(_BYTE *)a1 < 4u )
          return 0;
        result = RtlpValidObjectAce(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 18 )
      {
        result = RtlpValidAttributeAce(v3);
        if ( !result )
          return result;
      }
      else if ( *v3 == 21 )
      {
        result = RtlpValidAccessFilterAce(v3);
        if ( !result )
          return result;
      }
      else if ( (unsigned int)v7 < 4 )
      {
        return 0;
      }
      v3 += *v6;
    }
  }
  return 0;
}
