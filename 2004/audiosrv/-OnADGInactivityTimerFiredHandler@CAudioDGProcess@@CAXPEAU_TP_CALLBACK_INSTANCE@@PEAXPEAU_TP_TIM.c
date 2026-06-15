/*
 * XREFs of ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800042C0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18000433C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioDGProcess::OnADGInactivityTimerFiredHandler(
        struct _TP_CALLBACK_INSTANCE *a1,
        char *a2,
        struct _TP_TIMER *a3)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  void (__fastcall ***v5)(_QWORD, _QWORD); // rcx

  v4 = (struct _RTL_CRITICAL_SECTION *)(a2 + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)(a2 + 48));
  if ( (unsigned __int64)(*((_QWORD *)a2 + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CAudioDGProcess::DoTerminateADG((CAudioDGProcess *)a2);
    v5 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)a2 + 19);
    if ( v5 )
      (**v5)(v5, 0LL);
  }
  if ( v4 )
    LeaveCriticalSection(v4);
}
