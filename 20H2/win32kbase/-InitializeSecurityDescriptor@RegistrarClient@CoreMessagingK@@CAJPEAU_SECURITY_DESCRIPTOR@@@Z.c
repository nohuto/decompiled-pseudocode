/*
 * XREFs of ?InitializeSecurityDescriptor@RegistrarClient@CoreMessagingK@@CAJPEAU_SECURITY_DESCRIPTOR@@@Z @ 0x1C00AA598
 * Callers:
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C00A94A4 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 * Callees:
 *     ?Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z @ 0x1C00AA674 (-Alloc@Runtime@CoreMessagingK@@CAJ_KW4PoolTag@2@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMessagingK::RegistrarClient::InitializeSecurityDescriptor(
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  ULONG v2; // eax
  ULONG v3; // esi
  struct _ACL *v4; // rdi
  NTSTATUS v5; // ebx
  PACL Acl; // [rsp+38h] [rbp+10h] BYREF

  v2 = RtlLengthSid(&unk_1C0208BA8);
  Acl = 0LL;
  v3 = v2 + 20;
  v4 = 0LL;
  v5 = CoreMessagingK::Runtime::Alloc(v2 + 20, 1146309955LL, &Acl);
  if ( v5 >= 0 )
  {
    v4 = Acl;
    v5 = RtlCreateAcl(Acl, v3, 2u);
    if ( v5 >= 0 )
    {
      v5 = RtlAddAccessAllowedAce(v4, 2u, 1u, &unk_1C0208BA8);
      if ( v5 >= 0 )
      {
        v5 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
        if ( v5 >= 0 )
        {
          v5 = 0;
          v4 = 0LL;
        }
      }
    }
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x44534D43u);
  return (unsigned int)v5;
}
