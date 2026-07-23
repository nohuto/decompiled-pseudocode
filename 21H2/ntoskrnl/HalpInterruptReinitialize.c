/*
 * XREFs of HalpInterruptReinitialize @ 0x140996D78
 * Callers:
 *     HalpAcpiPostSleep @ 0x140996B2C (HalpAcpiPostSleep.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     HalGetProcessorIdByNtNumber @ 0x1403770A0 (HalGetProcessorIdByNtNumber.c)
 *     HalStartNextProcessor @ 0x1403A15F0 (HalStartNextProcessor.c)
 *     HalpInterruptInitializeController @ 0x1403A37A8 (HalpInterruptInitializeController.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     HalStartDynamicProcessor @ 0x1404BC520 (HalStartDynamicProcessor.c)
 *     HalpInterruptControllerInUse @ 0x1404D1AEC (HalpInterruptControllerInUse.c)
 *     HalpInterruptStartBlockedProcessors @ 0x1404D1CFC (HalpInterruptStartBlockedProcessors.c)
 *     HalpIommuInitializeAll @ 0x14099C3D4 (HalpIommuInitializeAll.c)
 */

int __fastcall HalpInterruptReinitialize(__int64 a1)
{
  ULONG_PTR *v1; // rbx
  int v2; // r12d
  int v3; // ebp
  ULONG_PTR v4; // rdi
  int v5; // eax
  int v6; // eax
  ULONG_PTR BugCheckParameter4; // rsi
  int v8; // eax
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rax
  unsigned int v11; // esi
  ULONG v12; // ebx
  __int64 v13; // rbp
  __int64 v14; // r15
  ULONG_PTR v15; // r14
  unsigned int v16; // ebp
  unsigned int v17; // ebx
  __int64 v18; // rsi
  ULONG_PTR v20; // r14
  ULONG ProcessorIndexFromNumber; // eax
  unsigned int v22; // r8d
  ULONG_PTR v23; // r15
  __int16 v25; // [rsp+50h] [rbp-8h]
  unsigned int v26; // [rsp+60h] [rbp+8h] BYREF

  v26 = 0;
  v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
  v2 = 0;
  v3 = a1;
  while ( v1 != &HalpRegisteredInterruptControllers )
  {
    v4 = (ULONG_PTR)v1;
    v1 = (ULONG_PTR *)*v1;
    v5 = *(_DWORD *)(v4 + 224);
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 224) = v5 & 0xFFFFFFFE;
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
    v12 = 1;
    if ( v11 > 1 )
    {
      v13 = 8LL;
      do
      {
        v14 = HalpHiberProcState + 1472LL * v12;
        CurTiledCr3LowPart = *(_DWORD *)(HalpTiledCr3Addresses + v13 + 4);
        v15 = HalpInterruptProcessorState + ((unsigned __int64)v12 << 6);
        LODWORD(CurrentPrcb) = HalGetProcessorIdByNtNumber(v12, &v26);
        if ( (int)CurrentPrcb >= 0 )
        {
          LODWORD(CurrentPrcb) = HalStartNextProcessor(v14, v12, v26);
          v2 = (int)CurrentPrcb;
        }
        if ( v2 != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v12, (unsigned int)HalpInterruptProcessorCount, v15);
        ++v12;
        v13 += 8LL;
      }
      while ( v12 < v11 );
    }
    v16 = HalpInterruptDynamicProcessorCount;
    v17 = 0;
    if ( HalpInterruptDynamicProcessorCount )
    {
      v18 = 0LL;
      do
      {
        v20 = HalpInterruptDynamicProcessorState + (v18 << 6);
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v20 + 16));
        v22 = *(_DWORD *)v20;
        v23 = ProcessorIndexFromNumber;
        CurTiledCr3LowPart = *(_DWORD *)(HalpTiledCr3Addresses + 8LL * ProcessorIndexFromNumber + 4);
        LODWORD(CurrentPrcb) = HalStartDynamicProcessor(
                                 HalpHiberProcState + 1472LL * ProcessorIndexFromNumber,
                                 ProcessorIndexFromNumber,
                                 v22,
                                 0xFFFFu);
        if ( (_DWORD)CurrentPrcb != 4 )
          KeBugCheckEx(0x5Cu, 0x2001uLL, v23, (unsigned int)HalpInterruptProcessorCount, v20);
        ++v17;
        ++v18;
      }
      while ( v17 < v16 );
    }
    HalpInterruptProcessorRestarting = 0;
  }
  HalpInterruptPicStateIntact = 0;
  if ( (v25 & 0x200) != 0 )
    _enable();
  return (int)CurrentPrcb;
}
