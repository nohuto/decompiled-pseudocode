/*
 * XREFs of ?PurgeInputDispatcherObjects@LegacyInputDispatcher@@QEAAXXZ @ 0x1C005E730
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C00AFD0C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall LegacyInputDispatcher::PurgeInputDispatcherObjects(LegacyInputDispatcher *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rcx
  unsigned int v6; // edi

  if ( LegacyInputDispatcher::HasInputDispatcherObjects(this) )
  {
    v5 = *((unsigned int *)this + 10);
    v6 = *((_DWORD *)this + 13) - v5;
    if ( !v6 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v2, v3, v4);
      v5 = *((unsigned int *)this + 10);
    }
    memset((void *)(*((_QWORD *)this + 1) + 8 * v5), 0, 8LL * v6);
    memset((void *)(*((_QWORD *)this + 4) + 16LL * *((unsigned int *)this + 10)), 0, 16LL * v6);
    *((_DWORD *)this + 13) = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = 64;
  }
}
