/*
 * XREFs of KeUserModeCallback @ 0x140705310
 * Callers:
 *     <none>
 * Callees:
 *     MmDeleteKernelStack @ 0x1402925B0 (MmDeleteKernelStack.c)
 *     KeExitRetpoline @ 0x140324204 (KeExitRetpoline.c)
 *     MmCreateKernelStack @ 0x140354A10 (MmCreateKernelStack.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x1403F9430 (KiCallUserMode.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     PsInvokeWin32Callout @ 0x140637B10 (PsInvokeWin32Callout.c)
 *     ExRaiseAccessViolation @ 0x1409517C0 (ExRaiseAccessViolation.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CallbackNestingLevel; // cl
  __int64 KernelStack; // rax
  char *v9; // r14
  _KTRAP_FRAME *TrapFrame; // r13
  unsigned __int64 Rsp; // r12
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int8 BpbRetpolineState; // di
  unsigned int v18; // esi
  unsigned __int64 v20; // rax
  int BugCheckParameter4; // [rsp+20h] [rbp-78h]
  int v22; // [rsp+28h] [rbp-70h]
  int v23; // [rsp+30h] [rbp-68h]
  int v24; // [rsp+38h] [rbp-60h]
  int v25; // [rsp+40h] [rbp-58h]
  int v26; // [rsp+60h] [rbp-38h]
  int v27; // [rsp+68h] [rbp-30h]
  int v28; // [rsp+70h] [rbp-28h]
  char v29; // [rsp+78h] [rbp-20h]
  ULONG_PTR retaddr; // [rsp+98h] [rbp+0h]

  v5 = a3;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  CallbackNestingLevel = CurrentThread->CallbackNestingLevel;
  CurrentThread->CallbackNestingLevel = CallbackNestingLevel + 1;
  if ( (unsigned __int8)(CallbackNestingLevel + 1) > 0x1Fu )
  {
    CurrentThread->CallbackNestingLevel = CallbackNestingLevel;
    return 3221225725LL;
  }
  else
  {
    KernelStack = MmCreateKernelStack(
                    0,
                    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[CurrentThread->IdealProcessor] + 192) + 146LL),
                    (__int64)CurrentThread);
    v9 = (char *)KernelStack;
    v25 = KernelStack;
    if ( KernelStack )
    {
      *(_QWORD *)(KernelStack - 48) = KernelStack;
      *(_QWORD *)(KernelStack - 40) = KernelStack - (unsigned int)KeKernelStackSize;
      *(_QWORD *)(KernelStack - 32) = CurrentThread->StackBase;
      *(_QWORD *)(KernelStack - 24) = CurrentThread->StackLimit;
      *(_QWORD *)(KernelStack - 8) = CurrentThread->InitialStack;
      TrapFrame = CurrentThread->TrapFrame;
      Rsp = TrapFrame->Rsp;
      v12 = (Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = v12;
      v14 = v12 + ((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 87;
      if ( v12 > v14 || v14 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v13 = *(_BYTE *)v13;
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v13 != v15 );
      memmove((void *)(v12 + 88), a2, (unsigned int)v5);
      *(_QWORD *)(v12 + 32) = v12 + 88;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x28) = v5;
      *(_DWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x2C) = a1;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x48) = Rsp;
      *(_QWORD *)(((Rsp - (((v5 + 15) & 0xFFFFFFFFFFFFFFF0uLL) + 88)) & 0xFFFFFFFFFFFFFFF0uLL) + 0x30) = TrapFrame->Rip;
      v16 = 0LL;
      v24 = 0;
      if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
      {
        v20 = __readmsr(0x6A0u);
        if ( (v20 & 1) != 0 )
        {
          v16 = __readmsr(0x6A7u);
          v24 = v16;
        }
      }
      BpbRetpolineState = KeGetPcr()->Prcb.BpbRetpolineState;
      TrapFrame->Rsp = v12;
      v18 = KiCallUserMode(
              a4,
              a5,
              (unsigned __int64)(v9 - 48),
              v9,
              BugCheckParameter4,
              v22,
              v23,
              v24,
              v25,
              (int)CurrentThread,
              Rsp,
              (int)TrapFrame,
              v26,
              v27,
              v28,
              v29);
      if ( (BpbRetpolineState & 1) != 0 )
        KeExitRetpoline();
      _mm_lfence();
      if ( *((_DWORD *)CurrentThread->Teb + 1488) )
      {
        TrapFrame->Rsp -= 256LL;
        PsInvokeWin32Callout(7, 0LL, 0, 0LL);
      }
      if ( v16 )
        __writemsr(0x6A7u, v16);
      TrapFrame->Rsp = Rsp;
      --CurrentThread->CallbackNestingLevel;
      MmDeleteKernelStack((unsigned __int64)v9, 0);
      return v18;
    }
    else
    {
      --CurrentThread->CallbackNestingLevel;
      return 3221225495LL;
    }
  }
}
