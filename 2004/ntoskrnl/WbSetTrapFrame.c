/*
 * XREFs of WbSetTrapFrame @ 0x140619E1C
 * Callers:
 *     sub_140619B04 @ 0x140619B04 (sub_140619B04.c)
 *     WbHeapExecuteCall @ 0x140619EFC (WbHeapExecuteCall.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140207EC0 (KiLeaveGuardedRegionUnsafe.c)
 *     PspGetContextThreadInternal @ 0x1406AD5A8 (PspGetContextThreadInternal.c)
 *     PspSetContextThreadInternal @ 0x1406ADEB0 (PspSetContextThreadInternal.c)
 *     WbSetWowTrapFrame @ 0x14096058C (WbSetWowTrapFrame.c)
 */

__int64 __fastcall WbSetTrapFrame(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  struct _KTHREAD *CurrentThread; // rax
  int ContextThreadInternal; // ebx
  __int16 v8; // ax

  v4 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
  if ( v4 && ((v8 = *(_WORD *)(v4 + 8), v8 == 332) || v8 == 452) )
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
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return (unsigned int)ContextThreadInternal;
}
