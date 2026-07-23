/*
 * XREFs of PnpSetPlugPlayEvent @ 0x14074B1A8
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140744650 (PiProcessNewDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     PnpCreateDeviceEventEntry @ 0x1406FD284 (PnpCreateDeviceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1406FE94C (PnpInsertEventInQueue.c)
 */

void __fastcall PnpSetPlugPlayEvent(__int128 *a1, _QWORD *a2)
{
  void *v2; // rbp
  __int64 v4; // rsi
  int v5; // r14d
  _DWORD *DeviceEventEntry; // rax
  __int64 v7; // rbx
  __int128 v8; // xmm0
  void *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v2 = a2;
  if ( !PnpShutdownEvent.Header.SignalState )
  {
    v4 = *(_QWORD *)(a2[39] + 40LL);
    if ( v4 )
    {
      v5 = *(unsigned __int16 *)(v4 + 40) + 80;
      DeviceEventEntry = PnpCreateDeviceEventEntry((unsigned int)*(unsigned __int16 *)(v4 + 40) + 192);
      v7 = (__int64)DeviceEventEntry;
      if ( DeviceEventEntry )
      {
        v8 = *a1;
        DeviceEventEntry[37] = v5;
        v9 = DeviceEventEntry + 40;
        *((_OWORD *)DeviceEventEntry + 7) = v8;
        v10 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v10 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( v10 )
          *(_DWORD *)(v7 + 128) = 1;
        else
          *(_DWORD *)(v7 + 128) = 4;
        memmove(v9, *(const void **)(v4 + 48), *(unsigned __int16 *)(v4 + 40));
        *(_WORD *)(v7 + 2 * ((unsigned __int64)*(unsigned __int16 *)(v4 + 40) >> 1) + 160) = 0;
        v11 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ENUMERATED.Data1 )
          v11 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ENUMERATED.Data4;
        if ( !v11 )
          goto LABEL_11;
        v12 = *(_QWORD *)a1 - *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1;
        if ( *(_QWORD *)a1 == *(_QWORD *)&GUID_DEVICE_ARRIVAL.Data1 )
          v12 = *((_QWORD *)a1 + 1) - *(_QWORD *)GUID_DEVICE_ARRIVAL.Data4;
        if ( v12 )
          ObfReferenceObjectWithTag(v2, 0x56706E50u);
        else
LABEL_11:
          v2 = 0LL;
        *(_QWORD *)(v7 + 152) = v2;
        PnpInsertEventInQueue(v7);
      }
    }
  }
}
