/*
 * XREFs of KeInitializeProfileCallback @ 0x1408B8C3C
 * Callers:
 *     EtwpEnableKernelTrace @ 0x140780518 (EtwpEnableKernelTrace.c)
 *     EtwpSetPmcProfileSource @ 0x140933F5C (EtwpSetPmcProfileSource.c)
 *     EtwpCoverageSamplerStart @ 0x140943BFC (EtwpCoverageSamplerStart.c)
 *     KiInitializeCacheErrataSupport @ 0x140A8F56C (KiInitializeCacheErrataSupport.c)
 * Callees:
 *     KeCopyAffinityEx @ 0x14021E8E0 (KeCopyAffinityEx.c)
 *     memset @ 0x14040A280 (memset.c)
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
