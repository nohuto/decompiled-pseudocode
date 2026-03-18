/*
 * XREFs of ProcessHidRawInput @ 0x1C01D5C90
 * Callers:
 *     <none>
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00B2DE4 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00B2E10 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxProcessHidInput @ 0x1C01D6610 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  __int64 *v2; // [rsp+38h] [rbp+10h] BYREF
  char v3; // [rsp+40h] [rbp+18h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v2, "RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v3);
}
