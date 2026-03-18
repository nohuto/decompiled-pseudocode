/*
 * XREFs of KeExpandKernelStackAndCalloutInternal @ 0x1402AD400
 * Callers:
 *     ?SmStDirectRead@?$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@@Z @ 0x14025CA90 (-SmStDirectRead@-$SMKM_STORE@USM_TRAITS@@@@SAKPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS@@@@@.c)
 *     KeExpandKernelStackAndCalloutEx @ 0x1402AD3D0 (KeExpandKernelStackAndCalloutEx.c)
 *     MiSwapStackPage @ 0x14032576C (MiSwapStackPage.c)
 *     KeExpandKernelStackAndCallout @ 0x140331040 (KeExpandKernelStackAndCallout.c)
 *     MiDoStackCopy @ 0x140534420 (MiDoStackCopy.c)
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KiExpandKernelStackAndCalloutSwitchStack @ 0x1402AD4E0 (KiExpandKernelStackAndCalloutSwitchStack.c)
 *     KeBugCheck @ 0x1403FBC80 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     KiFatalFilter @ 0x140512FF0 (KiFatalFilter.c)
 */

__int64 __fastcall KeExpandKernelStackAndCalloutInternal(
        void (__fastcall *BugCheckParameter2)(ULONG_PTR),
        ULONG_PTR BugCheckParameter3,
        int a3,
        int a4,
        __int64 a5)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // r12
  struct _KTHREAD *CurrentThread; // rbx
  int MiscFlags; // eax
  char v11; // di
  unsigned __int8 v12; // al

  result = KiExpandKernelStackAndCalloutSwitchStack((_DWORD)BugCheckParameter2, BugCheckParameter3, a3, a4, a5);
  if ( (_DWORD)result == -1073740661 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    MiscFlags = CurrentThread->MiscFlags;
    if ( (MiscFlags & 0x1000) != 0 )
    {
      v11 = 1;
    }
    else
    {
      CurrentThread->MiscFlags = MiscFlags | 0x1000;
      v11 = 0;
    }
    BugCheckParameter2(BugCheckParameter3);
    if ( !v11 )
      CurrentThread->MiscFlags &= ~0x1000u;
    if ( KeGetCurrentIrql() != CurrentIrql )
    {
      v12 = KeGetCurrentIrql();
      KeBugCheckEx(
        0xC8u,
        ((CurrentIrql | ((unsigned __int64)v12 << 8)) << 8) | 2,
        (ULONG_PTR)BugCheckParameter2,
        BugCheckParameter3,
        0LL);
    }
    return 0LL;
  }
  return result;
}
