/*
 * XREFs of KeSaveExtendedAndSupervisorState @ 0x1403111AC
 * Callers:
 *     KeSaveExtendedProcessorState @ 0x140311160 (KeSaveExtendedProcessorState.c)
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXSaveS @ 0x14031137C (RtlXSaveS.c)
 *     RtlXSave @ 0x1403113B0 (RtlXSave.c)
 *     KeAllocateXStateContext @ 0x140311404 (KeAllocateXStateContext.c)
 *     RtlXRestore @ 0x140312EBC (RtlXRestore.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 __fastcall KeSaveExtendedAndSupervisorState(ULONG_PTR BugCheckParameter3, PVOID *a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  unsigned __int8 CurrentIrql; // bp
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v8; // r8
  bool v9; // zf
  unsigned __int8 v10; // r12
  _BYTE *SparePtr; // rax
  ULONG_PTR v12; // r15
  unsigned int *v13; // rax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rbx
  int v16; // eax

  v5 = BugCheckParameter3;
  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, CurrentIrql, 0LL, 0LL);
  v8 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      if ( (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & BugCheckParameter3) != 0 )
LABEL_33:
        KeBugCheckEx(0x131u, 0LL, v8, (unsigned int)BugCheckParameter3, HIDWORD(BugCheckParameter3));
LABEL_26:
      v10 = CurrentIrql + 1;
      goto LABEL_9;
    }
    v9 = (~MEMORY[0xFFFFF780000003D8] & BugCheckParameter3) == 0;
  }
  else
  {
    v9 = (BugCheckParameter3 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  if ( !v9 )
    goto LABEL_33;
  if ( CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    goto LABEL_26;
  v10 = 0;
LABEL_9:
  SparePtr = CurrentThread->WaitBlock[1].SparePtr;
  v12 = (BugCheckParameter3 | MEMORY[0xFFFFF780000003D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( SparePtr && SparePtr[16] > v10 )
    KeBugCheckEx(0x131u, 2uLL, (unsigned __int8)SparePtr[16], v10, 0LL);
  if ( v12 )
  {
    if ( CurrentIrql < 2u )
      goto LABEL_12;
    if ( SparePtr && SparePtr[16] == v10 )
    {
      v13 = (unsigned int *)0xFFFFF78000000600LL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
LABEL_13:
        result = KeAllocateXStateContext(a2 + 3, BugCheckParameter3, *v13);
        if ( (int)result < 0 )
          return result;
        goto LABEL_14;
      }
LABEL_12:
      v13 = (unsigned int *)0xFFFFF780000003E8LL;
      goto LABEL_13;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    memset(&CurrentPrcb->ExtendedState->Header, 0, sizeof(CurrentPrcb->ExtendedState->Header));
    v16 = KeXStateLength;
    a2[6] = 0LL;
    *((_DWORD *)a2 + 8) = v16;
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
  *((_BYTE *)a2 + 16) = v10;
  a2[3] = (PVOID)v12;
  if ( !CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  *a2 = CurrentThread->WaitBlock[1].SparePtr;
  if ( v12 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      RtlXRestore(a2[5], 0LL);
      *((_QWORD *)a2[5] + 65) = v12;
      RtlXSaveS(a2[5], v12);
    }
    else
    {
      RtlXSave(a2[5], v12);
    }
  }
  CurrentThread->WaitBlock[1].SparePtr = a2;
  if ( !CurrentIrql )
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v5, v8, a4);
  return 0LL;
}
