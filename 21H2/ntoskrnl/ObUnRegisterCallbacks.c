/*
 * XREFs of ObUnRegisterCallbacks @ 0x140985310
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __stdcall ObUnRegisterCallbacks(PVOID RegistrationHandle)
{
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *v3; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 Count; // rcx
  struct _EX_RUNDOWN_REF **v6; // rax
  struct _KTHREAD *v7; // rax
  bool v8; // zf

  for ( i = 0; i < *((unsigned __int16 *)RegistrationHandle + 1); ++i )
  {
    v3 = (struct _EX_RUNDOWN_REF *)((char *)RegistrationHandle + 64 * (unsigned __int64)i + 32);
    ExWaitForRundownProtectionRelease(v3 + 7);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(v3[4].Count + 184, 0LL);
    Count = v3->Count;
    if ( *(struct _EX_RUNDOWN_REF **)(v3->Count + 8) != v3 || (v6 = (struct _EX_RUNDOWN_REF **)v3[1].Count, *v6 != v3) )
      __fastfail(3u);
    *v6 = (struct _EX_RUNDOWN_REF *)Count;
    *(_QWORD *)(Count + 8) = v6;
    ExReleasePushLockEx(v3[4].Count + 184, 0LL);
    v7 = KeGetCurrentThread();
    v8 = v7->SpecialApcDisable++ == -1;
    if ( v8 && ($CEA84C04E3712D858E5667A507841A2A *)v7->ApcState.ApcListHead[0].Flink != &v7->152 )
      KiCheckForKernelApcDelivery();
  }
  ExFreePoolWithTag(RegistrationHandle, 0x6C46624Fu);
}
