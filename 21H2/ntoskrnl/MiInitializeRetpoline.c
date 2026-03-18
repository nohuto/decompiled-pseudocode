/*
 * XREFs of MiInitializeRetpoline @ 0x140B0A4A8
 * Callers:
 *     MiInitSystem @ 0x140B07C00 (MiInitSystem.c)
 * Callees:
 *     RtlIsImageFullyRetpolined @ 0x1402D9A20 (RtlIsImageFullyRetpolined.c)
 *     MiReservePtes @ 0x1403095B0 (MiReservePtes.c)
 *     RtlCreateRetpolineStubsFunctionTable @ 0x1405EEE8C (RtlCreateRetpolineStubsFunctionTable.c)
 *     MmReleaseLoadLock @ 0x1406F5AF0 (MmReleaseLoadLock.c)
 *     MmAcquireLoadLock @ 0x1406F5B50 (MmAcquireLoadLock.c)
 *     MiMarkRetpolineBits @ 0x140970C6C (MiMarkRetpolineBits.c)
 *     MiCreateRetpolineBitmap @ 0x140B51F9C (MiCreateRetpolineBitmap.c)
 *     MiLockRetpolineStubs @ 0x140B52090 (MiLockRetpolineStubs.c)
 */

__int64 MiInitializeRetpoline()
{
  struct _KTHREAD *CurrentThread; // rdi
  int RetpolineStubsFunctionTable; // ebx
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  RetpolineStubsFunctionTable = dword_140C4F444;
  qword_140C4F438 = (__int64)&qword_140C4F430;
  qword_140C4F430 = &qword_140C4F430;
  if ( dword_140C4F444 < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  if ( (KiSpeculationFeatures & 0x20000000000LL) == 0 )
    return 0;
  RetpolineStubsFunctionTable = MiLockRetpolineStubs();
  if ( RetpolineStubsFunctionTable < 0 )
    return (unsigned int)RetpolineStubsFunctionTable;
  qword_140C4F428 = MiReservePtes((__int64)&qword_140C534C0, 1u);
  if ( qword_140C4F428 )
  {
    RetpolineStubsFunctionTable = MiCreateRetpolineBitmap(&v3);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    MmAcquireLoadLock();
    RetpolineStubsFunctionTable = MiMarkRetpolineBits(PsNtosImageBase);
    if ( RetpolineStubsFunctionTable < 0
      || (unsigned int)RtlIsImageFullyRetpolined(PsHalImageBase)
      && (RetpolineStubsFunctionTable = MiMarkRetpolineBits(PsHalImageBase), RetpolineStubsFunctionTable < 0) )
    {
      MmReleaseLoadLock((__int64)CurrentThread);
      return (unsigned int)RetpolineStubsFunctionTable;
    }
    MmReleaseLoadLock((__int64)CurrentThread);
    retpoline_image_bitmap = v3 - 0x1FFFF0000000LL;
    RetpolineStubsFunctionTable = RtlCreateRetpolineStubsFunctionTable(
                                    v3 - 0x1FFFF0000000LL,
                                    Base,
                                    dword_140C4F440 << 12);
    if ( RetpolineStubsFunctionTable < 0 )
      return (unsigned int)RetpolineStubsFunctionTable;
    dword_140C02504 = dword_140C4F478;
    dword_140C02508 = dword_140C4F440 << 12;
    return 0;
  }
  return 3221225626LL;
}
