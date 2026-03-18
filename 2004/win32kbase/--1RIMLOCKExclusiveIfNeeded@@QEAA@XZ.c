/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0064258
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C0062084 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0062160 (RIMFreeHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C0063D88 (RIMSearchHidTLCInfo.c)
 *     RIMDeviceIoControl @ 0x1C0064040 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C00657A4 (RawInputManagerObjectDelete.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0167760 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C0167830 (RIMTransformDimensionFromDigitizer.c)
 * Callees:
 *     <none>
 */

void __fastcall RIMLOCKExclusiveIfNeeded::~RIMLOCKExclusiveIfNeeded(RIMLOCKExclusiveIfNeeded *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    *(_QWORD *)this = 0LL;
  }
}
