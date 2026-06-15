/*
 * XREFs of WPP_SF_qll @ 0x1800E1EB4
 * Callers:
 *     AudioServerStartStopStreamConnection @ 0x1800E14C0 (AudioServerStartStopStreamConnection.c)
 * Callees:
 *     <none>
 */

__int64 WPP_SF_qll(__int64 a1, __int64 a2, __int64 a3, ...)
{
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  return EtwTraceMessage(a1, 43LL, &WPP_f0b9241badf93ac226eca421c556eecc_Traceguids, 58LL, (__int64 *)va);
}
