/*
 * XREFs of KeFlushQueuedDpcs @ 0x1403267C0
 * Callers:
 *     KeCleanupThreadState @ 0x14023F478 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x1404E65B0 (CcDeletePartition.c)
 *     MmPageEntireDriver @ 0x1406EF3D0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14075D590 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x140951544 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402771F0 (KeEnumerateNextProcessor.c)
 *     KiGetDeepIdleProcessors @ 0x1403268B0 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x140337898 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  int v3; // [rsp+3Ah] [rbp-C6h]
  __int16 v4; // [rsp+3Eh] [rbp-C2h]
  _QWORD v5[22]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v6[88]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v5, 0, 0xA8uLL);
  v3 = 0;
  v4 = 0;
  LODWORD(v0) = 0;
  memset(v6, 0, 0xA8uLL);
  KiGetDeepIdleProcessors(v5, v6);
  v1[1] = (unsigned __int16 *)v5[1];
  v1[0] = (unsigned __int16 *)v5;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[(unsigned int)v0] + 12588) )
      KeAddProcessorAffinityEx(v6, v0);
  }
  KeGenericProcessorCallback(v6, KiFlushQueuedDpcsWorker, 0LL, 2LL, v0, v1[0]);
}
