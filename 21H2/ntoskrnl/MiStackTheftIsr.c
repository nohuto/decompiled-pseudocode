/*
 * XREFs of MiStackTheftIsr @ 0x1405366A0
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     KeFlushSingleCurrentTb @ 0x14038A028 (KeFlushSingleCurrentTb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCopyKstack @ 0x140535E90 (MiCopyKstack.c)
 *     MiSwitchKstackPages @ 0x1405368AC (MiSwitchKstackPages.c)
 */

ULONG_PTR __fastcall MiStackTheftIsr(ULONG_PTR Argument, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int64 v4; // r15
  unsigned __int8 CurrentIrql; // r14
  signed __int32 v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  char v14; // al
  signed __int32 v15; // eax
  unsigned int v16; // ebx
  signed __int32 v17; // eax
  unsigned __int8 v18; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v20; // r8
  int v21; // eax
  bool v22; // zf
  ULONG_PTR result; // rax
  int v24; // [rsp+60h] [rbp+8h] BYREF
  int v25; // [rsp+68h] [rbp+10h] BYREF
  int v26; // [rsp+70h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(Argument + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a2 = (-1LL << (CurrentIrql + 1)) & 0xFFFC;
    a3 = (unsigned int)a2 | SchedulerAssist[5];
    SchedulerAssist[5] = a3;
  }
  v25 = 0;
  v7 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v8 )
      KeYieldProcessorEx(&v25, a2, a3, (__int64)SchedulerAssist);
    v26 = 0;
    v17 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
    v16 = ~v17 & 0x80000000;
    if ( (v17 & 0x7FFFFFFF) == 0 )
      goto LABEL_7;
    while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v16 )
      KeYieldProcessorEx(&v26, a2, a3, (__int64)SchedulerAssist);
  }
  else
  {
    *(_DWORD *)(Argument + 72) = v8 | *(_DWORD *)(Argument + 76);
    v9 = 48LL * *(_QWORD *)Argument - 0x58000000000LL;
    v10 = 48LL * *(_QWORD *)(Argument + 8) - 0x58000000000LL;
    MiCopyKstack(v10, v9, *(_QWORD *)(Argument + 16));
    KeFlushSingleCurrentTb(v4, 0);
    MiSwitchKstackPages(v10, v9);
    *(_QWORD *)(v9 + 40) &= ~0x8000000000000000uLL;
    *(_BYTE *)(v9 + 34) &= 0xC7u;
    v14 = *(_BYTE *)(v9 + 35) & 0xDF;
    v24 = 0;
    *(_BYTE *)(v9 + 35) = v14;
    v15 = _InterlockedDecrement((volatile signed __int32 *)(Argument + 72));
    v16 = ~v15 & 0x80000000;
    if ( (v15 & 0x7FFFFFFF) == 0 )
    {
LABEL_7:
      *(_DWORD *)(Argument + 72) = v16 | *(_DWORD *)(Argument + 76);
      goto LABEL_17;
    }
    while ( (*(_DWORD *)(Argument + 72) & 0x80000000) != v16 )
      KeYieldProcessorEx(&v24, v11, v12, v13);
  }
LABEL_17:
  KeFlushSingleCurrentTb(v4, 0);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = CurrentPrcb->SchedulerAssist;
        v21 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v21 & v20[5]) == 0;
        v20[5] &= v21;
        if ( v22 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
