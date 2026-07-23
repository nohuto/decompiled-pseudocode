/*
 * XREFs of DrvDbGetSecurityDescriptor @ 0x14097A06C
 * Callers:
 *     DrvDbLoadDatabaseNode @ 0x1406ADF9C (DrvDbLoadDatabaseNode.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     memset @ 0x140408F80 (memset.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlValidSid @ 0x140606780 (RtlValidSid.c)
 *     RtlLengthSecurityDescriptor @ 0x140614750 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     RtlValidSecurityDescriptor @ 0x1406BB6D0 (RtlValidSecurityDescriptor.c)
 *     RtlSetGroupSecurityDescriptor @ 0x14070D890 (RtlSetGroupSecurityDescriptor.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 *     RtlAbsoluteToSelfRelativeSD @ 0x140751B70 (RtlAbsoluteToSelfRelativeSD.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

void *DrvDbGetSecurityDescriptor()
{
  void *v0; // r13
  PVOID PoolWithTag; // rax
  void *Src; // r15
  PVOID v3; // rax
  void *v4; // r14
  PVOID v5; // rax
  void *v6; // rsi
  PVOID v7; // rax
  void *v8; // rdi
  ULONG v9; // ebx
  ULONG v10; // ebx
  ULONG v11; // ebx
  ACL *v12; // rax
  ACL *v13; // r12
  ULONG v14; // eax
  ULONG v15; // r13d
  PVOID v16; // rax
  void *v17; // rbx
  _OWORD SecurityDescriptor[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v20; // [rsp+50h] [rbp-18h]
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+B0h] [rbp+48h] BYREF
  _SID_IDENTIFIER_AUTHORITY v22; // [rsp+B8h] [rbp+50h] BYREF
  _SID_IDENTIFIER_AUTHORITY v23; // [rsp+C0h] [rbp+58h] BYREF
  void *v24; // [rsp+C8h] [rbp+60h]

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v24 = 0LL;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_DWORD *)v22.Value = 0;
  *(_WORD *)&v22.Value[4] = 768;
  *(_DWORD *)v23.Value = 0;
  *(_WORD *)&v23.Value[4] = 256;
  v20 = 0LL;
  v0 = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x42444450u);
  Src = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u) >= 0 )
    {
      *RtlSubAuthoritySid(Src, 0) = 18;
      if ( RtlValidSid(Src) )
      {
        v3 = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x42444450u);
        v4 = v3;
        if ( v3 )
        {
          if ( RtlInitializeSid(v3, &v22, 1u) >= 0 )
          {
            *RtlSubAuthoritySid(v4, 0) = 4;
            if ( RtlValidSid(v4) )
            {
              v5 = ExAllocatePoolWithTag(PagedPool, 0xCuLL, 0x42444450u);
              v6 = v5;
              if ( v5 )
              {
                if ( RtlInitializeSid(v5, &v23, 1u) >= 0 )
                {
                  *RtlSubAuthoritySid(v6, 0) = 0;
                  if ( RtlValidSid(v6) )
                  {
                    v7 = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42444450u);
                    v8 = v7;
                    if ( v7 )
                    {
                      if ( RtlInitializeSid(v7, &IdentifierAuthority, 2u) >= 0 )
                      {
                        *RtlSubAuthoritySid(v8, 0) = 32;
                        *RtlSubAuthoritySid(v8, 1u) = 544;
                        if ( RtlValidSid(v8) )
                        {
                          v9 = RtlLengthSid(v6);
                          v10 = RtlLengthSid(v4) + v9;
                          v11 = RtlLengthSid(Src) + 32 + v10;
                          v12 = (ACL *)ExAllocatePoolWithTag(PagedPool, v11, 0x42444450u);
                          v13 = v12;
                          if ( v12 )
                          {
                            if ( RtlCreateAcl(v12, v11, 2u) >= 0
                              && (int)RtlpAddKnownAce(v13, 2u, 2, 983103, (unsigned __int8 *)Src, 0) >= 0
                              && (int)RtlpAddKnownAce(v13, 2u, 2, 0x20000, (unsigned __int8 *)v4, 0) >= 0
                              && (int)RtlpAddKnownAce(v13, 2u, 2, 131097, (unsigned __int8 *)v6, 0) >= 0
                              && RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
                              && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v13, 0) >= 0
                              && RtlSetOwnerSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0
                              && RtlSetGroupSecurityDescriptor(SecurityDescriptor, v8, 1u) >= 0 )
                            {
                              WORD1(SecurityDescriptor[0]) |= 0x1400u;
                              if ( RtlValidSecurityDescriptor(SecurityDescriptor) )
                              {
                                v14 = RtlLengthSecurityDescriptor(SecurityDescriptor);
                                *(_DWORD *)IdentifierAuthority.Value = v14;
                                if ( v14 >= 0x28 )
                                {
                                  v15 = v14;
                                  v16 = ExAllocatePoolWithTag(PagedPool, v14, 0x42444450u);
                                  v17 = v16;
                                  if ( v16 )
                                  {
                                    memset(v16, 0, v15);
                                    if ( RtlAbsoluteToSelfRelativeSD(
                                           SecurityDescriptor,
                                           v17,
                                           (PULONG)IdentifierAuthority.Value) < 0 )
                                    {
                                      v0 = v24;
                                    }
                                    else
                                    {
                                      v0 = v17;
                                      v17 = 0LL;
                                    }
                                    if ( v17 )
                                      ExFreePoolWithTag(v17, 0);
                                  }
                                  else
                                  {
                                    v0 = v24;
                                  }
                                }
                              }
                            }
                            ExFreePoolWithTag(v13, 0);
                          }
                        }
                      }
                      ExFreePoolWithTag(v8, 0);
                    }
                  }
                }
                ExFreePoolWithTag(v6, 0);
              }
            }
          }
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    ExFreePoolWithTag(Src, 0);
  }
  return v0;
}
