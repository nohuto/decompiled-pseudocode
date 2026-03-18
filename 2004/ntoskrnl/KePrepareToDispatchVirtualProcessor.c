/*
 * XREFs of KePrepareToDispatchVirtualProcessor @ 0x140516000
 * Callers:
 *     <none>
 * Callees:
 *     KiUpdateStibpPairing @ 0x140301350 (KiUpdateStibpPairing.c)
 */

char __fastcall KePrepareToDispatchVirtualProcessor(char a1, _BYTE *a2, _BYTE *a3, _BYTE *a4, _BYTE *a5, _QWORD *a6)
{
  _UNKNOWN **v6; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v8; // xmm0_4
  unsigned __int64 v10; // r9
  unsigned __int8 BpbRetpolineExitSpecCtrl; // dl
  unsigned __int8 BpbKernelSpecCtrl; // cl
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v6 = &retaddr;
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = KiSpeculationFeatures;
  *a2 = 0;
  *a3 = 0;
  *a4 = 0;
  *a5 = 0;
  *a6 = 0LL;
  _disable();
  if ( a1 )
  {
    if ( (v8 & 0x100000) == 0 )
    {
      *a3 = 1;
      return (char)v6;
    }
    v10 = *(_QWORD *)&CurrentPrcb->CurrentThread->Process[2].ActiveProcessors.Count;
    if ( !v10 )
    {
      *a3 = 1;
LABEL_11:
      if ( (CurrentPrcb->PairRegister & 2) != 0 )
      {
        KiUpdateStibpPairing(0LL);
      }
      else
      {
        if ( (CurrentPrcb->BpbState & 4) != 0 )
        {
          __writemsr(0x49u, 1uLL);
          CurrentPrcb->BpbState &= ~4u;
          *a2 = 1;
        }
        CurrentPrcb->TrappedSecurityDomain = v10;
      }
      BpbRetpolineExitSpecCtrl = CurrentPrcb->BpbRetpolineExitSpecCtrl;
      LOBYTE(v6) = CurrentPrcb->BpbState;
      BpbKernelSpecCtrl = CurrentPrcb->BpbKernelSpecCtrl;
      CurrentPrcb->BpbTrappedRetpolineExitSpecCtrl = BpbRetpolineExitSpecCtrl;
      CurrentPrcb->BpbTrappedBpbState = (unsigned __int8)v6;
      if ( (v8 & 0x2000000) != 0 && (CurrentPrcb->BpbRetpolineState & 1) != 0 )
        BpbKernelSpecCtrl = BpbRetpolineExitSpecCtrl;
      if ( CurrentPrcb->BpbCurrentSpecCtrl != BpbKernelSpecCtrl )
      {
        LOBYTE(v6) = BpbKernelSpecCtrl;
        *a6 = BpbKernelSpecCtrl;
        *a5 = 1;
        CurrentPrcb->BpbCurrentSpecCtrl = BpbKernelSpecCtrl;
      }
      return (char)v6;
    }
    LOBYTE(v6) = CurrentPrcb->BpbState;
    if ( ((unsigned __int8)v6 & 8) == 0 )
    {
      LOBYTE(v6) = CurrentPrcb->BpbRetpolineState & ((unsigned __int8)v6 >> 4);
      if ( ((unsigned __int8)v6 & 1) == 0 && ((v8 & 0x10) == 0 || (v8 & 0x1000) != 0) )
      {
        *a4 = 1;
        goto LABEL_11;
      }
    }
  }
  if ( (CurrentPrcb->BpbState & 4) != 0 )
  {
    LOBYTE(v6) = 1;
    __writemsr(0x49u, 1uLL);
    CurrentPrcb->BpbState &= ~4u;
    *a2 = 1;
  }
  return (char)v6;
}
