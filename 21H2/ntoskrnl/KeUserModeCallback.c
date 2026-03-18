/*
 * XREFs of KeUserModeCallback @ 0x1407A3EC0
 * Callers:
 *     <none>
 * Callees:
 *     KeExitRetpoline @ 0x14024B6F8 (KeExitRetpoline.c)
 *     MmSessionGetWin32Callouts @ 0x140281830 (MmSessionGetWin32Callouts.c)
 *     MmDeleteKernelStackEx @ 0x1402C1900 (MmDeleteKernelStackEx.c)
 *     MmCreateKernelStack @ 0x1402F4B70 (MmCreateKernelStack.c)
 *     KeGetProcessorNodeNumberByIndex @ 0x1402F509C (KeGetProcessorNodeNumberByIndex.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KiCallUserMode @ 0x140423B80 (KiCallUserMode.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     MmCreateKernelShadowStack @ 0x1405A5990 (MmCreateKernelShadowStack.c)
 *     MmDeleteKernelShadowStack @ 0x1405A5DF0 (MmDeleteKernelShadowStack.c)
 *     ExCallCallBack @ 0x1406F8074 (ExCallCallBack.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall KeUserModeCallback(int a1, const void *a2, unsigned int a3, int a4, __int64 a5)
{
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int ProcessorNodeNumberByIndex; // edi
  __int64 KernelStack; // rax
  _KERNEL_SHADOW_STACK_LIMIT v10; // rax
  _KTRAP_FRAME *TrapFrame; // r12
  SIZE_T v12; // rdx
  unsigned __int64 v13; // r13
  unsigned __int8 BpbRetpolineState; // di
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r13d
  unsigned __int64 v19; // rdi
  union _RTL_RUN_ONCE *Win32Callouts; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // [rsp+38h] [rbp-80h] BYREF
  unsigned __int64 v24; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 Rsp; // [rsp+48h] [rbp-70h]
  unsigned __int64 v26; // [rsp+50h] [rbp-68h]
  __int64 v27; // [rsp+58h] [rbp-60h]
  struct _KTHREAD *v28; // [rsp+60h] [rbp-58h]
  unsigned __int64 v29; // [rsp+68h] [rbp-50h]
  _KTRAP_FRAME *v30; // [rsp+70h] [rbp-48h]
  ULONG_PTR retaddr; // [rsp+B8h] [rbp+0h]

  v5 = 0LL;
  v6 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v28 = CurrentThread;
  if ( (CurrentThread->MiscFlags & 0x1000) != 0 )
    KeBugCheckEx(0x107u, (ULONG_PTR)CurrentThread, 0LL, 0LL, 0LL);
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x4Au, retaddr, KeGetCurrentIrql(), 0LL, 0LL);
  if ( CurrentThread->ApcStateIndex || CurrentThread->WaitBlock[3].SpareLong )
    KeBugCheckEx(1u, retaddr, CurrentThread->ApcStateIndex, CurrentThread->CombinedApcDisable, 0LL);
  if ( ++CurrentThread->CallbackNestingLevel > 0x1Fu )
  {
    v18 = -1073741571;
    goto LABEL_17;
  }
  ProcessorNodeNumberByIndex = (unsigned __int16)KeGetProcessorNodeNumberByIndex(CurrentThread->IdealProcessor);
  KernelStack = MmCreateKernelStack(0x10u, ProcessorNodeNumberByIndex, (__int64)CurrentThread);
  v6 = KernelStack;
  v27 = KernelStack;
  if ( !KernelStack )
  {
    v18 = -1073741801;
    goto LABEL_17;
  }
  *(_QWORD *)(KernelStack - 80) = KernelStack;
  *(_QWORD *)(KernelStack - 72) = KernelStack - (unsigned int)KeKernelStackSize;
  *(_QWORD *)(KernelStack - 64) = CurrentThread->StackBase;
  *(_QWORD *)(KernelStack - 56) = CurrentThread->StackLimit;
  *(_QWORD *)(KernelStack - 40) = CurrentThread->InitialStack;
  if ( (_BYTE)KiKernelCetEnabled )
  {
    v18 = MmCreateKernelShadowStack((unsigned __int64)CurrentThread, 2, 16LL, ProcessorNodeNumberByIndex, &v24, &v23);
    if ( v18 < 0 )
      goto LABEL_17;
    *(_QWORD *)(v6 - 8) = CurrentThread->KernelShadowStackInitial;
    *(_QWORD *)(v6 - 32) = CurrentThread->KernelShadowStackBase;
    v10.AllFields = (unsigned __int64)CurrentThread->KernelShadowStackLimit;
  }
  else
  {
    *(_QWORD *)(KernelStack - 8) = 0LL;
    *(_QWORD *)(KernelStack - 32) = 0LL;
    *(_QWORD *)(KernelStack - 16) = 0LL;
    v10.AllFields = 0LL;
  }
  *(_KERNEL_SHADOW_STACK_LIMIT *)(v6 - 24) = v10;
  TrapFrame = CurrentThread->TrapFrame;
  v30 = TrapFrame;
  Rsp = TrapFrame->Rsp;
  v29 = Rsp;
  v12 = ((a3 + 15LL) & 0xFFFFFFFFFFFFFFF0uLL) + 88;
  v13 = (Rsp - v12) & 0xFFFFFFFFFFFFFFF0uLL;
  ProbeForWrite((volatile void *)v13, v12, 0x10u);
  memmove((void *)(v13 + 88), a2, a3);
  *(_QWORD *)(v13 + 32) = v13 + 88;
  *(_DWORD *)(v13 + 40) = a3;
  *(_DWORD *)(v13 + 44) = a1;
  *(_QWORD *)(v13 + 72) = Rsp;
  *(_QWORD *)(v13 + 48) = TrapFrame->Rip;
  v26 = 0LL;
  if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
  {
    v22 = __readmsr(0x6A0u);
    if ( (v22 & 1) != 0 )
    {
      v5 = __readmsr(0x6A7u);
      v26 = v5;
    }
  }
  BpbRetpolineState = KeGetPcr()->Prcb.BpbRetpolineState;
  TrapFrame->Rsp = v13;
  v18 = KiCallUserMode(a4, a5, (int)v6 - 80, v6, v24, v23);
  if ( (BpbRetpolineState & 1) != 0 )
    KeExitRetpoline(v16, v15, v17);
  _mm_lfence();
  v19 = Rsp;
  if ( *((_DWORD *)CurrentThread->Teb + 1488) )
  {
    TrapFrame->Rsp -= 256LL;
    Win32Callouts = MmSessionGetWin32Callouts();
    ExCallCallBack((signed __int64 *)Win32Callouts, 7LL, 0LL);
  }
  if ( v5 )
    __writemsr(0x6A7u, v5);
  TrapFrame->Rsp = v19;
LABEL_17:
  --CurrentThread->CallbackNestingLevel;
  if ( v6 )
    MmDeleteKernelStackEx(v6, 4u, (__int64)CurrentThread);
  if ( v23 )
    MmDeleteKernelShadowStack(v24, 2, 4);
  return (unsigned int)v18;
}
