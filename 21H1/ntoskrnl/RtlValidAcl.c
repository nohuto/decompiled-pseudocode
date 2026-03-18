/*
 * XREFs of RtlValidAcl @ 0x140606620
 * Callers:
 *     RtlAddMandatoryAce @ 0x140605780 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x140605BC0 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlAddAce @ 0x1406156D0 (RtlAddAce.c)
 *     SepCheckAcl @ 0x1406754A0 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14068BE70 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1406C1D40 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406DD1C0 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x1407A6F90 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090DBC0 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090DEE0 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090E210 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140921920 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140921B38 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140921C9C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x140921DFC (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x1409537B4 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x1406E1B94 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x14090E70C (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x14090E90C (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14090E988 (RtlpValidObjectAce.c)
 */

char __fastcall RtlValidAcl(__int64 a1)
{
  _WORD *v2; // r14
  unsigned int v3; // ebp
  unsigned __int8 *v4; // rbx
  int v5; // r15d
  unsigned __int64 v6; // rdx
  unsigned __int16 *v7; // rsi
  unsigned __int64 v8; // rcx
  unsigned int v9; // edx
  __int64 v10; // rax

  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 2u )
  {
    v2 = (_WORD *)(a1 + 2);
    if ( ((a1 + 3) & 0xFFFFFFFFFFFFFFFEuLL) == a1 + 2 && *v2 >= 8u )
    {
      v3 = 0;
      v4 = (unsigned __int8 *)(a1 + 8);
      if ( !*(_WORD *)(a1 + 4) )
        return 1;
      v5 = 1730063;
      while ( 1 )
      {
        v6 = a1 + (unsigned __int16)*v2;
        if ( (unsigned __int64)(v4 + 4) >= v6 )
          break;
        v7 = (unsigned __int16 *)(v4 + 2);
        if ( (unsigned __int8 *)((unsigned __int64)(v4 + 3) & 0xFFFFFFFFFFFFFFFEuLL) != v4 + 2 )
          break;
        v8 = *v7;
        if ( (unsigned __int64)&v4[v8] > v6 )
          break;
        v9 = *v4;
        if ( (unsigned __int8)v9 <= 0x14u && _bittest(&v5, v9) )
        {
          if ( ((v8 + 3) & 0xFFFFFFFFFFFFFFFCuLL) != v8 )
            return 0;
          if ( (unsigned int)v8 < 0x10 )
            return 0;
          if ( v4[8] != 1 )
            return 0;
          v10 = v4[9];
          if ( (unsigned __int8)v10 > 0xFu || v8 < 4 * v10 + 16 )
            return 0;
        }
        else if ( (_BYTE)v9 == 4 )
        {
          if ( *(_BYTE *)a1 < 3u || !(unsigned __int8)RtlpValidCompoundAce(v4) )
            return 0;
        }
        else if ( (unsigned __int8)(v9 - 5) <= 3u
               || (unsigned __int8)(v9 - 11) <= 1u
               || (unsigned __int8)(v9 - 15) <= 1u )
        {
          if ( *(_BYTE *)a1 < 4u || !(unsigned __int8)RtlpValidObjectAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v9 == 18 )
        {
          if ( !(unsigned __int8)RtlpValidAttributeAce(v4) )
            return 0;
        }
        else if ( (_BYTE)v9 == 21 )
        {
          if ( !(unsigned __int8)RtlpValidAccessFilterAce(v4) )
            return 0;
        }
        else if ( (unsigned int)v8 < 4 )
        {
          return 0;
        }
        ++v3;
        v4 += *v7;
        if ( v3 >= *(unsigned __int16 *)(a1 + 4) )
          return 1;
      }
    }
  }
  return 0;
}
