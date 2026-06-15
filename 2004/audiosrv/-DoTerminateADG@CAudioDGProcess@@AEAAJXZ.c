/*
 * XREFs of ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18000433C
 * Callers:
 *     ?OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800042C0 (-OnADGInactivityTimerFiredHandler@CAudioDGProcess@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIM.c)
 *     ?TerminateADG@CAudioDGProcess@@QEAAJXZ @ 0x18012E760 (-TerminateADG@CAudioDGProcess@@QEAAJXZ.c)
 * Callees:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180004484 (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::DoTerminateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v3; // rcx
  unsigned int v4; // edi

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v3 = *((_QWORD *)this + 19);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  v4 = CAudioDGProcess::DoShutdownADG(this);
  if ( v2 )
    LeaveCriticalSection(v2);
  return v4;
}
