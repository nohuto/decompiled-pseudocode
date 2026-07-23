/*
 * XREFs of SepAppendAceToTokenDefaultDacl @ 0x1403577F4
 * Callers:
 *     NtCreateLowBoxToken @ 0x1406BAFC0 (NtCreateLowBoxToken.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14027DA50 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x14027DB50 (RtlGetAce.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlQueryInformationAcl @ 0x140669400 (RtlQueryInformationAcl.c)
 *     RtlAddAce @ 0x14066A9B0 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x1406BB620 (RtlAddAccessAllowedAce.c)
 *     SepAppendDefaultDacl @ 0x140704678 (SepAppendDefaultDacl.c)
 *     SepFreeDefaultDacl @ 0x1407046D8 (SepFreeDefaultDacl.c)
 *     SepExpandDynamic @ 0x140704724 (SepExpandDynamic.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenDefaultDacl(__int64 a1, __int64 a2)
{
  ACL *v2; // rbp
  ACL *v3; // rsi
  int AclSize; // ebx
  NTSTATUS Acl; // edi
  ULONG v8; // r15d
  ACL *PoolWithTag; // rax
  ULONG v10; // ebx
  ULONG AclInformation; // [rsp+30h] [rbp-58h] BYREF
  PVOID Ace; // [rsp+38h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-48h] BYREF
  int v15; // [rsp+48h] [rbp-40h]

  v2 = *(ACL **)(a1 + 184);
  AclInformation = 0;
  v3 = 0LL;
  Ace = 0LL;
  v14 = 0LL;
  v15 = 0;
  if ( !v2 )
  {
    Acl = 0;
LABEL_12:
    if ( v3 )
      ExFreePoolWithTag(v3, 0);
    return (unsigned int)Acl;
  }
  if ( RtlFindAceBySid((__int64)v2, (_WORD *)a2, 0LL) )
    return 0;
  AclSize = v2->AclSize;
  Acl = RtlQueryInformationAcl(v2, &AclInformation, 4u, AclRevisionInformation);
  if ( Acl >= 0 )
  {
    Acl = RtlQueryInformationAcl(v2, &v14, 0xCu, AclSizeInformation);
    if ( Acl >= 0 )
    {
      v8 = (AclSize + 4 * *(unsigned __int8 *)(a2 + 1) + 19) & 0xFFFFFFFC;
      PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v8, 0x63416553u);
      v3 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      v10 = AclInformation;
      Acl = RtlCreateAcl(PoolWithTag, v8, AclInformation);
      if ( Acl >= 0 )
      {
        Acl = RtlGetAce(v2, 0, &Ace);
        if ( Acl >= 0 )
        {
          Acl = RtlAddAce(v3, v10, 0, Ace, HIDWORD(v14) - 8);
          if ( Acl >= 0 )
          {
            Acl = RtlAddAccessAllowedAce(v3, v10, 0x10000000u, (PSID)a2);
            if ( Acl >= 0 )
            {
              Acl = SepExpandDynamic(a1, (v8 + 4 * *(unsigned __int8 *)(*(_QWORD *)(a1 + 168) + 1LL) + 11) & 0xFFFFFFFC);
              if ( Acl >= 0 )
              {
                SepFreeDefaultDacl(a1);
                SepAppendDefaultDacl(a1, v3);
              }
            }
          }
        }
      }
      goto LABEL_12;
    }
  }
  return (unsigned int)Acl;
}
