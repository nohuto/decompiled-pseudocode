/*
 * XREFs of PnpSetCustomTargetEvent @ 0x14078AB30
 * Callers:
 *     IoReportTargetDeviceChangeAsynchronous @ 0x1402E0740 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoReportTargetDeviceChange @ 0x1407FB910 (IoReportTargetDeviceChange.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x140944BB0 (PnpReportTargetDeviceChangeAsyncWorker.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     PnpInsertEventInQueue @ 0x14078C398 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x14078C4EC (PnpCreateDeviceEventEntry.c)
 */

__int64 __fastcall PnpSetCustomTargetEvent(
        _QWORD *Object,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned __int16 *Src)
{
  __int64 v9; // rdi
  unsigned int v10; // ebp
  __int64 DeviceEventEntry; // rbx
  const void *v12; // rdx
  void *v13; // rcx

  if ( a2 )
    *a3 = 259;
  if ( PnpShutdownEvent.Header.SignalState )
    return 3221225865LL;
  if ( Object )
    v9 = *(_QWORD *)(Object[39] + 40LL);
  else
    v9 = 0LL;
  v10 = Src[1] + ((*(unsigned __int16 *)(v9 + 40) + 89) & 0xFFFFFFF8);
  DeviceEventEntry = PnpCreateDeviceEventEntry(v10 + 112);
  if ( !DeviceEventEntry )
    return 3221225626LL;
  ObfReferenceObjectWithTag(Object, 0x56706E50u);
  *(_QWORD *)(DeviceEventEntry + 32) = a4;
  *(_QWORD *)(DeviceEventEntry + 40) = a5;
  *(_QWORD *)(DeviceEventEntry + 24) = a2;
  *(_DWORD *)(DeviceEventEntry + 144) = 0;
  *(_DWORD *)(DeviceEventEntry + 128) = 3;
  *(GUID *)(DeviceEventEntry + 112) = GUID_PNP_CUSTOM_NOTIFICATION;
  *(_QWORD *)(DeviceEventEntry + 136) = a3;
  *(_DWORD *)(DeviceEventEntry + 148) = v10;
  *(_QWORD *)(DeviceEventEntry + 152) = Object;
  v12 = *(const void **)(v9 + 48);
  if ( v12 )
    memmove((void *)(DeviceEventEntry + 168), v12, *(unsigned __int16 *)(v9 + 40));
  v13 = (void *)(DeviceEventEntry + v10 + 112 - (unsigned __int64)Src[1]);
  *(_QWORD *)(DeviceEventEntry + 160) = v13;
  memmove(v13, Src, Src[1]);
  return PnpInsertEventInQueue(DeviceEventEntry);
}
