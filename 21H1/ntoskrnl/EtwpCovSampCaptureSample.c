/*
 * XREFs of EtwpCovSampCaptureSample @ 0x1405A9588
 * Callers:
 *     EtwpCovSampProfileInterrupt @ 0x1405A9970 (EtwpCovSampProfileInterrupt.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1405AA06C (EtwpCoverageSamplerContextSwap.c)
 *     EtwpCoverageSamplerPageFault @ 0x1405AA234 (EtwpCoverageSamplerPageFault.c)
 *     EtwpCoverageSamplerReadyThread @ 0x1405AA444 (EtwpCoverageSamplerReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureBufferAddIP @ 0x1405A8948 (EtwpCovSampCaptureBufferAddIP.c)
 *     EtwpCovSampCaptureBufferGet @ 0x1405A8980 (EtwpCovSampCaptureBufferGet.c)
 *     EtwpCovSampCaptureBufferQueue @ 0x1405A8A94 (EtwpCovSampCaptureBufferQueue.c)
 *     EtwpCovSampCaptureBufferRelease @ 0x1405A8B58 (EtwpCovSampCaptureBufferRelease.c)
 *     EtwpCovSampCaptureKernelStack @ 0x1405A9128 (EtwpCovSampCaptureKernelStack.c)
 *     EtwpCovSampCaptureQueueApc @ 0x1405A91F0 (EtwpCovSampCaptureQueueApc.c)
 *     EtwpCovSampSafeForUserAddressCapture @ 0x1405A9B8C (EtwpCovSampSafeForUserAddressCapture.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x14093E1AC (EtwpCovSampCaptureUserAddresses.c)
 */

__int64 __fastcall EtwpCovSampCaptureSample(unsigned __int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v13; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v5 = qword_140C19868;
  v12 = 0;
  result = (*(_QWORD *)(qword_140C19868 + 8) >> 4) & 0x1FFLL;
  v8 = ((unsigned int)*(_QWORD *)(qword_140C19868 + 8) >> 13) & 0x3FFFF;
  _BitScanReverse(&v9, v8);
  v13 = v9;
  v10 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v9 - 2) + 8LL * ((1 << v9) ^ v8) + 8);
  if ( *(_DWORD *)(v10 + 8 * result + 60) )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8 * result + 304));
  }
  else
  {
    result = a1 - 1;
    if ( a1 - 1 > 0xFFFF7FFFFFFFFFFEuLL )
    {
      result = EtwpCovSampCaptureBufferGet(qword_140C19868);
      v4 = result;
      if ( result )
      {
        EtwpCovSampCaptureBufferAddIP(result, a1);
        if ( !*(_DWORD *)(v5 + 924) )
          EtwpCovSampCaptureKernelStack(v11, a2);
        result = EtwpCovSampCaptureBufferQueue(v5, v4);
        v4 = 0LL;
      }
      a1 = 0LL;
    }
    if ( (CurrentThread->MiscFlags & 0x400) == 0 )
    {
      result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
      if ( (result & 1) == 0 && (CurrentThread->MiscFlags & 0x4000) != 0 )
      {
        if ( CurrentThread->Teb )
        {
          result = CurrentThread->Process->FreezeCount + ((*(_DWORD *)&CurrentThread->Process->0 >> 3) & 1);
          if ( !(_DWORD)result && !CurrentThread->SuspendCount )
          {
            result = EtwpCovSampSafeForUserAddressCapture(0LL, &v12);
            if ( (int)result >= 0 )
            {
              if ( !_interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0x17u) )
              {
                result = EtwpCovSampCaptureUserAddresses(v5, a1);
                _InterlockedAnd((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 0xFF7FFFFF);
              }
            }
            else if ( !v12 )
            {
              result = EtwpCovSampCaptureQueueApc(a1);
            }
          }
        }
      }
    }
    if ( v4 )
      return EtwpCovSampCaptureBufferRelease(v5, v4);
  }
  return result;
}
