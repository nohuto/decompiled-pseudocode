/*
 * XREFs of MiSystemFault @ 0x140279590
 * Callers:
 *     MmAccessFault @ 0x14031C860 (MmAccessFault.c)
 * Callees:
 *     KeInvalidAccessAllowed @ 0x140230BA0 (KeInvalidAccessAllowed.c)
 *     MiCheckSystemNxFault @ 0x140247C5C (MiCheckSystemNxFault.c)
 *     MiIsWorkingSetTrimThread @ 0x14024C9A8 (MiIsWorkingSetTrimThread.c)
 *     KiRspInIstStack @ 0x14024EF40 (KiRspInIstStack.c)
 *     MiGetAnyMultiplexedVm @ 0x14026DFC0 (MiGetAnyMultiplexedVm.c)
 *     MiCheckSystemPageTables @ 0x140279D30 (MiCheckSystemPageTables.c)
 *     MiSynchronizeSystemVa @ 0x140279DB0 (MiSynchronizeSystemVa.c)
 *     MiHyperSpaceSize @ 0x14027A0F4 (MiHyperSpaceSize.c)
 *     MiUnlockSystemVa @ 0x14027A168 (MiUnlockSystemVa.c)
 *     MiGetSystemRegionType @ 0x14027B080 (MiGetSystemRegionType.c)
 *     MiNoFaultFound @ 0x14027B0B8 (MiNoFaultFound.c)
 *     MiGetSessionVm @ 0x14027B520 (MiGetSessionVm.c)
 *     MiIsPrototypePteVadLookup @ 0x1402806A0 (MiIsPrototypePteVadLookup.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiCopyOnWrite @ 0x140316400 (MiCopyOnWrite.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x140316E90 (MiUpdatePfnForPrefetchByPte.c)
 *     MiResolveDemandZeroFault @ 0x14031FD60 (MiResolveDemandZeroFault.c)
 *     MiCheckVirtualAddress @ 0x1403536F0 (MiCheckVirtualAddress.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiGenerateAccessViolation @ 0x1405A7258 (MiGenerateAccessViolation.c)
 *     MiTransientPageListWriter @ 0x1405B04A4 (MiTransientPageListWriter.c)
 *     MiCopyOnWriteCheckConditions @ 0x1405BCAF8 (MiCopyOnWriteCheckConditions.c)
 */

__int64 __fastcall MiSystemFault(_QWORD *a1)
{
  __int64 v2; // rbp
  int v3; // eax
  ULONG_PTR v4; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // r9
  char v8; // r13
  _BYTE *v9; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  int v11; // eax
  ULONG_PTR v12; // r15
  __int64 v13; // r10
  __int64 v14; // r11
  _BYTE *v15; // rax
  __int16 v16; // cx
  bool v17; // al
  unsigned __int64 v18; // rcx
  char v19; // r12
  __int64 v20; // r8
  char *SessionVm; // r15
  int v22; // esi
  int v23; // eax
  __int64 v24; // xmm1_8
  unsigned __int64 v25; // r14
  ULONG_PTR v26; // rbx
  __int64 v28; // rbp
  __int64 v29; // r10
  __int64 v30; // r9
  KIRQL v31; // al
  _QWORD *v32; // r14
  unsigned __int64 v33; // r12
  _BYTE *v34; // r10
  int v35; // ecx
  __int64 v36; // rax
  __int64 v37; // rcx
  _BYTE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  unsigned int v41; // ebp
  __int64 v42; // xmm1_8
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  int v46; // ebx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v50; // eax
  bool v51; // zf
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v53; // rax
  ULONG_PTR v54; // rdx
  ULONG_PTR v55; // r9
  __int64 v56; // rax
  __int64 v57; // rcx
  _BYTE *v58; // rax
  __int64 v59; // rcx
  _BYTE *v60; // rax
  __int64 v61; // rcx
  _BYTE *v62; // rax
  int v63; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v64; // [rsp+38h] [rbp-C0h] BYREF
  _QWORD v65[16]; // [rsp+40h] [rbp-B8h] BYREF

  v2 = 0LL;
  v64 = 0LL;
  v63 = 0;
  memset(v65, 0, sizeof(v65));
  v3 = *((_DWORD *)a1 + 20);
  if ( (v3 & 0x40) != 0 )
    return 3221225477LL;
  if ( (v3 & 0x20) != 0 )
    KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0xEuLL);
  v4 = *a1;
  v5 = *a1;
  v6 = 0xFFFFF68000000000uLL;
  v7 = 0xFFFFF6FFFFFFFFFFuLL;
  if ( *a1 < 0xFFFFF68000000000uLL )
  {
LABEL_6:
    if ( v4 < 0xFFFFF68000000000uLL )
      goto LABEL_8;
  }
  else
  {
    while ( v5 <= 0xFFFFF6FFFFFFFFFFuLL )
    {
      v5 = (__int64)(v5 << 25) >> 16;
      if ( v5 < 0xFFFFF68000000000uLL )
        goto LABEL_6;
    }
  }
  if ( v4 <= 0xFFFFF6FFFFFFFFFFuLL && v5 >= qword_140C540C0 && v5 <= qword_140C51BF0 )
    a1[1] |= 2uLL;
