/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C0023390
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0024840 (RIMDeviceIoControl.c)
 *     RawInputManagerObjectDelete @ 0x1C0029244 (RawInputManagerObjectDelete.c)
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C00718D8 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C00719B4 (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C00BE500 (RIMFreeHidTLCInfo.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C0165200 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C01652D0 (RIMTransformDimensionFromDigitizer.c)
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
