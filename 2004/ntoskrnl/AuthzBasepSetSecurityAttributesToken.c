/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140268590
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x140269A78 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140340B78 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140590714 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140590EF4 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140591F80 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405920B0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405923EC (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x140614310 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x14062F7C8 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1406B9BC0 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407AA878 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x14091F700 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140268474 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1402684E4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140268BB0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140268F18 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140269190 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402C4060 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1405BBE3C (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(__int64 a1, int *a2, __int64 a3)
{
  int v3; // r14d
  int v7; // ebx
  __int64 v8; // rbp
  __int128 *v9; // rdx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  v3 = *a2;
  if ( a3 )
  {
    v7 = AuthzBasepValidateSecurityAttributes(a3);
    if ( v7 >= 0 )
    {
      if ( v3 == 1 )
        AuthzBasepDeleteAllSecurityAttributes(a1);
      v8 = 0LL;
      if ( *(_DWORD *)(a3 + 4) )
      {
        while ( 1 )
        {
          v9 = (__int128 *)(*(_QWORD *)(a3 + 8) + 40 * v8);
          if ( v3 == 1 )
            goto LABEL_11;
          v10 = a2[v8];
          if ( v10 )
            break;
          v7 = 0;
LABEL_13:
          if ( v7 >= 0 )
          {
            v8 = (unsigned int)(v8 + 1);
            if ( (unsigned int)v8 < *(_DWORD *)(a3 + 4) )
              continue;
          }
          goto LABEL_15;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_19;
LABEL_11:
            v13 = AuthzBasepReplaceSecurityAttribute(a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute(a1, (__int64)v9);
        }
        v7 = v13;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList(a1);
    v7 = 0;
  }
  else
  {
LABEL_19:
    v7 = -1073741811;
  }
LABEL_15:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
