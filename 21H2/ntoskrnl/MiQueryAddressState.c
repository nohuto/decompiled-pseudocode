/*
 * XREFs of MiQueryAddressState @ 0x14032F730
 * Callers:
 *     MiQueryAddressSpan @ 0x14025B3D0 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14025BA58 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x14025F698 (MiAllowProtectionChange.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiWalkPageTables @ 0x1402092C0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14020E6D0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020F790 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219CB0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021B990 (MiVadPureReserve.c)
 *     MiQueryStateMatches @ 0x14025B0CC (MiQueryStateMatches.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14025B310 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiUnlockPageTableInternal @ 0x1402855F0 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140285818 (MiGetPageTableLockBuffer.c)
 *     MiIsPrototypePteVadLookup @ 0x14028D4D0 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402940C8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     PsDereferencePartition @ 0x1402ABFDC (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402AC004 (PsReferencePartitionSafe.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x1402C2AA8 (MiSkipFractionalPagefileRegion.c)
 *     MiGetAnyMultiplexedVm @ 0x1402FD0FC (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x1402FE3CC (MiLocateLockedVadEvent.c)
 *     MiGetLeafVa @ 0x14032CE60 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x140330B40 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x140330DA0 (MiGetPageProtection.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MmGetSessionIdEx @ 0x14034AE60 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403A6208 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F4550 (MiGetProtectionFromPte.c)
 *     memset @ 0x140414200 (memset.c)
 *     MiFaultInPagedPool @ 0x14052D114 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140547750 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x14054C480 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A811C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        __int64 a5,
        int *a6,
        int *a7,
        _WORD *a8,
        _QWORD *a9,
        int *a10)
{
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // r13
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  BOOL v19; // esi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  char *AnyMultiplexedVm; // rbx
  int v23; // eax
  unsigned int v24; // edx
  unsigned __int64 v25; // r14
  unsigned __int64 *v26; // r13
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  int v30; // r10d
  unsigned __int64 v31; // rdx
  int v32; // ebx
  unsigned int v33; // r13d
  unsigned __int64 v34; // r11
  unsigned __int64 v35; // r8
  struct _LIST_ENTRY *v36; // rdx
  __int64 v37; // rax
  int PageProtection; // eax
  unsigned __int64 v39; // rbx
  __int64 v40; // rsi
  int v41; // r15d
  __int64 v42; // rcx
  ULONG_PTR v43; // r11
  unsigned int v44; // r9d
  __int64 **LockedVadEvent; // rax
  __int16 **v46; // r8
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rdi
  int v49; // r11d
  __int64 v50; // rax
  __int64 v51; // rbx
  unsigned __int64 v52; // rsi
  unsigned __int64 v53; // r8
  __int64 v54; // rdx
  unsigned __int64 v55; // rcx
  unsigned __int64 v56; // r9
  unsigned __int64 v57; // r10
  __int64 v58; // rdx
  struct _LIST_ENTRY *v59; // r8
  __int64 v60; // rax
  __int64 v61; // r8
  ULONG_PTR v62; // r11
  _QWORD *v63; // rdx
  int v64; // r8d
  unsigned __int64 v65; // rdx
  unsigned __int64 v66; // rdx
  __int64 v67; // r14
  unsigned __int64 v68; // rcx
  unsigned __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rbx
  unsigned __int64 v72; // rdx
  __int64 v73; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // rbx
  unsigned __int64 v80; // r14
  unsigned __int64 v81; // rsi
  __int64 v82; // rdx
  __int64 v83; // r8
  _DWORD *v84; // r9
  __int64 v85; // rax
  __int64 v86; // rax
  __int16 v87; // ax
  __int64 v88; // r12
  unsigned __int64 v89; // r14
  unsigned __int64 v90; // r9
  unsigned __int64 v91; // rcx
  char v92; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v94; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v96; // rcx
  int v97; // edx
  char *PageTableLockBuffer; // rax
  unsigned __int64 v99; // rdx
  unsigned __int64 v100; // r9
  struct _LIST_ENTRY *v101; // r8
  __int64 v102; // rax
  __int64 v103; // r8
  LONG *v104; // rax
  struct _KPRCB *v105; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  int v109; // edx
  unsigned int v110; // ebx
  _KTHREAD *NextThread; // rax
  ULONG_PTR v112; // rdx
  struct _LIST_ENTRY *v113; // r8
  __int64 v114; // rax
  __int64 v115; // r8
  __int64 v116; // r13
  __int64 v117; // rdx
  __int64 v118; // r8
  _DWORD *v119; // r9
  __int64 v120; // rdx
  ULONG_PTR v121; // rdi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v123; // rax
  __int16 v124; // di
  unsigned int v125; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 LeafVa; // rax
  __int64 result; // rax
  int *v129; // rdx
  int v130; // ecx
  __int16 v132; // [rsp+34h] [rbp-CCh] BYREF
  int v133; // [rsp+38h] [rbp-C8h]
  int v134; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v135; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v136; // [rsp+48h] [rbp-B8h]
  __int16 v137; // [rsp+50h] [rbp-B0h]
  int v138; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v142; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v143; // [rsp+78h] [rbp-88h]
  int v144; // [rsp+80h] [rbp-80h]
  int v145; // [rsp+84h] [rbp-7Ch]
  __int64 v146; // [rsp+88h] [rbp-78h] BYREF
  int v147; // [rsp+90h] [rbp-70h]
  int v148; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v149; // [rsp+98h] [rbp-68h]
  unsigned __int64 v150; // [rsp+A0h] [rbp-60h]
  __int64 v151; // [rsp+A8h] [rbp-58h]
  _QWORD *v152; // [rsp+B0h] [rbp-50h]
  int *v153; // [rsp+B8h] [rbp-48h]
  int *v154; // [rsp+C0h] [rbp-40h]
  _WORD *v155; // [rsp+C8h] [rbp-38h]
  __int128 v156; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v157; // [rsp+E0h] [rbp-20h]
  int *v158; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v159; // [rsp+F0h] [rbp-10h]
  _QWORD v160[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v153 = a6;
  v11 = a3;
  v154 = a7;
  v155 = a8;
  v152 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v158 = a10;
  v135 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v146 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E648 + 8 * v14);
  *a10 = 1;
  v137 = (__int16)v12;
  v132 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v159 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v136 = v15;
  v150 = v16;
  v147 = 0x2000;
  v17 = 0LL;
  v144 = 0;
  v145 = 0;
  v143 = 0LL;
  v18 = 0LL;
  v151 = 0LL;
  v157 = v16 << 25 >> 16;
LABEL_2:
  v149 = v16;
  v142 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v156 = 0LL;
  memset((char *)v160 + 2, 0, 0xAEuLL);
  LOWORD(v160[0]) = 2145;
  v20 = (__int64)((v15 << 25) - v18) >> 16;
  v21 = v20;
  if ( v20 >= 0xFFFFF68000000000uLL )
  {
    do
    {
      if ( v21 > 0xFFFFF6FFFFFFFFFFuLL )
        break;
      v21 = (__int64)((v21 << 25) - v18) >> 16;
    }
    while ( v21 >= 0xFFFFF68000000000uLL );
    v11 = a3;
  }
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4FB38 && v21 <= qword_140C4E368 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    LODWORD(v156) = v23 - 1;
    v25 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v156 + 1) = v25;
  }
  else
  {
    LOWORD(v160[0]) |= 4u;
    v160[21] = &v156;
    v160[2] = 0LL;
    v160[3] = AnyMultiplexedVm;
    BYTE2(v160[0]) = BYTE2(v160[0]) & 0xE3 | 4;
    v160[20] = MiGetNextPageTableTail;
    v160[5] = v157;
    BYTE6(v160[0]) = v11;
    v160[4] = v20;
    MiWalkPageTables((__int64)v160);
    v24 = v156;
    v25 = *((_QWORD *)&v156 + 1);
  }
  if ( v25 )
  {
    v26 = (unsigned __int64 *)(((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v143 = v26;
    if ( v24 )
    {
      v27 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v24 > 1 )
      {
        v28 = v24 - 1;
        do
        {
          v27 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v28;
        }
        while ( v28 );
      }
      v26 = (unsigned __int64 *)(((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( v25 == v15 )
      {
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v27);
        v121 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter3, v120)
            && (unsigned int)MiPteHasShadow()
            && ((v121 & 0x20) == 0 || (v121 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v123 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v123 & 0x20) != 0 )
                v121 |= 0x20uLL;
              if ( (v123 & 0x42) != 0 )
                v121 |= 0x42uLL;
            }
            else
            {
              v121 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DF40 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v121 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v121 = ~qword_140C4DF40 & BugCheckParameter3;
        }
        v124 = (*(_QWORD *)(48 * ((v121 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v125 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v125 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v125 >> 7) & 0x1F;
        *v153 = ProtectionFromPte;
        MiUnlockPageTableInternal((__int64)v135, (unsigned __int64)v26);
        *v154 = 0;
        *v155 = v124;
        LeafVa = MiGetLeafVa(v27 + 8);
        *v152 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v25 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v142 = 1;
      v25 = v15 + 8;
      v29 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal((__int64)v135, (unsigned __int64)v26);
    v143 = 0LL;
    v29 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v29 > v150 )
      v29 = v150;
    v149 = v29;
    goto LABEL_25;
  }
  v25 = v150 + 8;
LABEL_25:
  v30 = 0;
  while ( 1 )
  {
    v31 = BugCheckParameter3;
    v32 = v30;
    v134 = v30;
    v33 = 0x2000;
    v138 = v30;
    v133 = v30;
    if ( !BugCheckParameter3 )
    {
      v43 = BugCheckParameter2;
      *v158 = v30;
      v44 = *(_DWORD *)(v43 + 48);
      if ( (*(_BYTE *)(v43 + 48) & 0x70) == 0x30 || (v44 & 0x70) == 0x10 )
      {
        if ( (v44 & 0x70) == 0x30 )
          v132 = *(_WORD *)MiGetAweVadPartition(v43);
LABEL_69:
        v41 = v32;
LABEL_70:
        v42 = a5;
        goto LABEL_71;
      }
      if ( (v44 & 0x100000) != 0 )
      {
        if ( *(int *)(v43 + 52) >= 0 )
        {
          v41 = v30;
        }
        else
        {
          v33 = 4096;
          v41 = (v44 >> 7) & 0x1F;
          v138 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v43);
        }
        if ( (v44 & 0x500000) == 0x500000 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v43, 16);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[3] && PsReferencePartitionSafe((__int64)LockedVadEvent[3]) )
            {
              v132 = **v46;
              PsDereferencePartition((__int64)v46);
              v30 = 0;
            }
          }
        }
        goto LABEL_70;
      }
      v47 = v10 >> 12;
      v132 = **(_WORD **)(qword_140C4E648 + 8LL * (*(_WORD *)(**(_QWORD **)(v43 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v43, v47, 4LL, &v146);
      v48 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !MiQueryStateMatches(a5, 0x2000, 0, 0, 0) )
        {
          v15 = v136;
          v32 = 1;
          v41 = v134;
          v25 = v136;
          v133 = 1;
LABEL_71:
          v40 = (__int64)v135;
LABEL_72:
          v34 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v146 && !*(_QWORD *)(v146 + 8) )
        {
          v15 = v136;
          v50 = MiSkipEntirePagefileRegions(v49, v47, v136, v25, v146);
          v40 = (__int64)v135;
          v30 = 0;
          v42 = a5;
          v25 = v50;
          v34 = 0xFFFFF6FB7DBED000uLL;
          v41 = v32;
          if ( v50 == v15 )
            v25 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v136;
        v25 = v136 + 8;
        goto LABEL_69;
      }
      v51 = v146;
      if ( v19 )
      {
        v52 = v136;
        v53 = *(_QWORD *)(v146 + 8);
        v54 = ((__int64)(v149 - v136) >> 3) + 1;
        if ( v54 > 32 )
          v54 = 32LL;
        v55 = v53 + 8 * (*(unsigned int *)(v146 + 44) - (unsigned __int64)(*(_DWORD *)(v146 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v146 + 34) & 2) != 0 || ProtoPteAddress < v53 || ProtoPteAddress >= v55 )
        {
          v54 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v54 > v55 )
        {
          v54 = (__int64)(v55 - ProtoPteAddress) >> 3;
        }
        v56 = v136 - 8 + 8 * v54;
        v25 = v136 + 8;
        if ( v136 + 8 <= v56 )
        {
          v57 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v58 = *(_QWORD *)v25;
            if ( v25 >= v57
              && v25 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow()
              && (v58 & 1) != 0
              && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
            {
              v59 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
              if ( v59 )
              {
                v60 = *((_QWORD *)&v59->Flink + ((v25 >> 3) & 0x1FF));
                v61 = v58 | 0x20;
                if ( (v60 & 0x20) == 0 )
                  v61 = v58;
                v58 = v61;
                if ( (v60 & 0x42) != 0 )
                  v58 = v61 | 0x42;
              }
            }
            if ( v58 )
              break;
            v25 += 8LL;
          }
          while ( v25 <= v56 );
          v48 = ProtoPteAddress;
          v51 = v146;
          v52 = v136;
        }
        if ( v142 )
          goto LABEL_103;
      }
      else
      {
        if ( v142 )
        {
LABEL_103:
          v62 = BugCheckParameter2;
          goto LABEL_104;
        }
        v52 = v136;
        v66 = *(_QWORD *)(v146 + 8);
        v67 = (__int64)(v25 - v136) >> 3;
        v68 = v66 + 8 * (*(unsigned int *)(v146 + 44) - (unsigned __int64)(*(_DWORD *)(v146 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v146 + 34) & 2) != 0 || ProtoPteAddress < v66 || ProtoPteAddress >= v68 )
        {
          v67 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v67 > v68 )
        {
          v67 = (__int64)(v68 - ProtoPteAddress) >> 3;
        }
        v25 = v136 + 8 * v67;
      }
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v69 = MiSkipFractionalPagefileRegion(v48, v51, (__int64)(v25 - v52) >> 3);
        v62 = BugCheckParameter2;
        if ( v69 != v48 )
        {
          v70 = (__int64)(v69 - v48) >> 3;
          v30 = 0;
          v48 = 0LL;
          ProtoPteAddress = 0LL;
          v25 = v52 + 8 * v70;
LABEL_105:
          v63 = *(_QWORD **)(v62 + 120);
          if ( (__int64)v63 >= 0 )
          {
            v64 = 0;
            v65 = -1LL;
          }
          else
          {
            v64 = 1;
            v65 = (unsigned __int64)(*v63 - 1LL) >> 12;
          }
          if ( v48 )
          {
            if ( (*(_DWORD *)(v62 + 48) & 0x70) == 0x20 )
            {
              v71 = *(__int64 **)(v62 + 72);
              v30 = 0;
              v72 = 0LL;
              if ( v71 )
              {
                do
                {
                  if ( (*((_BYTE *)v71 + 34) & 2) != 0 && (v73 = *v71, (*(_DWORD *)(*v71 + 56) & 0x4000000) != 0) )
                  {
                    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                    SharedProtos = MiGetSharedProtos(v73, SessionId, v71);
                    v48 = ProtoPteAddress;
                    v72 = *(_QWORD *)(SharedProtos + 72);
                  }
                  else
                  {
                    v72 = v71[1];
                  }
                  if ( v48 >= v72 && v48 < v72 + 8LL * *((unsigned int *)v71 + 11) )
                    break;
                  v71 = (__int64 *)v71[2];
                }
                while ( v71 );
                v62 = BugCheckParameter2;
                v30 = 0;
              }
              if ( (__int64)(v48 - v72) >> 3 < (unsigned __int64)(*((_DWORD *)v71 + 11)
                                                                - (*((_DWORD *)v71 + 13) & 0x3FFFFFFFu)) )
              {
                v41 = (*(_DWORD *)(v62 + 48) >> 7) & 0x1F;
                if ( v41 == 7 )
                  v41 = (*((unsigned __int16 *)v71 + 16) >> 1) & 0x1F;
                v15 = v136;
                v32 = v133;
                v40 = (__int64)v135;
                v42 = a5;
                v34 = 0xFFFFF6FB7DBED000uLL;
                if ( v41 )
                  v33 = 4096;
                goto LABEL_73;
              }
              v15 = v136;
              v41 = 0;
              v32 = v133;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v51 + 64LL) && (*(_DWORD *)(*(_QWORD *)v51 + 56LL) & 0x2000) == 0 )
              {
                if ( v143 )
                {
                  MiUnlockPageTableInternal((__int64)v135, (unsigned __int64)v143);
                  v143 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v135, a3);
                v77 = *(unsigned int *)(v51 + 44) - (unsigned __int64)(*(_DWORD *)(v51 + 52) & 0x3FFFFFFF);
                v78 = *(_QWORD *)(v51 + 8);
                v79 = *(_QWORD *)v48;
                v80 = (__int64)(v25 - v136) >> 3;
                v81 = (__int64)(v78 + 8 * v77 - v48) >> 3;
                if ( v81 > v80 )
                  v81 = v80;
                if ( (unsigned int)MiPteInShadowRange(v48, v76)
                  && (unsigned int)MiPteHasShadow()
                  && (v79 & 1) != 0
                  && ((v79 & 0x20) == 0 || (v79 & 0x42) == 0) )
                {
                  v48 = ProtoPteAddress;
                  v82 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v82 )
                  {
                    v85 = *(_QWORD *)(v82 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                    v82 = v79 | 0x20;
                    if ( (v85 & 0x20) == 0 )
                      v82 = v79;
                    v79 = v82;
                    if ( (v85 & 0x42) != 0 )
                      v79 = v82 | 0x42;
                  }
                }
                if ( v79 )
                {
                  v33 = 4096;
                  v41 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v41 = v134;
                }
                if ( !a5 || MiQueryStateMatches(a5, v33, v41, 0, v132) )
                {
                  if ( v81 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v82 = *(_QWORD *)v48;
                      if ( v48 >= 0xFFFFF6FB7DBED000uLL
                        && v48 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow()
                        && (v82 & 1) != 0
                        && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0) )
                      {
                        v48 = ProtoPteAddress;
                        v83 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                        if ( v83 )
                        {
                          v86 = *(_QWORD *)(v83 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                          v83 = v82 | 0x20;
                          if ( (v86 & 0x20) == 0 )
                            v83 = v82;
                          v82 = v83;
                          if ( (v86 & 0x42) != 0 )
                            v82 = v83 | 0x42;
                        }
                      }
                      if ( v82 )
                      {
                        if ( v33 != 4096 )
                          break;
                      }
                      else if ( v33 == 4096 )
                      {
                        break;
                      }
                      v48 += 8LL;
                      ++v17;
                      ProtoPteAddress = v48;
                      if ( !--v81 )
                        break;
                      while ( (v48 & 0xFFF) == 0 )
                      {
                        v87 = MI_READ_PTE_LOCK_FREE(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v87 & 1) != 0 || (v87 & 0x3E0) != 0 )
                        {
                          if ( v33 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v33 == 4096 )
                          goto LABEL_185;
                        if ( v81 <= 0x200 )
                        {
                          v17 += v81;
                          ProtoPteAddress = v48 + 8 * v81;
                          goto LABEL_185;
                        }
                        v48 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v48;
                        v81 -= 512LL;
                        if ( !v81 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v32 = v133;
                }
                else
                {
                  v32 = 1;
                  v133 = 1;
                  v17 = 0LL;
                }
                v15 = v136;
                v40 = (__int64)v135;
                v25 = v136 + 8 * v17;
                MiLockWorkingSetShared((__int64)v135, v82, v83, v84);
                v42 = a5;
                v30 = 0;
                goto LABEL_72;
              }
              v88 = *(_QWORD *)(v51 + 8)
                  + 8 * (*(unsigned int *)(v51 + 44) - (unsigned __int64)(*(_DWORD *)(v51 + 52) & 0x3FFFFFFF))
                  - v48;
              v15 = v136;
              v17 = v88 >> 3;
              v89 = (__int64)(v25 - v136) >> 3;
              if ( v17 > v89 )
                v17 = v89;
              v90 = v17;
              if ( v64 )
              {
                v91 = *(unsigned int *)(v62 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v62 + 32) << 32);
                if ( v47 - v91 <= v65 )
                {
                  v17 = v91 - v47 + v65 + 1;
                  v64 = 0;
                  if ( v90 <= v17 )
                    v17 = v90;
                }
              }
              v25 = v136 + 8 * v17;
              if ( v64 )
                v41 = v134;
              else
                v41 = (*(_DWORD *)(v62 + 48) >> 7) & 0x1F;
              v32 = v133;
              v33 = 4096;
              if ( v64 )
                v33 = 0x2000;
              v30 = 0;
            }
          }
          else
          {
            v41 = v134;
            v32 = v134;
            v15 = v136;
          }
          goto LABEL_70;
        }
      }
LABEL_104:
      v30 = 0;
      goto LABEL_105;
    }
    v34 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow()
      && (v35 & 1) != 0
      && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
    {
      v36 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v36 )
      {
        v37 = *((_QWORD *)&v36->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v31 = v35;
        if ( (v37 & 0x20) != 0 )
          v31 = v35 | 0x20;
        if ( (v37 & 0x42) != 0 )
          v31 |= 0x42uLL;
      }
      else
      {
        v31 = BugCheckParameter3;
      }
    }
    if ( (v31 & 0x3E0) == 0x200 && (v31 & 1) == 0 && ((v31 & 0x400) == 0 || MiIsPrototypePteVadLookup(v31)) )
    {
      v40 = (__int64)v135;
      v41 = v32;
      v42 = a5;
    }
    else
    {
      v33 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v132);
      v39 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v116 = (__int64)v135;
        MiUnlockPageTableInternal((__int64)v135, (unsigned __int64)v143);
        v143 = 0LL;
        MiUnlockWorkingSetShared(v116, a3);
        MiFaultInPagedPool(v39);
        MiLockWorkingSetShared(v116, v117, v118, v119);
        v16 = v150;
        v18 = v151;
        v11 = a3;
        goto LABEL_2;
      }
      v32 = v133;
      v30 = 0;
      v40 = (__int64)v135;
      v41 = PageProtection;
      v42 = a5;
      v34 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v33 = 0x2000;
    }
LABEL_73:
    if ( v15 == v159 )
    {
      v137 = v132;
      v147 = v33;
      v144 = v41;
      v145 = v138;
      if ( v42 && !MiQueryStateMatches(v42, v33, v41, v138, v132) )
        goto LABEL_311;
      goto LABEL_269;
    }
    if ( v33 != v147 || v132 != v137 || v41 != v144 || v138 != v145 )
      break;
    if ( v17 || v32 == 1 || (__int64)((v15 - v159) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_269;
    if ( !v143 )
      goto LABEL_243;
    v92 = *(_BYTE *)(v40 + 184) & 7;
    v148 = v30;
    if ( v143 == (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v92 )
      {
        if ( v92 == 7 )
        {
          v94 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
        }
        else
        {
          if ( v92 == 5 )
            Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
          else
            Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
          v94 = Next == 0LL;
        }
      }
      else
      {
        v94 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
      }
    }
    else
    {
      if ( v92
        || (unsigned __int64)v143 < v34
        || (unsigned __int64)v143 > 0xFFFFF6FB7DBEDFFFuLL
        || (v96 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
      {
        if ( v92 && (unsigned __int64)v143 >= v34 && (unsigned __int64)v143 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = MiGetPageTableLockBuffer(v40, (__int64)v143, &v148);
          v94 = ((*(_DWORD *)PageTableLockBuffer >> v148) & 2) == 0;
          goto LABEL_242;
        }
        v99 = *v143;
        if ( (unsigned __int64)v143 >= v34
          && (unsigned __int64)v143 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v99 & 1) != 0
          && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
        {
          v101 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v101 )
          {
            v102 = *((_QWORD *)&v101->Flink + ((v100 >> 3) & 0x1FF));
            v103 = v99 | 0x20;
            if ( (v102 & 0x20) == 0 )
              v103 = v99;
            v99 = v103;
            if ( (v102 & 0x42) != 0 )
              v99 = v103 | 0x42;
          }
        }
        v97 = (v99 >> 60) & 2;
      }
      else
      {
        v97 = (*(_DWORD *)(v96 + 4LL * (((unsigned int)v143 >> 3) & 0x1FF)) >> 30) & 1;
      }
      v94 = v97 == 0;
    }
LABEL_242:
    if ( !v94 )
      goto LABEL_309;
LABEL_243:
    v104 = &dword_140C4F780;
    if ( (*(_BYTE *)(v40 + 184) & 7) != 2 )
      v104 = (LONG *)(v40 + 192);
    if ( (*v104 & 0x40000000) != 0 )
      goto LABEL_309;
    if ( a3 < 2u )
    {
      v105 = KeGetCurrentPrcb();
      DpcRequestSummary = v105->DpcRequestSummary;
      DpcWatchdogCount = v105->DpcWatchdogCount;
      DpcTimeCount = v105->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v109 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( v105->QuantumEnd )
          {
            v110 = 1;
LABEL_265:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v110, DpcWatchdogCount, DpcTimeCount);
              v30 = 0;
            }
            if ( v110 )
            {
              v15 = v136;
LABEL_309:
              v25 = v15 + 8;
              goto LABEL_312;
            }
LABEL_268:
            v15 = v136;
            goto LABEL_269;
          }
LABEL_260:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v110 = 5;
            goto LABEL_265;
          }
          if ( v105->CurrentThread != v105->IdleThread )
          {
            v110 = 6;
            goto LABEL_265;
          }
LABEL_264:
          _disable();
          v105->DpcWatchdogCount = v30;
          v105->DpcTimeCount = v30;
          KiResetGlobalDpcWatchdogProfiler((__int64)v105);
          _enable();
          v30 = 0;
          v110 = 0;
          goto LABEL_265;
        }
      }
      else
      {
        v109 = v30;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v110 = 2;
          goto LABEL_265;
        }
        if ( v105->QuantumEnd )
        {
          v110 = 3;
          goto LABEL_265;
        }
        NextThread = v105->NextThread;
        if ( NextThread && NextThread != v105->CurrentThread )
        {
          v110 = 4;
          goto LABEL_265;
        }
      }
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_268;
      if ( v109 )
        goto LABEL_260;
      goto LABEL_264;
    }
LABEL_269:
    if ( v133 )
      goto LABEL_312;
    if ( v17 )
      goto LABEL_312;
    v15 += 8LL;
    v136 = v15;
    if ( v25 != v15 || v25 > v149 )
      goto LABEL_312;
    if ( v142 )
    {
      v112 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v112 & 1) != 0
        && ((v112 & 0x20) == 0 || (v112 & 0x42) == 0) )
      {
        v113 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v113 )
        {
          v114 = *((_QWORD *)&v113->Flink + ((v15 >> 3) & 0x1FF));
          v115 = v112 | 0x20;
          if ( (v114 & 0x20) == 0 )
            v115 = v112;
          v112 = v115;
          if ( (v114 & 0x42) != 0 )
            v112 = v115 | 0x42;
        }
      }
      BugCheckParameter3 = v112;
    }
    v19 = v30;
    v10 = (__int64)((v15 << 25) - v151) >> 16;
    v25 += 8LL;
  }
  v41 = v144;
  v33 = v147;
  v132 = v137;
  v138 = v145;
LABEL_311:
  v25 = v15;
LABEL_312:
  if ( v143 )
    MiUnlockPageTableInternal((__int64)v135, (unsigned __int64)v143);
  result = v33;
  v129 = v153;
  *v152 = (__int64)((v25 << 25) - v151) >> 16;
  v130 = v138;
  *v129 = v41;
  *v154 = v130;
  *v155 = v132;
  return result;
}
