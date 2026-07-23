/*
 * XREFs of MiSystemFault @ 0x1402BD490
 * Callers:
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140207A80 (MiGetSystemRegionType.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140224640 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140228470 (ExAcquireSpinLockShared.c)
 *     MiUpdatePfnPriorityByPte @ 0x140236580 (MiUpdatePfnPriorityByPte.c)
 *     MiCopyOnWrite @ 0x140238700 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiIsWorkingSetTrimThread @ 0x140277D88 (MiIsWorkingSetTrimThread.c)
 *     MiResolveDemandZeroFault @ 0x1402A1B30 (MiResolveDemandZeroFault.c)
 *     MiCheckSystemPageTables @ 0x1402BDC50 (MiCheckSystemPageTables.c)
 *     MiSynchronizeSystemVa @ 0x1402BDCD0 (MiSynchronizeSystemVa.c)
 *     MiHyperSpaceSize @ 0x1402BDFC8 (MiHyperSpaceSize.c)
 *     MiUnlockSystemVa @ 0x1402BE18C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x1402BE22C (MiGetSessionVm.c)
 *     MiNoFaultFound @ 0x1402BE258 (MiNoFaultFound.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x140315F00 (MiCheckVirtualAddress.c)
 *     KeInvalidAccessAllowed @ 0x140333400 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140356108 (MiCheckSystemNxFault.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403EDAA4 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403F70D0 (KeBugCheckEx.c)
 *     memset @ 0x14040A280 (memset.c)
 *     KiRspInIstStack @ 0x140513788 (KiRspInIstStack.c)
 *     MiGenerateAccessViolation @ 0x140543090 (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x1405527E0 (MiTransientPageListWriter.c)
 *     MiCopyOnWriteCheckConditions @ 0x140556A58 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  __int64 v2; // rsi
  int v3; // eax
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 i; // r9
  char v8; // r13
  __int64 v9; // rdx
  struct _KTHREAD *CurrentThread; // rbp
  int v11; // eax
  ULONG_PTR v12; // r14
  __int64 v13; // r11
  __int64 v14; // r10
  _BYTE *v15; // rax
  __int16 v16; // cx
  bool v17; // al
  unsigned __int64 v18; // rcx
  char v19; // r12
  __int64 v20; // r8
  char *SessionVm; // r15
  int v22; // ebp
  int v23; // eax
  __int64 Flink; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // xmm1_8
  unsigned __int64 v28; // r14
  ULONG_PTR v29; // rbx
  __int64 v31; // rsi
  __int64 v32; // r10
  __int64 v33; // r9
  _BYTE *v34; // r11
  int v35; // ecx
  __int64 v36; // rax
  _BYTE *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // esi
  __int64 v41; // xmm1_8
  KIRQL v42; // al
  _QWORD *v43; // r15
  unsigned __int64 v44; // r12
  int v45; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v49; // eax
  bool v50; // zf
  __int64 v51; // rax
  ULONG_PTR v52; // rdx
  ULONG_PTR v53; // r9
  __int64 v54; // rax
  _BYTE *v55; // rax
  _BYTE *v56; // rax
  _BYTE *v57; // rax
  int v58; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v59; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v60[16]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0LL;
  v59 = 0LL;
  v58 = 0;
  memset(v60, 0, sizeof(v60));
  v3 = *((_DWORD *)a1 + 20);
  if ( (v3 & 0x40) != 0 )
    return 3221225477LL;
  if ( (v3 & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  v4 = *a1;
  v5 = *a1;
  v6 = 0xFFFFF68000000000uLL;
  for ( i = 0xFFFFF6FFFFFFFFFFuLL; v5 >= 0xFFFFF68000000000uLL; v5 = (__int64)(v5 << 25) >> 16 )
  {
    if ( v5 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL && v5 >= qword_140C4F938 && v5 <= qword_140C4E168 )
    a1[1] |= 2uLL;
  v8 = 0;
  v9 = 0x100000000000000LL;
  if ( (a1[1] & 0x100000000000000LL) != 0 )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || v5 > 0x7FFFFFFEFFFFLL && (v5 < qword_140C4F938 || v5 > qword_140C4E168) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v5 < 0xFFFF800000000000uLL
    || v5 >= qword_140C4E160
    && v5 < qword_140C4E160 + MiHyperSpaceSize(v4, 0x100000000000000LL, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v11 & 0x400) != 0
    || (v11 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v6, i) == 1 )
  {
    return 3221225477LL;
  }
  v12 = *a1;
  if ( dword_140C4E344 )
  {
    v42 = ExAcquireSpinLockShared(&dword_140C4E340);
    v43 = (_QWORD *)qword_140C4E348;
    v44 = v42;
    if ( qword_140C4E348 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v43[3] )
        {
          v43 = (_QWORD *)v43[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v43[3] )
            break;
          v43 = (_QWORD *)*v43;
        }
      }
      while ( v43 );
      if ( v43 && v43[5] != ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v43 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E340);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v44 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = -1LL << ((unsigned __int8)v44 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v49 = ~(unsigned __int16)v9;
          v50 = (v49 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v49;
          if ( v50 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v44);
    if ( v43 )
      return 3221225477LL;
  }
  v13 = a1[2];
  v14 = v13 & 1;
  v15 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v13 & 1) != 0 )
  {
    if ( *v15 != 1 && *v15 != 3 && *v15 != 6 )
      goto LABEL_20;
    goto LABEL_79;
  }
  if ( !v13 )
    goto LABEL_20;
  v16 = *(_WORD *)(v13 + 368);
  v17 = 0;
  if ( v16 != 16 )
  {
    if ( v16 == 51 )
    {
      v9 = KeUserPopEntrySListFault;
      v18 = *(_QWORD *)(v13 + 360);
      goto LABEL_18;
    }
LABEL_20:
    v19 = 0;
    goto LABEL_21;
  }
  if ( (*(_DWORD *)(v13 + 376) & 0x200) == 0
    && ((unsigned int)KiRspInIstStack(3LL, *(_QWORD *)(v13 + 384)) || (unsigned int)KiRspInIstStack(2LL, v9)) )
  {
    goto LABEL_20;
  }
  v9 = (__int64)&ExpInterlockedPopEntrySListFault;
  v18 = *(_QWORD *)(v13 + 360);
  v17 = KiDynamicTraceEnabled && v18 >= ControlPc && v18 < qword_140CFCBE0 && KeGetCurrentIrql() == 15;
LABEL_18:
  if ( v18 != v9 && !v17 )
    goto LABEL_20;
LABEL_79:
  v19 = 1;
LABEL_21:
  HIDWORD(v60[0]) = 1;
  v20 = (unsigned __int8)byte_140C4F7C8[((v5 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( (_DWORD)v20 == 6 )
      goto LABEL_28;
    return 3221225477LL;
  }
  if ( (!v14 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) != 1) && !v19 )
    HIDWORD(v60[0]) = 3;
  if ( (_DWORD)v20 == 8 )
  {
    SessionVm = (char *)&unk_140C527C0;
  }
  else if ( (_DWORD)v20 == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(byte_140C4F7C8, v9, v20);
    if ( !SessionVm )
      goto LABEL_152;
    v8 = 1;
  }
  else
  {
    if ( (_DWORD)v20 == 6 )
    {
LABEL_28:
      SessionVm = (char *)&unk_140C4F080;
      goto LABEL_29;
    }
    if ( (_DWORD)v20 == 12 )
    {
      SessionVm = (char *)&unk_140C4EF40;
    }
    else
    {
      if ( (_DWORD)v20 == 14 )
      {
        v34 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v14 || *v34 != 1 && *v34 != 4 )
        {
LABEL_152:
          if ( (v60[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v35 = 4;
      }
      else
      {
        if ( (_DWORD)v20 != 9 )
          goto LABEL_152;
        v35 = 3;
      }
      SessionVm = MiGetAnyMultiplexedVm(v35);
    }
  }
LABEL_29:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v20, 0, (__int64)v60) )
    goto LABEL_152;
  v22 = BYTE4(v60[0]) & 2;
  if ( (v60[0] & 0x200000000LL) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    && !MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v5) == 1
    || (v23 = MiCheckSystemPageTables(a1), v23 == 2) )
  {
    MiUnlockSystemVa(v60);
    goto LABEL_152;
  }
  if ( v23 == 1 )
  {
    MiUnlockSystemVa(v60);
    return 0LL;
  }
  v27 = v60[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v60[3];
  a1[9] = v27;
  v28 = a1[3];
  v29 = *(_QWORD *)v28;
  if ( v28 >= 0xFFFFF6FB7DBED000uLL
    && v28 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v29 & 1) == 0 )
      goto LABEL_35;
    if ( (v29 & 0x20) == 0 || (v29 & 0x42) == 0 )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v51 = *(_QWORD *)(Flink + 8 * ((v28 >> 3) & 0x1FF));
        Flink = v29 | 0x20;
        if ( (v51 & 0x20) == 0 )
          Flink = *(_QWORD *)v28;
        v29 = Flink;
        if ( (v51 & 0x42) != 0 )
          v29 = Flink | 0x42;
      }
    }
  }
  if ( (v29 & 1) != 0 )
  {
    if ( (v29 & 0x80u) != 0LL )
    {
      v52 = *a1;
      if ( *a1 >= 0xFFFFF68000000000uLL && v52 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v22 )
          KeBugCheckEx(0x50u, v52, a1[1], a1[2], 8uLL);
        goto LABEL_105;
      }
    }
    v33 = a1[2];
    if ( (v33 & 1) != 0 && *(_BYTE *)(v33 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriorityByPte(a1[3], *(_DWORD *)((v33 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
      MiUnlockSystemVa(v60);
      return 0LL;
    }
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v29 & 0x800) == 0 )
      {
        if ( (v29 & 0x200) == 0 && (a1[10] & 8) == 0 )
        {
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0xBEu, *a1, v29, a1[2], 0xBuLL);
          goto LABEL_105;
        }
        v45 = MiCopyOnWrite(*a1, (ULONG_PTR *)a1[3], -1LL, 0);
        MiUnlockSystemVa(v60);
        if ( v45 < 0 )
          MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v45);
        return 0LL;
      }
    }
    else
    {
      MiCheckSystemNxFault(a1, v29, 2LL);
      v33 = a1[2];
    }
    MiNoFaultFound((_DWORD)a1, v28, *a1, v33, 1);
LABEL_71:
    MiUnlockSystemVa(v60);
    return (unsigned int)v2;
  }
LABEL_35:
  if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v19 )
    {
      v53 = a1[2];
      if ( (v53 & 1) == 0 || *(_BYTE *)(v53 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        KeBugCheckEx(0x50u, *a1, a1[1], v53, 9uLL);
      goto LABEL_71;
    }
    goto LABEL_105;
  }
  if ( (v29 & 0x400) == 0 )
  {
    if ( (v29 & 0x3E0) == 0 && (v29 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v56 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (a1[2] & 1LL) != 0 )
        {
          if ( *v56 == 1 || *v56 == 3 || *v56 == 6 )
            goto LABEL_105;
        }
        else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) == 1 )
        {
          goto LABEL_105;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
      }
LABEL_105:
      LODWORD(v2) = -1073741819;
      goto LABEL_71;
    }
    if ( (v29 & 0x3E0) == 0x300
      || (v29 & 0x3E0) == 0x3E0 && ((v36 = a1[2], (v36 & 1) == 0) || *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) != 4) )
    {
      if ( (a1[10] & 8) != 0 )
        goto LABEL_102;
      v37 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (a1[2] & 1LL) != 0 )
      {
        if ( *v37 == 1 || *v37 == 3 || *v37 == 6 )
          goto LABEL_102;
      }
      else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) == 1 )
      {
        goto LABEL_102;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
LABEL_102:
      if ( (v29 & 0x3E0) == 0x300 )
        goto LABEL_105;
      v38 = a1[2];
      if ( (v38 & 1) == 0 || *(_BYTE *)(v38 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        goto LABEL_105;
    }
LABEL_40:
    if ( (a1[1] & 2) == 0 || v2 || v8 || ((v29 >> 5) & 4) != 0 )
    {
      a1[12] = v2;
      return 3221225494LL;
    }
    if ( (a1[10] & 8) != 0 )
      goto LABEL_105;
    v57 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1LL) != 0 )
    {
      if ( *v57 == 1 || *v57 == 3 || *v57 == 6 )
        goto LABEL_105;
      goto LABEL_210;
    }
    if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) != 1 )
    {
LABEL_210:
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0xBEu, *a1, v29, a1[2], 0xEuLL);
      goto LABEL_105;
    }
    goto LABEL_105;
  }
  if ( (v29 & 2) != 0 )
  {
    v39 = a1[2];
    if ( (v39 & 1) == 0 || *(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      v40 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
      v41 = a1[9];
      *(_OWORD *)&v60[3] = *(_OWORD *)(a1 + 7);
      v60[5] = v41;
      MiUnlockSystemVa(v60);
      return v40;
    }
    goto LABEL_71;
  }
  v31 = v29;
  if ( qword_140C4DD40 && (v29 & 0x10) == 0 )
    v31 = v29 & ~qword_140C4DD40;
  v2 = v31 >> 16;
  if ( !v8 )
    goto LABEL_40;
  if ( !(unsigned int)MiIsPrototypePteVadLookup(v29, Flink, v25, v26) )
    goto LABEL_40;
  v54 = MiCheckVirtualAddress(v32, &v58, &v59);
  v2 = v54;
  if ( v54 )
    goto LABEL_40;
  v55 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1LL) != 0 )
  {
    if ( *v55 == 1 || *v55 == 3 || *v55 == 6 )
      goto LABEL_105;
  }
  else if ( (unsigned __int8)KeInvalidAccessAllowed(a1[2], 0LL) == 1 )
  {
    goto LABEL_105;
  }
  if ( (unsigned int)MiGenerateAccessViolation(a1) )
    goto LABEL_105;
  MiUnlockSystemVa(v60);
  return 3489660934LL;
}
