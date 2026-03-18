/*
 * XREFs of MiGetPageForHeader @ 0x14031CC60
 * Callers:
 *     MiInitializeImageProtos @ 0x14031C75C (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x14060C320 (MiCreateMdl.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14025AF90 (MiGetEffectivePagePriorityThread.c)
 *     MiInitializePageColorBase @ 0x14025EA70 (MiInitializePageColorBase.c)
 *     MiObtainFaultCharges @ 0x1402ADCF0 (MiObtainFaultCharges.c)
 *     MiReturnFaultCharges @ 0x140311E30 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetSystemPage @ 0x14031CD8C (MiGetSystemPage.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG_PTR *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rsi
  char EffectivePagePriorityThread; // bl
  __int64 v7; // rdx
  __int64 v8; // r8
  _DWORD *v9; // r9
  unsigned __int8 v10; // al
  char v11; // bl
  unsigned __int64 v12; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v17; // edx
  bool v18; // zf
  _OWORD v19[2]; // [rsp+20h] [rbp-28h] BYREF

  v19[0] = 0LL;
  if ( !(unsigned int)MiObtainFaultCharges(a1, 1u, 1) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase((__int64)&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6], a2, (__int64)v19);
  SystemPage = MiGetSystemPage(a1, v19);
  if ( !SystemPage )
  {
    MiReturnFaultCharges((__int64)a1, 1uLL, 1);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)CurrentThread);
  v10 = MiLockPageInline(SystemPage, v7, v8, v9);
  v11 = *(_BYTE *)(SystemPage + 35) ^ EffectivePagePriorityThread;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_BYTE *)(SystemPage + 35) ^= v11 & 7;
  v12 = v10;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(SystemPage + 32) = 1;
  *(_QWORD *)(SystemPage + 16) = ZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v18 = (v17 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v17;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v12);
  return (SystemPage + 0x58000000000LL) / 48;
}
