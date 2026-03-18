/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x1402C4060
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14025F8A0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140268590 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepFreeResourceInfo @ 0x140294B1C (SepFreeResourceInfo.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x1402961C0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x14029BDD0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x14032AAEC (SepCleanupMarkedForDeletionEntries.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     SepTokenDeleteMethod @ 0x1406975D0 (SepTokenDeleteMethod.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407AA878 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x14091DFD0 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091E900 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x1409217C0 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140921848 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140357E34 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall AuthzBasepFreeSecurityAttributesList(_DWORD *a1)
{
  void **v2; // r15
  void ***v3; // rbx
  void **v4; // rax
  void **v5; // rcx
  void **v6; // rdi
  _DWORD *v7; // rcx
  int v8; // eax
  _QWORD *v9; // rax
  void **v10; // rdx
  char *v11; // r14
  _DWORD **v12; // rdx
  void **v13; // r8
  int v14; // eax
  char *v15; // rbp

  v2 = (void **)(a1 + 2);
  while ( 1 )
  {
    v3 = (void ***)*v2;
    if ( *v2 == v2 )
      break;
    if ( ((_DWORD)v3[7] & 1) != 0 )
    {
      v4 = *v3;
      if ( (*v3)[1] != v3 || (v5 = v3[1], *v5 != v3) )
LABEL_19:
        __fastfail(3u);
      *v5 = v4;
      v4[1] = v5;
      *((_DWORD *)v3 + 14) &= ~1u;
      if ( a1 )
        --*a1;
    }
    v6 = (void **)(v3 + 9);
    while ( 1 )
    {
      v7 = *v6;
      if ( *v6 == v6 )
        break;
      v8 = v7[8];
      if ( (v8 & 2) != 0 )
      {
        v12 = (_DWORD **)*((_QWORD *)v7 + 2);
        if ( v12[1] != v7 + 4 )
          goto LABEL_19;
        v13 = (void **)*((_QWORD *)v7 + 3);
        if ( *v13 != v7 + 4 )
          goto LABEL_19;
        *v13 = v12;
        v12[1] = v13;
        v7[8] &= ~2u;
        --*((_DWORD *)v3 + 22);
        v8 = v7[8];
      }
      if ( (v8 & 1) != 0 )
      {
        v9 = *(_QWORD **)v7;
        if ( *(_DWORD **)(*(_QWORD *)v7 + 8LL) != v7 )
          goto LABEL_19;
        v10 = (void **)*((_QWORD *)v7 + 1);
        if ( *v10 != v7 )
          goto LABEL_19;
        *v10 = v9;
        v9[1] = v10;
        v7[8] &= ~1u;
        --*((_DWORD *)v3 + 15);
        if ( (v7[8] & 4) != 0 )
          --*((_DWORD *)v3 + 16);
      }
      ExFreePoolWithTag(v7, 0);
    }
    v11 = (char *)v3[12];
    while ( v11 != (char *)(v3 + 12) )
    {
      v14 = *((_DWORD *)v11 + 4);
      v15 = v11 - 16;
      v11 = *(char **)v11;
      if ( (v14 & 1) == 0 )
      {
        AuthzBasepRemoveSecurityAttributeValueFromLists(v3, v15, 0LL);
        ExFreePoolWithTag(v15, 0);
      }
    }
    ExFreePoolWithTag(v3, 0);
  }
}
