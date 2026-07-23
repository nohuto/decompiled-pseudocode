/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x14023F3FC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x14023F3B0 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x1409940D0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AF2C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     RtlXSaveS @ 0x14023F5CC (RtlXSaveS.c)
 *     RtlXSave @ 0x14023F600 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x14023F654 (KeAllocateXStateContext.c)
 *     RtlXRestore @ 0x1402412DC (RtlXRestore.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // r14
  bool v5; // zf
  unsigned __int8 v6; // r12
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
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) != 0 )
LABEL_33:
        KeBugCheckEx(
          0x131u,
          0LL,
          KeFeatureBits & 0x800000,
          (unsigned int)BugCheckParameter3,
          HIDWORD(BugCheckParameter3));
LABEL_26:
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
    goto LABEL_33;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_26;
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
    if ( SparePtr && SparePtr[16] == v6 )
    {
      v9 = (unsigned int *)0xFFFFF78000000600LL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
LABEL_13:
        result = KeAllocateXStateContext(a2 + 3, BugCheckParameter3, *v9);
        if ( (int)result < 0 )
          return result;
        goto LABEL_14;
      }
LABEL_12:
      v9 = (unsigned int *)0xFFFFF780000003E8LL;
      goto LABEL_13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v12 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v12;
    a2[5] = CurrentPrcb->ExtendedState;
  }
  else
  {
    *((_DWORD *)a2 + 8) = 0;
    a2[6] = 0LL;
    a2[5] = 0LL;
  }
LABEL_14:
  a2[1] = CurrentThread;
  *((_BYTE *)a2 + 16) = v6;
  a2[3] = (PVOID)v8;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v8 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore(a2[5], 0LL);
      *((_QWORD *)a2[5] + 65) = v8;
      RtlXSaveS(a2[5], v8);
    }
    else
    {
      RtlXSave(a2[5], v8);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
    KiLeaveGuardedRegionUnsafe(CurrentThread);
  return 0LL;
}
