/*
 * XREFs of EtwTraceIdealProcessor @ 0x1405A1C84
 * Callers:
 *     KiUpdateGlobalCpuSetConfiguration @ 0x140202694 (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiDeferredReadySingleThread @ 0x14024AB50 (KiDeferredReadySingleThread.c)
 *     KiSetAffinityThread @ 0x1402CA140 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140326AA4 (KeSetIdealProcessorThreadEx.c)
 *     KeStartThread @ 0x14032FE98 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x140333090 (KiQueueReadyThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C21CC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x1405170E0 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051A864 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall EtwTraceIdealProcessor(__int64 a1, unsigned __int16 a2, int a3, int a4)
{
  _DWORD v4[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v5; // [rsp+40h] [rbp-28h] BYREF
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v4[0] = *(_DWORD *)(a1 + 1152);
    v5 = v4;
    v7 = 0;
    v4[2] = a4;
    v4[1] = a3;
    v6 = 12;
    EtwTraceKernelEvent((__int64)&v5, 1u, 0x88000000, a2, 0x1501903u);
  }
}
