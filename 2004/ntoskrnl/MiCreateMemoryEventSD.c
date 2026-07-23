/*
 * XREFs of MiCreateMemoryEventSD @ 0x14078905C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1407884A4 (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     RtlCreateSecurityDescriptor @ 0x14065E650 (RtlCreateSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x14066A940 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateMemoryEventSD(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  int Acl; // edi
  ULONG v3; // ebx
  ULONG v4; // ebx
  ULONG v5; // ebx
  ULONG v6; // ebx
  ULONG v7; // ebp
  ACL *Pool; // rax
  ACL *v9; // rbx

  Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( Acl >= 0 )
  {
    v3 = RtlLengthSid(SeAllRestrictedAppPackagesSid);
    v4 = RtlLengthSid(SeAllAppPackagesSid) + v3;
    v5 = RtlLengthSid(SeWorldSid) + v4;
    v6 = RtlLengthSid(SeAliasAdminsSid) + v5;
    v7 = v6 + RtlLengthSid(SeLocalSystemSid) + 68;
    Pool = (ACL *)MiAllocatePool(256, v7, 0x6C636144u);
    v9 = Pool;
    if ( Pool )
    {
      Acl = RtlCreateAcl(Pool, v7, 2u);
      if ( Acl >= 0 )
      {
        Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeWorldSid, 0);
        if ( Acl >= 0 )
        {
          Acl = RtlpAddKnownAce(v9, 2u, 0, 2031619, (unsigned __int8 *)SeAliasAdminsSid, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlpAddKnownAce(v9, 2u, 0, 2031619, (unsigned __int8 *)SeLocalSystemSid, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllAppPackagesSid, 0);
              if ( Acl >= 0 )
              {
                Acl = RtlpAddKnownAce(v9, 2u, 0, 1179649, (unsigned __int8 *)SeAllRestrictedAppPackagesSid, 0);
                if ( Acl >= 0 )
                {
                  Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
                  if ( Acl >= 0 )
                  {
                    v9 = 0LL;
                    Acl = 0;
                  }
                }
              }
            }
          }
        }
      }
      if ( v9 )
        ExFreePoolWithTag(v9, 0);
    }
  }
  return (unsigned int)Acl;
}
