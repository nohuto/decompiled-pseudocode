/*
 * XREFs of MiGetPageForHeader @ 0x14026E62C
 * Callers:
 *     MiInitializeImageProtos @ 0x14026DF7C (MiInitializeImageProtos.c)
 *     MiCreateMdl @ 0x1406D3A74 (MiCreateMdl.c)
 * Callees:
 *     MiObtainFaultCharges @ 0x14021BA90 (MiObtainFaultCharges.c)
 *     MiInitializePageColorBase @ 0x14023F280 (MiInitializePageColorBase.c)
 *     MiGetEffectivePagePriorityThread @ 0x140270E84 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemPage @ 0x140270ED8 (MiGetSystemPage.c)
 *     MiReturnFaultCharges @ 0x14028E1E4 (MiReturnFaultCharges.c)
 *     MiLockPageInline @ 0x1402FFE30 (MiLockPageInline.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetPageForHeader(ULONG_PTR *a1, int a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 SystemPage; // rax
  __int64 v6; // rsi
  char EffectivePagePriorityThread; // bl
  __int64 v8; // rdx
  __int64 v9; // r8
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
  v6 = SystemPage;
  if ( !SystemPage )
  {
    MiReturnFaultCharges(a1, 1LL, 1LL);
    return -1LL;
  }
  EffectivePagePriorityThread = MiGetEffectivePagePriorityThread(
                                  CurrentThread,
                                  (unsigned __int128)((SystemPage + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64);
  v10 = MiLockPageInline(v6, v8, v9);
  v11 = *(_BYTE *)(v6 + 35) ^ EffectivePagePriorityThread;
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_BYTE *)(v6 + 35) ^= v11 & 7;
  v12 = v10;
  *(_QWORD *)(v6 + 24) |= 0x4000000000000000uLL;
  *(_WORD *)(v6 + 32) = 1;
  *(_QWORD *)(v6 + 16) = ZeroPte;
  _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
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
  return (v6 + 0x58000000000LL) / 48;
}
