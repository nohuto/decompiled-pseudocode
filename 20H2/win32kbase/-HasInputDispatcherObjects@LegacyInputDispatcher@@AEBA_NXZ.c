/*
 * XREFs of ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C002518C
 * Callers:
 *     ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00226A0 (-RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z.c)
 *     ?Dispatch@LegacyInputDispatcher@@QEBAJI@Z @ 0x1C002510C (-Dispatch@LegacyInputDispatcher@@QEBAJI@Z.c)
 *     ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00BEB10 (-PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall LegacyInputDispatcher::HasInputDispatcherObjects(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned int v4; // eax
  unsigned int v6; // edx

  v4 = *((_DWORD *)this + 10);
  v6 = v4;
  if ( v4 >= *((_DWORD *)this + 13) && v4 != 64 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, v4, a3, a4);
    v6 = *((_DWORD *)this + 10);
  }
  return v6 != 64;
}
