/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140338294
 * Callers:
 *     SepVerifyDesktopAppxPackageName @ 0x1402014F8 (SepVerifyDesktopAppxPackageName.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140303DA8 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepDesktopAppxSubProcessToken @ 0x140339778 (SepDesktopAppxSubProcessToken.c)
 *     SepInternalSetSecurityAttributesToken @ 0x140590024 (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x140590804 (SepDesktopAppModifyTokenBreakaway.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140591890 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405919C0 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x140591CFC (SepSetSingletonEntry.c)
 *     SepCreateClaimAttributes @ 0x140674008 (SepCreateClaimAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x1406F76FC (SepSetProcessUniqueAttribute.c)
 *     NtSetInformationToken @ 0x1406F7D00 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x1407A7718 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x14091E450 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributesList @ 0x140231230 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepReplaceSecurityAttribute @ 0x140338178 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1403381E8 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x1403388B0 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x140338C18 (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x140338E90 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x1405BB71C (AuthzBasepDeleteAllSecurityAttributes.c)
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
