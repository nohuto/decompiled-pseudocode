/*
 * XREFs of MiLockRetpolineStubs @ 0x140A956E0
 * Callers:
 *     MiInitializeRetpoline @ 0x140A54F1C (MiInitializeRetpoline.c)
 * Callees:
 *     MmCreateMdl @ 0x14024F5D0 (MmCreateMdl.c)
 *     MiProbeAndLockPages @ 0x14026BB80 (MiProbeAndLockPages.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4CB08 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages((__int64)Mdl, 0, 0);
  qword_140C4CAD0 = v1;
  return 0LL;
}
