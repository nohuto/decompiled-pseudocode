/*
 * XREFs of MiQueryAddressState @ 0x14033A480
 * Callers:
 *     MiQueryAddressSpan @ 0x14027C940 (MiQueryAddressSpan.c)
 *     MiComparePteProtections @ 0x14027CFC8 (MiComparePteProtections.c)
 *     MiAllowProtectionChange @ 0x14027E54C (MiAllowProtectionChange.c)
 *     MiSetProtectionOnSection @ 0x14033D9C0 (MiSetProtectionOnSection.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1402029B8 (MiGetPageTableLockBuffer.c)
 *     MiIsPrototypePteVadLookup @ 0x14020A670 (MiIsPrototypePteVadLookup.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x140212038 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiSkipFractionalPagefileRegion @ 0x140240FC4 (MiSkipFractionalPagefileRegion.c)
 *     PsDereferencePartition @ 0x140274588 (PsDereferencePartition.c)
 *     PsReferencePartitionSafe @ 0x1402745B0 (PsReferencePartitionSafe.c)
 *     MiQueryStateMatches @ 0x14027C63C (MiQueryStateMatches.c)
 *     MI_GET_GRAPHICS_PROTECTION_FROM_VAD @ 0x14027C880 (MI_GET_GRAPHICS_PROTECTION_FROM_VAD.c)
 *     MiWalkPageTables @ 0x1402ADBC0 (MiWalkPageTables.c)
 *     MiFastLockLeafPageTable @ 0x1402B2FD0 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiVadPureReserve @ 0x1402C0290 (MiVadPureReserve.c)
 *     MiGetAnyMultiplexedVm @ 0x140307E4C (MiGetAnyMultiplexedVm.c)
 *     MiLocateLockedVadEvent @ 0x14030911C (MiLocateLockedVadEvent.c)
 *     MiGetLeafVa @ 0x140337BB0 (MiGetLeafVa.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetProtoPteAddress @ 0x14033B890 (MiGetProtoPteAddress.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     MiGetSharedProtos @ 0x1403A6358 (MiGetSharedProtos.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     MiGetProtectionFromPte @ 0x1403F4550 (MiGetProtectionFromPte.c)
 *     memset @ 0x140414300 (memset.c)
 *     MiFaultInPagedPool @ 0x14052D354 (MiFaultInPagedPool.c)
 *     MiSkipEntirePagefileRegions @ 0x140547990 (MiSkipEntirePagefileRegions.c)
 *     MiGetAweVadPartition @ 0x14054C6C0 (MiGetAweVadPartition.c)
 *     EtwTraceShouldYieldProcessor @ 0x1405A834C (EtwTraceShouldYieldProcessor.c)
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
  unsigned __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // rbx
  unsigned __int64 v79; // r14
  unsigned __int64 v80; // rsi
  __int64 v81; // rdx
  __int64 v82; // r8
  _DWORD *v83; // r9
  __int64 v84; // rax
  __int64 v85; // rax
  __int16 v86; // ax
  __int64 v87; // r12
  unsigned __int64 v88; // r14
  unsigned __int64 v89; // r9
  unsigned __int64 v90; // rcx
  char v91; // dl
  struct _KPRCB *CurrentPrcb; // rax
  bool v93; // zf
  _KSPIN_LOCK_QUEUE *volatile Next; // rax
  __int64 v95; // rcx
  int v96; // edx
  char *PageTableLockBuffer; // rax
  unsigned __int64 v98; // rdx
  unsigned __int64 v99; // r9
  struct _LIST_ENTRY *v100; // r8
  __int64 v101; // rax
  __int64 v102; // r8
  LONG *v103; // rax
  struct _KPRCB *v104; // rcx
  volatile int DpcRequestSummary; // r8d
  unsigned int DpcWatchdogCount; // edi
  unsigned int DpcTimeCount; // esi
  int v108; // edx
  unsigned int v109; // ebx
  _KTHREAD *NextThread; // rax
  ULONG_PTR v111; // rdx
  struct _LIST_ENTRY *v112; // r8
  __int64 v113; // rax
  __int64 v114; // r8
  __int64 v115; // r13
  __int64 v116; // rdx
  __int64 v117; // r8
  _DWORD *v118; // r9
  ULONG_PTR v119; // rdi
  struct _LIST_ENTRY *Flink; // r8
  __int64 v121; // rax
  __int16 v122; // di
  unsigned int v123; // ecx
  int ProtectionFromPte; // ecx
  unsigned __int64 LeafVa; // rax
  __int64 result; // rax
  int *v127; // rdx
  int v128; // ecx
  __int16 v130; // [rsp+34h] [rbp-CCh] BYREF
  int v131; // [rsp+38h] [rbp-C8h]
  int v132; // [rsp+3Ch] [rbp-C4h]
  unsigned __int64 *v133; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v134; // [rsp+48h] [rbp-B8h]
  __int16 v135; // [rsp+50h] [rbp-B0h]
  int v136; // [rsp+54h] [rbp-ACh]
  unsigned __int64 ProtoPteAddress; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3; // [rsp+60h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h]
  int v140; // [rsp+70h] [rbp-90h]
  unsigned __int64 *v141; // [rsp+78h] [rbp-88h]
  int v142; // [rsp+80h] [rbp-80h]
  int v143; // [rsp+84h] [rbp-7Ch]
  __int64 v144; // [rsp+88h] [rbp-78h] BYREF
  int v145; // [rsp+90h] [rbp-70h]
  int v146; // [rsp+94h] [rbp-6Ch] BYREF
  unsigned __int64 v147; // [rsp+98h] [rbp-68h]
  unsigned __int64 v148; // [rsp+A0h] [rbp-60h]
  __int64 v149; // [rsp+A8h] [rbp-58h]
  _QWORD *v150; // [rsp+B0h] [rbp-50h]
  int *v151; // [rsp+B8h] [rbp-48h]
  int *v152; // [rsp+C0h] [rbp-40h]
  _WORD *v153; // [rsp+C8h] [rbp-38h]
  __int128 v154; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v155; // [rsp+E0h] [rbp-20h]
  int *v156; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v157; // [rsp+F0h] [rbp-10h]
  _QWORD v158[22]; // [rsp+100h] [rbp+0h] BYREF

  v10 = a1;
  v151 = a6;
  v11 = a3;
  v152 = a7;
  v153 = a8;
  v150 = a9;
  BugCheckParameter2 = a4;
  v12 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v156 = a10;
  v133 = v12;
  v13 = a1 >> 9;
  ProtoPteAddress = 0LL;
  v14 = *((unsigned __int16 *)v12 + 87);
  v144 = 0LL;
  LOWORD(v12) = **(_WORD **)(qword_140C4E688 + 8 * v14);
  *a10 = 1;
  v135 = (__int16)v12;
  v130 = (__int16)v12;
  v15 = (v13 & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v157 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v134 = v15;
  v148 = v16;
  v145 = 0x2000;
  v17 = 0LL;
  v142 = 0;
  v143 = 0;
  v141 = 0LL;
  v18 = 0LL;
  v149 = 0LL;
  v155 = v16 << 25 >> 16;
LABEL_2:
  v147 = v16;
  v140 = 0;
  BugCheckParameter3 = 0LL;
  v19 = 0;
  v154 = 0LL;
  memset((char *)v158 + 2, 0, 0xAEuLL);
  LOWORD(v158[0]) = 2145;
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
  if ( v21 < 0xFFFF800000000000uLL || v21 >= qword_140C4FB78 && v21 <= qword_140C4E3A8 )
    AnyMultiplexedVm = (char *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  else
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v23 = MiFastLockLeafPageTable((__int64)AnyMultiplexedVm, v20, 0);
  if ( v23 )
  {
    v24 = v23 - 1;
    LODWORD(v154) = v23 - 1;
    v25 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *((_QWORD *)&v154 + 1) = v25;
  }
  else
  {
    LOWORD(v158[0]) |= 4u;
    v158[21] = &v154;
    v158[2] = 0LL;
    v158[3] = AnyMultiplexedVm;
    BYTE2(v158[0]) = BYTE2(v158[0]) & 0xE3 | 4;
    v158[20] = MiGetNextPageTableTail;
    v158[5] = v155;
    BYTE6(v158[0]) = v11;
    v158[4] = v20;
    MiWalkPageTables((__int64)v158);
    v24 = v154;
    v25 = *((_QWORD *)&v154 + 1);
  }
  if ( v25 )
  {
    v26 = (unsigned __int64 *)(((v25 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v141 = v26;
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
        v119 = BugCheckParameter3;
        if ( (BugCheckParameter3 & 1) != 0 )
        {
          if ( (unsigned int)MiPteInShadowRange(&BugCheckParameter3)
            && (unsigned int)MiPteHasShadow()
            && ((v119 & 0x20) == 0 || (v119 & 0x42) == 0) )
          {
            Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
            if ( Flink )
            {
              v121 = *((_QWORD *)&Flink->Flink + (((unsigned __int64)&BugCheckParameter3 >> 3) & 0x1FF));
              if ( (v121 & 0x20) != 0 )
                v119 |= 0x20uLL;
              if ( (v121 & 0x42) != 0 )
                v119 |= 0x42uLL;
            }
            else
            {
              v119 = BugCheckParameter3;
            }
          }
        }
        else if ( qword_140C4DF80 )
        {
          if ( (BugCheckParameter3 & 0x10) != 0 )
            v119 = BugCheckParameter3 & 0xFFFFFFFFFFFFFFEFuLL;
          else
            v119 = ~qword_140C4DF80 & BugCheckParameter3;
        }
        v122 = (*(_QWORD *)(48 * ((v119 >> 12) & 0xFFFFFFFFFLL) - 0x57FFFFFFFD8LL) >> 39) & 0x3FF;
        v123 = *(_DWORD *)(BugCheckParameter2 + 48);
        if ( (*(_BYTE *)(BugCheckParameter2 + 48) & 0x70) == 0x30 || (v123 & 0x500000) == 0x500000 )
          ProtectionFromPte = MiGetProtectionFromPte(BugCheckParameter2, BugCheckParameter3);
        else
          ProtectionFromPte = (v123 >> 7) & 0x1F;
        *v151 = ProtectionFromPte;
        MiUnlockPageTableInternal((__int64)v133, (unsigned __int64)v26);
        *v152 = 0;
        *v153 = v122;
        LeafVa = MiGetLeafVa(v27 + 8);
        *v150 = LeafVa;
        return 4096LL;
      }
    }
    else if ( v15 == v25 )
    {
      BugCheckParameter3 = MI_READ_PTE_LOCK_FREE(v15);
      v140 = 1;
      v25 = v15 + 8;
      v29 = (v15 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      v19 = BugCheckParameter3 == 0;
      goto LABEL_22;
    }
    MiUnlockPageTableInternal((__int64)v133, (unsigned __int64)v26);
    v141 = 0LL;
    v29 = (v25 & 0xFFFFFFFFFFFFF000uLL) - 8;
LABEL_22:
    if ( v29 > v148 )
      v29 = v148;
    v147 = v29;
    goto LABEL_25;
  }
  v25 = v148 + 8;
LABEL_25:
  v30 = 0;
  while ( 1 )
  {
    v31 = BugCheckParameter3;
    v32 = v30;
    v132 = v30;
    v33 = 0x2000;
    v136 = v30;
    v131 = v30;
    if ( !BugCheckParameter3 )
    {
      v43 = BugCheckParameter2;
      *v156 = v30;
      v44 = *(_DWORD *)(v43 + 48);
      if ( (*(_BYTE *)(v43 + 48) & 0x70) == 0x30 || (v44 & 0x70) == 0x10 )
      {
        if ( (v44 & 0x70) == 0x30 )
          v130 = *(_WORD *)MiGetAweVadPartition(v43);
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
          v136 = MI_GET_GRAPHICS_PROTECTION_FROM_VAD(v43);
        }
        if ( (v44 & 0x500000) == 0x500000 )
        {
          LockedVadEvent = MiLocateLockedVadEvent(v43, 16);
          if ( LockedVadEvent )
          {
            if ( LockedVadEvent[3] && PsReferencePartitionSafe((__int64)LockedVadEvent[3]) )
            {
              v130 = **v46;
              PsDereferencePartition((__int64)v46);
              v30 = 0;
            }
          }
        }
        goto LABEL_70;
      }
      v47 = v10 >> 12;
      v130 = **(_WORD **)(qword_140C4E688 + 8LL * (*(_WORD *)(**(_QWORD **)(v43 + 72) + 60LL) & 0x3FF));
      ProtoPteAddress = MiGetProtoPteAddress(v43, v47, 4LL, &v144);
      v48 = ProtoPteAddress;
      if ( !ProtoPteAddress )
      {
        if ( a5 && !MiQueryStateMatches(a5, 0x2000, 0, 0, 0) )
        {
          v15 = v134;
          v32 = 1;
          v41 = v132;
          v25 = v134;
          v131 = 1;
LABEL_71:
          v40 = (__int64)v133;
LABEL_72:
          v34 = 0xFFFFF6FB7DBED000uLL;
          goto LABEL_73;
        }
        if ( (unsigned int)MiVadPureReserve(BugCheckParameter2) && v144 && !*(_QWORD *)(v144 + 8) )
        {
          v15 = v134;
          v50 = MiSkipEntirePagefileRegions(v49, v47, v134, v25, v144);
          v40 = (__int64)v133;
          v30 = 0;
          v42 = a5;
          v25 = v50;
          v34 = 0xFFFFF6FB7DBED000uLL;
          v41 = v32;
          if ( v50 == v15 )
            v25 = v15 + 8;
          goto LABEL_73;
        }
        v15 = v134;
        v25 = v134 + 8;
        goto LABEL_69;
      }
      v51 = v144;
      if ( v19 )
      {
        v52 = v134;
        v53 = *(_QWORD *)(v144 + 8);
        v54 = ((__int64)(v147 - v134) >> 3) + 1;
        if ( v54 > 32 )
          v54 = 32LL;
        v55 = v53 + 8 * (*(unsigned int *)(v144 + 44) - (unsigned __int64)(*(_DWORD *)(v144 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v144 + 34) & 2) != 0 || ProtoPteAddress < v53 || ProtoPteAddress >= v55 )
        {
          v54 = 0LL;
        }
        else if ( ProtoPteAddress + 8 * v54 > v55 )
        {
          v54 = (__int64)(v55 - ProtoPteAddress) >> 3;
        }
        v56 = v134 - 8 + 8 * v54;
        v25 = v134 + 8;
        if ( v134 + 8 <= v56 )
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
          v51 = v144;
          v52 = v134;
        }
        if ( v140 )
          goto LABEL_103;
      }
      else
      {
        if ( v140 )
        {
LABEL_103:
          v62 = BugCheckParameter2;
          goto LABEL_104;
        }
        v52 = v134;
        v66 = *(_QWORD *)(v144 + 8);
        v67 = (__int64)(v25 - v134) >> 3;
        v68 = v66 + 8 * (*(unsigned int *)(v144 + 44) - (unsigned __int64)(*(_DWORD *)(v144 + 52) & 0x3FFFFFFF));
        if ( (*(_BYTE *)(v144 + 34) & 2) != 0 || ProtoPteAddress < v66 || ProtoPteAddress >= v68 )
        {
          v67 = 1LL;
        }
        else if ( ProtoPteAddress + 8 * v67 > v68 )
        {
          v67 = (__int64)(v68 - ProtoPteAddress) >> 3;
        }
        v25 = v134 + 8 * v67;
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
                v15 = v134;
                v32 = v131;
                v40 = (__int64)v133;
                v42 = a5;
                v34 = 0xFFFFF6FB7DBED000uLL;
                if ( v41 )
                  v33 = 4096;
                goto LABEL_73;
              }
              v15 = v134;
              v41 = 0;
              v32 = v131;
            }
            else
            {
              if ( !*(_QWORD *)(*(_QWORD *)v51 + 64LL) && (*(_DWORD *)(*(_QWORD *)v51 + 56LL) & 0x2000) == 0 )
              {
                if ( v141 )
                {
                  MiUnlockPageTableInternal((__int64)v133, (unsigned __int64)v141);
                  v141 = 0LL;
                }
                MiUnlockWorkingSetShared((__int64)v133, a3);
                v76 = *(unsigned int *)(v51 + 44) - (unsigned __int64)(*(_DWORD *)(v51 + 52) & 0x3FFFFFFF);
                v77 = *(_QWORD *)(v51 + 8);
                v78 = *(_QWORD *)v48;
                v79 = (__int64)(v25 - v134) >> 3;
                v80 = (__int64)(v77 + 8 * v76 - v48) >> 3;
                if ( v80 > v79 )
                  v80 = v79;
                if ( (unsigned int)MiPteInShadowRange(v48)
                  && (unsigned int)MiPteHasShadow()
                  && (v78 & 1) != 0
                  && ((v78 & 0x20) == 0 || (v78 & 0x42) == 0) )
                {
                  v48 = ProtoPteAddress;
                  v81 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                  if ( v81 )
                  {
                    v84 = *(_QWORD *)(v81 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                    v81 = v78 | 0x20;
                    if ( (v84 & 0x20) == 0 )
                      v81 = v78;
                    v78 = v81;
                    if ( (v84 & 0x42) != 0 )
                      v78 = v81 | 0x42;
                  }
                }
                if ( v78 )
                {
                  v33 = 4096;
                  v41 = (*(_DWORD *)(BugCheckParameter2 + 48) >> 7) & 0x1F;
                }
                else
                {
                  v41 = v132;
                }
                if ( !a5 || MiQueryStateMatches(a5, v33, v41, 0, v130) )
                {
                  if ( v80 )
                  {
                    while ( 1 )
                    {
LABEL_159:
                      v81 = *(_QWORD *)v48;
                      if ( v48 >= 0xFFFFF6FB7DBED000uLL
                        && v48 <= 0xFFFFF6FB7DBED7F8uLL
                        && (unsigned int)MiPteHasShadow()
                        && (v81 & 1) != 0
                        && ((v81 & 0x20) == 0 || (v81 & 0x42) == 0) )
                      {
                        v48 = ProtoPteAddress;
                        v82 = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
                        if ( v82 )
                        {
                          v85 = *(_QWORD *)(v82 + 8 * ((ProtoPteAddress >> 3) & 0x1FF));
                          v82 = v81 | 0x20;
                          if ( (v85 & 0x20) == 0 )
                            v82 = v81;
                          v81 = v82;
                          if ( (v85 & 0x42) != 0 )
                            v81 = v82 | 0x42;
                        }
                      }
                      if ( v81 )
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
                      if ( !--v80 )
                        break;
                      while ( (v48 & 0xFFF) == 0 )
                      {
                        v86 = MI_READ_PTE_LOCK_FREE(((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                        if ( (v86 & 1) != 0 || (v86 & 0x3E0) != 0 )
                        {
                          if ( v33 == 4096 )
                            goto LABEL_159;
                          goto LABEL_185;
                        }
                        if ( v33 == 4096 )
                          goto LABEL_185;
                        if ( v80 <= 0x200 )
                        {
                          v17 += v80;
                          ProtoPteAddress = v48 + 8 * v80;
                          goto LABEL_185;
                        }
                        v48 += 4096LL;
                        v17 += 512LL;
                        ProtoPteAddress = v48;
                        v80 -= 512LL;
                        if ( !v80 )
                          goto LABEL_185;
                      }
                    }
                  }
LABEL_185:
                  v32 = v131;
                }
                else
                {
                  v32 = 1;
                  v131 = 1;
                  v17 = 0LL;
                }
                v15 = v134;
                v40 = (__int64)v133;
                v25 = v134 + 8 * v17;
                MiLockWorkingSetShared((__int64)v133, v81, v82, v83);
                v42 = a5;
                v30 = 0;
                goto LABEL_72;
              }
              v87 = *(_QWORD *)(v51 + 8)
                  + 8 * (*(unsigned int *)(v51 + 44) - (unsigned __int64)(*(_DWORD *)(v51 + 52) & 0x3FFFFFFF))
                  - v48;
              v15 = v134;
              v17 = v87 >> 3;
              v88 = (__int64)(v25 - v134) >> 3;
              if ( v17 > v88 )
                v17 = v88;
              v89 = v17;
              if ( v64 )
              {
                v90 = *(unsigned int *)(v62 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v62 + 32) << 32);
                if ( v47 - v90 <= v65 )
                {
                  v17 = v90 - v47 + v65 + 1;
                  v64 = 0;
                  if ( v89 <= v17 )
                    v17 = v89;
                }
              }
              v25 = v134 + 8 * v17;
              if ( v64 )
                v41 = v132;
              else
                v41 = (*(_DWORD *)(v62 + 48) >> 7) & 0x1F;
              v32 = v131;
              v33 = 4096;
              if ( v64 )
                v33 = 0x2000;
              v30 = 0;
            }
          }
          else
          {
            v41 = v132;
            v32 = v132;
            v15 = v134;
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
      v40 = (__int64)v133;
      v41 = v32;
      v42 = a5;
    }
    else
    {
      v33 = 4096;
      PageProtection = MiGetPageProtection(BugCheckParameter2, v15, (__int64)&v130);
      v39 = ProtoPteAddress;
      if ( ProtoPteAddress )
      {
        v115 = (__int64)v133;
        MiUnlockPageTableInternal((__int64)v133, (unsigned __int64)v141);
        v141 = 0LL;
        MiUnlockWorkingSetShared(v115, a3);
        MiFaultInPagedPool(v39);
        MiLockWorkingSetShared(v115, v116, v117, v118);
        v16 = v148;
        v18 = v149;
        v11 = a3;
        goto LABEL_2;
      }
      v32 = v131;
      v30 = 0;
      v40 = (__int64)v133;
      v41 = PageProtection;
      v42 = a5;
      v34 = 0xFFFFF6FB7DBED000uLL;
      if ( !PageProtection )
        v33 = 0x2000;
    }
LABEL_73:
    if ( v15 == v157 )
    {
      v135 = v130;
      v145 = v33;
      v142 = v41;
      v143 = v136;
      if ( v42 && !MiQueryStateMatches(v42, v33, v41, v136, v130) )
        goto LABEL_311;
      goto LABEL_269;
    }
    if ( v33 != v145 || v130 != v135 || v41 != v142 || v136 != v143 )
      break;
    if ( v17 || v32 == 1 || (__int64)((v15 - v157) & 0xFFFFFFFFFFFFFFF8uLL) < 256 )
      goto LABEL_269;
    if ( !v141 )
      goto LABEL_243;
    v91 = *(_BYTE *)(v40 + 184) & 7;
    v146 = v30;
    if ( v141 == (unsigned __int64 *)0xFFFFF6FB7DBEDF68LL )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      if ( v91 )
      {
        if ( v91 == 7 )
        {
          v93 = CurrentPrcb->SelfmapLockHandle[1].LockQueue.Next == 0LL;
        }
        else
        {
          if ( v91 == 5 )
            Next = CurrentPrcb->SelfmapLockHandle[0].LockQueue.Next;
          else
            Next = CurrentPrcb->SelfmapLockHandle[3].LockQueue.Next;
          v93 = Next == 0LL;
        }
      }
      else
      {
        v93 = CurrentPrcb->SelfmapLockHandle[2].LockQueue.Next == 0LL;
      }
    }
    else
    {
      if ( v91
        || (unsigned __int64)v141 < v34
        || (unsigned __int64)v141 > 0xFFFFF6FB7DBEDFFFuLL
        || (v95 = *(_QWORD *)(KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[8] + 608)) == 0 )
      {
        if ( v91 && (unsigned __int64)v141 >= v34 && (unsigned __int64)v141 <= 0xFFFFF6FB7DBEDFFFuLL )
        {
          PageTableLockBuffer = MiGetPageTableLockBuffer(v40, (__int64)v141, &v146);
          v93 = ((*(_DWORD *)PageTableLockBuffer >> v146) & 2) == 0;
          goto LABEL_242;
        }
        v98 = *v141;
        if ( (unsigned __int64)v141 >= v34
          && (unsigned __int64)v141 <= 0xFFFFF6FB7DBED7F8uLL
          && (unsigned int)MiPteHasShadow()
          && (v98 & 1) != 0
          && ((v98 & 0x20) == 0 || (v98 & 0x42) == 0) )
        {
          v100 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
          if ( v100 )
          {
            v101 = *((_QWORD *)&v100->Flink + ((v99 >> 3) & 0x1FF));
            v102 = v98 | 0x20;
            if ( (v101 & 0x20) == 0 )
              v102 = v98;
            v98 = v102;
            if ( (v101 & 0x42) != 0 )
              v98 = v102 | 0x42;
          }
        }
        v96 = (v98 >> 60) & 2;
      }
      else
      {
        v96 = (*(_DWORD *)(v95 + 4LL * (((unsigned int)v141 >> 3) & 0x1FF)) >> 30) & 1;
      }
      v93 = v96 == 0;
    }
LABEL_242:
    if ( !v93 )
      goto LABEL_309;
LABEL_243:
    v103 = &dword_140C4F7C0;
    if ( (*(_BYTE *)(v40 + 184) & 7) != 2 )
      v103 = (LONG *)(v40 + 192);
    if ( (*v103 & 0x40000000) != 0 )
      goto LABEL_309;
    if ( a3 < 2u )
    {
      v104 = KeGetCurrentPrcb();
      DpcRequestSummary = v104->DpcRequestSummary;
      DpcWatchdogCount = v104->DpcWatchdogCount;
      DpcTimeCount = v104->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v108 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( v104->QuantumEnd )
          {
            v109 = 1;
LABEL_265:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            {
              EtwTraceShouldYieldProcessor(v109, DpcWatchdogCount, DpcTimeCount);
              v30 = 0;
            }
            if ( v109 )
            {
              v15 = v134;
LABEL_309:
              v25 = v15 + 8;
              goto LABEL_312;
            }
LABEL_268:
            v15 = v134;
            goto LABEL_269;
          }
LABEL_260:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v109 = 5;
            goto LABEL_265;
          }
          if ( v104->CurrentThread != v104->IdleThread )
          {
            v109 = 6;
            goto LABEL_265;
          }
LABEL_264:
          _disable();
          v104->DpcWatchdogCount = v30;
          v104->DpcTimeCount = v30;
          KiResetGlobalDpcWatchdogProfiler((__int64)v104);
          _enable();
          v30 = 0;
          v109 = 0;
          goto LABEL_265;
        }
      }
      else
      {
        v108 = v30;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v109 = 2;
          goto LABEL_265;
        }
        if ( v104->QuantumEnd )
        {
          v109 = 3;
          goto LABEL_265;
        }
        NextThread = v104->NextThread;
        if ( NextThread && NextThread != v104->CurrentThread )
        {
          v109 = 4;
          goto LABEL_265;
        }
      }
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_268;
      if ( v108 )
        goto LABEL_260;
      goto LABEL_264;
    }
LABEL_269:
    if ( v131 )
      goto LABEL_312;
    if ( v17 )
      goto LABEL_312;
    v15 += 8LL;
    v134 = v15;
    if ( v25 != v15 || v25 > v147 )
      goto LABEL_312;
    if ( v140 )
    {
      v111 = *(_QWORD *)v15;
      if ( v15 >= 0xFFFFF6FB7DBED000uLL
        && v15 <= 0xFFFFF6FB7DBED7F8uLL
        && (unsigned int)MiPteHasShadow()
        && (v111 & 1) != 0
        && ((v111 & 0x20) == 0 || (v111 & 0x42) == 0) )
      {
        v112 = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
        if ( v112 )
        {
          v113 = *((_QWORD *)&v112->Flink + ((v15 >> 3) & 0x1FF));
          v114 = v111 | 0x20;
          if ( (v113 & 0x20) == 0 )
            v114 = v111;
          v111 = v114;
          if ( (v113 & 0x42) != 0 )
            v111 = v114 | 0x42;
        }
      }
      BugCheckParameter3 = v111;
    }
    v19 = v30;
    v10 = (__int64)((v15 << 25) - v149) >> 16;
    v25 += 8LL;
  }
  v41 = v142;
  v33 = v145;
  v130 = v135;
  v136 = v143;
LABEL_311:
  v25 = v15;
LABEL_312:
  if ( v141 )
    MiUnlockPageTableInternal((__int64)v133, (unsigned __int64)v141);
  result = v33;
  v127 = v151;
  *v150 = (__int64)((v25 << 25) - v149) >> 16;
  v128 = v136;
  *v127 = v41;
  *v152 = v128;
  *v153 = v130;
  return result;
}
