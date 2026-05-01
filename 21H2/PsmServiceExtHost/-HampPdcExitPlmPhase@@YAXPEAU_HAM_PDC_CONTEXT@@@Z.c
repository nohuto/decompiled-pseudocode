/*
 * XREFs of ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180082DE0
 * Callers:
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007C8F8 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPdcControlCallback@@YAJPEAXK@Z @ 0x180082AB0 (-HampPdcControlCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcEnterExitPlmPhase@@YAJPEAXK@Z @ 0x180082C10 (-HampPdcEnterExitPlmPhase@@YAJPEAXK@Z.c)
 * Callees:
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180008B88 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000969C (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800096F4 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 */

void __fastcall HampPdcExitPlmPhase(struct _HOST_ACTIVITY_MANAGER **a1)
{
  struct _HOST_ACTIVITY_MANAGER *v2; // rcx

  HampManagerAcquireLockExclusive(*a1);
  v2 = *a1;
  *((_DWORD *)a1 + 21) = 0;
  HampManagerReleaseLockExclusive(v2);
  HampPdcSignalWorker(a1, 1);
  TpWaitForWork(a1[8], 0LL);
  HampPdcNotifyCsState((struct _HAM_PDC_CONTEXT *)a1, 0);
}
