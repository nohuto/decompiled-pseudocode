/*
 * XREFs of WbSetTrapFrame @ 0x14065F53C
 * Callers:
 *     sub_14065F224 @ 0x14065F224 (sub_14065F224.c)
 *     WbHeapExecuteCall @ 0x14065F61C (WbHeapExecuteCall.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetContextThreadInternal @ 0x1406F2448 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406F2D50 (PspSetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x14095F1EC (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  int ContextThreadInternal; // ebx
  __int64 v8; // r8
  __int64 v9; // r9
  __int16 v11; // ax

  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v4 && ((v11 = *(_WORD *)(v4 + 8), v11 == 332) || v11 == 452) )
  {
    return (unsigned int)WbSetWowTrapFrame(a1);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    *(_DWORD *)(a1 + 96) = 1048577;
    ContextThreadInternal = PspGetContextThreadInternal((unsigned int)KeGetCurrentThread(), (int)a1 + 48, 0, 1, 1);
    if ( ContextThreadInternal >= 0 )
    {
      *(_QWORD *)(a1 + 296) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 200) = *(_QWORD *)a2;
      *(_DWORD *)(a1 + 116) = *(_DWORD *)(a2 + 16);
      ContextThreadInternal = PspSetContextThreadInternal(KeGetCurrentThread(), 3);
    }
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v6, v8, v9);
  }
  return (unsigned int)ContextThreadInternal;
}
