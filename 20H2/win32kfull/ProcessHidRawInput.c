/*
 * XREFs of ProcessHidRawInput @ 0x1C01D4FD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D7374 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D73A0 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     xxxProcessHidInput @ 0x1C01D5950 (xxxProcessHidInput.c)
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
