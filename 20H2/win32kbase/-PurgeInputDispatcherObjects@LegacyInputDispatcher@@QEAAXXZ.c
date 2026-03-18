/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C00BEB10
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C002518C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(
        LegacyInputDispatcher *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned int v9; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this, a2, a3, a4) )
  {
    v8 = *((unsigned int *)this + 10);
    v9 = *((_DWORD *)this + 13) - v8;
    if ( !v9 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v5, v6, v7);
      v8 = *((unsigned int *)this + 10);
    }
    memset((void *)(*((_QWORD *)this + 1) + 8 * v8), 0, 8LL * v9);
    memset((void *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 10)), 0, 16LL * v9);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
