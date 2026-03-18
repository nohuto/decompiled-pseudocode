/*
 * XREFs of rimAddToObTrackList @ 0x1C00A4080
 * Callers:
 *     RawInputManagerObjectCreate @ 0x1C00A3C50 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00A3F48 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C016E8E8 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0069440 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  _QWORD *v4; // rcx
  _QWORD *v5; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v7; // rax
  struct _LIST_ENTRY *v8; // rdx
  struct _LIST_ENTRY *v9; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    Blink = gObRimList.Blink;
    v7 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink == &gObRimList )
    {
      v7->Flink = &gObRimList;
      *(_QWORD *)(a1 + 24) = Blink;
      Blink->Flink = v7;
      gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_4:
    __fastfail(3u);
  }
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2);
    v8 = gObRimInputObserverList.Blink;
    v9 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimInputObserverList.Blink->Flink == &gObRimInputObserverList )
    {
      v9->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v8;
      v8->Flink = v9;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v4 = (_QWORD *)qword_1C0256308;
  v5 = (_QWORD *)(a1 + 16);
  if ( *(__int64 **)qword_1C0256308 != &gObRimDevList )
    goto LABEL_4;
  *v5 = &gObRimDevList;
  *(_QWORD *)(a1 + 24) = v4;
  *v4 = v5;
  qword_1C0256308 = a1 + 16;
LABEL_6:
  *(_BYTE *)(a1 + 8) = 1;
  qword_1C02562F8 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
