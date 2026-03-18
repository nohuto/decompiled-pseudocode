/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1405A8FEC
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x14093EAD0 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x14040A280 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9C00 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C196E8;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, a1);
}
