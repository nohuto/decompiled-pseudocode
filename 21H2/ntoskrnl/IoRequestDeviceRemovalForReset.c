/*
 * XREFs of IoRequestDeviceRemovalForReset @ 0x1408A0710
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeTimerEx @ 0x140266A80 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x140269650 (KeInitializeDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     McTemplateK0hzr0_EtwWriteTransfer @ 0x14050CE28 (McTemplateK0hzr0_EtwWriteTransfer.c)
 *     IopAllocateUnicodeString @ 0x14074986C (IopAllocateUnicodeString.c)
 *     IopFreeResetRemovalContext @ 0x1408A0A30 (IopFreeResetRemovalContext.c)
 *     IopQueueDeviceResetEvent @ 0x1408A0AAC (IopQueueDeviceResetEvent.c)
 *     PnpTraceRequestDeviceRemovalForReset @ 0x1408B2150 (PnpTraceRequestDeviceRemovalForReset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IoRequestDeviceRemovalForReset(PVOID Object, unsigned int a2)
{
  char *PoolWithTag; // rax
  __int64 v5; // rbx
  char *v6; // rsi
  int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xE0uLL, 0x45706E50u);
  v5 = 0LL;
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_2;
  memset(PoolWithTag, 0, 0xE0uLL);
  KeInitializeDpc((PRKDPC)v6 + 1, (PKDEFERRED_ROUTINE)PfSnTracingStateDpcRoutine, v6);
  KeInitializeTimerEx((PKTIMER)v6, NotificationTimer);
  *((_QWORD *)v6 + 19) = v6;
  *((_QWORD *)v6 + 18) = IopRetryDeviceRemovalForReset;
  *((_QWORD *)v6 + 16) = 0LL;
  ObfReferenceObjectWithTag(Object, 0x52706E50u);
  *((_QWORD *)v6 + 23) = Object;
  *((_QWORD *)v6 + 20) = 0LL;
  *((_DWORD *)v6 + 48) = 0;
  *((_DWORD *)v6 + 54) = a2;
  *(_OWORD *)(v6 + 200) = 0LL;
  if ( (int)IopAllocateUnicodeString((__int64)(v6 + 200), 0x200u) >= 0 )
    v7 = IopQueueDeviceResetEvent(v6);
  else
LABEL_2:
    v7 = -1073741670;
  PnpTraceRequestDeviceRemovalForReset(Object, a2, (unsigned int)v7);
  if ( v7 >= 0 )
  {
    if ( Object )
      v5 = *(_QWORD *)(*((_QWORD *)Object + 39) + 40LL);
    if ( (byte_140C1327B & 8) != 0 )
      McTemplateK0hzr0_EtwWriteTransfer(v9, v8, v10, *(_WORD *)(v5 + 40) >> 1, *(_QWORD *)(v5 + 48));
  }
  else if ( v6 )
  {
    IopFreeResetRemovalContext(v6);
  }
  return (unsigned int)v7;
}
