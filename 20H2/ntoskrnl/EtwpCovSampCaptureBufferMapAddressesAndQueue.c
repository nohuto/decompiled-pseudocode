/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409448AC
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x1409451EC (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x1405ACC68 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1405ACCE4 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1405ACDA8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x1409446C4 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessMapAddresses @ 0x140948070 (EtwpCovSampProcessMapAddresses.c)
 *     EtwpCovSampStackHashCheck @ 0x140948544 (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int16 v7; // ax
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v3 = 0LL;
  v9 = 0LL;
  v4 = a2;
  if ( !EtwpCovSampCaptureBufferIsEmpty(a2) )
  {
    if ( (int)EtwpCovSampAcquireSamplerRundown(&v9) < 0
      || (unsigned int)EtwpCovSampStackHashCheck(a1, v5, v4 + 64, *(unsigned __int16 *)(v4 + 62))
      || (v6 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[1]) == 0 )
    {
      v3 = v9;
    }
    else
    {
      v3 = v9;
      EtwpCovSampProcessMapAddresses(
        v6,
        v9 + 16,
        v4 + 64,
        *(unsigned __int16 *)(v4 + 62),
        v4 + 64,
        *(unsigned __int16 *)(v4 + 60),
        (__int64)&v8);
      v7 = v8;
      *(_DWORD *)(v4 + 56) &= 0xFFFFFFF4;
      *(_WORD *)(v4 + 62) = v7;
      if ( v7 )
        *(_DWORD *)(v4 + 56) |= 4u;
      EtwpCovSampCaptureBufferQueue(a1, v4);
      v4 = 0LL;
    }
  }
  if ( v4 )
    EtwpCovSampCaptureBufferRelease(a1, v4);
  if ( v3 )
  {
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&stru_140C19740);
    KeLeaveCriticalRegion();
  }
}
