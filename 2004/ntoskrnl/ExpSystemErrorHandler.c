/*
 * XREFs of ExpSystemErrorHandler @ 0x140400C70
 * Callers:
 *     ExpRaiseHardError @ 0x140952DEC (ExpRaiseHardError.c)
 * Callees:
 *     KiSaveProcessorControlState @ 0x1403F7420 (KiSaveProcessorControlState.c)
 *     RtlCaptureContext @ 0x1403FF110 (RtlCaptureContext.c)
 *     ExpSystemErrorHandler2 @ 0x1409B0190 (ExpSystemErrorHandler2.c)
 */

__int64 __fastcall ExpSystemErrorHandler(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v5; // rax
  __int64 CurrentIrql; // rax
  int v7; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  _CONTEXT *Context; // r10
  __int64 v11[2]; // [rsp+28h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v11[0] = v5;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  _InterlockedExchange64(v11, CurrentIrql);
  RtlCaptureContext(KeGetCurrentPrcb()->Context);
  KiSaveProcessorControlState((__int64)&KeGetCurrentPrcb()->ProcessorState, v7);
  CurrentPrcb = KeGetCurrentPrcb();
  CurrentPrcb->ProcessorState.SpecialRegisters.Cr8 = v11[0];
  Context = CurrentPrcb->Context;
  Context->Rcx = a1;
  *(_QWORD *)&Context->EFlags = v11[1];
  Context->Rsp = (unsigned __int64)&retaddr;
  Context->Rip = (unsigned __int64)ExpSystemErrorHandler;
  __writecr8(v11[0]);
  return ExpSystemErrorHandler2(a1, a5);
}
