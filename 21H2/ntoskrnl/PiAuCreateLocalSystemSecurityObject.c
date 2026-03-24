/*
 * XREFs of PiAuCreateLocalSystemSecurityObject @ 0x140A517DC
 * Callers:
 *     PiAuCreateSecurityObjects @ 0x140A516E8 (PiAuCreateSecurityObjects.c)
 * Callees:
 *     memset @ 0x140414200 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x140603560 (RtlCreateSecurityDescriptor.c)
 *     RtlValidSecurityDescriptor @ 0x14065EF00 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1406600D0 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140660500 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140660570 (RtlCreateAcl.c)
 *     RtlSetGroupSecurityDescriptor @ 0x140676C10 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x140676C70 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140768430 (RtlAbsoluteToSelfRelativeSD.c)
 *     RtlAddAccessAllowedAceEx @ 0x140781970 (RtlAddAccessAllowedAceEx.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiAuCreateLocalSystemSecurityObject(PSID *a1)
{
  unsigned __int8 *v2; // rax
  void *v3; // rdi
  ULONG v4; // ebx
  ACL *PoolWithTag; // rax
  ACL *v6; // rsi
  NTSTATUS Acl; // ebx
  ULONG v8; // eax
  ULONG v9; // ebx
  PVOID v10; // rax
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+50h] [rbp-10h]
  ULONG BufferLength; // [rsp+80h] [rbp+20h] BYREF

  v13 = 0LL;
  v2 = (unsigned __int8 *)*a1;
  v3 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v4 = 4 * v2[1] + 24;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v4, 0x47706E50u);
  v6 = PoolWithTag;
  if ( PoolWithTag )
  {
    Acl = RtlCreateAcl(PoolWithTag, v4, 2u);
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAceEx(v6, 2u, 0, 0xF0000u, *a1);
      if ( Acl >= 0 )
      {
        Acl = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v6, 0);
          if ( Acl >= 0 )
          {
            Acl = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, *a1, 0);
            if ( Acl >= 0 )
            {
              Acl = RtlSetGroupSecurityDescriptor(SecurityDescriptor, *a1, 0);
              if ( Acl >= 0 )
              {
                if ( RtlValidSecurityDescriptor(SecurityDescriptor)
                  && (v8 = RtlLengthSecurityDescriptor(SecurityDescriptor), BufferLength = v8, v8 >= 0x28) )
                {
                  v9 = v8;
                  v10 = ExAllocatePoolWithTag(PagedPool, v8, 0x47706E50u);
                  v3 = v10;
                  if ( v10 )
                  {
                    memset(v10, 0, v9);
                    Acl = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, v3, &BufferLength);
                    if ( Acl >= 0 )
                    {
                      PiAuLocalSystemSecurityObject = v3;
                      v3 = 0LL;
                    }
                  }
                  else
                  {
                    Acl = -1073741670;
                  }
                }
                else
                {
                  Acl = -1073741595;
                }
              }
            }
          }
        }
      }
    }
    ExFreePoolWithTag(v6, 0x47706E50u);
    if ( v3 )
      ExFreePoolWithTag(v3, 0x47706E50u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
