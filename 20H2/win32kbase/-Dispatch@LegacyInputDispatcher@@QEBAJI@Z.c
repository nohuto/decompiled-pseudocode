/*
 * XREFs of ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C002510C
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0024DB0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     ?WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C019F510 (-WaitForMessagesOrCustomInputEventsAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C002518C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::Dispatch(LegacyInputDispatcher *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 v12; // r8
  __int64 v13; // r9

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 13)
    || !LegacyInputDispatcher::HasInputDispatcherObjects(this)
    || (unsigned int)v5 < *((_DWORD *)this + 10) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  }
  v6 = *((_QWORD *)this + 4);
  v7 = v5;
  v8 = 2 * v5;
  if ( !*(_QWORD *)(v6 + 8 * v8) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v6, a3, a4);
    v6 = *((_QWORD *)this + 4);
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v6 + 8 * v8))(
          *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v7),
          *(_QWORD *)(v6 + 8 * v8 + 8));
  if ( v11 < 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v12, v13);
  return (unsigned int)v11;
}
