/*
 * XREFs of KiFloatingErrorFault @ 0x14040E5C0
 * Callers:
 *     KiFloatingErrorFaultShadow @ 0x140A158C0 (KiFloatingErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x1403FE620 (KiSaveDebugRegisterState.c)
 *     KiFloatingErrorFault @ 0x14040E5C0 (KiFloatingErrorFault.c)
 *     KiBugCheckDispatch @ 0x140412840 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x1404128C0 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140413C80 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

void __fastcall __noreturn KiFloatingErrorFault()
{
  char v0; // fps
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int64 v2; // rcx
  unsigned __int16 BpbKernelSpecCtrl; // ax
  unsigned __int16 BpbState; // dx
  ULONG64 v8; // rax
  _QWORD *Object; // rdx
  char v10; // al
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // r8
  char v14; // [rsp+160h] [rbp+E0h]
  void *retaddr; // [rsp+168h] [rbp+E8h]
  char v16; // [rsp+170h] [rbp+F0h]
  __int16 v17; // [rsp+178h] [rbp+F8h]

  if ( (v16 & 1) != 0 )
  {
    if ( (KiKvaShadow & 1) == 0 )
      __asm { swapgs }
    _mm_lfence();
    CurrentThread = KeGetCurrentThread();
    v2 = *(_QWORD *)&CurrentThread->Process[2].ActiveProcessors.Count;
    __writegsqword(0x858u, v2);
    __writegsword(0x852u, KeGetPcr()->Prcb.BpbRetpolineExitSpecCtrl);
    LOWORD(v2) = KeGetPcr()->Prcb.BpbState;
    __writegsword(0x854u, v2);
    BpbKernelSpecCtrl = KeGetPcr()->Prcb.BpbKernelSpecCtrl;
    if ( KeGetPcr()->Prcb.BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
    {
      __writegsword(0x864u, BpbKernelSpecCtrl);
      v2 = 72LL;
      __writemsr(0x48u, BpbKernelSpecCtrl);
    }
    BpbState = KeGetPcr()->Prcb.BpbState;
    if ( (BpbState & 8) != 0 )
    {
      v2 = 73LL;
      __writemsr(0x49u, 1uLL);
      BpbState = KeGetPcr()->Prcb.BpbState;
    }
    if ( (BpbState & 2) != 0 )
      JUMPOUT(0x14040E7F5LL);
    if ( (BpbState & 0x200) != 0 )
      KiFlushBhbDuringTrapEntryOrExit(v2);
    _mm_lfence();
    __writegsbyte(0x856u, 0);
    if ( (CurrentThread->Header.Reserved1 & 0x80u) != 0 )
    {
      v2 = 3221225730LL;
      v8 = __readmsr(0xC0000102);
      if ( v8 >= MmUserProbeAddress )
        v8 = MmUserProbeAddress;
      if ( CurrentThread->Teb != (void *)v8 )
      {
        Object = CurrentThread->WaitBlock[3].Object;
        CurrentThread->MiscFlags |= 0x100u;
        --CurrentThread->SpecialApcDisable;
        Object[16] = v8;
      }
    }
    if ( (CurrentThread->Header.Reserved1 & 3) != 0 )
      KiSaveDebugRegisterState(v2);
  }
  else
  {
    _mm_lfence();
    if ( (KeGetPcr()->Prcb.BpbState & 1) != 0 )
      __writemsr(0x48u, KeGetPcr()->Prcb.BpbCurrentSpecCtrl);
    else
      _mm_lfence();
  }
  _mm_getcsr();
  _mm_setcsr(KeGetPcr()->Prcb.MxCsr);
  if ( (_BYTE)KeSmapEnabled && (v16 & 1) != 0 )
    __asm { stac }
  if ( (v17 & 0x200) != 0 )
    _enable();
  if ( (v16 & 1) != 0 )
  {
    v10 = ~(v14 & 0x3F) & v0;
    v11 = 3221225616LL;
    if ( (v10 & 1) != 0 )
    {
      if ( (v10 & 0x40) != 0 )
        v11 = 3221225618LL;
LABEL_35:
      KiExceptionDispatch(v11, 1LL, retaddr, 0LL);
      goto LABEL_36;
    }
    v11 = 3221225614LL;
    if ( (v10 & 4) != 0 )
      goto LABEL_35;
    v11 = 3221225616LL;
    if ( (v10 & 2) != 0 )
      goto LABEL_35;
    v11 = 3221225617LL;
    if ( (v10 & 8) != 0 )
      goto LABEL_35;
    v11 = 3221225619LL;
    if ( (v10 & 0x10) != 0 )
      goto LABEL_35;
    v11 = 3221225615LL;
    if ( (v10 & 0x20) != 0 )
      goto LABEL_35;
  }
LABEL_36:
  v12 = __readcr4();
  v13 = __readcr0();
  KiBugCheckDispatch(127LL, 16LL, v13, v12);
}
