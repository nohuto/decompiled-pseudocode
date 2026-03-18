/*
 * XREFs of MiLockRetpolineStubs @ 0x140A8F9E0
 * Callers:
 *     MiInitializeRetpoline @ 0x140A5489C (MiInitializeRetpoline.c)
 * Callees:
 *     MiProbeAndLockPages @ 0x14024D8E0 (MiProbeAndLockPages.c)
 *     MmCreateMdl @ 0x140346A70 (MmCreateMdl.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4CA88 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  qword_140C4CA50 = v1;
  return 0LL;
}
