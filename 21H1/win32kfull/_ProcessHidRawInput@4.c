/*
 * XREFs of _ProcessHidRawInput@4 @ 0x14434F
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ @ 0xAFB6A (--1ThreadLockedPerfRegion@InputTraceLogging@@QAE@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z @ 0xF0204 (--0ThreadLockedPerfRegion@InputTraceLogging@@QAE@PBDPBU01@@Z.c)
 *     _xxxProcessHidInput@4 @ 0x144ADA (_xxxProcessHidInput@4.c)
 */

void __stdcall ProcessHidRawInput(int a1)
{
  _BYTE v1[8]; // [esp+0h] [ebp-Ch] BYREF
  int *v2; // [esp+8h] [ebp-4h] BYREF

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v1);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v2, "RawHidInput", 0);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v1);
}
