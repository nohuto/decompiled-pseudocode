/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x1402E2490
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x140201564 (SepVerifyDesktopAppxPackageName.c)
 *     SepDesktopAppxSubProcessToken @ 0x1402E3978 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140311928 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1405941B4 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140594994 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140595A20 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x140595B50 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140595E8C (SepSetSingletonEntry.c)
 *     SepSetProcessUniqueAttribute @ 0x14068F688 (SepSetProcessUniqueAttribute.c)
 *     SepCreateClaimAttributes @ 0x1406A9F58 (SepCreateClaimAttributes.c)
 *     NtSetInformationToken @ 0x1406AB220 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407B87B8 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x140925380 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x14029DCC0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x1402E2374 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1402E23E4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1402E2AB0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x1402E2E18 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402E3090 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1405BF99C (AuthzBasepDeleteAllSecurityAttributes.c)
 */

__int64 __fastcall AuthzBasepSetSecurityAttributesToken(_DWORD *a1, int *a2, __int64 a3)
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
            v13 = AuthzBasepReplaceSecurityAttribute((__int64)a1, v9);
          }
          else
          {
            v13 = AuthzBasepDeleteSecurityAttribute(a1, v9);
          }
        }
        else
        {
          v13 = AuthzBasepAddSecurityAttribute((__int64)a1, (__int64)v9);
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