LABEL_8:
  v8 = 0;
  v9 = (_BYTE *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (a1[2] & 1) != 0 && (*v9 == 7 || *v9 == 8) )
  {
    if ( v4 < 0xFFFFF68000000000uLL
      || v4 > 0xFFFFF6FFFFFFFFFFuLL
      || v5 > 0x7FFFFFFEFFFFLL && (v5 < qword_140C540C0 || v5 > qword_140C51BF0) )
    {
      return 3489660934LL;
    }
    return 192LL;
  }
  if ( v5 < 0xFFFF800000000000uLL
    || v5 >= qword_140C51BE8
    && v5 < qword_140C51BE8 + MiHyperSpaceSize(v4, v9, 0xFFFFF68000000000uLL, 0xFFFFF6FFFFFFFFFFuLL) )
  {
    return 192LL;
  }
  CurrentThread = KeGetCurrentThread();
  v11 = *((_DWORD *)&CurrentThread[1].SwapListEntry + 3);
  if ( (v11 & 0x400) != 0 || (v11 & 0x100) != 0 && (unsigned int)MiTransientPageListWriter(CurrentThread, *a1, v6, v7) )
    return 3221225477LL;
  v12 = *a1;
  if ( dword_140C51DC4 )
  {
    v31 = ExAcquireSpinLockShared(&dword_140C51DC0);
    v32 = (_QWORD *)qword_140C51DC8;
    v33 = v31;
    if ( qword_140C51DC8 )
    {
      do
      {
        if ( (unsigned __int64)CurrentThread > v32[3] )
        {
          v32 = (_QWORD *)v32[1];
        }
        else
        {
          if ( (unsigned __int64)CurrentThread >= v32[3] )
            break;
          v32 = (_QWORD *)*v32;
        }
      }
      while ( v32 );
      if ( v32 && v32[5] != ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL )
        v32 = 0LL;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C51DC0);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v33 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v9 = (_BYTE *)(-1LL << ((unsigned __int8)v33 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v50 = ~(unsigned __int16)v9;
          v51 = (v50 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v50;
          if ( v51 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v33);
    if ( v32 )
      return 3221225477LL;
  }
  v13 = a1[2];
  v14 = v13 & 1;
  v15 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v13 & 1) != 0 )
  {
    if ( *v15 != 1 && *v15 != 3 && *v15 != 6 )
      goto LABEL_22;
    goto LABEL_92;
  }
  if ( !v13 )
    goto LABEL_22;
  v16 = *(_WORD *)(v13 + 368);
  v17 = 0;
  if ( v16 != 16 )
  {
    if ( v16 == 51 )
    {
      v9 = (_BYTE *)qword_140D071B0;
      v18 = *(_QWORD *)(v13 + 360);
      goto LABEL_20;
    }
LABEL_22:
    v19 = 0;
    goto LABEL_23;
  }
  if ( (*(_DWORD *)(v13 + 376) & 0x200) == 0
    && (KiRspInIstStack(3u, *(_QWORD *)(v13 + 384)) || KiRspInIstStack(2u, (unsigned __int64)v9)) )
  {
    goto LABEL_22;
  }
  v9 = &ExpInterlockedPopEntrySListFault;
  v18 = *(_QWORD *)(v13 + 360);
  v17 = KiDynamicTraceEnabled && v18 >= qword_140D070E8 && v18 < qword_140D070F0 && KeGetCurrentIrql() == 15;
LABEL_20:
  if ( (_BYTE *)v18 != v9 && !v17 )
    goto LABEL_22;
LABEL_92:
  v19 = 1;
LABEL_23:
  HIDWORD(v65[0]) = 1;
  v20 = (unsigned __int8)byte_140C53F50[((v5 >> 39) & 0x1FF) - 256];
  if ( (a1[10] & 8) != 0 )
  {
    if ( (_DWORD)v20 != 6 )
      return 3221225477LL;
    goto LABEL_30;
  }
  if ( (!v14 || *(_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL) != 1) && !v19 )
    HIDWORD(v65[0]) = 3;
  if ( (_DWORD)v20 == 8 )
  {
    SessionVm = (char *)&unk_140C59200;
  }
  else if ( (_DWORD)v20 == 1 )
  {
    SessionVm = (char *)MiGetSessionVm(byte_140C53F50, v9, v20);
    if ( !SessionVm )
      goto LABEL_153;
    v8 = 1;
  }
  else
  {
    if ( (_DWORD)v20 == 6 )
    {
LABEL_30:
      SessionVm = (char *)&unk_140C53800;
      goto LABEL_31;
    }
    if ( (_DWORD)v20 == 12 )
    {
      SessionVm = (char *)&unk_140C536C0;
    }
    else
    {
      if ( (_DWORD)v20 == 14 )
      {
        if ( !v14 || (v34 = (_BYTE *)(v13 & 0xFFFFFFFFFFFFFFFEuLL), *v34 != 4) && *v34 != 1 )
        {
LABEL_153:
          if ( (v65[0] & 0x200000000LL) != 0 && !(unsigned int)MiGenerateAccessViolation(a1) )
            KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 2uLL);
          return 3221225477LL;
        }
        v35 = 4;
      }
      else
      {
        if ( (_DWORD)v20 != 9 )
          goto LABEL_153;
        v35 = 3;
      }
      SessionVm = MiGetAnyMultiplexedVm(v35);
    }
  }
