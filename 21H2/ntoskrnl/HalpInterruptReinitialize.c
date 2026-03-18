/*
 * XREFs of HalpInterruptReinitialize @ 0x140A505D4
 * Callers:
 *     HalpAcpiPostSleep @ 0x140A50388 (HalpAcpiPostSleep.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140293580 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptInitializeController @ 0x1403AE924 (HalpInterruptInitializeController.c)
 *     HalStartNextProcessor @ 0x1403B2F30 (HalStartNextProcessor.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403B4DA0 (HalGetProcessorIdByNtNumber.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x140508D60 (HalStartDynamicProcessor.c)
 *     HalpInterruptControllerInUse @ 0x14051DE5C (HalpInterruptControllerInUse.c)
 *     HalpInterruptStartBlockedProcessors @ 0x14051E084 (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x140A543D8 (HalpIommuInitializeAll.c)
 */

int __fastcall HalpInterruptReinitialize(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r15d
  int v3; // ebp
  ULONG_PTR v4; // rdi
  int v5; // eax
  int v6; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v8; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v11; // esi
  ULONG i; // ebx
  __int64 v13; // r14
  ULONG_PTR v14; // rbp
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  __int64 v17; // rsi
  ULONG_PTR v19; // r14
  ULONG ProcessorIndexFromNumber; // eax
  ULONG_PTR v21; // r15
  __int16 v23; // [rsp+50h] [rbp-8h]
  unsigned int v24; // [rsp+60h] [rbp+8h] BYREF

  v24 = 0;
  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v2 = 0;
  v3 = a1;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    v4 = (ULONG_PTR)v1;
    v1 = (ULONG_PTR *)*v1;
    v5 = *(_DWORD *)(v4 + 232);
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 232) = v5 & 0xFFFFFFFE;
      v6 = HalpInterruptInitializeController(v4);
      BugCheckParameter4 = v6;
      if ( v6 < 0 )
      {
        if ( HalpInterruptControllerInUse(v4) )
          KeBugCheckEx(0x5Cu, 0x200uLL, HalpInterruptLastProblem, v4, BugCheckParameter4);
      }
    }
  }
  LOBYTE(a1) = 1;
  v8 = HalpIommuInitializeAll(a1, 0LL);
  if ( v8 < 0 )
    KeBugCheckEx(0x5Cu, 0x500uLL, v8, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  LODWORD(CurrentPrcb) = KiIrqlFlags;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    *((_DWORD *)CurrentPrcb->SchedulerAssist + 5) |= ~((unsigned __int16)(1LL << (CurrentIrql + 1)) - 1) & 0xFFFC;
  }
  _disable();
  if ( (v3 & 0x10000) != 0 )
  {
    v11 = HalpInterruptProcessorsStarted - HalpInterruptDynamicProcessorCount;
    if ( HalpInterruptBlockedProcessors )
      LODWORD(CurrentPrcb) = HalpInterruptStartBlockedProcessors(0);
    for ( i = 1; i < v11; ++i )
    {
      v13 = HalpHiberProcState + 1472LL * i;
      v14 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
      LODWORD(CurrentPrcb) = HalGetProcessorIdByNtNumber(i, &v24);
      if ( (int)CurrentPrcb >= 0 )
      {
        LODWORD(CurrentPrcb) = HalStartNextProcessor(v13, i, v24);
        v2 = (int)CurrentPrcb;
      }
      if ( v2 != 4 )
        KeBugCheckEx(0x5Cu, 0x2001uLL, i, (unsigned int)HalpInterruptProcessorCount, v14);
    }
    v15 = HalpInterruptDynamicProcessorCount;
    v16 = 0;
    if ( HalpInterruptDynamicProcessorCount )
    {
      v17 = 0LL;
      do
      {
        v19 = HalpInterruptDynamicProcessorState + (v17 << 6);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v19 + 16));
        v21 = ProcessorIndexFromNumber;
        LODWORD(CurrentPrcb) = HalStartDynamicProcessor(
                                 HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                                 ProcessorIndexFromNumber,
                                 *(_DWORD *)v19,
                                 0xFFFFu);
        if ( (_DWORD)CurrentPrcb != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v21, (unsigned int)HalpInterruptProcessorCount, v19);
        ++v16;
        ++v17;
      }
      while ( v16 < v15 );
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( (v23 & 0x200) != 0 )
    _enable();
  return (int)CurrentPrcb;
}
