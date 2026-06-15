/*
 * XREFs of ?SoundLevelChangeCompletionCallback@CApplication@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180017240
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x1800167C0 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 */

void __fastcall CApplication::SoundLevelChangeCompletionCallback(
        PTP_CALLBACK_INSTANCE Instance,
        char *Context,
        PTP_TIMER Timer)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = (struct _RTL_CRITICAL_SECTION *)(Context + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 224));
  *((_DWORD *)Context + 68) = 0;
  LeaveCriticalSection(v3);
  CApplication::ProcessPendingSoundLevelNotification((struct _RTL_CRITICAL_SECTION *)Context);
  CApplication::ProcessPendingPLMExemptionChange((CApplication *)Context);
}
