/*
 * XREFs of MiMapContiguousMemoryLarge @ 0x1403B89C4
 * Callers:
 *     MiMapContiguousMemory @ 0x1402174E4 (MiMapContiguousMemory.c)
 * Callees:
 *     MiReferenceIoPages @ 0x1402176E4 (MiReferenceIoPages.c)
 *     MiIoSpaceIsConstant @ 0x140217AE0 (MiIoSpaceIsConstant.c)
 *     MiDereferenceIoPages @ 0x1402183E8 (MiDereferenceIoPages.c)
 *     MiIsPfnFileOnly @ 0x1402BD660 (MiIsPfnFileOnly.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiSearchNumaNodeTable @ 0x1403364E0 (MiSearchNumaNodeTable.c)
 *     MiMapWithLargePages @ 0x1403B8C5C (MiMapWithLargePages.c)
 *     MiGetPageTablesForLargeMap @ 0x1403B8F34 (MiGetPageTablesForLargeMap.c)
 *     MiAssignInitialPageAttribute @ 0x1403C6D60 (MiAssignInitialPageAttribute.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall MiMapContiguousMemoryLarge(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR a2,
        unsigned int a3,
        int a4,
        _DWORD *a5)
{
  _DWORD *v5; // r13
  __int64 PageTablesForLargeMap; // r15
  _QWORD *v7; // r11
  unsigned int v9; // esi
  unsigned __int64 v11; // r10
  ULONG_PTR v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  ULONG_PTR v15; // r14
  int v16; // ebp
  unsigned __int8 *v17; // r13
  ULONG_PTR v18; // r8
  unsigned __int8 CurrentIrql; // r15
  __int64 v20; // rdx
  unsigned int AnyMultiplexedVm; // eax
  unsigned __int8 v23; // cl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *v27; // r9
  int v28; // eax
  bool v29; // zf
  _QWORD *v30; // [rsp+40h] [rbp-68h]
  __int64 v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 v32; // [rsp+50h] [rbp-58h]
  int v33; // [rsp+B0h] [rbp+8h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+10h]
  unsigned int v35; // [rsp+C0h] [rbp+18h]
  int v36; // [rsp+C8h] [rbp+20h]

  v36 = a4;
  v35 = a3;
  v5 = a5;
  PageTablesForLargeMap = 0LL;
  v7 = 0LL;
  v34 = 0LL;
  v31 = 0LL;
  *a5 = 0;
  v9 = 1;
  v30 = 0LL;
  v11 = 2LL;
  if ( a3 >> 3 == 1 )
  {
    v9 = 0;
  }
  else if ( a3 >> 3 == 3 && (a3 & 7) != 0 )
  {
    v9 = 2;
  }
  if ( BugCheckParameter2 > 0xFFFFFFFFFLL )
  {
    LODWORD(v13) = 0;
  }
  else
  {
    v12 = 6 * BugCheckParameter2;
    v13 = (*(_QWORD *)(8 * v12 - 0x57FFFFFFFD8LL) >> 50) & 1LL;
    if ( ((*(_QWORD *)(8 * v12 - 0x57FFFFFFFD8LL) >> 50) & 1) != 0 )
    {
      v14 = 8 * v12 - 0x58000000000LL;
      goto LABEL_6;
    }
  }
  v14 = 0LL;
LABEL_6:
  v15 = 0LL;
  v32 = v14;
  v16 = 3;
  if ( !a2 )
    goto LABEL_19;
  v17 = (unsigned __int8 *)(v14 + 34);
  while ( 1 )
  {
    v18 = v15 + BugCheckParameter2;
    if ( v15 + BugCheckParameter2 > 0xFFFFFFFFFLL || (*(_QWORD *)(48 * v18 - 0x57FFFFFFFD8LL) & 0x4000000000000LL) == 0 )
      break;
    if ( ((unsigned __int8)a4 & (unsigned __int8)v11) != 0 && ((*v17 & 7) != 5 || !MiIsPfnFileOnly((__int64)(v17 - 34))) )
      KeBugCheckEx(0x1Au, 0x1160CuLL, v18, 0LL, 0LL);
    if ( !v14 )
      goto LABEL_18;
    v23 = *v17;
    if ( (*v17 & 0xC0) == 0xC0 )
    {
      MiAssignInitialPageAttribute(v17 - 34, v9);
      v23 = *v17;
      v11 = 2LL;
      v7 = v30;
    }
    if ( v23 >> 6 != v9 )
      goto LABEL_18;
    v16 = v9;
LABEL_12:
    ++v15;
    v17 += 48;
    if ( v15 >= a2 )
      goto LABEL_18;
    v14 = v32;
    LOBYTE(a4) = v36;
  }
  if ( v14 )
    goto LABEL_18;
  if ( v15 )
    goto LABEL_12;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(v11);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v7 = MiIoSpaceIsConstant(BugCheckParameter2, a2);
  v30 = v7;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v25 = KeGetCurrentIrql();
      if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= (unsigned __int8)v11 )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v27 = CurrentPrcb->SchedulerAssist;
        v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v28 & v27[5]) == 0;
        v27[5] &= v28;
        if ( v29 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v30;
        }
        v11 = 2LL;
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( !v7 )
    goto LABEL_12;
  v16 = *((_DWORD *)v7 + 10);
  v15 = a2;
LABEL_18:
  PageTablesForLargeMap = v34;
  v5 = a5;
LABEL_19:
  if ( v15 == a2 )
  {
    if ( (_DWORD)v13 || v7 )
    {
LABEL_25:
      MiSearchNumaNodeTable(BugCheckParameter2);
      PageTablesForLargeMap = MiGetPageTablesForLargeMap(a2, 9LL, 1LL);
      if ( PageTablesForLargeMap )
      {
        AnyMultiplexedVm = (unsigned int)MiGetAnyMultiplexedVm(3);
        MiMapWithLargePages(AnyMultiplexedVm, PageTablesForLargeMap, BugCheckParameter2, a2, 1, v35, v16);
        if ( v31 )
          *v5 |= 1u;
      }
      else if ( !(_DWORD)v13 && !v30 )
      {
        v20 = BugCheckParameter2;
        goto LABEL_58;
      }
    }
    else
    {
      v33 = 0;
      if ( (int)MiReferenceIoPages(1u, BugCheckParameter2, a2, v9, &v33, &v31) >= 0 )
      {
        v20 = BugCheckParameter2;
        if ( ((v33 - 1) & v33) == 0 )
        {
          v16 = *(unsigned __int16 *)(*(_QWORD *)(v31 + 48)
                                    + 2 * ((BugCheckParameter2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v31 + 40))) >> 14;
          LOWORD(a5) = *(_WORD *)(*(_QWORD *)(v31 + 48)
                                + 2 * ((BugCheckParameter2 & 0xFFFFFFFFFLL) - *(_QWORD *)(v31 + 40)));
          goto LABEL_25;
        }
LABEL_58:
        MiDereferenceIoPages(1, v20, a2);
      }
    }
  }
  return PageTablesForLargeMap;
}
