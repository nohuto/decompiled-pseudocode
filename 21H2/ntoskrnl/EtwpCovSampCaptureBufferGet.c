/*
 * XREFs of EtwpCovSampCaptureBufferGet @ 0x1405AE800
 * Callers:
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 *     EtwpCovSampCaptureUserAddresses @ 0x140942B8C (EtwpCovSampCaptureUserAddresses.c)
 * Callees:
 *     EtwpCovSampLookasidePop @ 0x1405AF73C (EtwpCovSampLookasidePop.c)
 */

__int64 __fastcall EtwpCovSampCaptureBufferGet(__int64 a1)
{
  unsigned int v2; // eax
  __int64 v3; // rbx
  unsigned int v4; // ecx
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 result; // rax

  v2 = ((unsigned int)*(_QWORD *)(a1 + 8) >> 13) & 0x3FFFF;
  v3 = *(_QWORD *)(a1 + 8) >> 4;
  _BitScanReverse(&v4, v2);
  v5 = v3 & 0x1FF;
  v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v4 - 2) + 8LL * (v2 ^ (1 << v4)) + 8);
  result = EtwpCovSampLookasidePop(a1, v6 + 8 * (v5 + 10));
  if ( result )
  {
    *(_WORD *)(result + 62) = 0;
    *(_DWORD *)(result + 56) = 0;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 8 * v5 + 312));
  }
  return result;
}
