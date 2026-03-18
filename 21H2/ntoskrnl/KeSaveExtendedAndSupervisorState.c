/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x1402421DC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x140242190 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x140A4B5A0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x140A687F0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlXSaveS @ 0x14024215C (RtlXSaveS.c)
 *     RtlXSave @ 0x1402423D0 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x140242424 (KeAllocateXStateContext.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, __int64 *a2)
{
  unsigned __int8 CurrentIrql; // r14
  struct _KTHREAD *CurrentThread; // rbp
  bool v5; // zf
  unsigned __int8 v6; // r13
  _BYTE *SparePtr; // rax
  ULONG_PTR v8; // r15
  unsigned int *v9; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v12; // eax

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(KeEnabledSupervisorXStateFeatures | MEMORY[0xFFFFF780000003D8]) & BugCheckParameter3) != 0 )
LABEL_35:
        KeBugCheckEx(
          0x131u,
          0LL,
          KeFeatureBits & 0x800000,
          (unsigned int)BugCheckParameter3,
          HIDWORD(BugCheckParameter3));
LABEL_28:
      v6 = CurrentIrql + 1;
      goto LABEL_9;
    }
    v5 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v5 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v5 )
    goto LABEL_35;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_28;
  v6 = 0;
LABEL_9:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v8 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr && SparePtr[16] > v6 )
    KeBugCheckEx(0x131u, 2uLL, (unsigned __int8)SparePtr[16], v6, 0LL);
  if ( v8 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_12;
    if ( !SparePtr || SparePtr[16] != v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
      v12 = KeXStateLength;
      a2[6] = 0LL;
      *((_DWORD *)a2 + 8) = v12;
      a2[5] = (__int64)CurrentPrcb->ExtendedState;
      goto LABEL_14;
    }
    v9 = (unsigned int *)0xFFFFF78000000600LL;
    if ( (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
LABEL_12:
      v9 = (unsigned int *)0xFFFFF780000003E8LL;
    result = KeAllocateXStateContext(a2 + 3, a2, *v9);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
  }
LABEL_14:
  a2[1] = (__int64)CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  a2[3] = v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = (__int64)CurrentThread->WaitBlock[1].SparePtr;
  if ( !v8 || (KeFeatureBits & 0x800000) == 0 )
    goto LABEL_20;
  if ( CurrentIrql != 2 || (MEMORY[0xFFFFF780000003EC] & 2) == 0 )
  {
    RtlXSave(a2[5], v8);
LABEL_20:
    CurrentThread->WaitBlock[1].SparePtr = a2;
    if ( !CurrentIrql )
    {
      v5 = CurrentThread->SpecialApcDisable++ == -1;
      if ( v5
        && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      {
        KiCheckForKernelApcDelivery();
      }
    }
    return 0LL;
  }
  *(_QWORD *)(a2[5] + 520) = v8;
  RtlXSaveS(a2[5], v8);
  CurrentThread->WaitBlock[1].SparePtr = a2;
  return 0LL;
}
