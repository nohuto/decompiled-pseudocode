/*
 * XREFs of MiLockRetpolineStubs @ 0x140A92540
 * Callers:
 *     MiInitializeRetpoline @ 0x140A56538 (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14020A860 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x1402FD210 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4CC88 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  qword_140C4CC50 = v1;
  return 0LL;
}
