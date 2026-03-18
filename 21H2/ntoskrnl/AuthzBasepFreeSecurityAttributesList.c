/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x14028AB90
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140204870 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140206780 (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepEvaluateAceCondition @ 0x140219130 (AuthzBasepEvaluateAceCondition.c)
 *     SepFreeResourceInfo @ 0x1402A4660 (SepFreeResourceInfo.c)
 *     SeAccessCheckWithHint @ 0x1402F9CF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1402FBEC0 (SeAccessCheckByType.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140300534 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403763A8 (SepVerifyDesktopAppxPackageName.c)
 *     SepCreateClaimAttributes @ 0x14066B830 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1406FE720 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14084C934 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x1409CAE50 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x1409CB770 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1409CE8C4 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1409CE94C (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14028AC10 (AuthzBasepFreeSecurityAttributeValues.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  void **v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  void **v5; // rcx

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == v2 )
      break;
    if ( (v3[7] & 1) != 0 )
    {
      v4 = (_QWORD *)*v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (void **)v3[1], *v5 != v3) )
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    AuthzBasepFreeSecurityAttributeValues(v3, 0LL);
    ExFreePoolWithTag(v3, 0);
  }
}
