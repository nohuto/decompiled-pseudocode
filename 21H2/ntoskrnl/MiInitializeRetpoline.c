/*
 * XREFs of MiInitializeRetpoline @ 0x140A57538
 * Callers:
 *     MiInitSystem @ 0x140A54E5C (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1402CAEB0 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x140371978 (RtlIsImageFullyRetpolined.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x14058FD18 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406A83F0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406A8450 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x1408D0E14 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140A9344C (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140A93540 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // r8
  unsigned __int64 v4; // r9
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  RetpolineStubsFunctionTable = dword_140C4CCCC;
  qword_140C4CCC0 = (__int64)&qword_140C4CCB8;
  qword_140C4CCB8 = &qword_140C4CCB8;
  if ( dword_140C4CCCC < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiLockRetpolineStubs();
  if ( RetpolineStubsFunctionTable < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  qword_140C4CCB0 = MiReservePtes((__int64)&qword_140C4EF80, 1u, v3, v4);
  if ( qword_140C4CCB0 )
  {
    RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v5);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    MmAcquireLoadLock();
    RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsNtosImageBase);
    if ( RetpolineStubsFunctionTable < 0
      || (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase)
      && (RetpolineStubsFunctionTable = MiMarkRetpolineBits((__int64)PsHalImageBase), RetpolineStubsFunctionTable < 0) )
    {
      MmReleaseLoadLock((__int64)CurrentThread);
      return (unsigned int)RetpolineStubsFunctionTable;
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    retpoline_image_bitmap = v5 - 0x1FFFF0000000LL;
    RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                    v5 - 0x1FFFF0000000LL,
                                    Base,
                                    dword_140C4CCC8 << 12);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    dword_140C00E94 = dword_140C4CCF0;
    dword_140C00E98 = dword_140C4CCC8 << 12;
    return 0;
  }
  return 3221225626LL;
}
