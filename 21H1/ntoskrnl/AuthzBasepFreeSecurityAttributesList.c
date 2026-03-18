/*
 * XREFs of AuthzBasepFreeSecurityAttributesList @ 0x140231230
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SepFreeResourceInfo @ 0x14025829C (SepFreeResourceInfo.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140259940 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1402B88D0 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140338294 (AuthzBasepSetSecurityAttributesToken.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140339CCC (SepCleanupMarkedForDeletionEntries.c)
 *     SepTokenDeleteMethod @ 0x1405EE0D0 (SepTokenDeleteMethod.c)
 *     SepCreateClaimAttributes @ 0x140674008 (SepCreateClaimAttributes.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407A7718 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SeExamineSacl @ 0x14091CD20 (SeExamineSacl.c)
 *     SepExamineSaclEx @ 0x14091D650 (SepExamineSaclEx.c)
 *     SepDeleteClaimAttributes @ 0x140920510 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140920598 (SepDuplicateClaimAttributes.c)
 * Callees:
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x14031A2EC (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
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
