/*
 * XREFs of KiInitializeDynamicProcessor @ 0x140A693D8
 * Callers:
 *     KiStartDynamicProcessor @ 0x14096029C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KiStartDpcDelegateThread @ 0x1403C13E4 (KiStartDpcDelegateThread.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x140829870 (KiStartDpcThread.c)
 */

__int64 __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // r9d
  int started; // eax
  __int64 result; // rax
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v7[1] = 0LL;
  v7[0] = a1;
  KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)v7);
  if ( KeThreadDpcEnable )
  {
    started = KiStartDpcThread(a1);
    if ( started < 0 )
      KeBugCheckEx(0x33u, started, 0LL, 0LL, 0LL);
  }
  result = KiStartDpcDelegateThread(a1, v2, v3, v4);
  if ( (int)result < 0 )
    KeBugCheckEx(0x33u, (int)result, 0LL, 1uLL, 0LL);
  return result;
}
