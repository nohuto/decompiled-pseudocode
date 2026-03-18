/*
 * XREFs of KiInitializeDynamicProcessor @ 0x1409AC4B0
 * Callers:
 *     KiStartDynamicProcessor @ 0x1408B757C (KiStartDynamicProcessor.c)
 * Callees:
 *     KeGenericCallDpc @ 0x14033FF70 (KeGenericCallDpc.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     KiStartDpcThread @ 0x140787444 (KiStartDpcThread.c)
 */

__int64 __fastcall KiInitializeDynamicProcessor(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[3]; // [rsp+30h] [rbp-18h] BYREF

  v3[1] = 0LL;
  v3[0] = a1;
  result = KeGenericCallDpc((__int64)KiInitializeDynamicProcessorDpc, (__int64)v3);
  if ( KeThreadDpcEnable )
  {
    result = KiStartDpcThread(a1);
    if ( (int)result < 0 )
      KeBugCheckEx(0x33u, (int)result, 0LL, 0LL, 0LL);
  }
  return result;
}
