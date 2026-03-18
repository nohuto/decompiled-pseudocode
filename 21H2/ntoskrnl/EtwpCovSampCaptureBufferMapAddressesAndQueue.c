/*
 * XREFs of EtwpCovSampCaptureBufferMapAddressesAndQueue @ 0x1409EE8FC
 * Callers:
 *     EtwpCovSampCaptureUserAddresses @ 0x140883A50 (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x14041AAB8 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureBufferIsEmpty @ 0x140460C72 (EtwpCovSampCaptureBufferIsEmpty.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x140635B80 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x14088394C (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampProcessMapAddresses @ 0x1409F1DF4 (EtwpCovSampProcessMapAddresses.c)
 *     EtwpCovSampStackHashCheck @ 0x1409F226C (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampCaptureBufferMapAddressesAndQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int16 v7; // ax
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  v8 = 0;
  v3 = 0LL;
  v9 = 0LL;
  if ( !EtwpCovSampCaptureBufferIsEmpty(a2) )
  {
    if ( (int)EtwpCovSampAcquireSamplerRundown(&v9) >= 0
      && !(unsigned int)EtwpCovSampStackHashCheck(a1, v5, a2 + 64, *(unsigned __int16 *)(a2 + 62)) )
    {
      v6 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.StaticBitmap[1];
      if ( v6 )
      {
        v3 = v9;
        EtwpCovSampProcessMapAddresses(
          v6,
          v9 + 16,
          a2 + 64,
          *(unsigned __int16 *)(a2 + 62),
          a2 + 64,
          *(unsigned __int16 *)(a2 + 60),
          (__int64)&v8);
        v7 = v8;
        *(_DWORD *)(a2 + 56) &= 0xFFFFFFF4;
        *(_WORD *)(a2 + 62) = v7;
        if ( v7 )
          *(_DWORD *)(a2 + 56) |= 4u;
        EtwpCovSampCaptureBufferQueue(a1, a2);
        goto LABEL_11;
      }
    }
    v3 = v9;
  }
  if ( a2 )
    EtwpCovSampCaptureBufferRelease(a1, a2);
LABEL_11:
  if ( v3 )
  {
    ExReleaseRundownProtection(&stru_140C15D80);
    KeLeaveCriticalRegion();
  }
}
