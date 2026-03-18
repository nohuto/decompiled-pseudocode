/*
 * XREFs of MiQueryAddressState @ 0x1402B2B40
 * Callers:
 *     MiQueryAddressSpan @ 0x14022C1F0 (MiQueryAddressSpan.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiAllowProtectionChange @ 0x1402EBE64 (MiAllowProtectionChange.c)
 *     MiComparePteProtections @ 0x140305ED0 (MiComparePteProtections.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14022C130 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiIsPrototypePteVadLookup @ 0x140236D50 (MiIsPrototypePteVadLookup.c)
 *     MiGetAnyMultiplexedVm @ 0x14024EF1C (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x1402506EC (MiLocateLockedVadEvent.c)
 *     PsDereferencePartition @ 0x140263688 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402636B0 (PsReferencePartitionSafe.c)
 *     MiWalkPageTables @ 0x14026A5E0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x14026F9F0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x14027D170 (MiVadPureReserve.c)
 *     MiGetLeafVa @ 0x1402B0270 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x1402B3F50 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x1402B41B0 (MiGetPageProtection.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1402F81B8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiQueryStateMatches @ 0x1403138D8 (MiQueryStateMatches.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x140321350 (MiSkipFractionalPagefileRegion.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x14035BB38 (MiGetPageTableLockBuffer.c)
 *     MiGetSharedProtos @ 0x1403A5948 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F2D08 (MiGetProtectionFromPte.c)
 *     memset @ 0x140411300 (memset.c)
 *     MiFaultInPagedPool @ 0x14052B614 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140545C50 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x14054A980 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A66EC (EtwTraceShouldYieldProcessor.c)
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
  unsigned __int64 v25; // r9
  unsigned __int64 v26; // r14
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
  unsigned __int64 v42; // rcx
  ULONG_PTR v43; // r11
  unsigned int v44; // r9d
  __int64 **LockedVadEvent; // rax
  __int16 **v46; // r8
  unsigned __int64 v47; // r15
  unsigned __int64 v48; // rdi
  int v49; // r11d
  __int64 v50; // rax
  __int64 v51; // r8
  __int64 v52; // rbx
  unsigned __int64 v53; // rsi
  unsigned __int64 v54; // r8
  __int64 v55; // rdx
  unsigned __int64 Process; // rcx
  unsigned __int64 v57; // r10
  __int64 v58; // rdx
  __int64 v59; // rax
  ULONG_PTR v60; // r11
  _QWORD *v61; // rdx
  int v62; // r8d
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // rdx
  __int64 v65; // r14
  unsigned __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 *v69; // rbx
  unsigned __int64 v70; // rdx
  __int64 v71; // rsi
  unsigned int SessionId; // eax
  __int64 SharedProtos; // rax
  unsigned __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rbx
  unsigned __int64 v77; // r14
  unsigned __int64 v78; // rsi
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  struct _LIST_ENTRY *v83; // rdx
  __int64 v84; // rax
  __int64 v85; // rdx
  _KPROCESS *v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rax
  __int16 v89; // ax
  __int64 v90; // r12
  unsigned __int64 v91; // r14
  unsigned __int64 v92; // rcx
  char v93; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v95; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  int v97; // edx
  _DWORD *PageTableLockBuffer; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rax
  LONG *v101; // rax
  unsigned int v102; // edi
  unsigned int v103; // esi
  int v104; // edx
  unsigned int v105; // ebx
  __int64 v106; // rax
  ULONG_PTR v107; // rdx
  struct _LIST_ENTRY *v108; // r8
  __int64 v109; // rax
  __int64 v110; // r8
  __int64 v111; // r13
  ULONG_PTR v112; // rdi
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // r9
  struct _LIST_ENTRY *Flink; // r8
  __int64 v118; // rax
  __int16 v119; // di
  unsigned int v120; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 LeafVa; // rax
  __int64 result; // rax
  int *v124; // rdx
  int v125; // ecx
  __int16 v127; // [rsp+34h] [rbp-CCh] BYREF
  int v128; // [rsp+38h] [rbp-C8h]
  int v129; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v130; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v131; // [rsp+48h] [rbp-B8h]
  __int16 v132; // [rsp+50h] [rbp-B0h]
  int v133; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v137; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v138; // [rsp+78h] [rbp-88h]
  int v139; // [rsp+80h] [rbp-80h]
  unsigned int v140; // [rsp+84h] [rbp-7Ch]
  __int64 v141; // [rsp+88h] [rbp-78h] BYREF
  int v142; // [rsp+90h] [rbp-70h]
  unsigned int v143; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v144; // [rsp+98h] [rbp-68h]
  unsigned __int64 v145; // [rsp+A0h] [rbp-60h]
  __int64 v146; // [rsp+A8h] [rbp-58h]
  _QWORD *v147; // [rsp+B0h] [rbp-50h]
  int *v148; // [rsp+B8h] [rbp-48h]
  int *v149; // [rsp+C0h] [rbp-40h]
  _WORD *v150; // [rsp+C8h] [rbp-38h]
  __int128 v151; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v152; // [rsp+E0h] [rbp-20h]
  int *v153; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v154; // [rsp+F0h] [rbp-10h]
  _QWORD v155[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v148 = a6;
  v11 = a3;
  v149 = a7;
  v150 = a8;
  v147 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v153 = a10;
  v130 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v141 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E4C8 + 8 * v14);
  *a10 = 1;
  v132 = (__int16)v12;
  v127 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v154 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v131 = v15;
  v145 = v16;
  v142 = 0x2000;
  v17 = 0LL;
  v139 = 0;
  v140 = 0;
  v138 = 0LL;
  v18 = 0LL;
  v146 = 0LL;
  v152 = v16 << 25 >> 16;
LABEL_2:
  v144 = v16;
  v137 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v151 = 0LL;
  memset((char *)v155 + 2, 0, 0xAEuLL);
  LOWORD(v155[0]) = 2145;
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
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4F9B8 && v21 <= qword_140C4E1E8 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    v25 = 0x7FFFFFFFF8LL;
    LODWORD(v151) = v23 - 1;
    v26 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v151 + 1) = v26;
  }
  else
  {
    LOWORD(v155[0]) |= 4u;
    v155[21] = &v151;
    v155[2] = 0LL;
    v155[3] = AnyMultiplexedVm;
    BYTE2(v155[0]) = BYTE2(v155[0]) & 0xE3 | 4;
    v155[20] = MiGetNextPageTableTail;
    v155[5] = v152;
    BYTE6(v155[0]) = v11;
    v155[4] = v20;
    MiWalkPageTables((__int64)v155);
    v24 = v151;
    v25 = 0x7FFFFFFFF8LL;
    v26 = *((_QWORD *)&v151 + 1);
  }
  if ( v26 )
  {
    v138 = (unsigned __int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v24 )
    {
      v27 = ((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
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
      if ( v26 == v15 )
      {
        BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v27);
        v112 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( MiPteInShadowRange((unsigned __int64)&BugCheckParameter3)
            && (unsigned int)MiPteHasShadow(v114, v113, v115, v116)
            && ((v112 & 0x20) == 0 || (v112 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v118 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v118 & 0x20) != 0 )
                v112 |= 0x20uLL;
              if ( (v118 & 0x42) != 0 )
                v112 |= 0x42uLL;
            }
            else
            {
              v112 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DDC0 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v112 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v112 = ~qword_140C4DDC0 & BugCheckParameter3;
        }
        v119 = (*(_QWORD *)(48 * ((v112 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v120 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v120 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v120 >> 7) & 0x1F;
        *v148 = ProtectionFromPte;
        MiUnlockPageTableInternal(v130);
        *v149 = 0;
        *v150 = v119;
        LeafVa = MiGetLeafVa(v27 + 8);
        *v147 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v26 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v137 = 1;
      v26 = v15 + 8;
      v29 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal(v130);
    v138 = 0LL;
    v29 = (v26 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v29 > v145 )
      v29 = v145;
    v144 = v29;
    goto LABEL_25;
  }
  v26 = v145 + 8;
LABEL_25:
  v30 = 0;
  while ( 1 )
  {
    v31 = BugCheckParameter3;
    v32 = v30;
    v129 = v30;
    v33 = 0x2000;
    v133 = v30;
    v128 = v30;
    if ( !BugCheckParameter3 )
    {
      v43 = BugCheckParameter2;
      *v153 = v30;
      v44 = *(_DWORD *)(v43 + 48);
      if ( (*(_BYTE *)(v43 + 48) & 0x70) == 0x30 || (v44 & 0x70) == 0x10 )
      {
        v25 = v44 & 0x70;
        if ( (_BYTE)v25 == 48 )
          v127 = *(_WORD *)MiGetAweVadPartition(v43);
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
          v133 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v43);
        }
        v25 = v44 & 0x500000;
        if ( (_DWORD)v25 == 5242880 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v43, 16);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[3] && PsReferencePartitionSafe((__int64)LockedVadEvent[3]) )
            {
              v127 = **v46;
              PsDereferencePartition((__int64)v46);
              v30 = 0;
            }
          }
        }
        goto LABEL_70;
      }
      v47 = v10 >> 12;
      v127 = **(_WORD **)(qword_140C4E4C8 + 8LL * (*(_WORD *)(**(_QWORD **)(v43 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v43, v47, 4LL, &v141);
      v48 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !(unsigned int)MiQueryStateMatches((_DWORD)a5, 0x2000, 0, 0, 0) )
        {
          v15 = v131;
          v32 = 1;
          v41 = v129;
          v26 = v131;
          v128 = 1;
LABEL_71:
          v40 = (__int64)v130;
LABEL_72:
          v34 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v141 && !*(_QWORD *)(v141 + 8) )
        {
          v15 = v131;
          v50 = MiSkipEntirePagefileRegions(v49, v47, v131, v26, v141);
          v40 = (__int64)v130;
          v30 = 0;
          v42 = (unsigned __int64)a5;
          v26 = v50;
          v34 = 0xFFFFF6FB7DBED000uLL;
          v41 = v32;
          if ( v50 == v15 )
            v26 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v131;
        v26 = v131 + 8;
        goto LABEL_69;
      }
      v52 = v141;
      if ( v19 )
      {
        v53 = v131;
        v54 = *(_QWORD *)(v141 + 8);
        v55 = ((__int64)(v144 - v131) >> 3) + 1;
        if ( v55 > 32 )
          v55 = 32LL;
        Process = v54 + 8 * (*(unsigned int *)(v141 + 44) - (unsigned __int64)(*(_DWORD *)(v141 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v141 + 34) & 2) != 0 || ProtoPteAddress < v54 || ProtoPteAddress >= Process )
        {
          v55 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v55 > Process )
        {
          v55 = (__int64)(Process - ProtoPteAddress) >> 3;
        }
        v25 = v131 - 8 + 8 * v55;
        v26 = v131 + 8;
        if ( v131 + 8 <= v25 )
        {
          v57 = 0xFFFFF6FB7DBED000uLL;
          do
          {
            v58 = *(_QWORD *)v26;
            if ( v26 >= v57
              && v26 <= 0xFFFFF6FB7DBED7F8uLL
              && (unsigned int)MiPteHasShadow(Process, v58, v54, v25)
              && (v58 & 1) != 0
              && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
            {
              Process = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
              v54 = *(_QWORD *)(Process + 1928);
              if ( v54 )
              {
                v59 = *(_QWORD *)(v54 + 8 * ((v26 >> 3) & 0x1FF));
                v54 = v58 | 0x20;
                Process = (unsigned __int8)v59;
                LOBYTE(Process) = v59 & 0x20;
                if ( (v59 & 0x20) == 0 )
                  v54 = v58;
                v58 = v54;
                if ( (v59 & 0x42) != 0 )
                  v58 = v54 | 0x42;
              }
            }
            if ( v58 )
              break;
            v26 += 8LL;
          }
          while ( v26 <= v25 );
          v48 = ProtoPteAddress;
          v52 = v141;
          v53 = v131;
        }
        if ( v137 )
          goto LABEL_103;
      }
      else
      {
        if ( v137 )
        {
LABEL_103:
          v60 = BugCheckParameter2;
          goto LABEL_104;
        }
        v53 = v131;
        v64 = *(_QWORD *)(v141 + 8);
        v65 = (__int64)(v26 - v131) >> 3;
        v66 = v64 + 8 * (*(unsigned int *)(v141 + 44) - (unsigned __int64)(*(_DWORD *)(v141 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v141 + 34) & 2) != 0 || ProtoPteAddress < v64 || ProtoPteAddress >= v66 )
        {
          v65 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v65 > v66 )
        {
          v65 = (__int64)(v66 - ProtoPteAddress) >> 3;
        }
        v26 = v131 + 8 * v65;
      }
      if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) )
      {
        v67 = MiSkipFractionalPagefileRegion(v48, v52, (__int64)(v26 - v53) >> 3);
        v60 = BugCheckParameter2;
        if ( v67 != v48 )
        {
          v68 = (__int64)(v67 - v48) >> 3;
          v30 = 0;
          v48 = 0LL;
          ProtoPteAddress = 0LL;
          v26 = v53 + 8 * v68;
LABEL_105:
          v61 = *(_QWORD **)(v60 + 120);
          if ( (__int64)v61 >= 0 )
          {
            v62 = 0;
            v63 = -1LL;
          }
          else
          {
            v62 = 1;
            v63 = (unsigned __int64)(*v61 - 1LL) >> 12;
          }
          if ( v48 )
          {
            if ( (*(_DWORD *)(v60 + 48) & 0x70) == 0x20 )
            {
              v69 = *(__int64 **)(v60 + 72);
              v30 = 0;
              v70 = 0LL;
              if ( v69 )
              {
                do
                {
                  if ( (*((_BYTE *)v69 + 34) & 2) != 0 && (v71 = *v69, (*(_DWORD *)(*v69 + 56) & 0x4000000) != 0) )
                  {
                    SessionId = MmGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
                    SharedProtos = MiGetSharedProtos(v71, SessionId, v69);
                    v48 = ProtoPteAddress;
                    v70 = *(_QWORD *)(SharedProtos + 72);
                  }
                  else
                  {
                    v70 = v69[1];
                  }
                  if ( v48 >= v70 && v48 < v70 + 8LL * *((unsigned int *)v69 + 11) )
                    break;
                  v69 = (__int64 *)v69[2];
                }
                while ( v69 );
                v60 = BugCheckParameter2;
                v30 = 0;
              }
              if ( (__int64)(v48 - v70) >> 3 < (unsigned __int64)(*((_DWORD *)v69 + 11)
                                                                - (*((_DWORD *)v69 + 13) & 0x3FFFFFFFu)) )
              {
                v41 = (*(_DWORD *)(v60 + 48) >> 7) & 0x1F;
                if ( v41 == 7 )
                  v41 = (*((unsigned __int16 *)v69 + 16) >> 1) & 0x1F;
                v15 = v131;
                v32 = v128;
                v40 = (__int64)v130;
                v42 = (unsigned __int64)a5;
                v34 = 0xFFFFF6FB7DBED000uLL;
                if ( v41 )
                  v33 = 4096;
                goto LABEL_73;
              }
              v15 = v131;
              v41 = 0;
              v32 = v128;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v52 + 64LL) && (*(_DWORD *)(*(_QWORD *)v52 + 56LL) & 0x2000) == 0 )
              {
                if ( v138 )
                {
                  MiUnlockPageTableInternal(v130);
                  v138 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v130, a3);
                v74 = *(unsigned int *)(v52 + 44) - (unsigned __int64)(*(_DWORD *)(v52 + 52) & 0x3FFFFFFF);
                v75 = *(_QWORD *)(v52 + 8);
                v76 = *(_QWORD *)v48;
                v77 = (__int64)(v26 - v131) >> 3;
                v78 = (__int64)(v75 + 8 * v74 - v48) >> 3;
                if ( v78 > v77 )
                  v78 = v77;
                if ( MiPteInShadowRange(v48)
                  && (unsigned int)MiPteHasShadow(v80, v79, v81, v82)
                  && (v76 & 1) != 0
                  && ((v76 & 0x20) == 0 || (v76 & 0x42) == 0) )
                {
                  v48 = ProtoPteAddress;
                  v83 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v83 )
                  {
                    v84 = *((_QWORD *)&v83->Flink + ((ProtoPteAddress >> 3) & 0x1FF));
                    v85 = v76 | 0x20;
                    if ( (v84 & 0x20) == 0 )
                      v85 = v76;
                    v76 = v85;
                    if ( (v84 & 0x42) != 0 )
                      v76 = v85 | 0x42;
                  }
                }
                if ( v76 )
                {
                  v33 = 4096;
                  v41 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v41 = v129;
                }
                v86 = a5;
                if ( !a5 || (unsigned int)MiQueryStateMatches((_DWORD)a5, v33, v41, 0, v127) )
                {
                  if ( v78 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v87 = *(_QWORD *)v48;
                      if ( v48 >= 0xFFFFF6FB7DBED000uLL
                        && v48 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow(v86, v87, v81, v82)
                        && (v87 & 1) != 0
                        && ((v87 & 0x20) == 0 || (v87 & 0x42) == 0) )
                      {
                        v48 = ProtoPteAddress;
                        v86 = KeGetCurrentThread()->ApcState.Process;
                        v81 = (__int64)v86[1].ProcessListEntry.Flink;
                        if ( v81 )
                        {
                          v88 = *(_QWORD *)(v81 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                          v81 = v87 | 0x20;
                          v86 = (_KPROCESS *)(unsigned __int8)v88;
                          LOBYTE(v86) = v88 & 0x20;
                          if ( (v88 & 0x20) == 0 )
                            v81 = v87;
                          v87 = v81;
                          if ( (v88 & 0x42) != 0 )
                            v87 = v81 | 0x42;
                        }
                      }
                      if ( v87 )
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
                      if ( !--v78 )
                        break;
                      while ( (v48 & 0xFFF) == 0 )
                      {
                        v89 = MI_READ_PTE_LOCK_FREE(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v89 & 1) != 0 || (v89 & 0x3E0) != 0 )
                        {
                          if ( v33 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v33 == 4096 )
                          goto LABEL_185;
                        if ( v78 <= 0x200 )
                        {
                          v17 += v78;
                          ProtoPteAddress = v48 + 8 * v78;
                          goto LABEL_185;
                        }
                        v48 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v48;
                        v78 -= 512LL;
                        if ( !v78 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v32 = v128;
                }
                else
                {
                  v32 = 1;
                  v128 = 1;
                  v17 = 0LL;
                }
                v15 = v131;
                v40 = (__int64)v130;
                v26 = v131 + 8 * v17;
                MiLockWorkingSetShared((__int64)v130);
                v42 = (unsigned __int64)a5;
                v30 = 0;
                goto LABEL_72;
              }
              v90 = *(_QWORD *)(v52 + 8)
                  + 8 * (*(unsigned int *)(v52 + 44) - (unsigned __int64)(*(_DWORD *)(v52 + 52) & 0x3FFFFFFF))
                  - v48;
              v15 = v131;
              v17 = v90 >> 3;
              v91 = (__int64)(v26 - v131) >> 3;
              if ( v17 > v91 )
                v17 = v91;
              v25 = v17;
              if ( v62 )
              {
                v92 = *(unsigned int *)(v60 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v60 + 32) << 32);
                if ( v47 - v92 <= v63 )
                {
                  v17 = v92 - v47 + v63 + 1;
                  v62 = 0;
                  if ( v25 <= v17 )
                    v17 = v25;
                }
              }
              v26 = v131 + 8 * v17;
              if ( v62 )
                v41 = v129;
              else
                v41 = (*(_DWORD *)(v60 + 48) >> 7) & 0x1F;
              v32 = v128;
              v33 = 4096;
              if ( v62 )
                v33 = 0x2000;
              v30 = 0;
            }
          }
          else
          {
            v41 = v129;
            v32 = v129;
            v15 = v131;
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
      && (unsigned int)MiPteHasShadow(&BugCheckParameter3, BugCheckParameter3, BugCheckParameter3, v25)
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
      v40 = (__int64)v130;
      v41 = v32;
      v42 = (unsigned __int64)a5;
    }
    else
    {
      v33 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v127);
      v39 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v111 = (__int64)v130;
        MiUnlockPageTableInternal(v130);
        v138 = 0LL;
        MiUnlockWorkingSetShared(v111, a3);
        MiFaultInPagedPool(v39);
        MiLockWorkingSetShared(v111);
        v16 = v145;
        v18 = v146;
        v11 = a3;
        goto LABEL_2;
      }
      v32 = v128;
      v30 = 0;
      v40 = (__int64)v130;
      v41 = PageProtection;
      v42 = (unsigned __int64)a5;
      v34 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v33 = 0x2000;
    }
LABEL_73:
    v51 = v154;
    if ( v15 == v154 )
    {
      v132 = v127;
      v142 = v33;
      v139 = v41;
      v140 = v133;
      if ( v42 && !(unsigned int)MiQueryStateMatches(v42, v33, v41, v133, v127) )
        goto LABEL_312;
      goto LABEL_270;
    }
    if ( v33 != v142 )
      break;
    if ( v127 != v132 )
      break;
    if ( v41 != v139 )
      break;
    v42 = v140;
    if ( v133 != v140 )
      break;
    if ( v17 || v32 == 1 || (__int64)((v15 - v154) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_270;
    v25 = (unsigned __int64)v138;
    if ( !v138 )
      goto LABEL_244;
    v93 = *(_BYTE *)(v40 + 184) & 7;
    v143 = v30;
    if ( v138 != (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      if ( v93 )
        goto LABEL_225;
      v42 = 0xFFFFF6FB7DBEDFFFuLL;
      if ( (unsigned __int64)v138 >= v34 && (unsigned __int64)v138 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        v42 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608);
        if ( v42 )
        {
          v97 = (*(_DWORD *)(v42 + 4LL * (((unsigned int)v138 >> 3) & 0x1FF)) >> 30) & 1;
LABEL_242:
          v95 = v97 == 0;
          goto LABEL_243;
        }
LABEL_225:
        v42 = 0xFFFFF6FB7DBEDFFFuLL;
      }
      if ( v93 && (unsigned __int64)v138 >= v34 && (unsigned __int64)v138 <= 0xFFFFF6FB7DBEDFFFuLL )
      {
        PageTableLockBuffer = (_DWORD *)MiGetPageTableLockBuffer(v40, v138, &v143);
        v42 = v143;
        v95 = ((*PageTableLockBuffer >> v143) & 2) == 0;
        goto LABEL_243;
      }
      v99 = *v138;
      if ( (unsigned __int64)v138 >= v34
        && (unsigned __int64)v138 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(0xFFFFF6FB7DBEDFFFuLL, v99, v154, v138)
        && (v99 & 1) != 0
        && ((v99 & 0x20) == 0 || (v99 & 0x42) == 0) )
      {
        v42 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        v51 = *(_QWORD *)(v42 + 1928);
        if ( v51 )
        {
          v100 = *(_QWORD *)(v51 + 8 * ((v25 >> 3) & 0x1FF));
          v51 = v99 | 0x20;
          v42 = (unsigned __int8)v100;
          LOBYTE(v42) = v100 & 0x20;
          if ( (v100 & 0x20) == 0 )
            v51 = v99;
          v99 = v51;
          if ( (v100 & 0x42) != 0 )
            v99 = v51 | 0x42;
        }
      }
      v97 = (v99 >> 60) & 2;
      goto LABEL_242;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( v93 )
    {
      if ( v93 == 7 )
      {
        v95 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
      }
      else
      {
        if ( v93 == 5 )
          Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
        else
          Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
        v95 = Next == 0LL;
      }
    }
    else
    {
      v95 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
    }
LABEL_243:
    if ( !v95 )
      goto LABEL_310;
LABEL_244:
    v101 = &dword_140C4F600;
    if ( (*(_BYTE *)(v40 + 184) & 7) != 2 )
      v101 = (LONG *)(v40 + 192);
    if ( (*v101 & 0x40000000) != 0 )
      goto LABEL_310;
    if ( a3 < 2u )
    {
      v42 = (unsigned __int64)KeGetCurrentPrcb();
      v51 = *(unsigned int *)(v42 + 12588);
      v102 = *(_DWORD *)(v42 + 31724);
      v103 = *(_DWORD *)(v42 + 32412);
      if ( (v51 & 1) != 0 )
      {
        v104 = 1;
        if ( v103 > 7 )
        {
          if ( *(_BYTE *)(v42 + 12585) )
          {
            v105 = 1;
LABEL_266:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v105, v102, v103);
              v30 = 0;
            }
            if ( v105 )
            {
              v15 = v131;
LABEL_310:
              v26 = v15 + 8;
              goto LABEL_313;
            }
LABEL_269:
            v15 = v131;
            goto LABEL_270;
          }
LABEL_261:
          if ( (v51 & 0x1E) != 0 )
          {
            v105 = 5;
            goto LABEL_266;
          }
          if ( *(_QWORD *)(v42 + 8) != *(_QWORD *)(v42 + 24) )
          {
            v105 = 6;
            goto LABEL_266;
          }
LABEL_265:
          _disable();
          *(_DWORD *)(v42 + 31724) = v30;
          *(_DWORD *)(v42 + 32412) = v30;
          KiResetGlobalDpcWatchdogProfiler(v42);
          _enable();
          v30 = 0;
          v105 = 0;
          goto LABEL_266;
        }
      }
      else
      {
        v104 = v30;
        if ( (v51 & 0x1E) != 0 )
        {
          v105 = 2;
          goto LABEL_266;
        }
        if ( *(_BYTE *)(v42 + 12585) )
        {
          v105 = 3;
          goto LABEL_266;
        }
        v106 = *(_QWORD *)(v42 + 16);
        if ( v106 && v106 != *(_QWORD *)(v42 + 8) )
        {
          v105 = 4;
          goto LABEL_266;
        }
      }
      if ( v102 <= 7 )
        goto LABEL_269;
      if ( v104 )
        goto LABEL_261;
      goto LABEL_265;
    }
LABEL_270:
    if ( v128 )
      goto LABEL_313;
    if ( v17 )
      goto LABEL_313;
    v15 += 8LL;
    v131 = v15;
    if ( v26 != v15 || v26 > v144 )
      goto LABEL_313;
    if ( v137 )
    {
      v107 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow(v42, v107, v51, v25)
        && (v107 & 1) != 0
        && ((v107 & 0x20) == 0 || (v107 & 0x42) == 0) )
      {
        v108 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v108 )
        {
          v109 = *((_QWORD *)&v108->Flink + ((v15 >> 3) & 0x1FF));
          v110 = v107 | 0x20;
          if ( (v109 & 0x20) == 0 )
            v110 = v107;
          v107 = v110;
          if ( (v109 & 0x42) != 0 )
            v107 = v110 | 0x42;
        }
      }
      BugCheckParameter3 = v107;
    }
    v19 = v30;
    v10 = (__int64)((v15 << 25) - v146) >> 16;
    v26 += 8LL;
  }
  v41 = v139;
  v33 = v142;
  v127 = v132;
  v133 = v140;
LABEL_312:
  v26 = v15;
LABEL_313:
  if ( v138 )
    MiUnlockPageTableInternal(v130);
  result = v33;
  v124 = v148;
  *v147 = (__int64)((v26 << 25) - v146) >> 16;
  v125 = v133;
  *v124 = v41;
  *v149 = v125;
  *v150 = v127;
  return result;
}
