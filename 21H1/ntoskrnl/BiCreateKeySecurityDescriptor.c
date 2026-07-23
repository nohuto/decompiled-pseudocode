/*
 * XREFs of BiCreateKeySecurityDescriptor @ 0x14076FDF0
 * Callers:
 *     BiCreateKey @ 0x14076F420 (BiCreateKey.c)
 *     BiOpenKey @ 0x14076FC14 (BiOpenKey.c)
 *     BiCloseKey @ 0x14076FD9C (BiCloseKey.c)
 * Callees:
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlLengthSecurityDescriptor @ 0x140614750 (RtlLengthSecurityDescriptor.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlSetOwnerSecurityDescriptor @ 0x14070D8F0 (RtlSetOwnerSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

ACL *__fastcall BiCreateKeySecurityDescriptor(int a1)
{
  PSID SeLocalSystemSid; // r14
  PSID Src; // rsi
  ULONG v4; // ebx
  ULONG v5; // ebp
  ULONG v6; // r15d
  ACL *PoolWithTag; // rax
  ACL *v8; // rdi
  ACL *v9; // rbx
  ULONG v10; // ebx
  char *v11; // rbx
  ULONG v12; // eax

  SeLocalSystemSid = SeExports->SeLocalSystemSid;
  Src = SeExports->SeAliasAdminsSid;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v4 + RtlLengthSid(Src) + 24;
  v6 = v5 + RtlLengthSid(Src) + 40;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v6, 0x4B444342u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = PoolWithTag + 5;
    if ( RtlCreateAcl(PoolWithTag + 5, v5, 2u) >= 0
      && (int)RtlpAddKnownAce(v9, 2u, 0, a1, (unsigned __int8 *)Src, 0) >= 0
      && (int)RtlpAddKnownAce(v9, 2u, 0, 983103, (unsigned __int8 *)SeLocalSystemSid, 0) >= 0
      && RtlCreateSecurityDescriptor(v8, 1u) >= 0
      && RtlSetDaclSecurityDescriptor(v8, 1u, v9, 0) >= 0 )
    {
      v10 = RtlLengthSecurityDescriptor(v8);
      if ( RtlLengthSid(Src) + v10 >= v6 )
      {
        v11 = (char *)v8 + RtlLengthSecurityDescriptor(v8);
        v12 = RtlLengthSid(Src);
        memmove(v11, Src, v12);
        if ( RtlSetOwnerSecurityDescriptor(v8, v11, 0) >= 0 )
          return v8;
      }
    }
    ExFreePoolWithTag(v8, 0x4B444342u);
  }
  return 0LL;
}
