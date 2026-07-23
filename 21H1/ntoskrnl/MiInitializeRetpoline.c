/*
 * XREFs of MiInitializeRetpoline @ 0x140A4EB9C
 * Callers:
 *     MiInitSystem @ 0x140A4C4D4 (MiInitSystem.c)
 * Callees:
 *     MiReservePtes @ 0x1402743A0 (MiReservePtes.c)
 *     RtlIsImageFullyRetpolined @ 0x14036E830 (RtlIsImageFullyRetpolined.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x140589FB8 (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406EF8C0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406EF920 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x1408CC364 (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140A902FC (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140A903F0 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  RetpolineStubsFunctionTable = dword_140C4CBCC;
  qword_140C4CBC0 = (__int64)&qword_140C4CBB8;
  qword_140C4CBB8 = &qword_140C4CBB8;
  if ( dword_140C4CBCC < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  if ( (KiSpeculationFeatures & 0x2000000) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiLockRetpolineStubs();
  if ( RetpolineStubsFunctionTable < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  qword_140C4CBB0 = MiReservePtes((__int64)&qword_140C4EE80, 1LL);
  if ( qword_140C4CBB0 )
  {
    RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v3);
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
    retpoline_image_bitmap = v3 - 0x1FFFF0000000LL;
    RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                    v3 - 0x1FFFF0000000LL,
                                    Base,
                                    dword_140C4CBC8 << 12);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    dword_140C00E94 = dword_140C4CBF0;
    dword_140C00E98 = dword_140C4CBC8 << 12;
    return 0;
  }
  return 3221225626LL;
}
