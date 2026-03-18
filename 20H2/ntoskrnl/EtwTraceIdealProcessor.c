/*
 * XREFs of EtwTraceIdealProcessor @ 0x1405A5E14
 * Callers:
 *     KiDeferredReadySingleThread @ 0x140219BA0 (KiDeferredReadySingleThread.c)
 *     KeStartThread @ 0x1402D8900 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x1402DC4D0 (KiQueueReadyThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x1402F754C (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiSetAffinityThread @ 0x1402F7A00 (KiSetAffinityThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x140333B58 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033CF00 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14033D060 (KeSetSystemGroupAffinityThread.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C57FC (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x14051B100 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051E884 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140313A28 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
