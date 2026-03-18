/*
 * XREFs of ?RegisterInputDispatcherObjects@LegacyInputDispatcher@@UEAAJPEAXIPEAUInputDispatcherObject@@@Z @ 0x1C00462C0
 * Callers:
 *     <none>
 * Callees:
 *     ?HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ @ 0x1C009DDAC (-HasInputDispatcherObjects@LegacyInputDispatcher@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::RegisterInputDispatcherObjects(
        LegacyInputDispatcher *this,
        void *a2,
        unsigned int a3,
        struct InputDispatcherObject *a4)
{
  unsigned int i; // r9d
  __int64 v9; // rax
  __int64 v10; // r8

  if ( a3 + *((_DWORD *)this + 13) > *((_DWORD *)this + 11) )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    return 3221225485LL;
  }
  else
  {
    if ( !*((_QWORD *)this + 4) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
    for ( i = 0; i < a3; *(_QWORD *)(*((_QWORD *)this + 4) + 16 * v10 + 8) = a2 )
    {
      v9 = *(_QWORD *)a4;
      v10 = i + *((_DWORD *)this + 13);
      a4 = (struct InputDispatcherObject *)((char *)a4 + 24);
      ++i;
      *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v10) = v9;
      *(_QWORD *)(*((_QWORD *)this + 4) + 16 * v10) = *((_QWORD *)a4 - 1);
    }
    if ( !LegacyInputDispatcher::HasInputDispatcherObjects(this) )
      *((_DWORD *)this + 10) = *((_DWORD *)this + 13);
    *((_DWORD *)this + 13) += a3;
    return 0LL;
  }
}
