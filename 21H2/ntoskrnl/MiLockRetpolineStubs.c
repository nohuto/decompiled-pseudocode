/*
 * XREFs of MiLockRetpolineStubs @ 0x140B52090
 * Callers:
 *     MiInitializeRetpoline @ 0x140B0A4A8 (MiInitializeRetpoline.c)
 * Callees:
 *     MmCreateMdl @ 0x1402411C0 (MmCreateMdl.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiLockRetpolineStubs()
{
  PMDL Mdl; // rax
  __int64 v1; // rbx

  Mdl = MmCreateMdl(0LL, Base, (unsigned int)(dword_140C4F440 << 12));
  v1 = (__int64)Mdl;
  if ( !Mdl )
    return 3221225626LL;
  MiProbeAndLockPages(Mdl, 0, 0);
  qword_140C4F408 = v1;
  return 0LL;
}
