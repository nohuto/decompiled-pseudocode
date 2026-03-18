/*
 * XREFs of ?PopulateCustomDispatcherObjectsArray@LegacyInputDispatcher@@UEAAJIPEAPEAX@Z @ 0x1C01A1630
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall LegacyInputDispatcher::PopulateCustomDispatcherObjectsArray(
        LegacyInputDispatcher *this,
        __int64 a2,
        void **a3,
        __int64 a4)
{
  __int64 v4; // rdi
  void **v5; // rsi
  int v7; // ebp
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax

  v4 = (unsigned int)a2;
  v5 = a3;
  v7 = a2 + 1;
  if ( *((_DWORD *)this + 11) < (unsigned int)(a2 + 1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  if ( !*((_QWORD *)this + 2) )
  {
    v8 = Win32AllocPoolNonPaged(8LL * *((unsigned int *)this + 11), 0x79737355u);
    *((_QWORD *)this + 2) = v8;
    if ( !v8 )
      return 3221225506LL;
  }
  if ( (_DWORD)v4 )
  {
    v10 = 8LL;
    v11 = v4;
    do
    {
      v12 = (__int64)*v5++;
      *(_QWORD *)(v10 + *((_QWORD *)this + 2)) = v12;
      v10 += 8LL;
      --v11;
    }
    while ( v11 );
  }
  *((_DWORD *)this + 12) = v7;
  return 0LL;
}
