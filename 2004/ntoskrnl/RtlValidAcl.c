/*
 * XREFs of RtlValidAcl @ 0x14067E700
 * Callers:
 *     SepCheckAcl @ 0x1406311F0 (SepCheckAcl.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x14063E960 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlAddMandatoryAce @ 0x14067D860 (RtlAddMandatoryAce.c)
 *     SeCaptureSecurityDescriptor @ 0x14067DCA0 (SeCaptureSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     RtlValidSecurityDescriptor @ 0x1406DC910 (RtlValidSecurityDescriptor.c)
 *     SeValidSecurityDescriptor @ 0x1406E22C0 (SeValidSecurityDescriptor.c)
 *     RtlDeleteAce @ 0x1406FFE20 (RtlDeleteAce.c)
 *     RtlAddProcessTrustLabelAce @ 0x140799FC0 (RtlAddProcessTrustLabelAce.c)
 *     RtlAddAccessFilterAce @ 0x14090EF60 (RtlAddAccessFilterAce.c)
 *     RtlAddResourceAttributeAce @ 0x14090F280 (RtlAddResourceAttributeAce.c)
 *     RtlpAddKnownObjectAce @ 0x14090F5B0 (RtlpAddKnownObjectAce.c)
 *     SddlAddAccessFilterAce @ 0x140922BD0 (SddlAddAccessFilterAce.c)
 *     SddlAddMandatoryAce @ 0x140922DE8 (SddlAddMandatoryAce.c)
 *     SddlAddProcessTrustLabelAce @ 0x140922F4C (SddlAddProcessTrustLabelAce.c)
 *     SddlAddScopedPolicyIDAce @ 0x1409230AC (SddlAddScopedPolicyIDAce.c)
 *     CMFCreateSecurityDescriptor @ 0x140954E84 (CMFCreateSecurityDescriptor.c)
 * Callees:
 *     RtlpValidAttributeAce @ 0x140704514 (RtlpValidAttributeAce.c)
 *     RtlpValidAccessFilterAce @ 0x14090FAAC (RtlpValidAccessFilterAce.c)
 *     RtlpValidCompoundAce @ 0x14090FCAC (RtlpValidCompoundAce.c)
 *     RtlpValidObjectAce @ 0x14090FD28 (RtlpValidObjectAce.c)
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
