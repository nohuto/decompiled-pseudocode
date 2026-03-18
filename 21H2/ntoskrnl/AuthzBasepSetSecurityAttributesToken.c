/*
 * XREFs of AuthzBasepSetSecurityAttributesToken @ 0x140204870
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x140203EE0 (SepDesktopAppxSubProcessToken.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x140218B60 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     SepVerifyDesktopAppxPackageName @ 0x1403763A8 (SepVerifyDesktopAppxPackageName.c)
 *     SepSetTokenAllApplicationPackagesPolicy @ 0x140377258 (SepSetTokenAllApplicationPackagesPolicy.c)
 *     SepInternalSetSecurityAttributesToken @ 0x1405F3E6C (SepInternalSetSecurityAttributesToken.c)
 *     SepDesktopAppModifyTokenBreakaway @ 0x1405F4338 (SepDesktopAppModifyTokenBreakaway.c)
 *     SeSetSecurityAttributesTokenEx @ 0x1405F5440 (SeSetSecurityAttributesTokenEx.c)
 *     SepSetSingletonEntry @ 0x1405F577C (SepSetSingletonEntry.c)
 *     SepCreateClaimAttributes @ 0x14066B830 (SepCreateClaimAttributes.c)
 *     SepSetProcessUniqueAttribute @ 0x140672120 (SepSetProcessUniqueAttribute.c)
 *     NtSetInformationToken @ 0x140754810 (NtSetInformationToken.c)
 *     AuthzBasepInitializeSystemSecurityAttributes @ 0x14084C934 (AuthzBasepInitializeSystemSecurityAttributes.c)
 *     SepAddTokenOriginClaim @ 0x1409CC540 (SepAddTokenOriginClaim.c)
 * Callees:
 *     AuthzBasepReplaceSecurityAttribute @ 0x140204758 (AuthzBasepReplaceSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x1402047C4 (AuthzBasepAddSecurityAttribute.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140204E2C (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepValidateSecurityAttributes @ 0x14020517C (AuthzBasepValidateSecurityAttributes.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x1402053E4 (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepDeleteAllSecurityAttributes @ 0x14064A2A8 (AuthzBasepDeleteAllSecurityAttributes.c)
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
          v8 = (unsigned int)(v8 + 1);
          if ( (unsigned int)v8 >= *(_DWORD *)(a3 + 4) )
            goto LABEL_14;
        }
        v11 = v10 - 2;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            if ( v12 != 1 )
              goto LABEL_18;
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
        if ( v13 < 0 )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
  }
  else if ( v3 == 1 )
  {
    AuthzBasepFreeSecurityAttributesList();
    v7 = 0;
  }
  else
  {
LABEL_18:
    v7 = -1073741811;
  }
LABEL_14:
  AuthzBasepFinaliseSecurityAttributesList(a1, v7 >= 0);
  return (unsigned int)v7;
}
