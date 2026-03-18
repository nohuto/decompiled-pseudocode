/*
 * XREFs of MiDeleteHotPatchEntry @ 0x140972D90
 * Callers:
 *     MiApplyImageHotPatchRequest @ 0x140971DC0 (MiApplyImageHotPatchRequest.c)
 *     MiDeleteVadHotPatchState @ 0x140972F98 (MiDeleteVadHotPatchState.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     MiGetProcessHotPatchContext @ 0x1409734B8 (MiGetProcessHotPatchContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteHotPatchEntry(char *P)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbx
  void *v4; // rcx
  __int64 ProcessHotPatchContext; // rax
  volatile signed __int64 *v6; // rbp
  _QWORD *v7; // rcx
  PVOID *v8; // rax
  bool v9; // zf

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  RtlFreeUnicodeString((PUNICODE_STRING)(P + 40));
  v4 = (void *)*((_QWORD *)P + 3);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( *(_QWORD *)P )
  {
    ProcessHotPatchContext = MiGetProcessHotPatchContext(Process, 0LL);
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockExclusiveEx(ProcessHotPatchContext + 16, 0LL);
    v7 = *(_QWORD **)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v8 = (PVOID *)*((_QWORD *)P + 1), *v8 != P) )
      __fastfail(3u);
    *v8 = v7;
    v7[1] = v8;
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    v9 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v9 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(P, 0);
}
