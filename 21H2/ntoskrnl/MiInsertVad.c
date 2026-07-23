/*
 * XREFs of MiInsertVad @ 0x140321080
 * Callers:
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140218B54 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiDeletePartialVad @ 0x14030862C (MiDeletePartialVad.c)
 *     MiGetWsAndInsertVad @ 0x140320DD0 (MiGetWsAndInsertVad.c)
 *     MiInsertPrivateVad @ 0x140321AD4 (MiInsertPrivateVad.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C6F68 (MiInsertViewOfPhysicalSection.c)
 *     MiReInsertPlaceholderVad @ 0x14055557C (MiReInsertPlaceholderVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x1402C1520 (MiVadMapsLargeImage.c)
 *     ExpAcquireSpinLockExclusive @ 0x1402C1A70 (ExpAcquireSpinLockExclusive.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B5DD8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x1408D583C (MiAweViewInserter.c)
 */

void __fastcall MiInsertVad(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 **v4; // rbp
  char v5; // r15
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r14
  LONG *v10; // rbp
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // r8
  __int64 *v16; // rax
  unsigned int v17; // ecx
  int v18; // ecx

  v4 = 0LL;
  v5 = a3;
  v8 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v9 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (a3 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 1848) & 7) == 2 )
      v10 = &dword_140C4F7C0;
    else
      v10 = (LONG *)(a2 + 1856);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, CurrentIrql);
    else
      ExpAcquireSpinLockExclusive(v10, CurrentIrql, a3, (__int64)SchedulerAssist);
    v10[1] = 0;
    v4 = 0LL;
  }
  else
  {
    CurrentIrql = 17;
  }
  v12 = *(_QWORD *)(a2 + 1496);
  ++*(_QWORD *)(a2 + 2024);
  *(_QWORD *)(a2 + 2016) = a1;
  if ( v8 <= v12 >> 12 && (v5 & 2) == 0 )
  {
    *(_QWORD *)(a2 + 1176) += ((v8 - v9) << 12) + 4096;
    v13 = *(_QWORD *)(a2 + 1176);
    if ( *(_QWORD *)(a2 + 1168) < v13 )
      *(_QWORD *)(a2 + 1168) = v13;
  }
  v14 = *(__int64 **)(a2 + 2008);
  v15 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v16) = 0;
  if ( v14 )
  {
    while ( 1 )
    {
      if ( v15 <= (*((unsigned int *)v14 + 7) | ((unsigned __int64)*((unsigned __int8 *)v14 + 33) << 32))
        && v15 < (*((unsigned int *)v14 + 6) | ((unsigned __int64)*((unsigned __int8 *)v14 + 32) << 32)) )
      {
        v16 = (__int64 *)*v14;
        if ( !*v14 )
          break;
      }
      else
      {
        v16 = (__int64 *)v14[1];
        if ( !v16 )
        {
          LOBYTE(v16) = 1;
          break;
        }
      }
      v14 = v16;
    }
  }
  RtlAvlInsertNodeEx(a2 + 2008, v14, (unsigned __int8)v16, a1);
  v17 = *(_DWORD *)(a1 + 48);
  if ( (v17 & 0x100000) == 0 || (v17 & 0x400000) == 0 && (v17 & 0xC0000) < 0x80000 )
  {
    if ( !MiVadMapsLargeImage(a1) )
      goto LABEL_21;
    v17 = *(_DWORD *)(a1 + 48);
  }
  if ( (unsigned __int64)MiVadPageSizes[((unsigned __int64)v17 >> 18) & 3] >= 0x200 )
    ++*(_DWORD *)(a2 + 2140);
LABEL_21:
  v18 = *(_DWORD *)(a1 + 48);
  if ( (v18 & 0x70) == 0x10 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 304LL);
    v18 = *(_DWORD *)(a1 + 48);
  }
  if ( (v18 & 0x70) == 0x30 && (v18 & 0x3100000) != 0x2100000 )
    v4 = MiLocateLockedVadEvent(a1, 256) + 1;
  if ( CurrentIrql != 17 )
    MiUnlockWorkingSetExclusive(a2 + 1664, CurrentIrql);
  if ( v4 )
    MiAweViewInserter(a2, v4);
}
