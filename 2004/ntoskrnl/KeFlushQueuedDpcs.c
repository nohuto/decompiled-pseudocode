/*
 * XREFs of KeFlushQueuedDpcs @ 0x1402E16C0
 * Callers:
 *     KeCleanupThreadState @ 0x1402D2310 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x1404E6B60 (CcDeletePartition.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405C9798 (ExpTimeZoneCleanupSiloState.c)
 *     MmPageEntireDriver @ 0x1406A88B0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x14075F840 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x1409528E4 (ExpPartitionDestroy.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x14021E120 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x14021E1A0 (KeEnumerateNextProcessor.c)
 *     KiGetDeepIdleProcessors @ 0x1402E17B0 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x1402E45F4 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  int v0; // [rsp+20h] [rbp-E0h] BYREF
  unsigned __int16 *v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  int v3; // [rsp+3Ah] [rbp-C6h]
  __int16 v4; // [rsp+3Eh] [rbp-C2h]
  _QWORD v5[22]; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v6[88]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v5, 0, 0xA8uLL);
  v3 = 0;
  v4 = 0;
  v0 = 0;
  memset(v6, 0, 0xA8uLL);
  KiGetDeepIdleProcessors(v5, v6);
  v1[1] = (unsigned __int16 *)v5[1];
  v1[0] = (unsigned __int16 *)v5;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 12588) )
      KeAddProcessorAffinityEx(v6, v0);
  }
  KeGenericProcessorCallback(v6, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
