/*
 * XREFs of WheapEtwEnableCallback @ 0x1407BD7E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x14024A230 (KeSetEvent.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     WheapFreeErrorRecord @ 0x1405B5DE0 (WheapFreeErrorRecord.c)
 *     WheapGenerateETWEvents @ 0x1405B7740 (WheapGenerateETWEvents.c)
 */

void __fastcall WheapEtwEnableCallback(LPCGUID SourceId, int ControlCode, UCHAR Level, ULONGLONG MatchAnyKeyword)
{
  __int64 *v4; // rbx
  __int64 v5; // rax
  PVOID *CurrentIrp; // rbx
  __int64 v7; // rax

  WheapEventingInitialized = ControlCode;
  if ( ControlCode == 1 )
  {
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapWaitingETWEventLock, Executive, 0, 0, 0LL);
      v4 = (__int64 *)WheapWaitingETWEvents;
      if ( *(__int64 **)(WheapWaitingETWEvents + 8) != &WheapWaitingETWEvents )
        goto LABEL_9;
      v5 = *(_QWORD *)WheapWaitingETWEvents;
      if ( *(_QWORD *)(*(_QWORD *)WheapWaitingETWEvents + 8LL) != WheapWaitingETWEvents )
        goto LABEL_9;
      WheapWaitingETWEvents = *(_QWORD *)WheapWaitingETWEvents;
      *(_QWORD *)(v5 + 8) = &WheapWaitingETWEvents;
      KeSetEvent(&WheapWaitingETWEventLock, 0, 0);
      if ( v4 == &WheapWaitingETWEvents )
        break;
      WheapGenerateETWEvents((__int64)(v4 + 5));
      WheapFreeErrorRecord((ULONG_PTR)v4);
    }
    while ( 1 )
    {
      KeWaitForSingleObject(&WheapDeferredInternalLogsEventLock, Executive, 0, 0, 0LL);
      CurrentIrp = (PVOID *)WheapDispatchPtr.Queue.Wcb.CurrentIrp;
      if ( *((struct _DEVICE_OBJECT **)WheapDispatchPtr.Queue.Wcb.CurrentIrp + 1) != (struct _DEVICE_OBJECT *)&WheapDispatchPtr.Queue.Wcb.CurrentIrp )
        break;
      v7 = *(_QWORD *)WheapDispatchPtr.Queue.Wcb.CurrentIrp;
      if ( *(PVOID *)(*(_QWORD *)WheapDispatchPtr.Queue.Wcb.CurrentIrp + 8LL) != WheapDispatchPtr.Queue.Wcb.CurrentIrp )
        break;
      WheapDispatchPtr.Queue.Wcb.CurrentIrp = *(PVOID *)WheapDispatchPtr.Queue.Wcb.CurrentIrp;
      *(_QWORD *)(v7 + 8) = &WheapDispatchPtr.Queue.Wcb.CurrentIrp;
      KeSetEvent(&WheapDeferredInternalLogsEventLock, 0, 0);
      if ( CurrentIrp == &WheapDispatchPtr.Queue.Wcb.CurrentIrp )
        return;
      WheaLogInternalEvent((_DWORD *)CurrentIrp + 4);
    }
LABEL_9:
    __fastfail(3u);
  }
}
