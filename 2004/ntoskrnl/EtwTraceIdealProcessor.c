/*
 * XREFs of EtwTraceIdealProcessor @ 0x1405A2374
 * Callers:
 *     KiDeferredReadySingleThread @ 0x1402873F0 (KiDeferredReadySingleThread.c)
 *     KeSetIdealProcessorThreadEx @ 0x1402DF608 (KeSetIdealProcessorThreadEx.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1402E44A0 (KeRevertToUserGroupAffinityThread.c)
 *     KeStartThread @ 0x1402EAD58 (KeStartThread.c)
 *     KiQueueReadyThread @ 0x1402EDF50 (KiQueueReadyThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1402F1C40 (KeSetSystemGroupAffinityThread.c)
 *     KiSetAffinityThread @ 0x14030BB20 (KiSetAffinityThread.c)
 *     KiUpdateGlobalCpuSetConfiguration @ 0x14032B6EC (KiUpdateGlobalCpuSetConfiguration.c)
 *     KiUpdateThreadCpuSetAffinitiesFromDpcLevel @ 0x1403C308C (KiUpdateThreadCpuSetAffinitiesFromDpcLevel.c)
 *     KeSetSelectedCpuSetsThread @ 0x140517730 (KeSetSelectedCpuSetsThread.c)
 *     KiSetHeteroPolicyThread @ 0x14051AEB4 (KiSetHeteroPolicyThread.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceIdealProcessor(__int64 a1, __int16 a2, int a3, int a4)
{
  __int64 result; // rax
  _DWORD v5[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  if ( a3 != a4 )
  {
    v5[0] = *(_DWORD *)(a1 + 1152);
    v6 = v5;
    v8 = 0;
    v5[2] = a4;
    v5[1] = a3;
    v7 = 12;
    return EtwTraceKernelEvent((int)&v6, 1, 0x88000000, a2, 22026499);
  }
  return result;
}
