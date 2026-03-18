/*
 * XREFs of rimAddToObTrackList @ 0x1C00A9C44
 * Callers:
 *     RawInputManagerObjectCreate @ 0x1C0055770 (RawInputManagerObjectCreate.c)
 *     RawInputManagerDeviceObjectCreate @ 0x1C00AB114 (RawInputManagerDeviceObjectCreate.c)
 *     RawInputManagerInputObserverObjectCreate @ 0x1C0168598 (RawInputManagerInputObserverObjectCreate.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00712F0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall rimAddToObTrackList(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v10; // rax
  struct _LIST_ENTRY *v11; // rdx
  struct _LIST_ENTRY *v12; // rax

  RIMLockExclusive((__int64)&gObListLock);
  v6 = *(_DWORD *)(a1 + 4);
  if ( v6 == 1 )
  {
    Blink = gObRimList.Blink;
    v10 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimList.Blink->Flink == &gObRimList )
    {
      v10->Flink = &gObRimList;
      *(_QWORD *)(a1 + 24) = Blink;
      Blink->Flink = v10;
      gObRimList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
LABEL_4:
    __fastfail(3u);
  }
  if ( v6 != 2 )
  {
    if ( v6 != 3 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4, v5);
    v11 = gObRimInputObserverList.Blink;
    v12 = (struct _LIST_ENTRY *)(a1 + 16);
    if ( gObRimInputObserverList.Blink->Flink == &gObRimInputObserverList )
    {
      v12->Flink = &gObRimInputObserverList;
      *(_QWORD *)(a1 + 24) = v11;
      v11->Flink = v12;
      gObRimInputObserverList.Blink = (struct _LIST_ENTRY *)(a1 + 16);
      goto LABEL_6;
    }
    goto LABEL_4;
  }
  v7 = (_QWORD *)qword_1C0250388;
  v8 = (_QWORD *)(a1 + 16);
  if ( *(__int64 **)qword_1C0250388 != &gObRimDevList )
    goto LABEL_4;
  *v8 = &gObRimDevList;
  *(_QWORD *)(a1 + 24) = v7;
  *v7 = v8;
  qword_1C0250388 = a1 + 16;
LABEL_6:
  *(_BYTE *)(a1 + 8) = 1;
  qword_1C0250368 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
}
