/*
 * XREFs of MiQueryAddressState @ 0x1402B1190
 * Callers:
 *     MiQueryAddressSpan @ 0x14024B6F0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1402FB894 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x140332D80 (MiComparePteProtections.c)
 * Callees:
 *     MiWalkPageTables @ 0x140204BE0 (MiWalkPageTables.c)
 *     MmGetSessionIdEx @ 0x140207F90 (MmGetSessionIdEx.c)
 *     MiGetLeafVa @ 0x1402374D0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14024B630 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiQueryStateMatches @ 0x14024C490 (MiQueryStateMatches.c)
 *     MiGetAnyMultiplexedVm @ 0x140250128 (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x14025109C (MiLocateLockedVadEvent.c)
 *     PsDereferencePartition @ 0x14026AD90 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x14026ADB8 (PsReferencePartitionSafe.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x140278D38 (MiGetPageTableLockBuffer.c)
 *     MiGetProtoPteAddress @ 0x14029A830 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x1402A06B0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402ADBF0 (MiVadPureReserve.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiIsPrototypePteVadLookup @ 0x140315EC0 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140327CB8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x140350A58 (MiSkipFractionalPagefileRegion.c)
 *     MiGetSharedProtos @ 0x1403A3578 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403EE8A0 (MiGetProtectionFromPte.c)
 *     memset @ 0x14040A280 (memset.c)
 *     MiFaultInPagedPool @ 0x140527C44 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140542280 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x140546FB0 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A2C4C (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiQueryAddressState(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        ULONG_PTR a4,
        _KPROCESS *a5,
        int *a6,
        int *a7,
        _WORD *a8,
        _QWORD *a9,
        unsigned int *a10)
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
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r14
  unsigned __int64 *v27; // r13
  unsigned __int64 v28; // rbx
  __int64 v29; // rcx
  unsigned __int64 v30; // r13
  unsigned int v31; // r10d
  ULONG_PTR v32; // rdx
  int v33; // ebx
  unsigned int v34; // r13d
  ULONG_PTR v35; // r8
  unsigned __int64 v36; // r11
  struct _LIST_ENTRY *v37; // rdx
  __int64 v38; // rax
  int PageProtection; // eax
  unsigned __int64 v40; // rbx
  __int64 v41; // rsi
  int v42; // r15d
  __int64 v43; // rcx
  ULONG_PTR v44; // r11
  unsigned int v45; // r9d
  __int64 **LockedVadEvent; // rax
  __int16 **v47; // r8
  __int64 v48; // r15
  unsigned __int64 v49; // rdi
  int v50; // r11d
  __int64 v51; // rax
  __int64 v52; // r8
  __int64 v53; // rbx
  unsigned __int64 v54; // rsi
  unsigned __int64 v55; // r8
  __int64 v56; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v58; // r10
  __int64 v59; // rdx
  __int64 v60; // rax
  ULONG_PTR v61; // r11
  _QWORD *v62; // rdx
  int v63; // r8d
  unsigned __int64 v64; // rdx
  unsigned __int64 v65; // rdx
  __int64 v66; // r14
  unsigned __int64 v67; // rcx
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 *v70; // rbx
  unsigned __int64 v71; // rdx
  __int64 v72; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v75; // rcx
  __int64 v76; // rax
  __int64 v77; // rbx
  unsigned __int64 v78; // r14
  unsigned __int64 v79; // rsi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  struct _LIST_ENTRY *v84; // rdx
  __int64 v85; // rax
  __int64 v86; // rdx
  _KPROCESS *v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rax
  __int16 v90; // ax
  __int64 v91; // r12
  unsigned __int64 v92; // r14
  unsigned __int64 v93; // rcx
  char v94; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v96; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v98; // edx
  char *PageTableLockBuffer; // rax
  unsigned __int64 v100; // rdx
  __int64 v101; // rax
  LONG *v102; // rax
  unsigned int v103; // edi
  unsigned int v104; // esi
  int v105; // edx
  unsigned int v106; // ebx
  __int64 v107; // rax
  ULONG_PTR v108; // rdx
  struct _LIST_ENTRY *v109; // r8
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // r13
  ULONG_PTR v113; // rdi
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // r8
  __int64 v117; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v119; // rax
  __int16 v120; // di
  unsigned int v121; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 LeafVa; // rax
  __int64 result; // rax
  int *v125; // rdx
  int v126; // ecx
  __int16 v128; // [rsp+34h] [rbp-CCh] BYREF
  int v129; // [rsp+38h] [rbp-C8h]
  unsigned int v130; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v131; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v132; // [rsp+48h] [rbp-B8h]
  __int16 v133; // [rsp+50h] [rbp-B0h]
  unsigned int v134; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v138; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v139; // [rsp+78h] [rbp-88h]
  int v140; // [rsp+80h] [rbp-80h]
  unsigned int v141; // [rsp+84h] [rbp-7Ch]
  __int64 v142; // [rsp+88h] [rbp-78h] BYREF
  int v143; // [rsp+90h] [rbp-70h]
  unsigned int v144; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v145; // [rsp+98h] [rbp-68h]
  unsigned __int64 v146; // [rsp+A0h] [rbp-60h]
  __int64 v147; // [rsp+A8h] [rbp-58h]
  _QWORD *v148; // [rsp+B0h] [rbp-50h]
  int *v149; // [rsp+B8h] [rbp-48h]
  int *v150; // [rsp+C0h] [rbp-40h]
  _WORD *v151; // [rsp+C8h] [rbp-38h]
  __int128 v152; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v153; // [rsp+E0h] [rbp-20h]
  unsigned int *v154; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v155; // [rsp+F0h] [rbp-10h]
  _QWORD v156[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v149 = a6;
  v11 = a3;
  v150 = a7;
  v151 = a8;
  v148 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v154 = a10;
  v131 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v142 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E448 + 8 * v14);
  *a10 = 1;
  v133 = (__int16)v12;
  v128 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v155 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v132 = v15;
  v146 = v16;
  v143 = 0x2000;
  v17 = 0LL;
  v140 = 0;
  v141 = 0;
  v139 = 0LL;
  v18 = 0LL;
  v147 = 0LL;
  v153 = v16 << 25 >> 16;
LABEL_2:
  v145 = v16;
  v138 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v152 = 0LL;
  memset((char *)v156 + 2, 0, 0xAEuLL);
  LOWORD(v156[0]) = 2145;
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
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4F938 && v21 <= qword_140C4E168 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    v25 = 0x7FFFFFFFF8LL;
    LODWORD(v152) = v23 - 1;
    v26 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v152 + 1) = v26;
  }
  else
  {
    LOWORD(v156[0]) |= 4u;
    v156[21] = &v152;
    v156[2] = 0LL;
    v156[3] = AnyMultiplexedVm;
    BYTE2(v156[0]) = BYTE2(v156[0]) & 0xE3 | 4;
    v156[20] = MiGetNextPageTableTail;
    v156[5] = v153;
    BYTE6(v156[0]) = v11;
    v156[4] = v20;
    MiWalkPageTables((__int16 *)v156);
    v24 = v152;
    v25 = 0x7FFFFFFFF8LL;
    v26 = *((_QWORD *)&v152 + 1);
  }
  if ( v26 )
  {
    v27 = (unsigned __int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v139 = v27;
    if ( v24 )
    {
      v28 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v24 > 1 )
      {
        v29 = v24 - 1;
        do
        {
          v28 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          --v29;
        }
        while ( v29 );
      }
      v27 = (unsigned __int64 *)(((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( v26 == v15 )
      {
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v28);
        v113 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&BugCheckParameter3)
            && (unsigned int)MiPteHasShadow(v115, v114, v116, v117)
            && ((v113 & 0x20) == 0 || (v113 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v119 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v119 & 0x20) != 0 )
                v113 |= 0x20uLL;
              if ( (v119 & 0x42) != 0 )
                v113 |= 0x42uLL;
            }
            else
            {
              v113 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DD40 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v113 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v113 = ~qword_140C4DD40 & BugCheckParameter3;
        }
        v120 = (*(_QWORD *)(48 * ((v113 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v121 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v121 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v121 >> 7) & 0x1F;
        *v149 = ProtectionFromPte;
        MiUnlockPageTableInternal((__int64)v131, (unsigned __int64)v27);
        *v150 = 0;
        *v151 = v120;
        LeafVa = MiGetLeafVa(v28 + 8);
        *v148 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v26 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v138 = 1;
      v26 = v15 + 8;
      v30 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal((__int64)v131, (unsigned __int64)v27);
    v139 = 0LL;
    v30 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v30 > v146 )
      v30 = v146;
    v145 = v30;
    goto LABEL_25;
  }
  v26 = v146 + 8;
LABEL_25:
  v31 = 0;
  while ( 1 )
  {
    v32 = BugCheckParameter3;
    v33 = v31;
    v130 = v31;
    v34 = 0x2000;
    v134 = v31;
    v129 = v31;
    if ( !BugCheckParameter3 )
    {
      v44 = BugCheckParameter2;
      *v154 = v31;
      v45 = *(_DWORD *)(v44 + 48);
      if ( (*(_BYTE *)(v44 + 48) & 0x70) == 0x30 || (v45 & 0x70) == 0x10 )
      {
        v25 = v45 & 0x70;
        if ( (_BYTE)v25 == 48 )
          v128 = *(_WORD *)MiGetAweVadPartition(v44);
LABEL_69:
        v42 = v33;
LABEL_70:
        v43 = (__int64)a5;
        goto LABEL_71;
      }
      if ( (v45 & 0x100000) != 0 )
      {
        if ( *(int *)(v44 + 52) >= 0 )
        {
          v42 = v31;
        }
        else
        {
          v34 = 4096;
          v42 = (v45 >> 7) & 0x1F;
          v134 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v44);
        }
        v25 = v45 & 0x500000;
        if ( (_DWORD)v25 == 5242880 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v44, 16);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[3] && PsReferencePartitionSafe((__int64)LockedVadEvent[3]) )
            {
              v128 = **v47;
              PsDereferencePartition((__int64)v47);
              v31 = 0;
            }
          }
        }
        goto LABEL_70;
      }
      v48 = v10 >> 12;
      v128 = **(_WORD **)(qword_140C4E448 + 8LL * (*(_WORD *)(**(_QWORD **)(v44 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v44, v48, 4, &v142);
      v49 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !MiQueryStateMatches((__int64)a5, 0x2000, 0, 0, 0) )
        {
          v15 = v132;
          v33 = 1;
          v42 = v130;
          v26 = v132;
          v129 = 1;
LABEL_71:
          v41 = (__int64)v131;
LABEL_72:
          v36 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v142 && !*(_QWORD *)(v142 + 8) )
        {
          v15 = v132;
          v51 = MiSkipEntirePagefileRegions(v50, v48, v132, v26, v142);
          v41 = (__int64)v131;
          v31 = 0;
          v43 = (__int64)a5;
          v26 = v51;
          v36 = 0xFFFFF6FB7DBED000uLL;
          v42 = v33;
          if ( v51 == v15 )
            v26 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v132;
        v26 = v132 + 8;
        goto LABEL_69;
      }
      v53 = v142;
      if ( v19 )
      {
        v54 = v132;
        v55 = *(_QWORD *)(v142 + 8);
        v56 = ((__int64)(v145 - v132) >> 3) + 1;
        if ( v56 > 32 )
          v56 = 32LL;
        Process = v55 + 8 * (*(unsigned int *)(v142 + 44) - (unsigned __int64)(*(_DWORD *)(v142 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v142 + 34) & 2) != 0 || ProtoPteAddress < v55 || ProtoPteAddress >= Process )
        {
          v56 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v56 > Process )
        {
          v56 = (__int64)(Process - ProtoPteAddress) >> 3;
        }
        v25 = v132 - 8 + 8 * v56;
        v26 = v132 + 8;
        if ( v132 + 8 <= v25 )
        {
          v58 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v59 = *(_QWORD *)v26;
            if ( v26 >= v58
              && v26 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v59, v55, v25)
              && (v59 & 1) != 0
              && ((v59 & 0x20) == 0 || (v59 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v55 = *(_QWORD *)(Process + 1928);
              if ( v55 )
              {
                v60 = *(_QWORD *)(v55 + 8 * ((v26 >> 3) & 0x1FF));
                v55 = v59 | 0x20;
                Process = (unsigned __int8)v60;
                LOBYTE(Process) = v60 & 0x20;
                if ( (v60 & 0x20) == 0 )
                  v55 = v59;
                v59 = v55;
                if ( (v60 & 0x42) != 0 )
                  v59 = v55 | 0x42;
              }
            }
            if ( v59 )
              break;
            v26 += 8LL;
          }
          while ( v26 <= v25 );
          v49 = ProtoPteAddress;
          v53 = v142;
          v54 = v132;
        }
        if ( v138 )
          goto LABEL_103;
      }
      else
      {
        if ( v138 )
        {
LABEL_103:
          v61 = BugCheckParameter2;
          goto LABEL_104;
        }
        v54 = v132;
        v65 = *(_QWORD *)(v142 + 8);
        v66 = (__int64)(v26 - v132) >> 3;
        v67 = v65 + 8 * (*(unsigned int *)(v142 + 44) - (unsigned __int64)(*(_DWORD *)(v142 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v142 + 34) & 2) != 0 || ProtoPteAddress < v65 || ProtoPteAddress >= v67 )
        {
          v66 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v66 > v67 )
        {
          v66 = (__int64)(v67 - ProtoPteAddress) >> 3;
        }
        v26 = v132 + 8 * v66;
      }
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v68 = MiSkipFractionalPagefileRegion(v49, v53, (__int64)(v26 - v54) >> 3);
        v61 = BugCheckParameter2;
        if ( v68 != v49 )
        {
          v69 = (__int64)(v68 - v49) >> 3;
          v31 = 0;
          v49 = 0LL;
          ProtoPteAddress = 0LL;
          v26 = v54 + 8 * v69;
LABEL_105:
          v62 = *(_QWORD **)(v61 + 120);
          if ( (__int64)v62 >= 0 )
          {
            v63 = 0;
            v64 = -1LL;
          }
          else
          {
            v63 = 1;
            v64 = (unsigned __int64)(*v62 - 1LL) >> 12;
          }
          if ( v49 )
          {
            if ( (*(_DWORD *)(v61 + 48) & 0x70) == 0x20 )
            {
              v70 = *(__int64 **)(v61 + 72);
              v31 = 0;
              v71 = 0LL;
              if ( v70 )
              {
                do
                {
                  if ( (*((_BYTE *)v70 + 34) & 2) != 0 && (v72 = *v70, (*(_DWORD *)(*v70 + 56) & 0x4000000) != 0) )
                  {
                    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                    SharedProtos = MiGetSharedProtos(v72, SessionId, v70);
                    v49 = ProtoPteAddress;
                    v71 = *(_QWORD *)(SharedProtos + 72);
                  }
                  else
                  {
                    v71 = v70[1];
                  }
                  if ( v49 >= v71 && v49 < v71 + 8LL * *((unsigned int *)v70 + 11) )
                    break;
                  v70 = (__int64 *)v70[2];
                }
                while ( v70 );
                v61 = BugCheckParameter2;
                v31 = 0;
              }
              if ( (__int64)(v49 - v71) >> 3 < (unsigned __int64)(*((_DWORD *)v70 + 11)
                                                                - (*((_DWORD *)v70 + 13) & 0x3FFFFFFFu)) )
              {
                v42 = (*(_DWORD *)(v61 + 48) >> 7) & 0x1F;
                if ( v42 == 7 )
                  v42 = (*((unsigned __int16 *)v70 + 16) >> 1) & 0x1F;
                v15 = v132;
                v33 = v129;
                v41 = (__int64)v131;
                v43 = (__int64)a5;
                v36 = 0xFFFFF6FB7DBED000uLL;
                if ( v42 )
                  v34 = 4096;
                goto LABEL_73;
              }
              v15 = v132;
              v42 = 0;
              v33 = v129;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v53 + 64LL) && (*(_DWORD *)(*(_QWORD *)v53 + 56LL) & 0x2000) == 0 )
              {
                if ( v139 )
                {
                  MiUnlockPageTableInternal((__int64)v131, (unsigned __int64)v139);
                  v139 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v131, a3);
                v75 = *(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF);
                v76 = *(_QWORD *)(v53 + 8);
                v77 = *(_QWORD *)v49;
                v78 = (__int64)(v26 - v132) >> 3;
                v79 = (__int64)(v76 + 8 * v75 - v49) >> 3;
                if ( v79 > v78 )
                  v79 = v78;
                if ( MiPteInShadowRange(v49)
                  && (unsigned int)MiPteHasShadow(v81, v80, v82, v83)
                  && (v77 & 1) != 0
                  && ((v77 & 0x20) == 0 || (v77 & 0x42) == 0) )
                {
                  v49 = ProtoPteAddress;
                  v84 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v84 )
                  {
                    v85 = *((_QWORD *)&v84->Flink + ((ProtoPteAddress >> 3) & 0x1FF));
                    v86 = v77 | 0x20;
                    if ( (v85 & 0x20) == 0 )
                      v86 = v77;
                    v77 = v86;
                    if ( (v85 & 0x42) != 0 )
                      v77 = v86 | 0x42;
                  }
                }
                if ( v77 )
                {
                  v34 = 4096;
                  v42 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v42 = v130;
                }
                v87 = a5;
                if ( !a5 || MiQueryStateMatches((__int64)a5, v34, v42, 0, v128) )
                {
                  if ( v79 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v88 = *(_QWORD *)v49;
                      if ( v49 >= 0xFFFFF6FB7DBED000uLL
                        && v49 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow(v87, v88, v82, v83)
                        && (v88 & 1) != 0
                        && ((v88 & 0x20) == 0 || (v88 & 0x42) == 0) )
                      {
                        v49 = ProtoPteAddress;
                        v87 = KeGetCurrentThread()->ApcState.Process;
                        v82 = (__int64)v87[1].ProcessListEntry.Flink;
                        if ( v82 )
                        {
                          v89 = *(_QWORD *)(v82 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                          v82 = v88 | 0x20;
                          v87 = (_KPROCESS *)(unsigned __int8)v89;
                          LOBYTE(v87) = v89 & 0x20;
                          if ( (v89 & 0x20) == 0 )
                            v82 = v88;
                          v88 = v82;
                          if ( (v89 & 0x42) != 0 )
                            v88 = v82 | 0x42;
                        }
                      }
                      if ( v88 )
                      {
                        if ( v34 != 4096 )
                          break;
                      }
                      else if ( v34 == 4096 )
                      {
                        break;
                      }
                      v49 += 8LL;
                      ++v17;
                      ProtoPteAddress = v49;
                      if ( !--v79 )
                        break;
                      while ( (v49 & 0xFFF) == 0 )
                      {
                        v90 = MI_READ_PTE_LOCK_FREE(((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v90 & 1) != 0 || (v90 & 0x3E0) != 0 )
                        {
                          if ( v34 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v34 == 4096 )
                          goto LABEL_185;
                        if ( v79 <= 0x200 )
                        {
                          v17 += v79;
                          ProtoPteAddress = v49 + 8 * v79;
                          goto LABEL_185;
                        }
                        v49 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v49;
                        v79 -= 512LL;
                        if ( !v79 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v33 = v129;
                }
                else
                {
                  v33 = 1;
                  v129 = 1;
                  v17 = 0LL;
                }
                v15 = v132;
                v41 = (__int64)v131;
                v26 = v132 + 8 * v17;
                MiLockWorkingSetShared((__int64)v131);
                v43 = (__int64)a5;
                v31 = 0;
                goto LABEL_72;
              }
              v91 = *(_QWORD *)(v53 + 8)
                  + 8 * (*(unsigned int *)(v53 + 44) - (unsigned __int64)(*(_DWORD *)(v53 + 52) & 0x3FFFFFFF))
                  - v49;
              v15 = v132;
              v17 = v91 >> 3;
              v92 = (__int64)(v26 - v132) >> 3;
              if ( v17 > v92 )
                v17 = v92;
              v25 = v17;
              if ( v63 )
              {
                v93 = *(unsigned int *)(v61 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v61 + 32) << 32);
                if ( v48 - v93 <= v64 )
                {
                  v17 = v93 - v48 + v64 + 1;
                  v63 = 0;
                  if ( v25 <= v17 )
                    v17 = v25;
                }
              }
              v26 = v132 + 8 * v17;
              if ( v63 )
                v42 = v130;
              else
                v42 = (*(_DWORD *)(v61 + 48) >> 7) & 0x1F;
              v33 = v129;
              v34 = 4096;
              if ( v63 )
                v34 = 0x2000;
              v31 = 0;
            }
          }
          else
          {
            v42 = v130;
            v33 = v130;
            v15 = v132;
          }
          goto LABEL_70;
        }
      }
LABEL_104:
      v31 = 0;
      goto LABEL_105;
    }
    v35 = BugCheckParameter3;
    v36 = 0xFFFFF6FB7DBED000uLL;
    if ( (unsigned __int64)&BugCheckParameter3 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)&BugCheckParameter3 <= 0xFFFFF6FB7DBED7F8uLL
      && (unsigned int)MiPteHasShadow(&BugCheckParameter3, BugCheckParameter3, BugCheckParameter3, v25)
      && (v35 & 1) != 0
      && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) )
    {
      v37 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( v37 )
      {
        v38 = *((_QWORD *)&v37->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
        v32 = v35;
        if ( (v38 & 0x20) != 0 )
          v32 = v35 | 0x20;
        if ( (v38 & 0x42) != 0 )
          v32 |= 0x42uLL;
      }
      else
      {
        v32 = BugCheckParameter3;
      }
    }
    if ( (v32 & 0x3E0) == 0x200
      && (v32 & 1) == 0
      && ((v32 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v32, v32, v35, v25)) )
    {
      v41 = (__int64)v131;
      v42 = v33;
      v43 = (__int64)a5;
    }
    else
    {
      v34 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v128);
      v40 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v112 = (__int64)v131;
        MiUnlockPageTableInternal((__int64)v131, (unsigned __int64)v139);
        v139 = 0LL;
        MiUnlockWorkingSetShared(v112, a3);
        MiFaultInPagedPool(v40);
        MiLockWorkingSetShared(v112);
        v16 = v146;
        v18 = v147;
        v11 = a3;
        goto LABEL_2;
      }
      v33 = v129;
      v31 = 0;
      v41 = (__int64)v131;
      v42 = PageProtection;
      v43 = (__int64)a5;
      v36 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v34 = 0x2000;
    }
LABEL_73:
    v52 = v155;
    if ( v15 == v155 )
    {
      v133 = v128;
      v143 = v34;
      v140 = v42;
      v141 = v134;
      if ( v43 && !MiQueryStateMatches(v43, v34, v42, v134, v128) )
        goto LABEL_312;
      goto LABEL_270;
    }
    if ( v34 != v143 )
      break;
    if ( v128 != v133 )
      break;
    if ( v42 != v140 )
      break;
    v43 = v141;
    if ( v134 != v141 )
      break;
    if ( v17 || v33 == 1 || (__int64)((v15 - v155) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_270;
    v25 = (unsigned __int64)v139;
    if ( !v139 )
      goto LABEL_244;
    v94 = *(_BYTE *)(v41 + 184) & 7;
    v144 = v31;
    if ( v139 != (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      if ( v94 )
        goto LABEL_225;
      v43 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( (unsigned __int64)v139 >= v36 && (unsigned __int64)v139 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v43 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
        if ( v43 )
        {
          v98 = (*(_DWORD *)(v43 + 4LL * (((unsigned int)v139 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_242:
          v96 = v98 == 0;
          goto LABEL_243;
        }
LABEL_225:
        v43 = 0xFFFFF6FB7DBEDFFFuLL;
      }
      if ( v94 && (unsigned __int64)v139 >= v36 && (unsigned __int64)v139 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = MiGetPageTableLockBuffer(v41, (__int64)v139, (int *)&v144);
        v43 = v144;
        v96 = ((*(_DWORD *)PageTableLockBuffer >> v144) & 2) == 0;
        goto LABEL_243;
      }
      v100 = *v139;
      if ( (unsigned __int64)v139 >= v36
        && (unsigned __int64)v139 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v100, v155, v139)
        && (v100 & 1) != 0
        && ((v100 & 0x20) == 0 || (v100 & 0x42) == 0) )
      {
        v43 = (__int64)KeGetCurrentThread()->ApcState.Process;
        v52 = *(_QWORD *)(v43 + 1928);
        if ( v52 )
        {
          v101 = *(_QWORD *)(v52 + 8 * ((v25 >> 3) & 0x1FF));
          v52 = v100 | 0x20;
          v43 = (unsigned __int8)v101;
          LOBYTE(v43) = v101 & 0x20;
          if ( (v101 & 0x20) == 0 )
            v52 = v100;
          v100 = v52;
          if ( (v101 & 0x42) != 0 )
            v100 = v52 | 0x42;
        }
      }
      v98 = (v100 >> 60) & 2;
      goto LABEL_242;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v94 )
    {
      if ( v94 == 7 )
      {
        v96 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( v94 == 5 )
          Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
        else
          Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
        v96 = Next == 0LL;
      }
    }
    else
    {
      v96 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
    }
LABEL_243:
    if ( !v96 )
      goto LABEL_310;
LABEL_244:
    v102 = &dword_140C4F580;
    if ( (*(_BYTE *)(v41 + 184) & 7) != 2 )
      v102 = (LONG *)(v41 + 192);
    if ( (*v102 & 0x40000000) != 0 )
      goto LABEL_310;
    if ( a3 < 2u )
    {
      v43 = (__int64)KeGetCurrentPrcb();
      v52 = *(unsigned int *)(v43 + 12588);
      v103 = *(_DWORD *)(v43 + 31724);
      v104 = *(_DWORD *)(v43 + 32412);
      if ( (v52 & 1) != 0 )
      {
        v105 = 1;
        if ( v104 > 7 )
        {
          if ( *(_BYTE *)(v43 + 12585) )
          {
            v106 = 1;
LABEL_266:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v106, v103, v104);
              v31 = 0;
            }
            if ( v106 )
            {
              v15 = v132;
LABEL_310:
              v26 = v15 + 8;
              goto LABEL_313;
            }
LABEL_269:
            v15 = v132;
            goto LABEL_270;
          }
LABEL_261:
          if ( (v52 & 0x1E) != 0 )
          {
            v106 = 5;
            goto LABEL_266;
          }
          if ( *(_QWORD *)(v43 + 8) != *(_QWORD *)(v43 + 24) )
          {
            v106 = 6;
            goto LABEL_266;
          }
LABEL_265:
          _disable();
          *(_DWORD *)(v43 + 31724) = v31;
          *(_DWORD *)(v43 + 32412) = v31;
          KiResetGlobalDpcWatchdogProfiler(v43);
          _enable();
          v31 = 0;
          v106 = 0;
          goto LABEL_266;
        }
      }
      else
      {
        v105 = v31;
        if ( (v52 & 0x1E) != 0 )
        {
          v106 = 2;
          goto LABEL_266;
        }
        if ( *(_BYTE *)(v43 + 12585) )
        {
          v106 = 3;
          goto LABEL_266;
        }
        v107 = *(_QWORD *)(v43 + 16);
        if ( v107 && v107 != *(_QWORD *)(v43 + 8) )
        {
          v106 = 4;
          goto LABEL_266;
        }
      }
      if ( v103 <= 7 )
        goto LABEL_269;
      if ( v105 )
        goto LABEL_261;
      goto LABEL_265;
    }
LABEL_270:
    if ( v129 )
      goto LABEL_313;
    if ( v17 )
      goto LABEL_313;
    v15 += 8LL;
    v132 = v15;
    if ( v26 != v15 || v26 > v145 )
      goto LABEL_313;
    if ( v138 )
    {
      v108 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v43, v108, v52, v25)
        && (v108 & 1) != 0
        && ((v108 & 0x20) == 0 || (v108 & 0x42) == 0) )
      {
        v109 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v109 )
        {
          v110 = *((_QWORD *)&v109->Flink + ((v15 >> 3) & 0x1FF));
          v111 = v108 | 0x20;
          if ( (v110 & 0x20) == 0 )
            v111 = v108;
          v108 = v111;
          if ( (v110 & 0x42) != 0 )
            v108 = v111 | 0x42;
        }
      }
      BugCheckParameter3 = v108;
    }
    v19 = v31;
    v10 = (__int64)((v15 << 25) - v147) >> 16;
    v26 += 8LL;
  }
  v42 = v140;
  v34 = v143;
  v128 = v133;
  v134 = v141;
LABEL_312:
  v26 = v15;
LABEL_313:
  if ( v139 )
    MiUnlockPageTableInternal((__int64)v131, (unsigned __int64)v139);
  result = v34;
  v125 = v149;
  *v148 = (__int64)((v26 << 25) - v147) >> 16;
  v126 = v134;
  *v125 = v42;
  *v150 = v126;
  *v151 = v128;
  return result;
}
