/*
 * XREFs of ?TimerCallback@VolumeHardwareLogger@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C1BB0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogBurst@VolumeHardwareLogger@@QEAAXXZ @ 0x1800C03C0 (-LogBurst@VolumeHardwareLogger@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall VolumeHardwareLogger::TimerCallback(
        PTP_CALLBACK_INSTANCE Instance,
        struct _RTL_CRITICAL_SECTION *Context,
        PTP_TIMER Timer)
{
  EnterCriticalSection(Context);
  VolumeHardwareLogger::LogBurst(Context);
  if ( Context )
    LeaveCriticalSection(Context);
}
