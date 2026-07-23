/*
 * XREFs of KeInitializeProfileCallback @ 0x1408BC2A4
 * Callers:
 *     EtwpEnableKernelTrace @ 0x1407983D8 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x14093772C (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageSamplerStart @ 0x14094735C (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140A930CC (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x1403461A0 (KeCopyAffinityEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

unsigned __int16 __fastcall KeInitializeProfileCallback(_DWORD *a1, __int64 a2, __int64 a3, __int16 a4)
{
  memset(a1, 0, 0xF8uLL);
  *a1 = 16252945;
  *((_QWORD *)a1 + 4) = a2;
  *((_QWORD *)a1 + 5) = a3;
  *((_WORD *)a1 + 120) = a4;
  return KeCopyAffinityEx((__int64)(a1 + 18), (unsigned __int16 *)KeActiveProcessors);
}
