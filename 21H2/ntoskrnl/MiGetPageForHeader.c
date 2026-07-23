/*
 * XREFs of MiGetPageForHeader @ 0x14025C5CC
 * Callers:
 *     MiInitializeImageProtos @ 0x14025BF1C (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x1406AAD54 (MiCreateMdl.c)
 * Callees:
 *     MiReturnFaultCharges @ 0x14020B384 (MiReturnFaultCharges.c)
 *     MiGetEffectivePagePriorityThread @ 0x14025EE24 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x14025EE78 (MiGetSystemPage.c)
 *     MiObtainFaultCharges @ 0x1402C0390 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x1402E3AD0 (MiInitializePageColorBase.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForHeader(__int64 a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rsi
  char EffectivePagePriorityThread; // bl
  unsigned __int8 v7; // al
  char v8; // bl
  unsigned __int64 v9; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // edx
  bool v15; // zf
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  v16[0] = 0LL;
  if ( !(unsigned int)MiObtainFaultCharges(a1, 1LL, 1LL) )
    return -1LL;
  CurrentThread = KeGetCurrentThread();
  MiInitializePageColorBase(&CurrentThread->ApcState.Process[1].ActiveProcessorsPadding[6], a2, v16);
  SystemPage = MiGetSystemPage(a1, v16);
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1uLL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(CurrentThread);
  v7 = MiLockPageInline(SystemPage);
  v8 = *(_BYTE *)(SystemPage + 35) ^ EffectivePagePriorityThread;
  *(_QWORD *)(SystemPage + 8) = 0LL;
  *(_BYTE *)(SystemPage + 35) ^= v8 & 7;
  v9 = v7;
  *(_QWORD *)(SystemPage + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(SystemPage + 32) = 1;
  *(_QWORD *)(SystemPage + 16) = ZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(SystemPage + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
        v15 = (v14 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v14;
        if ( v15 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v9);
  return (SystemPage + 0x58000000000LL) / 48;
}
