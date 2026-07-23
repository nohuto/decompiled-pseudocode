/*
 * XREFs of HalpInterruptResetThisProcessor @ 0x1404BC6C0
 * Callers:
 *     HalpInterruptRebootService @ 0x1404D2890 (HalpInterruptRebootService.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x1402CF130 (KeStallExecutionProcessor.c)
 *     HalpInterruptInitializeController @ 0x1403A37A8 (HalpInterruptInitializeController.c)
 *     HalpInterruptInitializeLocalUnit @ 0x1403A3E5C (HalpInterruptInitializeLocalUnit.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpPowerWriteResetCommand @ 0x1404BE54C (HalpPowerWriteResetCommand.c)
 */

void __noreturn HalpInterruptResetThisProcessor()
{
  unsigned int Number; // esi
  ULONG_PTR *v1; // rdi
  ULONG_PTR v2; // rbx
  int v3; // eax
  __int64 (__fastcall *v4)(_QWORD); // rax
  int v5; // eax
  ULONG_PTR v6; // rbx
  __int64 (__fastcall *v7)(_QWORD); // rax
  int v8; // eax

  Number = KeGetPcr()->Prcb.Number;
  _disable();
  HalpInterruptInitializeLocalUnit(HalpInterruptController);
  HalpInterruptLastProblem = 12;
  if ( !Number )
  {
    _InterlockedDecrement(&HalpInterruptProcessorsStarted);
    while ( _InterlockedExchangeAdd(&HalpInterruptProcessorsStarted, 0) )
      _mm_pause();
    KeStallExecutionProcessor(0x64u);
    v1 = (ULONG_PTR *)HalpRegisteredInterruptControllers;
    while ( v1 != &HalpRegisteredInterruptControllers )
    {
      v2 = (ULONG_PTR)v1;
      v1 = (ULONG_PTR *)*v1;
      v3 = *(_DWORD *)(v2 + 224);
      if ( (v3 & 1) != 0 )
      {
        *(_DWORD *)(v2 + 224) = v3 & 0xFFFFFFFE;
        HalpInterruptInitializeController(v2);
        v4 = *(__int64 (__fastcall **)(_QWORD))(v2 + 176);
        if ( v4 && (v5 = v4(*(_QWORD *)(v2 + 16)), v5 < 0) )
        {
          HalpInterruptLastProblem = 35;
          *(_DWORD *)(v2 + 292) = 35;
          *(_DWORD *)(v2 + 296) = v5;
          *(_QWORD *)(v2 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
          *(_DWORD *)(v2 + 312) = 3011;
        }
        else
        {
          *(_DWORD *)(v2 + 224) &= ~1u;
        }
      }
    }
    KeStallExecutionProcessor(0x64u);
  }
  HalPerformEndOfInterruptAtController[0]();
  v6 = HalpInterruptController;
  v7 = *(__int64 (__fastcall **)(_QWORD))(HalpInterruptController + 168);
  if ( v7 )
  {
    v8 = v7(*(_QWORD *)(HalpInterruptController + 16));
    if ( v8 < 0 )
    {
      *(_DWORD *)(v6 + 296) = v8;
      HalpInterruptLastProblem = 34;
      *(_DWORD *)(v6 + 292) = 34;
      *(_QWORD *)(v6 + 304) = "minkernel\\hals\\lib\\interrupts\\common\\intsup.c";
      *(_DWORD *)(v6 + 312) = 3060;
    }
  }
  HalpPowerWriteResetCommand(Number, (unsigned __int64)&HalpInterruptProcessorsStarted & -(__int64)(Number != 0));
  JUMPOUT(0x1404BC821LL);
}
