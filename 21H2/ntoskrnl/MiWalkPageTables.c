/*
 * XREFs of MiWalkPageTables @ 0x1402ADBC0
 * Callers:
 *     MiCountSharedPages @ 0x140209600 (MiCountSharedPages.c)
 *     MiClearNonPagedPtes @ 0x14021AB20 (MiClearNonPagedPtes.c)
 *     MiTrimWorkingSet @ 0x14029EC80 (MiTrimWorkingSet.c)
 *     MiEmptyWorkingSetInitiate @ 0x14029F170 (MiEmptyWorkingSetInitiate.c)
 *     MiOutSwapWorkingSet @ 0x1402A1D58 (MiOutSwapWorkingSet.c)
 *     MiAgeWorkingSet @ 0x1402AD440 (MiAgeWorkingSet.c)
 *     MiMakeHyperRangeAccessible @ 0x1402BFDE0 (MiMakeHyperRangeAccessible.c)
 *     MiMakeZeroedPageTablesEx @ 0x140307B4C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x1403084AC (MiDeleteSystemPageTables.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiMoveDirtyBitsToPfns @ 0x1403221E0 (MiMoveDirtyBitsToPfns.c)
 *     MiQueryAddressState @ 0x14033A480 (MiQueryAddressState.c)
 *     MiDecommitPages @ 0x14033F570 (MiDecommitPages.c)
 *     MiDeletePagablePteRange @ 0x1403420B0 (MiDeletePagablePteRange.c)
 *     MiSimpleAging @ 0x14036C5D8 (MiSimpleAging.c)
 *     MmRemoveExecuteGrants @ 0x14037E870 (MmRemoveExecuteGrants.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403A0A98 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiDeleteEmptyPageTables @ 0x1403F4F90 (MiDeleteEmptyPageTables.c)
 *     MiWalkResetCommitPages @ 0x14052CD38 (MiWalkResetCommitPages.c)
 *     MmRemoveSystemCacheFromDump @ 0x140538DCC (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x14053CC2C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x140547020 (MiGetWorkingSetInfoEx.c)
 *     MiCombineWorkingSet @ 0x14055CE64 (MiCombineWorkingSet.c)
 *     MiConvertHiberPhasePages @ 0x140995F28 (MiConvertHiberPhasePages.c)
 *     MiMarkHiberNotCachedPages @ 0x1409B119C (MiMarkHiberNotCachedPages.c)
 *     MiMarkKernelPageTablePages @ 0x1409B1308 (MiMarkKernelPageTablePages.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x1409B13A4 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkLargePageMappings @ 0x140A43CD0 (MiMarkLargePageMappings.c)
 *     MiCreateInitialSystemWsles @ 0x140A5020C (MiCreateInitialSystemWsles.c)
 *     MiAddLoaderHalIoMappings @ 0x140A553A4 (MiAddLoaderHalIoMappings.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiInitializeWalkBounds @ 0x1402ADA10 (MiInitializeWalkBounds.c)
 *     MiWalkPageTablesRecursively @ 0x1402B06A0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x1402B33F0 (MiLockPageTableInternal.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031FAE0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140346AD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiPerformSafePdeWrite @ 0x1403812EC (MiPerformSafePdeWrite.c)
 */

