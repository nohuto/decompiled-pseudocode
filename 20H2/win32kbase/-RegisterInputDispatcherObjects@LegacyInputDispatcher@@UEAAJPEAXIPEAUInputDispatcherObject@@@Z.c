/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00226A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C002518C (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        void *a2,
        __int64 a3,
        struct InputDispatcherObject *a4)
{
  struct InputDispatcherObject *v4; // rsi
  unsigned int v5; // edi
  unsigned int i; // r9d
  __int64 v9; // rax
  __int64 v10; // r8

  v4 = a4;
  v5 = a3;
  if ( (unsigned int)(a3 + *((_DWORD *)this + 13)) > *((_DWORD *)this + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    return 3221225485LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
    for ( i = 0; i < v5; *(_QWORD *)(*((_QWORD *)this + 4) + 16 * v10 + 8) = a2 )
    {
      v9 = *(_QWORD *)v4;
      v10 = i + *((_DWORD *)this + 13);
      v4 = (struct InputDispatcherObject *)((char *)v4 + 24);
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v10) = v9;
      *(_QWORD *)(*((_QWORD *)this + 4) + 16 * v10) = *((_QWORD *)v4 - 1);
    }
    if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
      *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) += v5;
    return 0LL;
  }
}
