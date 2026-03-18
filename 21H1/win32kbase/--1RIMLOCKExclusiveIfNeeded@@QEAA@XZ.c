/*
 * XREFs of ??1RIMLOCKExclusiveIfNeeded@@QEAA@XZ @ 0x1C00A3C0C
 * Callers:
 *     RIMAllocateAndLinkHidTLCInfo @ 0x1C004C590 (RIMAllocateAndLinkHidTLCInfo.c)
 *     RIMSearchHidTLCInfo @ 0x1C004C66C (RIMSearchHidTLCInfo.c)
 *     RIMFreeHidTLCInfo @ 0x1C0056E40 (RIMFreeHidTLCInfo.c)
 *     RawInputManagerObjectDelete @ 0x1C005CEEC (RawInputManagerObjectDelete.c)
 *     RIMDeviceIoControl @ 0x1C00A3290 (RIMDeviceIoControl.c)
 *     RIMTransformCoordinatesFromDigitizer @ 0x1C016DAB0 (RIMTransformCoordinatesFromDigitizer.c)
 *     RIMTransformDimensionFromDigitizer @ 0x1C016DB80 (RIMTransformDimensionFromDigitizer.c)
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
