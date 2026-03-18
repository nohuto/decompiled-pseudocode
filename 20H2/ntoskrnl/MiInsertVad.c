/*
 * XREFs of MiInsertVad @ 0x14022DF50
 * Callers:
 *     MiGetWsAndInsertVad @ 0x14022DCA0 (MiGetWsAndInsertVad.c)
 *     MiInsertPrivateVad @ 0x14022EDE0 (MiInsertPrivateVad.c)
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14025F3B4 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x1403C63D8 (MiInsertViewOfPhysicalSection.c)
 *     MiReInsertPlaceholderVad @ 0x14055386C (MiReInsertPlaceholderVad.c)
 * Callees:
 *     RtlAvlInsertNodeEx @ 0x14022E170 (RtlAvlInsertNodeEx.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14027F090 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14027F1D0 (MiVadMapsLargeImage.c)
 *     ExpAcquireSpinLockExclusive @ 0x14027F330 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1405B4198 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiAweViewInserter @ 0x1408D7F1C (MiAweViewInserter.c)
 */

__int64 __fastcall MiInsertVad(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  char v4; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r14
  LONG *v9; // rbp
  unsigned __int8 CurrentIrql; // r12
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  __int64 *v13; // rdx
  unsigned __int64 v14; // r8
  __int64 *v15; // rax
  unsigned int v16; // ecx
  int v17; // ecx
  __int64 result; // rax
  _DWORD *SchedulerAssist; // r9

  v3 = 0LL;
  v4 = a3;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( (a3 & 1) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 1848) & 7) == 2 )
      v9 = &dword_140C4F600;
    else
      v9 = (LONG *)(a2 + 1856);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a3 = (unsigned int)SchedulerAssist[5];
      SchedulerAssist[5] = a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v9, CurrentIrql, a3);
    else
      ExpAcquireSpinLockExclusive(v9, CurrentIrql, a3);
    v9[1] = 0;
    v3 = 0LL;
  }
  else
  {
    CurrentIrql = 17;
  }
  v11 = *(_QWORD *)(a2 + 1496);
  ++*(_QWORD *)(a2 + 2024);
  *(_QWORD *)(a2 + 2016) = a1;
  if ( v7 <= v11 >> 12 && (v4 & 2) == 0 )
  {
    *(_QWORD *)(a2 + 1176) += ((v7 - v8) << 12) + 4096;
    v12 = *(_QWORD *)(a2 + 1176);
    if ( *(_QWORD *)(a2 + 1168) < v12 )
      *(_QWORD *)(a2 + 1168) = v12;
  }
  v13 = *(__int64 **)(a2 + 2008);
  v14 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  LOBYTE(v15) = 0;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( v14 <= (*((unsigned int *)v13 + 7) | ((unsigned __int64)*((unsigned __int8 *)v13 + 33) << 32))
        && v14 < (*((unsigned int *)v13 + 6) | ((unsigned __int64)*((unsigned __int8 *)v13 + 32) << 32)) )
      {
        v15 = (__int64 *)*v13;
        if ( !*v13 )
          break;
      }
      else
      {
        v15 = (__int64 *)v13[1];
        if ( !v15 )
        {
          LOBYTE(v15) = 1;
          break;
        }
      }
      v13 = v15;
    }
  }
  RtlAvlInsertNodeEx(a2 + 2008, v13, (unsigned __int8)v15, a1);
  v16 = *(_DWORD *)(a1 + 48);
  if ( (v16 & 0x100000) == 0 || (v16 & 0x400000) == 0 && (v16 & 0xC0000) < 0x80000 )
  {
    if ( !(unsigned int)MiVadMapsLargeImage(a1) )
      goto LABEL_21;
    v16 = *(_DWORD *)(a1 + 48);
  }
  if ( (unsigned __int64)MiVadPageSizes[((unsigned __int64)v16 >> 18) & 3] >= 0x200 )
    ++*(_DWORD *)(a2 + 2140);
LABEL_21:
  v17 = *(_DWORD *)(a1 + 48);
  if ( (v17 & 0x70) == 0x10 )
  {
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 304LL);
    v17 = *(_DWORD *)(a1 + 48);
  }
  result = v17 & 0x70;
  if ( (_BYTE)result == 48 && (v17 & 0x3100000) != 0x2100000 )
  {
    result = MiLocateLockedVadEvent(a1, 256LL);
    v3 = result + 8;
  }
  if ( CurrentIrql != 17 )
    result = MiUnlockWorkingSetExclusive(a2 + 1664, CurrentIrql);
  if ( v3 )
    return MiAweViewInserter(a2, v3);
  return result;
}