__int64 __fastcall MiWalkPageTables(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rax
  int v3; // r8d
  unsigned int v4; // r13d
  unsigned int v5; // eax
  unsigned __int64 v6; // r10
  __int64 v7; // r11
  unsigned int v8; // ecx
  unsigned __int64 *v9; // r12
  unsigned int v10; // r14d
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  __int16 v25; // ax
  __int64 v26; // r9
  unsigned __int64 v27; // r14
  _KPROCESS *Process; // rcx
  __int64 i; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  int v32; // ebx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // [rsp+20h] [rbp-D8h]
  unsigned __int64 *v38; // [rsp+28h] [rbp-D0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v40; // [rsp+38h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+40h] [rbp-B8h]
  unsigned __int64 v42; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v43; // [rsp+50h] [rbp-A8h]
  __int64 v44; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v45; // [rsp+60h] [rbp-98h]
  unsigned __int64 v46; // [rsp+68h] [rbp-90h]
  unsigned __int64 v47; // [rsp+70h] [rbp-88h]
  unsigned __int64 v48; // [rsp+78h] [rbp-80h]
  unsigned __int64 v49; // [rsp+80h] [rbp-78h]
  _QWORD v50[6]; // [rsp+88h] [rbp-70h] BYREF
  int v52; // [rsp+108h] [rbp+10h]
  unsigned int v53; // [rsp+110h] [rbp+18h]
  unsigned int v54; // [rsp+118h] [rbp+20h]

  v1 = a1;
  if ( !*(_BYTE *)(a1 + 5) )
    *(_BYTE *)(a1 + 5) = 15;
  v2 = *(_QWORD *)(a1 + 56);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(qword_140C4E688 + 8LL * *(unsigned __int16 *)(*(_QWORD *)(a1 + 24) + 174LL));
  if ( v2 )
  {
    if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
    {
      v2 = 0xFFFFF6FB7DBEDF70uLL;
      *(_QWORD *)(a1 + 56) = 0xFFFFF6FB7DBEDF70uLL;
    }
    v3 = -1;
    if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
    {
      v2 = 0LL;
      *(_QWORD *)(a1 + 56) = 0LL;
    }
    else
    {
      do
      {
        ++v3;
        v2 = (__int64)(v2 << 25) >> 16;
      }
      while ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL );
    }
    v42 = v2;
    v4 = 1;
    v43 = -1LL;
    if ( v3 != -1 )
    {
      v44 = 0LL;
      v45 = v2 - 1;
      v4 = 2;
    }
  }
  else
  {
    v4 = 1;
    v42 = *(_QWORD *)(a1 + 32);
    v43 = *(_QWORD *)(a1 + 40);
  }
  v5 = MiInitializeWalkBounds(a1, v50);
  v8 = v7;
  v53 = v5;
  v9 = &v42;
  v54 = v7;
  v10 = v5;
  v38 = &v42;
  do
  {
    v52 = v7;
    v11 = v7;
    if ( !v10 )
      goto LABEL_41;
    v12 = *v9;
    v13 = v9[1];
    v41 = *v9;
    v40 = v13;
    do
    {
      v14 = v12;
      v15 = v50[2 * v11 + 1];
      if ( v12 > v15 )
        goto LABEL_39;
      v16 = v50[2 * v11];
      if ( v13 < v16 )
        goto LABEL_39;
      if ( v12 < v16 )
        v14 = v50[2 * v11];
      v17 = v13;
      if ( v13 > v15 )
        v17 = v50[2 * v11 + 1];
      v18 = v6 + ((v14 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 80) = v18;
      v19 = v6 + ((v17 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 88) = v19;
      v20 = v6 + ((v18 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 96) = v20;
      v21 = v6 + ((v19 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 104) = v21;
      v22 = v6 + ((v20 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 112) = v22;
      v23 = v6 + ((v21 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 120) = v23;
      v24 = v6 + ((v22 >> 9) & 0x7FFFFFFFF8LL);
      *(_QWORD *)(v1 + 128) = v24;
      *(_QWORD *)(v1 + 136) = v6 + ((v23 >> 9) & 0x7FFFFFFFF8LL);
      v25 = *(_WORD *)v1;
      *(_QWORD *)(v1 + 64) = v7;
      if ( (v25 & 4) != 0 )
      {
        v26 = *(_QWORD *)(v1 + 24);
        *(_BYTE *)(v1 + 2) |= 1u;
        v39 = v6 + ((v24 >> 9) & 0x7FFFFFFFF8LL);
        v37 = v26;
        v46 = v6 + (((unsigned __int64)((__int64)((v39 << 25) - (v6 << 25)) >> 16) >> 9) & 0x7FFFFFFFF8LL);
        v47 = v6 + ((v46 >> 9) & 0x7FFFFFFFF8LL);
        v48 = v6 + ((v47 >> 9) & 0x7FFFFFFFF8LL);
        v49 = v6 + ((v48 >> 9) & 0x7FFFFFFFF8LL);
        v27 = 0xFFFFF6FB7DBEDF68uLL;
        MiLockPageTableInternal(v26, 0xFFFFF6FB7DBEDF68uLL, 0LL);
        for ( i = 2LL; ; --i )
        {
          v30 = *(&v46 + i);
          v31 = *(_QWORD *)v30;
          if ( v30 >= 0xFFFFF6FB7DBED000uLL && v30 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 && (v31 & 1) != 0 && ((v31 & 0x20) == 0 || (v31 & 0x42) == 0) )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              Flink = Process[1].ProcessListEntry.Flink;
              if ( Flink )
              {
                v35 = *((_QWORD *)&Flink->Flink + ((v30 >> 3) & 0x1FF));
                v36 = v31 | 0x20;
                Process = (_KPROCESS *)(unsigned __int8)v35;
                LOBYTE(Process) = v35 & 0x20;
                if ( (v35 & 0x20) == 0 )
                  v36 = *(_QWORD *)v30;
                v31 = v36;
                if ( (v35 & 0x42) != 0 )
                  v31 = v36 | 0x42;
              }
            }
          }
          if ( (v31 & 0x81) != 1 )
            break;
          if ( (v31 & 0x20) == 0 )
            MiPerformSafePdeWrite(Process, *(&v46 + i), v31, 1LL);
          if ( v30 != v27 )
          {
            MiLockPageTableInternal(v37, v30, 0LL);
            MiUnlockPageTableInternal(v37, v27);
            v27 = v30;
          }
          if ( !i )
            break;
        }
        v1 = a1;
        v9 = v38;
        if ( v27 != v39 )
        {
          MiUnlockPageTableInternal(v37, v27);
          v11 = v52;
          v10 = v53;
          goto LABEL_34;
        }
        v11 = v52;
        v10 = v53;
        *(_QWORD *)(a1 + 48) = v39;
      }
      else
      {
        *(_QWORD *)(v1 + 48) = v7;
        if ( (v25 & 0x400) != 0 )
          ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4E35C);
      }
      *(_BYTE *)(v1 + 2) &= ~1u;
LABEL_34:
      v32 = MiWalkPageTablesRecursively(v1, v24, 3LL);
      if ( (*(_WORD *)v1 & 0x400) != 0 )
        ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4E35C);
      if ( v32 >= 3 )
        return (unsigned int)v32;
      v13 = v40;
      v7 = 0LL;
      v6 = 0xFFFFF68000000000uLL;
LABEL_39:
      v12 = v41;
      v52 = ++v11;
    }
    while ( v11 < v10 );
    v8 = v54;
LABEL_41:
    ++v8;
    v9 += 2;
    v54 = v8;
    v38 = v9;
  }
  while ( v8 < v4 );
  return 3LL;
}
