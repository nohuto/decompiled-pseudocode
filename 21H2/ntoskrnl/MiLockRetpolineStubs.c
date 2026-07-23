/*
 * XREFs of MiLockRetpolineStubs @ 0x140A93540
 * Callers:
 *     MiInitializeRetpoline @ 0x140A57538 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140307F60 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4CCC8 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  qword_140C4CC90 = v1;
  return 0LL;
}
