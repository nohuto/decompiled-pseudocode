/*
 * XREFs of MiStartDpcGang @ 0x1405C0634
 * Callers:
 *     MiInitializeDynamicPfns @ 0x140582D7C (MiInitializeDynamicPfns.c)
 *     MiHugePageOperation @ 0x140586E78 (MiHugePageOperation.c)
 *     MiAllocateFastLargePagesForMdl @ 0x140589518 (MiAllocateFastLargePagesForMdl.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140217420 (KeGenericCallDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     MiDoGangAssignment @ 0x1405C00C0 (MiDoGangAssignment.c)
 *     MiGetGangAssignment @ 0x1405C0478 (MiGetGangAssignment.c)
 */

__int64 __fastcall MiStartDpcGang(__int64 a1)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  BOOL v4; // ebp
  unsigned __int64 v5; // r10
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  __int64 v8; // r9
  __int64 v9; // r11
  __int16 v10; // cx
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v15; // r9
  int v16; // eax
  bool v17; // zf
  __int128 v18; // [rsp+20h] [rbp-38h]
  ULONG_PTR *v19; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(unsigned int *)(a1 + 188);
  v19 = 0LL;
  result = *(unsigned int *)(a1 + 184);
  *(_DWORD *)(a1 + 196) = 0;
  v4 = 1;
  *(_DWORD *)(a1 + 176) = 0;
  if ( (result & 1) != 0 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)a1;
    v7 = v5 / v2;
    v8 = 0LL;
    v9 = (unsigned int)v2;
    do
    {
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 16)) = v6;
      v6 += v7;
      v8 += 16LL;
      *(_QWORD *)(v8 + *(_QWORD *)(a1 + 16) - 8) = v7;
      --v9;
    }
    while ( v9 );
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL * (unsigned int)v2 - 8) += v5 - v7 * (unsigned int)v2;
  }
  else
  {
    v10 = *(_WORD *)(a1 + 154);
    if ( !v10 )
      return result;
    if ( v10 == 1 )
      v4 = (result & 2) != 0;
  }
  while ( 1 )
  {
    *(_DWORD *)(a1 + 176) = 0;
    v18 = *(_OWORD *)(a1 + 200);
    if ( v4 )
    {
      result = KeGenericCallDpc((__int64)MiDpcGangTarget, a1);
    }
    else
    {
      MiGetGangAssignment(a1, &v19);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
      {
        SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
        SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
      }
      MiDoGangAssignment(a1, &v19);
      if ( KiIrqlFlags )
      {
        if ( (KiIrqlFlags & 1) != 0 )
        {
          v13 = KeGetCurrentIrql();
          if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v15 = CurrentPrcb->SchedulerAssist;
            v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v17 = (v16 & v15[5]) == 0;
            v15[5] &= v16;
            if ( v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
      }
      result = CurrentIrql;
      __writecr8(CurrentIrql);
    }
    *(_OWORD *)(a1 + 200) = v18;
    if ( !*(_DWORD *)(a1 + 196) )
      break;
    *(_DWORD *)(a1 + 196) = 0;
  }
  return result;
}
