/*
 * XREFs of MiSystemFault @ 0x14031C150
 * Callers:
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 * Callees:
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     MiCheckVirtualAddress @ 0x14020A6B0 (MiCheckVirtualAddress.c)
 *     KeInvalidAccessAllowed @ 0x140220080 (KeInvalidAccessAllowed.c)
 *     MiIsWorkingSetTrimThread @ 0x140243290 (MiIsWorkingSetTrimThread.c)
 *     MiCheckSystemNxFault @ 0x140245F28 (MiCheckSystemNxFault.c)
 *     MiResolveDemandZeroFault @ 0x1402B4450 (MiResolveDemandZeroFault.c)
 *     ExAcquireSpinLockShared @ 0x1402C1680 (ExAcquireSpinLockShared.c)
 *     MiCopyOnWrite @ 0x1402E3B50 (MiCopyOnWrite.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiCheckSystemPageTables @ 0x14031C910 (MiCheckSystemPageTables.c)
 *     MiSynchronizeSystemVa @ 0x14031C990 (MiSynchronizeSystemVa.c)
 *     MiHyperSpaceSize @ 0x14031CC88 (MiHyperSpaceSize.c)
 *     MiUnlockSystemVa @ 0x14031CE4C (MiUnlockSystemVa.c)
 *     MiGetSessionVm @ 0x14031CEEC (MiGetSessionVm.c)
 *     MiNoFaultFound @ 0x14031CF18 (MiNoFaultFound.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140327550 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiUpdatePfnPriorityByPte @ 0x140336C60 (MiUpdatePfnPriorityByPte.c)
 *     MiGetSystemRegionType @ 0x1403556A0 (MiGetSystemRegionType.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     KiRspInIstStack @ 0x140518E38 (KiRspInIstStack.c)
 *     MiGenerateAccessViolation @ 0x1405487A0 (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x140557EC0 (MiTransientPageListWriter.c)
 *     MiCopyOnWriteCheckConditions @ 0x14055C138 (MiCopyOnWriteCheckConditions.c)
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
  __int64 v24; // xmm1_8
  unsigned __int64 v25; // r14
  unsigned __int64 v26; // rbx
  __int64 v28; // rsi
  unsigned __int64 v29; // r10
  __int64 v30; // r9
  _BYTE *v31; // r11
  int v32; // ecx
  __int64 v33; // rax
  _BYTE *v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // esi
  __int64 v38; // xmm1_8
  KIRQL v39; // al
  _QWORD *v40; // r15
  unsigned __int64 v41; // r12
  int v42; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v46; // eax
  bool v47; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v49; // rax
  __int64 v50; // rdx
  ULONG_PTR v51; // rdx
  ULONG_PTR v52; // r9
  __int64 v53; // rax
  _BYTE *v54; // rax
  _BYTE *v55; // rax
  _BYTE *v56; // rax
  int v57; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v59[16]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0LL;
  v58 = 0LL;
  v57 = 0;
  memset(v59, 0, sizeof(v59));
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
  if ( v4 >= 0xFFFFF68000000000uLL && v4 <= 0xFFFFF6FFFFFFFFFFuLL && v5 >= qword_140C4FB78 && v5 <= qword_140C4E3A8 )
    a1[1] |= 2uLL;
  v8 = 0;
  v9 = 0x100000000000000LL;
  if ( (a1[1] & 0x100000000000000LL) != 0 )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || v5 > 0x7FFFFFFEFFFFLL && (v5 < qword_140C4FB78 || v5 > qword_140C4E3A8) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v5 < 0xFFFF800000000000uLL || v5 >= qword_140C4E3A0 && v5 < qword_140C4E3A0 + MiHyperSpaceSize(v4) )
    return 192LL;
  CurrentThread = KeGetCurrentThread();
  v11 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v11 & 0x400) != 0
    || (v11 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v6, i) == 1 )
  {
    return 3221225477LL;
  }
  v12 = *a1;
  if ( dword_140C4E584 )
  {
    v39 = ExAcquireSpinLockShared(&dword_140C4E580);
    v40 = (_QWORD *)qword_140C4E588;
    v41 = v39;
    if ( qword_140C4E588 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v40[3] )
        {
          v40 = (_QWORD *)v40[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v40[3] )
            break;
          v40 = (_QWORD *)*v40;
        }
      }
      while ( v40 );
      if ( v40 && v40[5] != ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v40 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E580);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = -1LL << ((unsigned __int8)v41 + 1);
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v46 = ~(unsigned __int16)v9;
          v47 = (v46 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v46;
          if ( v47 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v41);
    if ( v40 )
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
  HIDWORD(v59[0]) = 1;
  v20 = (unsigned __int8)byte_140C4FA08[((v5 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( (_DWORD)v20 == 6 )
      goto LABEL_28;
    return 3221225477LL;
  }
  if ( (!v14 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) != 1) && !v19 )
    HIDWORD(v59[0]) = 3;
  if ( (_DWORD)v20 == 8 )
  {
    SessionVm = (char *)&unk_140C52A00;
  }
  else if ( (_DWORD)v20 == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(byte_140C4FA08, v9, v20);
    if ( !SessionVm )
      goto LABEL_152;
    v8 = 1;
  }
  else
  {
    if ( (_DWORD)v20 == 6 )
    {
LABEL_28:
      SessionVm = (char *)&unk_140C4F2C0;
      goto LABEL_29;
    }
    if ( (_DWORD)v20 == 12 )
    {
      SessionVm = (char *)&unk_140C4F180;
    }
    else
    {
      if ( (_DWORD)v20 == 14 )
      {
        v31 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( !v14 || *v31 != 1 && *v31 != 4 )
        {
LABEL_152:
          if ( (v59[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v32 = 4;
      }
      else
      {
        if ( (_DWORD)v20 != 9 )
          goto LABEL_152;
        v32 = 3;
      }
      SessionVm = MiGetAnyMultiplexedVm(v32);
    }
  }
LABEL_29:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v20, 0, (__int64)v59) )
    goto LABEL_152;
  v22 = BYTE4(v59[0]) & 2;
  if ( (v59[0] & 0x200000000LL) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    && !MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v5) == 1
    || (v23 = MiCheckSystemPageTables(a1), v23 == 2) )
  {
    MiUnlockSystemVa(v59);
    goto LABEL_152;
  }
  if ( v23 == 1 )
  {
    MiUnlockSystemVa(v59);
    return 0LL;
  }
  v24 = v59[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v59[3];
  a1[9] = v24;
  v25 = a1[3];
  v26 = *(_QWORD *)v25;
  if ( v25 >= 0xFFFFF6FB7DBED000uLL
    && v25 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v26 & 1) == 0 )
      goto LABEL_35;
    if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v49 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
        v50 = v26 | 0x20;
        if ( (v49 & 0x20) == 0 )
          v50 = *(_QWORD *)v25;
        v26 = v50;
        if ( (v49 & 0x42) != 0 )
          v26 = v50 | 0x42;
      }
    }
  }
  if ( (v26 & 1) != 0 )
  {
    if ( (v26 & 0x80u) != 0LL )
    {
      v51 = *a1;
      if ( *a1 >= 0xFFFFF68000000000uLL && v51 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v22 )
          KeBugCheckEx(0x50u, v51, a1[1], a1[2], 8uLL);
        goto LABEL_105;
      }
    }
    v30 = a1[2];
    if ( (v30 & 1) != 0 && *(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnPriorityByPte(a1[3], *(_DWORD *)((v30 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7);
      MiUnlockSystemVa(v59);
      return 0LL;
    }
    if ( (a1[1] & 2) != 0 )
    {
      if ( (v26 & 0x800) == 0 )
      {
        if ( (v26 & 0x200) == 0 && (a1[10] & 8) == 0 )
        {
          if ( !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0xBEu, *a1, v26, a1[2], 0xBuLL);
          goto LABEL_105;
        }
        v42 = MiCopyOnWrite(*a1, (ULONG_PTR *)a1[3], -1LL, 0);
        MiUnlockSystemVa(v59);
        if ( v42 < 0 )
          MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v42);
        return 0LL;
      }
    }
    else
    {
      MiCheckSystemNxFault((__int64)a1, v26, 2u);
      v30 = a1[2];
    }
    MiNoFaultFound((_DWORD)a1, v25, *a1, v30, 1);
LABEL_71:
    MiUnlockSystemVa(v59);
    return (unsigned int)v2;
  }
LABEL_35:
  if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v19 )
    {
      v52 = a1[2];
      if ( (v52 & 1) == 0 || *(_BYTE *)(v52 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        KeBugCheckEx(0x50u, *a1, a1[1], v52, 9uLL);
      goto LABEL_71;
    }
    goto LABEL_105;
  }
  if ( (v26 & 0x400) == 0 )
  {
    if ( (v26 & 0x3E0) == 0 && (v26 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v55 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (a1[2] & 1LL) != 0 )
        {
          if ( *v55 == 1 || *v55 == 3 || *v55 == 6 )
            goto LABEL_105;
        }
        else if ( KeInvalidAccessAllowed(a1[2], 0) == 1 )
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
    if ( (v26 & 0x3E0) == 0x300
      || (v26 & 0x3E0) == 0x3E0 && ((v33 = a1[2], (v33 & 1) == 0) || *(_BYTE *)(v33 & 0xFFFFFFFFFFFFFFFEuLL) != 4) )
    {
      if ( (a1[10] & 8) != 0 )
        goto LABEL_102;
      v34 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (a1[2] & 1LL) != 0 )
      {
        if ( *v34 == 1 || *v34 == 3 || *v34 == 6 )
          goto LABEL_102;
      }
      else if ( KeInvalidAccessAllowed(a1[2], 0) == 1 )
      {
        goto LABEL_102;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
LABEL_102:
      if ( (v26 & 0x3E0) == 0x300 )
        goto LABEL_105;
      v35 = a1[2];
      if ( (v35 & 1) == 0 || *(_BYTE *)(v35 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        goto LABEL_105;
    }
LABEL_40:
    if ( (a1[1] & 2) == 0 || v2 || v8 || ((v26 >> 5) & 4) != 0 )
    {
      a1[12] = v2;
      return 3221225494LL;
    }
    if ( (a1[10] & 8) != 0 )
      goto LABEL_105;
    v56 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (a1[2] & 1LL) != 0 )
    {
      if ( *v56 == 1 || *v56 == 3 || *v56 == 6 )
        goto LABEL_105;
      goto LABEL_210;
    }
    if ( KeInvalidAccessAllowed(a1[2], 0) != 1 )
    {
LABEL_210:
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0xBEu, *a1, v26, a1[2], 0xEuLL);
      goto LABEL_105;
    }
    goto LABEL_105;
  }
  if ( (v26 & 2) != 0 )
  {
    v36 = a1[2];
    if ( (v36 & 1) == 0 || *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      v37 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
      v38 = a1[9];
      *(_OWORD *)&v59[3] = *(_OWORD *)(a1 + 7);
      v59[5] = v38;
      MiUnlockSystemVa(v59);
      return v37;
    }
    goto LABEL_71;
  }
  v28 = v26;
  if ( qword_140C4DF80 && (v26 & 0x10) == 0 )
    v28 = v26 & ~qword_140C4DF80;
  v2 = v28 >> 16;
  if ( !v8 )
    goto LABEL_40;
  if ( !MiIsPrototypePteVadLookup(v26) )
    goto LABEL_40;
  v53 = MiCheckVirtualAddress(v29, &v57, &v58);
  v2 = v53;
  if ( v53 )
    goto LABEL_40;
  v54 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1LL) != 0 )
  {
    if ( *v54 == 1 || *v54 == 3 || *v54 == 6 )
      goto LABEL_105;
  }
  else if ( KeInvalidAccessAllowed(a1[2], 0) == 1 )
  {
    goto LABEL_105;
  }
  if ( (unsigned int)MiGenerateAccessViolation(a1) )
    goto LABEL_105;
  MiUnlockSystemVa(v59);
  return 3489660934LL;
}
