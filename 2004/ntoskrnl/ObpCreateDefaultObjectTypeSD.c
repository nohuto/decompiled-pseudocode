/*
 * XREFs of ObpCreateDefaultObjectTypeSD @ 0x14077E4D0
 * Callers:
 *     ObpInitObjectTypeSD @ 0x14077E43C (ObpInitObjectTypeSD.c)
 * Callees:
 *     RtlLengthSid @ 0x14027DBB0 (RtlLengthSid.c)
 *     memset @ 0x14040A280 (memset.c)
 *     RtlCreateAcl @ 0x14066AAE0 (RtlCreateAcl.c)
 *     RtlpAddKnownAce @ 0x14067E5A0 (RtlpAddKnownAce.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObpCreateDefaultObjectTypeSD(_QWORD *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // eax
  __int64 v5; // rdi
  ULONG v6; // ebp
  char *PoolWithTag; // rax
  char *v8; // rbx
  int v9; // esi
  int Acl; // edi

  v2 = RtlLengthSid(SeWorldSid);
  v3 = RtlLengthSid(SeAliasAdminsSid) + v2;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v3 + v4 + 44;
  v6 = v3 + v4 + 44;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5 + 20, 0x6C636144u);
  v8 = PoolWithTag;
  if ( PoolWithTag )
  {
    v9 = (_DWORD)PoolWithTag + 20;
    *(_OWORD *)PoolWithTag = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    *PoolWithTag = 1;
    memset(PoolWithTag + 20, 0, v6);
    Acl = RtlCreateAcl((PACL)(v8 + 20), v5, 2u);
    if ( Acl < 0
      || (Acl = RtlpAddKnownAce((PACL)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)SeWorldSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((PACL)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)SeAliasAdminsSid, 0), Acl < 0)
      || (Acl = RtlpAddKnownAce((PACL)(v8 + 20), 2u, 0, 983041, (unsigned __int8 *)SeLocalSystemSid, 0), Acl < 0) )
    {
      ExFreePoolWithTag(v8, 0);
    }
    else
    {
      *((_WORD *)v8 + 1) |= 0x8004u;
      *((_DWORD *)v8 + 4) = v9 - (_DWORD)v8;
      *a1 = v8;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
