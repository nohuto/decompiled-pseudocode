/*
 * XREFs of KeRestoreExtendedAndSupervisorState @ 0x140312D98
 * Callers:
 *     KeRestoreExtendedProcessorState @ 0x140312D80 (KeRestoreExtendedProcessorState.c)
 *     PopHandleNextState @ 0x14098F3C0 (PopHandleNextState.c)
 *     PnprQuiesceProcessorDpc @ 0x1409AA6C0 (PnprQuiesceProcessorDpc.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlXRestore @ 0x140312EBC (RtlXRestore.c)
 *     KeFreeXStateContext @ 0x140312F00 (KeFreeXStateContext.c)
 *     RtlXRestoreS @ 0x14037EEF8 (RtlXRestoreS.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

char __fastcall KeRestoreExtendedAndSupervisorState(__int64 a1)
{
  __int64 CurrentIrql; // r9
  struct _KTHREAD *CurrentThread; // r10
  unsigned __int8 v4; // al
  ULONG_PTR v5; // rcx
  ULONG_PTR v6; // r8
  unsigned __int64 v7; // rdx
  ULONG_PTR v8; // r8
  bool v9; // zf
  char result; // al

  CurrentIrql = KeGetCurrentIrql();
  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)CurrentIrql > 2u )
    KeBugCheckEx(0x131u, 1uLL, (unsigned __int8)CurrentIrql, 0LL, 0LL);
  if ( (_BYTE)CurrentIrql || (CurrentThread->ApcState.InProgressFlags & 1) != 0 )
    v4 = CurrentIrql + 1;
  else
    v4 = 0;
  v5 = *(unsigned __int8 *)(a1 + 16);
  if ( (_BYTE)v5 != v4 )
    KeBugCheckEx(0x131u, 4uLL, v5, v4, 0LL);
  v6 = *(_QWORD *)(a1 + 8);
  if ( (struct _KTHREAD *)v6 != CurrentThread )
    KeBugCheckEx(0x131u, 3uLL, v6, (ULONG_PTR)CurrentThread, 0LL);
  if ( !(_BYTE)CurrentIrql )
    --CurrentThread->SpecialApcDisable;
  CurrentThread->WaitBlock[1].SparePtr = *(PVOID *)a1;
  v7 = *(_QWORD *)(a1 + 24);
  v8 = KeFeatureBits & 0x800000;
  if ( (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (_BYTE)CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      v9 = (~(MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF780000005F0]) & v7) == 0;
    else
      v9 = (~MEMORY[0xFFFFF780000003D8] & v7) == 0;
  }
  else
  {
    v9 = (v7 & 0xFFFFFFFFFFFFFFFCuLL) == 0;
  }
  result = !v9;
  if ( !v9 )
    KeBugCheckEx(0x131u, 0LL, v8, (unsigned int)v7, HIDWORD(v7));
  if ( v7 && (KeFeatureBits & 0x800000) != 0 )
  {
    if ( (_BYTE)CurrentIrql == 2 && (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
    {
      result = RtlXRestoreS(*(_QWORD *)(a1 + 40));
      goto LABEL_19;
    }
    result = RtlXRestore(*(_QWORD *)(a1 + 40), v7);
  }
  if ( !(_BYTE)CurrentIrql )
    result = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v7, v8, CurrentIrql);
LABEL_19:
  if ( *(_QWORD *)(a1 + 48) )
    return KeFreeXStateContext(a1 + 24);
  return result;
}
