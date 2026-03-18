/*
 * XREFs of _InitializeClientPfnArrays@16 @ 0xE9C86
 * Callers:
 *     _NtUserInitializeClientPfnArrays@16 @ 0xE9BD6 (_NtUserInitializeClientPfnArrays@16.c)
 * Callees:
 *     <none>
 */

int __fastcall InitializeClientPfnArrays(const void *a1, const void *a2, const void *a3, KDEFERRED_ROUTINE *a4)
{
  if ( dword_2742C4 || !a1 )
    return 0;
  if ( PsGetCurrentProcess() == _gpepCSRSS )
  {
    WPP_MAIN_CB.SecurityDescriptor = (PSECURITY_DESCRIPTOR)4;
    qmemcpy((void *)(_gpsi + 228), a1, 0x60u);
    dword_273BE4 = 3;
    qmemcpy((void *)(_gpsi + 324), a2, 0x60u);
    qmemcpy((void *)(_gpsi + 420), a3, 0x2Cu);
    dword_273BDC = 1;
    dword_273BE8 = 2;
    dword_273BF0 = 5;
    WPP_MAIN_CB.Dpc.SystemArgument1 = *(PVOID *)(_gpsi + 352);
    WPP_MAIN_CB.Dpc.SystemArgument2 = *(PVOID *)(_gpsi + 340);
    WPP_MAIN_CB.Dpc.DpcData = *(PVOID *)(_gpsi + 380);
    WPP_MAIN_CB.ActiveThreadCount = *(_DWORD *)(_gpsi + 372);
    WPP_MAIN_CB.DeviceLock.Header.LockNV = *(_DWORD *)(_gpsi + 356);
    dword_273BE0 = *(_DWORD *)(_gpsi + 364);
    dword_273BEC = *(_DWORD *)(_gpsi + 328);
    WPP_MAIN_CB.DeviceLock.Header.SignalState = *(_DWORD *)(_gpsi + 376);
    WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = *(struct _LIST_ENTRY **)(_gpsi + 360);
    WPP_MAIN_CB.Dpc.DeferredRoutine = a4;
    dword_2742C4 = 1;
    return 0;
  }
  return -1073741790;
}
