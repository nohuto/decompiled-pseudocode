/*
 * XREFs of MiLockRetpolineStubs @ 0x140A903F0
 * Callers:
 *     MiInitializeRetpoline @ 0x140A4EB9C (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402A6910 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140308C70 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4CBC8 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  qword_140C4CB90 = v1;
  return 0LL;
}
