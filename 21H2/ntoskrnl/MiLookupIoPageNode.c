/*
 * XREFs of MiLookupIoPageNode @ 0x1402137E4
 * Callers:
 *     MiInsertPhysicalPteMapping @ 0x140213558 (MiInsertPhysicalPteMapping.c)
 *     MmGetCacheAttributeEx @ 0x140585C20 (MmGetCacheAttributeEx.c)
 *     MmProtectMdlSystemAddress @ 0x140585D50 (MmProtectMdlSystemAddress.c)
 * Callees:
 *     MiUnlockIoPfnTree @ 0x140216544 (MiUnlockIoPfnTree.c)
 *     MiLockIoPfnTree @ 0x1402165BC (MiLockIoPfnTree.c)
 *     MiIoSpaceIsConstant @ 0x1402166A4 (MiIoSpaceIsConstant.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiLookupIoPageNode(ULONG_PTR BugCheckParameter2, int a2)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 IsConstant; // rax
  unsigned __int8 v6; // r10
  __int64 v7; // r11
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  ULONG_PTR v10; // r9
  _DWORD *SchedulerAssist; // r9
  unsigned int v13; // edi
  unsigned __int8 v14; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v16; // r9
  int v17; // edx
  bool v18; // zf
  unsigned __int16 v19; // [rsp+60h] [rbp+18h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  IsConstant = MiIoSpaceIsConstant(BugCheckParameter2, 1LL);
  if ( IsConstant )
  {
    v13 = *(_DWORD *)(IsConstant + 40);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v14 = KeGetCurrentIrql();
        if ( v14 <= v6 && CurrentIrql <= v6 && v14 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v16 = CurrentPrcb->SchedulerAssist;
          v17 = ~(unsigned __int16)(v7 << (CurrentIrql + 1));
          v18 = (v17 & v16[5]) == 0;
          v16[5] &= v17;
          if ( v18 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v13;
  }
  else
  {
    MiLockIoPfnTree(5LL);
    v9 = (_QWORD *)*((_QWORD *)&xmmword_140C53100 + 1);
    while ( v9 )
    {
      v10 = v9[3];
      if ( BugCheckParameter2 < v10 )
      {
        v9 = (_QWORD *)*v9;
      }
      else
      {
        if ( BugCheckParameter2 < v10 + 512 )
        {
          LOBYTE(v8) = CurrentIrql;
          v19 = *((_WORD *)v9 + (BugCheckParameter2 & ((1LL << ((unsigned __int8)dword_140C50720 - 12)) - 1)) - v10 + 40);
          MiUnlockIoPfnTree(v8, 1LL);
          return v19 >> 14;
        }
        v9 = (_QWORD *)v9[1];
      }
    }
    if ( a2 )
      KeBugCheckEx(0x1Au, 0x61949uLL, BugCheckParameter2, 1uLL, 0LL);
    return 3LL;
  }
}
