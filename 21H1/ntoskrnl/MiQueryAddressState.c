/*
 * XREFs of MiQueryAddressState @ 0x14021E510
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiQueryAddressSpan @ 0x1402A4720 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x1402F5EE0 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x140357874 (MiAllowProtectionChange.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x140207D20 (MiGetProtoPteAddress.c)
 *     MiFastLockLeafPageTable @ 0x14020DBA0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14021AF70 (MiVadPureReserve.c)
 *     MiGetPageProtection @ 0x14021F920 (MiGetPageProtection.c)
 *     MiWalkPageTables @ 0x14025DB00 (MiWalkPageTables.c)
 *     MmGetSessionIdEx @ 0x140260EB0 (MmGetSessionIdEx.c)
 *     MiGetLeafVa @ 0x140290520 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x1402A4660 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiQueryStateMatches @ 0x1402A54C0 (MiQueryStateMatches.c)
 *     MiGetAnyMultiplexedVm @ 0x1402A9158 (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x1402AA0CC (MiLocateLockedVadEvent.c)
 *     PsDereferencePartition @ 0x1402D4730 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402D4758 (PsReferencePartitionSafe.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1402DBA88 (MiGetPageTableLockBuffer.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402EE388 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x140312CB8 (MiSkipFractionalPagefileRegion.c)
 *     MiIsPrototypePteVadLookup @ 0x140345200 (MiIsPrototypePteVadLookup.c)
 *     MiGetSharedProtos @ 0x1403A2DE8 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403ED7E0 (MiGetProtectionFromPte.c)
 *     memset @ 0x140408F80 (memset.c)
 *     MiFaultInPagedPool @ 0x1405275F4 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140541C30 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x140546960 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A255C (EtwTraceShouldYieldProcessor.c)
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
        __int64 *a9,
        int *a10)
{
  unsigned __int64 v10; // r15
  unsigned __int8 v11; // r13
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rdi
  __int64 v14; // rcx
  ULONG_PTR v15; // rdi
  __int64 v16; // r8
  unsigned __int64 v17; // r12
  __int64 v18; // rbx
  BOOL v19; // esi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rcx
  unsigned __int64 *AnyMultiplexedVm; // rbx
  int v23; // eax
  unsigned int v24; // edx
  unsigned __int64 v25; // r14
  __int64 v26; // r13
  unsigned __int64 v27; // rbx
  __int64 v28; // rcx
  unsigned __int64 v29; // r13
  int v30; // r10d
  ULONG_PTR v31; // rdx
  int v32; // ebx
  unsigned int v33; // r13d
  unsigned __int64 v34; // r11
  ULONG_PTR v35; // r8
  struct _LIST_ENTRY *v36; // rdx
  __int64 v37; // rax
  int PageProtection; // eax
  unsigned __int64 v39; // rbx
  __int64 v40; // rsi
  int v41; // r15d
  unsigned __int64 v42; // rcx
  ULONG_PTR v43; // r11
  unsigned int v44; // r9d
  __int64 LockedVadEvent; // rax
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rdx
  __int16 **v49; // r8
  __int64 v50; // r15
  unsigned __int64 v51; // rdi
  int v52; // r11d
  __int64 v53; // rax
  __int64 v54; // rbx
  ULONG_PTR v55; // rsi
  unsigned __int64 v56; // r8
  __int64 v57; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v59; // r9
  unsigned __int64 v60; // r10
  __int64 v61; // rdx
  struct _LIST_ENTRY *v62; // r8
  __int64 v63; // rax
  __int64 v64; // r8
  ULONG_PTR v65; // r11
  _QWORD *v66; // rdx
  int v67; // r8d
  unsigned __int64 v68; // rdx
  unsigned __int64 v69; // rdx
  __int64 v70; // r14
  unsigned __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 *v74; // rbx
  unsigned __int64 v75; // rdx
  __int64 v76; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  __int64 v79; // rdx
  unsigned __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rbx
  unsigned __int64 v83; // r14
  unsigned __int64 v84; // rsi
  __int64 v85; // rdx
  __int64 v86; // rcx
  struct _LIST_ENTRY *v87; // rdx
  __int64 v88; // rax
  __int64 v89; // rdx
  _KPROCESS *v90; // rcx
  __int64 v91; // rdx
  struct _LIST_ENTRY *v92; // r8
  __int64 v93; // rax
  __int64 v94; // r8
  __int16 v95; // ax
  __int64 v96; // r12
  unsigned __int64 v97; // r14
  unsigned __int64 v98; // r9
  unsigned __int64 v99; // rcx
  char v100; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v102; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v104; // edx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v106; // rdx
  unsigned __int64 v107; // r9
  __int64 v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  LONG *v111; // rax
  int v112; // r8d
  unsigned int v113; // edi
  unsigned int v114; // esi
  int v115; // edx
  unsigned int v116; // ebx
  __int64 v117; // rax
  ULONG_PTR v118; // rdx
  struct _LIST_ENTRY *v119; // r8
  __int64 v120; // rax
  __int64 v121; // r8
  __int64 v122; // r13
  __int64 v123; // rdx
  ULONG_PTR v124; // rdi
  __int64 v125; // rdx
  __int64 v126; // rcx
  struct _LIST_ENTRY *Flink; // r8
  __int64 v128; // rax
  __int16 v129; // di
  unsigned int v130; // ecx
  int ProtectionFromPte; // ecx
  _WORD *v132; // rdx
  __int64 v133; // r8
  __int64 v134; // r9
  __int64 LeafVa; // rax
  __int64 result; // rax
  int *v137; // rdx
  int v138; // ecx
  __int16 v140; // [rsp+34h] [rbp-CCh] BYREF
  int v141; // [rsp+38h] [rbp-C8h]
  int v142; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v143; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v144; // [rsp+48h] [rbp-B8h]
  __int16 v145; // [rsp+50h] [rbp-B0h]
  int v146; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v150; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v151; // [rsp+78h] [rbp-88h]
  int v152; // [rsp+80h] [rbp-80h]
  unsigned int v153; // [rsp+84h] [rbp-7Ch]
  __int64 v154; // [rsp+88h] [rbp-78h] BYREF
  int v155; // [rsp+90h] [rbp-70h]
  unsigned int v156; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v157; // [rsp+98h] [rbp-68h]
  unsigned __int64 v158; // [rsp+A0h] [rbp-60h]
  __int64 v159; // [rsp+A8h] [rbp-58h]
  __int64 *v160; // [rsp+B0h] [rbp-50h]
  int *v161; // [rsp+B8h] [rbp-48h]
  int *v162; // [rsp+C0h] [rbp-40h]
  _WORD *v163; // [rsp+C8h] [rbp-38h]
  __int128 v164; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v165; // [rsp+E0h] [rbp-20h]
  int *v166; // [rsp+E8h] [rbp-18h]
  ULONG_PTR v167; // [rsp+F0h] [rbp-10h]
  _QWORD v168[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v161 = a6;
  v11 = a3;
  v162 = a7;
  v163 = a8;
  v160 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v166 = a10;
  v143 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v154 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E588 + 8 * v14);
  *a10 = 1;
  v145 = (__int16)v12;
  v140 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v167 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v144 = v15;
  v158 = v16;
  v155 = 0x2000;
  v17 = 0LL;
  v152 = 0;
  v153 = 0;
  v151 = 0LL;
  v18 = 0LL;
  v159 = 0LL;
  v165 = v16 << 25 >> 16;
LABEL_2:
  v157 = v16;
  v150 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v164 = 0LL;
  memset((char *)v168 + 2, 0, 0xAEuLL);
  LOWORD(v168[0]) = 2145;
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
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4FA78 && v21 <= qword_140C4E2A8 )
    AnyMultiplexedVm = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = (unsigned __int64 *)MiGetAnyMultiplexedVm(1LL);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    LODWORD(v164) = v23 - 1;
    v25 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v164 + 1) = v25;
  }
  else
  {
    LOWORD(v168[0]) |= 4u;
    v168[21] = &v164;
    v168[2] = 0LL;
    v168[3] = AnyMultiplexedVm;
    BYTE2(v168[0]) = BYTE2(v168[0]) & 0xE3 | 4;
    v168[20] = MiGetNextPageTableTail;
    v168[5] = v165;
    BYTE6(v168[0]) = v11;
    v168[4] = v20;
    MiWalkPageTables(v168);
    v24 = v164;
    v25 = *((_QWORD *)&v164 + 1);
  }
  if ( v25 )
  {
    v26 = ((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v151 = (unsigned __int64 *)v26;
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
      v26 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      if ( v25 == v15 )
      {
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v27);
        v124 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter3, v123)
            && (unsigned int)MiPteHasShadow(v126, v125)
            && ((v124 & 0x20) == 0 || (v124 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v128 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v128 & 0x20) != 0 )
                v124 |= 0x20uLL;
              if ( (v128 & 0x42) != 0 )
                v124 |= 0x42uLL;
            }
            else
            {
              v124 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DE80 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v124 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v124 = ~qword_140C4DE80 & BugCheckParameter3;
        }
        v129 = (*(_QWORD *)(48 * ((v124 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v130 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v130 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v130 >> 7) & 0x1F;
        *v161 = ProtectionFromPte;
        MiUnlockPageTableInternal(v143, v26);
        *v162 = 0;
        v132 = v163;
        *v163 = v129;
        LeafVa = MiGetLeafVa(v27 + 8, v132, v133, v134);
        *v160 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v25 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v150 = 1;
      v25 = v15 + 8;
      v29 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal(v143, v26);
    v151 = 0LL;
    v29 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v29 > v158 )
      v29 = v158;
    v157 = v29;
    goto LABEL_25;
  }
  v25 = v158 + 8;
LABEL_25:
  v30 = 0;
  while ( 1 )
  {
    v31 = BugCheckParameter3;
    v32 = v30;
    v142 = v30;
    v33 = 0x2000;
    v146 = v30;
    v141 = v30;
    if ( !BugCheckParameter3 )
    {
      v43 = BugCheckParameter2;
      *v166 = v30;
      v44 = *(_DWORD *)(v43 + 48);
      if ( (*(_BYTE *)(v43 + 48) & 0x70) == 0x30 || (v44 & 0x70) == 0x10 )
      {
        if ( (v44 & 0x70) == 0x30 )
          v140 = *(_WORD *)MiGetAweVadPartition(v43);
LABEL_69:
        v41 = v32;
LABEL_70:
        v42 = (unsigned __int64)a5;
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
          v146 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v43);
        }
        if ( (v44 & 0x500000) == 0x500000 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v43, 16LL);
          if ( LockedVadEvent )
          {
            v47 = *(_QWORD *)(LockedVadEvent + 24);
            if ( v47 )
            {
              if ( (unsigned __int8)PsReferencePartitionSafe(*(_QWORD *)(LockedVadEvent + 24), v46, v47) )
              {
                v140 = **v49;
                PsDereferencePartition(v49, v48, v49);
                v30 = 0;
              }
            }
          }
        }
        goto LABEL_70;
      }
      v50 = v10 >> 12;
      v140 = **(_WORD **)(qword_140C4E588 + 8LL * (*(_WORD *)(**(_QWORD **)(v43 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v43, v50, 4, &v154);
      v51 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !(unsigned int)MiQueryStateMatches((_DWORD)a5, 0x2000, 0, 0, 0) )
        {
          v15 = v144;
          v32 = 1;
          v41 = v142;
          v25 = v144;
          v141 = 1;
LABEL_71:
          v40 = (__int64)v143;
LABEL_72:
          v34 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v154 && !*(_QWORD *)(v154 + 8) )
        {
          v15 = v144;
          v53 = MiSkipEntirePagefileRegions(v52, v50, v144, v25, v154);
          v40 = (__int64)v143;
          v30 = 0;
          v42 = (unsigned __int64)a5;
          v25 = v53;
          v34 = 0xFFFFF6FB7DBED000uLL;
          v41 = v32;
          if ( v53 == v15 )
            v25 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v144;
        v25 = v144 + 8;
        goto LABEL_69;
      }
      v54 = v154;
      if ( v19 )
      {
        v55 = v144;
        v56 = *(_QWORD *)(v154 + 8);
        v57 = ((__int64)(v157 - v144) >> 3) + 1;
        if ( v57 > 32 )
          v57 = 32LL;
        Process = v56 + 8 * (*(unsigned int *)(v154 + 44) - (unsigned __int64)(*(_DWORD *)(v154 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v154 + 34) & 2) != 0 || ProtoPteAddress < v56 || ProtoPteAddress >= Process )
        {
          v57 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v57 > Process )
        {
          v57 = (__int64)(Process - ProtoPteAddress) >> 3;
        }
        v59 = v144 - 8 + 8 * v57;
        v25 = v144 + 8;
        if ( v144 + 8 <= v59 )
        {
          v60 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v61 = *(_QWORD *)v25;
            if ( v25 >= v60
              && v25 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v61)
              && (v61 & 1) != 0
              && ((v61 & 0x20) == 0 || (v61 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v62 = *(struct _LIST_ENTRY **)(Process + 1928);
              if ( v62 )
              {
                v63 = *((_QWORD *)&v62->Flink + ((v25 >> 3) & 0x1FF));
                v64 = v61 | 0x20;
                Process = (unsigned __int8)v63;
                LOBYTE(Process) = v63 & 0x20;
                if ( (v63 & 0x20) == 0 )
                  v64 = v61;
                v61 = v64;
                if ( (v63 & 0x42) != 0 )
                  v61 = v64 | 0x42;
              }
            }
            if ( v61 )
              break;
            v25 += 8LL;
          }
          while ( v25 <= v59 );
          v51 = ProtoPteAddress;
          v54 = v154;
          v55 = v144;
        }
        if ( v150 )
          goto LABEL_103;
      }
      else
      {
        if ( v150 )
        {
LABEL_103:
          v65 = BugCheckParameter2;
          goto LABEL_104;
        }
        v55 = v144;
        v69 = *(_QWORD *)(v154 + 8);
        v70 = (__int64)(v25 - v144) >> 3;
        v71 = v69 + 8 * (*(unsigned int *)(v154 + 44) - (unsigned __int64)(*(_DWORD *)(v154 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v154 + 34) & 2) != 0 || ProtoPteAddress < v69 || ProtoPteAddress >= v71 )
        {
          v70 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v70 > v71 )
        {
          v70 = (__int64)(v71 - ProtoPteAddress) >> 3;
        }
        v25 = v144 + 8 * v70;
      }
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v72 = MiSkipFractionalPagefileRegion(v51, v54, (__int64)(v25 - v55) >> 3);
        v65 = BugCheckParameter2;
        if ( v72 != v51 )
        {
          v73 = (__int64)(v72 - v51) >> 3;
          v30 = 0;
          v51 = 0LL;
          ProtoPteAddress = 0LL;
          v25 = v55 + 8 * v73;
LABEL_105:
          v66 = *(_QWORD **)(v65 + 120);
          if ( (__int64)v66 >= 0 )
          {
            v67 = 0;
            v68 = -1LL;
          }
          else
          {
            v67 = 1;
            v68 = (unsigned __int64)(*v66 - 1LL) >> 12;
          }
          if ( v51 )
          {
            if ( (*(_DWORD *)(v65 + 48) & 0x70) == 0x20 )
            {
              v74 = *(__int64 **)(v65 + 72);
              v30 = 0;
              v75 = 0LL;
              if ( v74 )
              {
                do
                {
                  if ( (*((_BYTE *)v74 + 34) & 2) != 0 && (v76 = *v74, (*(_DWORD *)(*v74 + 56) & 0x4000000) != 0) )
                  {
                    SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
                    SharedProtos = MiGetSharedProtos(v76, SessionId, v74);
                    v51 = ProtoPteAddress;
                    v75 = *(_QWORD *)(SharedProtos + 72);
                  }
                  else
                  {
                    v75 = v74[1];
                  }
                  if ( v51 >= v75 && v51 < v75 + 8LL * *((unsigned int *)v74 + 11) )
                    break;
                  v74 = (__int64 *)v74[2];
                }
                while ( v74 );
                v65 = BugCheckParameter2;
                v30 = 0;
              }
              if ( (__int64)(v51 - v75) >> 3 < (unsigned __int64)(*((_DWORD *)v74 + 11)
                                                                - (*((_DWORD *)v74 + 13) & 0x3FFFFFFFu)) )
              {
                v41 = (*(_DWORD *)(v65 + 48) >> 7) & 0x1F;
                if ( v41 == 7 )
                  v41 = (*((unsigned __int16 *)v74 + 16) >> 1) & 0x1F;
                v15 = v144;
                v32 = v141;
                v40 = (__int64)v143;
                v42 = (unsigned __int64)a5;
                v34 = 0xFFFFF6FB7DBED000uLL;
                if ( v41 )
                  v33 = 4096;
                goto LABEL_73;
              }
              v15 = v144;
              v41 = 0;
              v32 = v141;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v54 + 64LL) && (*(_DWORD *)(*(_QWORD *)v54 + 56LL) & 0x2000) == 0 )
              {
                if ( v151 )
                {
                  MiUnlockPageTableInternal(v143, v151);
                  v151 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v143, a3);
                v80 = *(unsigned int *)(v54 + 44) - (unsigned __int64)(*(_DWORD *)(v54 + 52) & 0x3FFFFFFF);
                v81 = *(_QWORD *)(v54 + 8);
                v82 = *(_QWORD *)v51;
                v83 = (__int64)(v25 - v144) >> 3;
                v84 = (__int64)(v81 + 8 * v80 - v51) >> 3;
                if ( v84 > v83 )
                  v84 = v83;
                if ( (unsigned int)MiPteInShadowRange(v51, v79)
                  && (unsigned int)MiPteHasShadow(v86, v85)
                  && (v82 & 1) != 0
                  && ((v82 & 0x20) == 0 || (v82 & 0x42) == 0) )
                {
                  v51 = ProtoPteAddress;
                  v87 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v87 )
                  {
                    v88 = *((_QWORD *)&v87->Flink + ((ProtoPteAddress >> 3) & 0x1FF));
                    v89 = v82 | 0x20;
                    if ( (v88 & 0x20) == 0 )
                      v89 = v82;
                    v82 = v89;
                    if ( (v88 & 0x42) != 0 )
                      v82 = v89 | 0x42;
                  }
                }
                if ( v82 )
                {
                  v33 = 4096;
                  v41 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v41 = v142;
                }
                v90 = a5;
                if ( !a5 || (unsigned int)MiQueryStateMatches((_DWORD)a5, v33, v41, 0, v140) )
                {
                  if ( v84 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v91 = *(_QWORD *)v51;
                      if ( v51 >= 0xFFFFF6FB7DBED000uLL
                        && v51 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow(v90, v91)
                        && (v91 & 1) != 0
                        && ((v91 & 0x20) == 0 || (v91 & 0x42) == 0) )
                      {
                        v51 = ProtoPteAddress;
                        v90 = KeGetCurrentThread()->ApcState.Process;
                        v92 = v90[1].ProcessListEntry.Flink;
                        if ( v92 )
                        {
                          v93 = *((_QWORD *)&v92->Flink + ((ProtoPteAddress >> 3) & 0x1FF));
                          v94 = v91 | 0x20;
                          v90 = (_KPROCESS *)(unsigned __int8)v93;
                          LOBYTE(v90) = v93 & 0x20;
                          if ( (v93 & 0x20) == 0 )
                            v94 = v91;
                          v91 = v94;
                          if ( (v93 & 0x42) != 0 )
                            v91 = v94 | 0x42;
                        }
                      }
                      if ( v91 )
                      {
                        if ( v33 != 4096 )
                          break;
                      }
                      else if ( v33 == 4096 )
                      {
                        break;
                      }
                      v51 += 8LL;
                      ++v17;
                      ProtoPteAddress = v51;
                      if ( !--v84 )
                        break;
                      while ( (v51 & 0xFFF) == 0 )
                      {
                        v95 = MI_READ_PTE_LOCK_FREE(((v51 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v95 & 1) != 0 || (v95 & 0x3E0) != 0 )
                        {
                          if ( v33 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v33 == 4096 )
                          goto LABEL_185;
                        if ( v84 <= 0x200 )
                        {
                          v17 += v84;
                          ProtoPteAddress = v51 + 8 * v84;
                          goto LABEL_185;
                        }
                        v51 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v51;
                        v84 -= 512LL;
                        if ( !v84 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v32 = v141;
                }
                else
                {
                  v32 = 1;
                  v141 = 1;
                  v17 = 0LL;
                }
                v15 = v144;
                v40 = (__int64)v143;
                v25 = v144 + 8 * v17;
                MiLockWorkingSetShared((__int64)v143);
                v42 = (unsigned __int64)a5;
                v30 = 0;
                goto LABEL_72;
              }
              v96 = *(_QWORD *)(v54 + 8)
                  + 8 * (*(unsigned int *)(v54 + 44) - (unsigned __int64)(*(_DWORD *)(v54 + 52) & 0x3FFFFFFF))
                  - v51;
              v15 = v144;
              v17 = v96 >> 3;
              v97 = (__int64)(v25 - v144) >> 3;
              if ( v17 > v97 )
                v17 = v97;
              v98 = v17;
              if ( v67 )
              {
                v99 = *(unsigned int *)(v65 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v65 + 32) << 32);
                if ( v50 - v99 <= v68 )
                {
                  v17 = v99 - v50 + v68 + 1;
                  v67 = 0;
                  if ( v98 <= v17 )
                    v17 = v98;
                }
              }
              v25 = v144 + 8 * v17;
              if ( v67 )
                v41 = v142;
              else
                v41 = (*(_DWORD *)(v65 + 48) >> 7) & 0x1F;
              v32 = v141;
              v33 = 4096;
              if ( v67 )
                v33 = 0x2000;
              v30 = 0;
            }
          }
          else
          {
            v41 = v142;
            v32 = v142;
            v15 = v144;
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
      && (unsigned int)MiPteHasShadow(&BugCheckParameter3, BugCheckParameter3)
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
    if ( (v31 & 0x3E0) == 0x200
      && (v31 & 1) == 0
      && ((v31 & 0x400) == 0 || (unsigned int)MiIsPrototypePteVadLookup(v31)) )
    {
      v40 = (__int64)v143;
      v41 = v32;
      v42 = (unsigned __int64)a5;
    }
    else
    {
      v33 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v140);
      v39 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v122 = (__int64)v143;
        MiUnlockPageTableInternal(v143, v151);
        v151 = 0LL;
        MiUnlockWorkingSetShared(v122, a3);
        MiFaultInPagedPool(v39);
        MiLockWorkingSetShared(v122);
        v16 = v158;
        v18 = v159;
        v11 = a3;
        goto LABEL_2;
      }
      v32 = v141;
      v30 = 0;
      v40 = (__int64)v143;
      v41 = PageProtection;
      v42 = (unsigned __int64)a5;
      v34 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v33 = 0x2000;
    }
LABEL_73:
    if ( v15 == v167 )
    {
      v145 = v140;
      v155 = v33;
      v152 = v41;
      v153 = v146;
      if ( v42 && !(unsigned int)MiQueryStateMatches(v42, v33, v41, v146, v140) )
        goto LABEL_312;
      goto LABEL_270;
    }
    if ( v33 != v155 )
      break;
    if ( v140 != v145 )
      break;
    if ( v41 != v152 )
      break;
    v42 = v153;
    if ( v146 != v153 )
      break;
    if ( v17 || v32 == 1 || (__int64)((v15 - v167) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_270;
    if ( !v151 )
      goto LABEL_244;
    v100 = *(_BYTE *)(v40 + 184) & 7;
    v156 = v30;
    if ( v151 != (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      if ( v100 )
        goto LABEL_225;
      v42 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( (unsigned __int64)v151 >= v34 && (unsigned __int64)v151 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v42 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
        if ( v42 )
        {
          v104 = (*(_DWORD *)(v42 + 4LL * (((unsigned int)v151 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_242:
          v102 = v104 == 0;
          goto LABEL_243;
        }
LABEL_225:
        v42 = 0xFFFFF6FB7DBEDFFFuLL;
      }
      if ( v100 && (unsigned __int64)v151 >= v34 && (unsigned __int64)v151 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v40, v151, &v156);
        v42 = v156;
        v102 = ((*PageTableLockBuffer >> v156) & 2) == 0;
        goto LABEL_243;
      }
      v106 = *v151;
      if ( (unsigned __int64)v151 >= v34
        && (unsigned __int64)v151 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v106)
        && (v106 & 1) != 0
        && ((v106 & 0x20) == 0 || (v106 & 0x42) == 0) )
      {
        v42 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v108 = *(_QWORD *)(v42 + 1928);
        if ( v108 )
        {
          v109 = *(_QWORD *)(v108 + 8 * ((v107 >> 3) & 0x1FF));
          v110 = v106 | 0x20;
          v42 = (unsigned __int8)v109;
          LOBYTE(v42) = v109 & 0x20;
          if ( (v109 & 0x20) == 0 )
            v110 = v106;
          v106 = v110;
          if ( (v109 & 0x42) != 0 )
            v106 = v110 | 0x42;
        }
      }
      v104 = (v106 >> 60) & 2;
      goto LABEL_242;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v100 )
    {
      if ( v100 == 7 )
      {
        v102 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( v100 == 5 )
          Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
        else
          Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
        v102 = Next == 0LL;
      }
    }
    else
    {
      v102 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
    }
LABEL_243:
    if ( !v102 )
      goto LABEL_310;
LABEL_244:
    v111 = &dword_140C4F6C0;
    if ( (*(_BYTE *)(v40 + 184) & 7) != 2 )
      v111 = (LONG *)(v40 + 192);
    if ( (*v111 & 0x40000000) != 0 )
      goto LABEL_310;
    if ( a3 < 2u )
    {
      v42 = (unsigned __int64)KeGetCurrentPrcb();
      v112 = *(_DWORD *)(v42 + 12588);
      v113 = *(_DWORD *)(v42 + 31724);
      v114 = *(_DWORD *)(v42 + 32412);
      if ( (v112 & 1) != 0 )
      {
        v115 = 1;
        if ( v114 > 7 )
        {
          if ( *(_BYTE *)(v42 + 12585) )
          {
            v116 = 1;
LABEL_266:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v116, v113, v114);
              v30 = 0;
            }
            if ( v116 )
            {
              v15 = v144;
LABEL_310:
              v25 = v15 + 8;
              goto LABEL_313;
            }
LABEL_269:
            v15 = v144;
            goto LABEL_270;
          }
LABEL_261:
          if ( (v112 & 0x1E) != 0 )
          {
            v116 = 5;
            goto LABEL_266;
          }
          if ( *(_QWORD *)(v42 + 8) != *(_QWORD *)(v42 + 24) )
          {
            v116 = 6;
            goto LABEL_266;
          }
LABEL_265:
          _disable();
          *(_DWORD *)(v42 + 31724) = v30;
          *(_DWORD *)(v42 + 32412) = v30;
          KiResetGlobalDpcWatchdogProfiler();
          _enable();
          v30 = 0;
          v116 = 0;
          goto LABEL_266;
        }
      }
      else
      {
        v115 = v30;
        if ( (v112 & 0x1E) != 0 )
        {
          v116 = 2;
          goto LABEL_266;
        }
        if ( *(_BYTE *)(v42 + 12585) )
        {
          v116 = 3;
          goto LABEL_266;
        }
        v117 = *(_QWORD *)(v42 + 16);
        if ( v117 && v117 != *(_QWORD *)(v42 + 8) )
        {
          v116 = 4;
          goto LABEL_266;
        }
      }
      if ( v113 <= 7 )
        goto LABEL_269;
      if ( v115 )
        goto LABEL_261;
      goto LABEL_265;
    }
LABEL_270:
    if ( v141 )
      goto LABEL_313;
    if ( v17 )
      goto LABEL_313;
    v15 += 8LL;
    v144 = v15;
    if ( v25 != v15 || v25 > v157 )
      goto LABEL_313;
    if ( v150 )
    {
      v118 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v42, v118)
        && (v118 & 1) != 0
        && ((v118 & 0x20) == 0 || (v118 & 0x42) == 0) )
      {
        v119 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v119 )
        {
          v120 = *((_QWORD *)&v119->Flink + ((v15 >> 3) & 0x1FF));
          v121 = v118 | 0x20;
          if ( (v120 & 0x20) == 0 )
            v121 = v118;
          v118 = v121;
          if ( (v120 & 0x42) != 0 )
            v118 = v121 | 0x42;
        }
      }
      BugCheckParameter3 = v118;
    }
    v19 = v30;
    v10 = (__int64)((v15 << 25) - v159) >> 16;
    v25 += 8LL;
  }
  v41 = v152;
  v33 = v155;
  v140 = v145;
  v146 = v153;
LABEL_312:
  v25 = v15;
LABEL_313:
  if ( v151 )
    MiUnlockPageTableInternal(v143, v151);
  result = v33;
  v137 = v161;
  *v160 = (__int64)((v25 << 25) - v159) >> 16;
  v138 = v146;
  *v137 = v41;
  *v162 = v138;
  *v163 = v140;
  return result;
}
