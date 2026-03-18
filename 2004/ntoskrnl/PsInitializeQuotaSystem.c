/*
 * XREFs of PsInitializeQuotaSystem @ 0x140A6898C
 * Callers:
 *     InitBootProcessor @ 0x140A36F64 (InitBootProcessor.c)
 *     MiInitSystem @ 0x140A521D4 (MiInitSystem.c)
 * Callees:
 *     PspRegisterResource @ 0x1403C5DB4 (PspRegisterResource.c)
 *     PspSanitizeResourceLimits @ 0x1407B3F68 (PspSanitizeResourceLimits.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

char __fastcall PsInitializeQuotaSystem(int a1)
{
  _QWORD *v1; // rdx
  char *v2; // rcx
  char *PoolWithTag; // rax
  _QWORD *v4; // rax
  __int64 v5; // rcx
  char v6; // dl
  int v7; // r8d
  int v8; // edx

  if ( a1 )
  {
    PspRegisterResource(0, 5, -1073741756);
    PspRegisterResource(1, v6, v7);
    PspRegisterResource(2, 0, -1073741524);
    PspRegisterResource(v8 + 3, v8, -1073741663);
    qword_140C1DEF0 = 0LL;
    dword_140C1DF18 = 0;
    qword_140C1DF28 = 0LL;
    qword_140C1DF10 = (__int64)&qword_140C1DF08;
    qword_140C1DF08 = (__int64)&qword_140C1DF08;
    qword_140C1DF48 = (__int64)&qword_140C1DF40;
    qword_140C1DF40 = (__int64)&qword_140C1DF40;
    qword_140C1DEE8[0] = 0x10000LL;
    qword_140C1DEF8 = (__int64)MmRaisePoolQuota;
    qword_140C1DF00 = (__int64)MmReturnPoolQuota;
    PspQuotaExpansionDescriptors[0] = 1;
    qword_140C1DF20 = 0x80000LL;
    qword_140C1DF30 = (__int64)MmRaisePoolQuota;
    qword_140C1DF38 = (__int64)MmReturnPoolQuota;
LABEL_9:
    LOBYTE(PoolWithTag) = 1;
    return (char)PoolWithTag;
  }
  dword_140C53A80 = 1;
  v1 = &unk_140C538C0;
  dword_140C53A84 = 1;
  v2 = PspResourceFlags;
  do
  {
    if ( (*v2 & 2) == 0 )
      *v1 = -1LL;
    v2 += 8;
    v1 += 16;
  }
  while ( (__int64)v2 < (__int64)&PspSystemMitigationAuditOptions );
  KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[7] = (unsigned __int64)&PspSystemQuotaBlock;
  PspSanitizeResourceLimits((unsigned int *)PspDefaultResourceLimits, 1);
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x300uLL, 0x74517350u);
  PspQuotaBlockTable = (ULONG_PTR)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = PoolWithTag + 8;
    v5 = 32LL;
    do
    {
      v4[1] = v4;
      *v4 = v4;
      *(v4 - 1) = 0LL;
      v4 += 3;
      --v5;
    }
    while ( v5 );
    goto LABEL_9;
  }
  return (char)PoolWithTag;
}