LABEL_31:
  if ( !(unsigned int)MiSynchronizeSystemVa((_DWORD)SessionVm, *a1, v20, 0, (__int64)v65) )
    goto LABEL_153;
  v22 = BYTE4(v65[0]) & 2;
  if ( (v65[0] & 0x200000000LL) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0
    && !MiIsWorkingSetTrimThread()
    && (unsigned int)MiGetSystemRegionType(v5, v43, v44, v45) == 1
    || (v23 = MiCheckSystemPageTables(a1), v23 == 2) )
  {
    MiUnlockSystemVa(v65);
    goto LABEL_153;
  }
  if ( v23 == 1 )
  {
    MiUnlockSystemVa(v65);
    return 0LL;
  }
  v24 = v65[5];
  *(_OWORD *)(a1 + 7) = *(_OWORD *)&v65[3];
  a1[9] = v24;
  v25 = a1[3];
  v26 = *(_QWORD *)v25;
  if ( v25 >= 0xFFFFF6FB7DBED000uLL
    && v25 <= 0xFFFFF6FB7DBED7F8uLL
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1 )
  {
    if ( (v26 & 1) == 0 )
      goto LABEL_38;
    if ( (v26 & 0x20) == 0 || (v26 & 0x42) == 0 )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v53 = *((_QWORD *)&Flink->Flink + ((v25 >> 3) & 0x1FF));
        if ( (v53 & 0x20) != 0 )
          v26 |= 0x20uLL;
        if ( (v53 & 0x42) != 0 )
          v26 |= 0x42uLL;
      }
    }
  }
  if ( (v26 & 1) != 0 )
  {
    if ( (v26 & 0x80u) != 0LL )
    {
      v54 = *a1;
      if ( *a1 >= 0xFFFFF68000000000uLL && v54 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        if ( v22 )
          KeBugCheckEx(0x50u, v54, a1[1], a1[2], 8uLL);
        goto LABEL_108;
      }
    }
    v30 = a1[2];
    if ( (v30 & 1) != 0 && *(_BYTE *)(v30 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
    {
      MiUpdatePfnForPrefetchByPte(a1[3], *(_DWORD *)((v30 & 0xFFFFFFFFFFFFFFFEuLL) + 80) & 7, 0LL);
      MiUnlockSystemVa(v65);
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
          goto LABEL_108;
        }
        v46 = MiCopyOnWrite(*a1);
        MiUnlockSystemVa(v65);
        if ( v46 < 0 )
          MiCopyOnWriteCheckConditions(SessionVm, (unsigned int)v46);
        return 0LL;
      }
    }
    else
    {
      MiCheckSystemNxFault((__int64)a1, v26, 2u);
      v30 = a1[2];
    }
    MiNoFaultFound((_DWORD)a1, v25, *a1, v30, 1, v26);
LABEL_66:
    MiUnlockSystemVa(v65);
    return (unsigned int)v2;
  }
