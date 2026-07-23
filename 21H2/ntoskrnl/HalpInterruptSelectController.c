/*
 * XREFs of HalpInterruptSelectController @ 0x1403AA0F0
 * Callers:
 *     HalpInitializeInterrupts @ 0x140A3A6FC (HalpInitializeInterrupts.c)
 * Callees:
 *     HalpInterruptInitializeController @ 0x1403A37A8 (HalpInterruptInitializeController.c)
 *     HalpFindInterruptController @ 0x1403AA174 (HalpFindInterruptController.c)
 */

__int64 __fastcall HalpInterruptSelectController(__int64 a1)
{
  ULONG_PTR InterruptController; // rax
  ULONG_PTR v3; // rbx
  int v4; // edx
  int v5; // eax
  ULONG_PTR v7; // rax

  InterruptController = HalpFindInterruptController(2LL);
  v3 = InterruptController;
  if ( InterruptController && (v4 = HalpInterruptInitializeController(InterruptController), v4 >= 0)
    || (v7 = HalpFindInterruptController(0LL), (v3 = v7) != 0) && (v4 = HalpInterruptInitializeController(v7), v4 >= 0) )
  {
    *(_QWORD *)a1 = v3;
  }
  else
  {
    v4 = -1073741810;
    HalpInterruptLastProblem = 2;
  }
  if ( v4 >= 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)a1 + 104LL) )
      HalPerformEndOfInterruptAtController[0] = *(__int64 (__fastcall **)())(*(_QWORD *)a1 + 104LL);
    v5 = *(_DWORD *)(v3 + 220);
    if ( (v5 & 1) != 0 )
    {
      HalpInterruptDirectedEoiModeDetermined = 1;
      if ( (v5 & 0x400) != 0 )
        HalpInterruptDirectedEoiModeEnabled = 1;
    }
  }
  return (unsigned int)v4;
}
