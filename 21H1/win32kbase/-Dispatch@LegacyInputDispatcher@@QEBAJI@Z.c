/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C009DD2C
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C009D9D0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C01A7610 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C009DDAC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // ebx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v3 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  }
  v4 = *((_QWORD *)this + 4);
  v5 = v3;
  v6 = 2 * v3;
  if ( !*(_QWORD *)(v4 + 8 * v6) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    v4 = *((_QWORD *)this + 4);
  }
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v4 + 8 * v6))(
         *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v5),
         *(_QWORD *)(v4 + 8 * v6 + 8));
  if ( v8 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7);
  return (unsigned int)v8;
}
