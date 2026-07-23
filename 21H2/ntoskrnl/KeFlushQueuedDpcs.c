/*
 * XREFs of KeFlushQueuedDpcs @ 0x14029DA30
 * Callers:
 *     KeCleanupThreadState @ 0x140275C38 (KeCleanupThreadState.c)
 *     CcDeletePartition @ 0x1404EBEC0 (CcDeletePartition.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1405D1AD0 (ExpTimeZoneCleanupSiloState.c)
 *     MmPageEntireDriver @ 0x1406A7F00 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140772230 (IopDeleteDriver.c)
 *     ExpPartitionDestroy @ 0x140956044 (ExpPartitionDestroy.c)
 * Callees:
 *     KeGenericProcessorCallback @ 0x14029C4C8 (KeGenericProcessorCallback.c)
 *     KiGetDeepIdleProcessors @ 0x14029DB20 (KiGetDeepIdleProcessors.c)
 *     KeAddProcessorAffinityEx @ 0x1402CDC80 (KeAddProcessorAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x1402CDD00 (KeEnumerateNextProcessor.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 */

void KeFlushQueuedDpcs(void)
{
  unsigned int v0; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v1[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v2; // [rsp+38h] [rbp-C8h]
  int v3; // [rsp+3Ah] [rbp-C6h]
  __int16 v4; // [rsp+3Eh] [rbp-C2h]
  _QWORD v5[22]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v6[22]; // [rsp+F0h] [rbp-10h] BYREF

  memset(v5, 0, 0xA8uLL);
  v3 = 0;
  v4 = 0;
  v0 = 0;
  memset(v6, 0, 0xA8uLL);
  KiGetDeepIdleProcessors(v5, v6);
  v1[1] = v5[1];
  v1[0] = v5;
  v2 = 0;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v0, v1) )
  {
    if ( *(_DWORD *)(KiProcessorBlock[v0] + 12588) )
      KeAddProcessorAffinityEx(v6, v0);
  }
  KeGenericProcessorCallback(v6, (void (__fastcall *)(struct _KPRCB *, __int64))KiFlushQueuedDpcsWorker, 0LL, 2);
}
