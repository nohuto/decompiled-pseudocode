/*
 * XREFs of MiInsertProtectedStandbyPage @ 0x140276D2C
 * Callers:
 *     MiHardFaultPageRelease @ 0x140231A68 (MiHardFaultPageRelease.c)
 *     MiCopyDataPageToImagePage @ 0x14026F180 (MiCopyDataPageToImagePage.c)
 *     MiPfnShareCountIsZero @ 0x1402BF640 (MiPfnShareCountIsZero.c)
 *     MiDeletePteRun @ 0x1402C8FD0 (MiDeletePteRun.c)
 *     MiWalkEntireImage @ 0x140336B30 (MiWalkEntireImage.c)
 * Callees:
 *     MiAddPageToInsertList @ 0x140276C78 (MiAddPageToInsertList.c)
 *     MiIsPageEligibleForProtectedStandby @ 0x140276DE4 (MiIsPageEligibleForProtectedStandby.c)
 *     MiPfnReferenceCountIsZero @ 0x140338500 (MiPfnReferenceCountIsZero.c)
 *     MiInsertPagesInList @ 0x140338660 (MiInsertPagesInList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall MiInsertProtectedStandbyPage(__int64 a1, __int64 a2)
{
  __int64 v4; // r10
  _OWORD v6[7]; // [rsp+20h] [rbp-78h] BYREF

  memset(v6, 0, 0x68uLL);
  if ( !(unsigned int)MiIsPageEligibleForProtectedStandby(a1, a2) )
    return MiPfnReferenceCountIsZero(a2, v4);
  DWORD2(v6[0]) = 0;
  v6[1] = _mm_load_si128((const __m128i *)&_xmm);
  LODWORD(v6[6]) = 3;
  *((_QWORD *)&v6[5] + 1) = a1;
  MiAddPageToInsertList((__int64 *)v6, 0LL, v4);
  return MiInsertPagesInList(v6, 0LL);
}
