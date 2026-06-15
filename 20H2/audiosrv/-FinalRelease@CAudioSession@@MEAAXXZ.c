/*
 * XREFs of ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x1800456F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CancelInactiveTimer@CAudioSession@@AEAAXXZ @ 0x1800457BC (-CancelInactiveTimer@CAudioSession@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18013CA58 (MicrosoftTelemetryAssertTriggeredArgs.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAudioSession::FinalRelease(CAudioSession *this)
{
  _QWORD *v2; // rsi
  _QWORD *v3; // rbp

  if ( *((_BYTE *)this + 944) )
    MicrosoftTelemetryAssertTriggeredArgs(this, 0LL, 0LL);
  if ( *((_QWORD *)this + 71) )
  {
    CAudioSession::CancelInactiveTimer((CAudioSession *)((char *)this - 32));
    (*(void (__fastcall **)(struct CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
      ThreadPool,
      *((_QWORD *)this + 71));
    *((_QWORD *)this + 71) = 0LL;
  }
  v2 = (_QWORD *)*((_QWORD *)this + 93);
  v3 = (_QWORD *)*((_QWORD *)this + 94);
  while ( v2 != v3 )
  {
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)*v2 + 32LL))(*v2, (char *)this - 32);
    ++v2;
  }
  if ( *((_QWORD *)this + 72) )
  {
    (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 64LL))(ThreadPool);
    *((_QWORD *)this + 72) = 0LL;
  }
}