LABEL_38:
  if ( *a1 >= 0xFFFFF68000000000uLL && *a1 <= 0xFFFFF6FFFFFFFFFFuLL )
  {
    if ( !v19 )
    {
      v55 = a1[2];
      if ( (v55 & 1) == 0 || *(_BYTE *)(v55 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        KeBugCheckEx(0x50u, *a1, a1[1], v55, 9uLL);
      goto LABEL_66;
    }
    goto LABEL_108;
  }
  if ( (v26 & 0x400) == 0 )
  {
    if ( (v26 & 0x3E0) == 0 && (v26 & 0x800) == 0 )
    {
      if ( (a1[10] & 8) == 0 )
      {
        v59 = a1[2];
        v60 = (_BYTE *)(v59 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( (v59 & 1) != 0 )
        {
          if ( *v60 == 1 || *v60 == 3 || *v60 == 6 )
            goto LABEL_108;
        }
        else if ( KeInvalidAccessAllowed(v59, 0) )
        {
          goto LABEL_108;
        }
        if ( !(unsigned int)MiGenerateAccessViolation(a1) )
          KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 0LL);
      }
LABEL_108:
      LODWORD(v2) = -1073741819;
      goto LABEL_66;
    }
    if ( (v26 & 0x3E0) == 0x300
      || (v26 & 0x3E0) == 0x3E0 && ((v36 = a1[2], (v36 & 1) == 0) || *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) != 4) )
    {
      if ( (a1[10] & 8) != 0 )
        goto LABEL_105;
      v37 = a1[2];
      v38 = (_BYTE *)(v37 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( (v37 & 1) != 0 )
      {
        if ( *v38 == 1 || *v38 == 3 || *v38 == 6 )
          goto LABEL_105;
      }
      else if ( KeInvalidAccessAllowed(v37, 0) )
      {
        goto LABEL_105;
      }
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0x50u, *a1, a1[1], a1[2], 1uLL);
LABEL_105:
      if ( (v26 & 0x3E0) == 0x300 )
        goto LABEL_108;
      v39 = a1[2];
      if ( (v39 & 1) == 0 || *(_BYTE *)(v39 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
        goto LABEL_108;
    }
LABEL_44:
    if ( (a1[1] & 2) == 0 || v2 || v8 || ((v26 >> 5) & 4) != 0 )
    {
      a1[12] = v2;
      return 3221225494LL;
    }
    if ( (a1[10] & 8) != 0 )
      goto LABEL_108;
    v61 = a1[2];
    v62 = (_BYTE *)(v61 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( (v61 & 1) != 0 )
    {
      if ( *v62 == 1 || *v62 == 3 || *v62 == 6 )
        goto LABEL_108;
      goto LABEL_211;
    }
    if ( !KeInvalidAccessAllowed(v61, 0) )
    {
LABEL_211:
      if ( !(unsigned int)MiGenerateAccessViolation(a1) )
        KeBugCheckEx(0xBEu, *a1, v26, a1[2], 0xEuLL);
      goto LABEL_108;
    }
    goto LABEL_108;
  }
  if ( (v26 & 2) != 0 )
  {
    v40 = a1[2];
    if ( (v40 & 1) == 0 || *(_BYTE *)(v40 & 0xFFFFFFFFFFFFFFFEuLL) != 1 )
    {
      v41 = MiResolveDemandZeroFault(a1, a1[3], 0LL, 0LL);
      v42 = a1[9];
      *(_OWORD *)&v65[3] = *(_OWORD *)(a1 + 7);
      v65[5] = v42;
      MiUnlockSystemVa(v65);
      return v41;
    }
    goto LABEL_66;
  }
  v28 = v26;
  if ( qword_140C50780 && (v26 & 0x10) == 0 )
    v28 = v26 & ~qword_140C50780;
  v2 = v28 >> 16;
  if ( !v8 )
    goto LABEL_44;
  if ( !(unsigned int)MiIsPrototypePteVadLookup(v26) )
    goto LABEL_44;
  v56 = MiCheckVirtualAddress(v29, &v63, &v64);
  v2 = v56;
  if ( v56 )
    goto LABEL_44;
  v57 = a1[2];
  v58 = (_BYTE *)(v57 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v57 & 1) != 0 )
  {
    if ( *v58 == 1 || *v58 == 3 || *v58 == 6 )
      goto LABEL_108;
  }
  else if ( KeInvalidAccessAllowed(v57, 0) )
  {
    goto LABEL_108;
  }
  if ( (unsigned int)MiGenerateAccessViolation(a1) )
    goto LABEL_108;
  MiUnlockSystemVa(v65);
  return 3489660934LL;
}
