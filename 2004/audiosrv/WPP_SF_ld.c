/*
 * XREFs of WPP_SF_ld @ 0x180105544
 * Callers:
 *     ?OnMuteStateChanged@CMonitor@@IEAAXH@Z @ 0x180103030 (-OnMuteStateChanged@CMonitor@@IEAAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_ld(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_31d4709c2c57346b6bd3a2697a2c0190_Traceguids, 49LL, &v5);
}
