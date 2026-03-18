/*
 * XREFs of EtwpCovSampCaptureApcRelease @ 0x1405A88FC
 * Callers:
 *     EtwpCovSampCaptureApcRundown @ 0x14093D850 (EtwpCovSampCaptureApcRundown.c)
 * Callees:
 *     memset @ 0x140408F80 (memset.c)
 *     EtwpCovSampCaptureReleaseToLookaside @ 0x1405A9510 (EtwpCovSampCaptureReleaseToLookaside.c)
 */

__int64 __fastcall EtwpCovSampCaptureApcRelease(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdx

  v1 = qword_140C19868;
  memset((void *)(a1 + 56), 0, 0x58uLL);
  v3 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 144) = 0;
  return EtwpCovSampCaptureReleaseToLookaside(v1, v3, a1);
}
