/*
 * XREFs of SepAppendAceToTokenObjectAcl @ 0x140613AC0
 * Callers:
 *     NtDuplicateToken @ 0x1406496B0 (NtDuplicateToken.c)
 *     SeCopyClientToken @ 0x1406C24B8 (SeCopyClientToken.c)
 *     SepAppendAdminAceToTokenAcl @ 0x1406ECE78 (SepAppendAdminAceToTokenAcl.c)
 *     SeSubProcessToken @ 0x1406F7240 (SeSubProcessToken.c)
 *     NtFilterToken @ 0x1407016F0 (NtFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14070D200 (NtCreateLowBoxToken.c)
 *     SeFilterToken @ 0x140787370 (SeFilterToken.c)
 *     SepCopyAnonymousTokenAndSetSilo @ 0x140917F80 (SepCopyAnonymousTokenAndSetSilo.c)
 * Callees:
 *     RtlFindAceBySid @ 0x14025B320 (RtlFindAceBySid.c)
 *     RtlGetAce @ 0x14025B420 (RtlGetAce.c)
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     ObDereferenceSecurityDescriptor @ 0x140613D20 (ObDereferenceSecurityDescriptor.c)
 *     ObpGetObjectSecurity @ 0x140613E80 (ObpGetObjectSecurity.c)
 *     RtlQueryInformationAcl @ 0x140614120 (RtlQueryInformationAcl.c)
 *     ObSetSecurityObjectByPointer @ 0x1406155C0 (ObSetSecurityObjectByPointer.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlAddAce @ 0x1406156D0 (RtlAddAce.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepAppendAceToTokenObjectAcl(__int64 a1, int a2, _WORD *a3)
{
  __int64 result; // rax
  PVOID v6; // rsi
  int Acl; // ebp
  __int16 v8; // ax
  __int64 v9; // rax
  ACL *v10; // rdi
  ULONG v11; // eax
  int v12; // r13d
  ULONG v13; // ebp
  ACL *PoolWithTag; // rax
  ACL *v15; // r14
  ULONG v16; // ebx
  _BYTE v17[4]; // [rsp+30h] [rbp-98h] BYREF
  ULONG AclRevision; // [rsp+34h] [rbp-94h] BYREF
  int v19; // [rsp+38h] [rbp-90h]
  PVOID P; // [rsp+40h] [rbp-88h] BYREF
  PVOID Ace; // [rsp+48h] [rbp-80h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+50h] [rbp-78h] BYREF
  __int64 v23; // [rsp+70h] [rbp-58h]
  __int64 AclInformation; // [rsp+78h] [rbp-50h] BYREF
  int v25; // [rsp+80h] [rbp-48h]

  v19 = a2;
  AclInformation = 0LL;
  v25 = 0;
  P = 0LL;
  v17[0] = 0;
  Ace = 0LL;
  AclRevision = 0;
  v23 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  result = ObpGetObjectSecurity(a1, &P, v17);
  v6 = P;
  Acl = result;
  if ( (int)result >= 0 )
  {
    if ( !P )
      return result;
    v8 = *((_WORD *)P + 1);
    if ( (v8 & 4) != 0 )
    {
      if ( v8 >= 0 )
      {
        v10 = (ACL *)*((_QWORD *)P + 4);
        goto LABEL_7;
      }
      v9 = *((unsigned int *)P + 4);
      if ( (_DWORD)v9 )
      {
        v10 = (ACL *)((char *)P + v9);
LABEL_7:
        if ( v10 )
        {
          if ( !RtlFindAceBySid((__int64)v10, a3, 0LL) )
          {
            Acl = RtlQueryInformationAcl(v10, &AclInformation, 0xCu, AclSizeInformation);
            if ( Acl >= 0 )
            {
              Acl = RtlQueryInformationAcl(v10, &AclRevision, 4u, AclRevisionInformation);
              if ( Acl >= 0 )
              {
                v11 = RtlLengthSid(a3);
                v12 = HIDWORD(AclInformation);
                v13 = (v11 + HIDWORD(AclInformation) + 11) & 0xFFFFFFFC;
                PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v13, 0x63416553u);
                v15 = PoolWithTag;
                if ( PoolWithTag )
                {
                  v16 = AclRevision;
                  Acl = RtlCreateAcl(PoolWithTag, v13, AclRevision);
                  if ( Acl >= 0 )
                  {
                    Acl = RtlGetAce(v10, 0, &Ace);
                    if ( Acl >= 0 )
                    {
                      Acl = RtlAddAce(v15, v16, 0, Ace, v12 - 8);
                      if ( Acl >= 0 )
                      {
                        Acl = RtlpAddKnownAce(v15, v16, 0, v19, (unsigned __int8 *)a3, 0);
                        if ( Acl >= 0 )
                        {
                          LOBYTE(SecurityDescriptor[0]) = 1;
                          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v15, 0);
                          if ( Acl >= 0 )
                            Acl = ObSetSecurityObjectByPointer(a1, 4LL, SecurityDescriptor);
                        }
                      }
                    }
                  }
                  ExFreePoolWithTag(v15, 0);
                }
                else
                {
                  Acl = -1073741670;
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 )
  {
    if ( v17[0] )
      ExFreePoolWithTag(v6, 0);
    else
      ObDereferenceSecurityDescriptor(v6, 1LL);
  }
  return (unsigned int)Acl;
}
