/*
 * XREFs of SepCreateImpersonationTokenDacl @ 0x140605930
 * Callers:
 *     NtOpenThreadTokenEx @ 0x1405E05A0 (NtOpenThreadTokenEx.c)
 * Callees:
 *     RtlEqualSid @ 0x140206340 (RtlEqualSid.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SepCreateImpersonationTokenDacl(__int64 a1, __int64 a2, ACL **a3)
{
  unsigned __int8 *v4; // r12
  unsigned __int8 *v5; // rbp
  unsigned __int8 *v8; // r13
  ULONG v9; // r14d
  ACL *PoolWithTag; // rax
  ACL *v11; // rbx
  void *Src; // [rsp+60h] [rbp+8h]

  v4 = 0LL;
  v5 = 0LL;
  Src = **(void ***)(a2 + 152);
  if ( (*(_DWORD *)(a2 + 200) & 0x4000) != 0 )
    v5 = *(unsigned __int8 **)(a2 + 784);
  v8 = **(unsigned __int8 ***)(a1 + 152);
  if ( (*(_DWORD *)(a1 + 200) & 0x4000) != 0 )
    v4 = *(unsigned __int8 **)(a1 + 784);
  v9 = 4
     * (*(unsigned __int8 *)(**(_QWORD **)(a2 + 152) + 1LL)
      + v8[1]
      + *((unsigned __int8 *)SeLocalSystemSid + 1)
      + *((unsigned __int8 *)SeAliasAdminsSid + 1)
      + *(unsigned __int8 *)(*(_QWORD *)&SeRestrictedSid + 1LL))
     + 88;
  if ( v4 )
    v9 += 4 * v4[1] + 16;
  if ( v5 )
  {
    if ( v4 && RtlEqualSid(v5, v4) )
      v5 = 0LL;
    else
      v9 += 4 * v5[1] + 16;
  }
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v9, 0x20206553u);
  v11 = PoolWithTag;
  if ( PoolWithTag )
  {
    RtlCreateAcl(PoolWithTag, v9, 2u);
    RtlpAddKnownAce(v11, Src, 0);
    RtlpAddKnownAce(v11, v8, 0);
    RtlpAddKnownAce(v11, SeAliasAdminsSid, 0);
    RtlpAddKnownAce(v11, SeLocalSystemSid, 0);
    if ( v4 )
      RtlpAddKnownAce(v11, v4, 0);
    if ( v5 )
      RtlpAddKnownAce(v11, v5, 0);
    if ( *(_QWORD *)(a2 + 160) || *(_QWORD *)(a1 + 160) )
      RtlpAddKnownAce(v11, *(void **)&SeRestrictedSid, 0);
    *a3 = v11;
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    return 3221225626LL;
  }
}
