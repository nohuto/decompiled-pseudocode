/*
 * XREFs of MiWalkPageTables @ 0x14030CF90
 * Callers:
 *     MiClearNonPagedPtes @ 0x140227ED0 (MiClearNonPagedPtes.c)
 *     MiEmptyWorkingSetInitiate @ 0x140256548 (MiEmptyWorkingSetInitiate.c)
 *     MmRemoveExecuteGrants @ 0x140258CE0 (MmRemoveExecuteGrants.c)
 *     MmProtectDriverSection @ 0x14025D5E0 (MmProtectDriverSection.c)
 *     MiOutSwapWorkingSet @ 0x1402608AC (MiOutSwapWorkingSet.c)
 *     MiMakeZeroedPageTablesEx @ 0x14026DC5C (MiMakeZeroedPageTablesEx.c)
 *     MiDeleteSystemPageTables @ 0x14026E468 (MiDeleteSystemPageTables.c)
 *     MiIsCfgBitMapPageShared @ 0x1402810B0 (MiIsCfgBitMapPageShared.c)
 *     MiGetNextPageTable @ 0x14028F080 (MiGetNextPageTable.c)
 *     MiDeleteEmptyPageTables @ 0x14029F6FC (MiDeleteEmptyPageTables.c)
 *     MiDecommitPages @ 0x1402CE240 (MiDecommitPages.c)
 *     MiCountSharedPages @ 0x1402D0500 (MiCountSharedPages.c)
 *     MiAgeWorkingSet @ 0x14030C870 (MiAgeWorkingSet.c)
 *     MiQueryAddressState @ 0x140318330 (MiQueryAddressState.c)
 *     MiMakeHyperRangeAccessible @ 0x1403199E0 (MiMakeHyperRangeAccessible.c)
 *     MiDeletePagablePteRange @ 0x140330080 (MiDeletePagablePteRange.c)
 *     MiTrimWorkingSet @ 0x1403744D8 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x140374864 (MiSimpleAging.c)
 *     MiCaptureAndResetWorkingSetAccessBits @ 0x1403D2280 (MiCaptureAndResetWorkingSetAccessBits.c)
 *     MiWalkResetCommitPages @ 0x14058154C (MiWalkResetCommitPages.c)
 *     MmAddRangeToCrashDump @ 0x140593218 (MmAddRangeToCrashDump.c)
 *     MmRemoveSystemCacheFromDump @ 0x14059368C (MmRemoveSystemCacheFromDump.c)
 *     MmUpdateOldWorkingSetPages @ 0x14059774C (MmUpdateOldWorkingSetPages.c)
 *     MiGetWorkingSetInfoEx @ 0x1405A6204 (MiGetWorkingSetInfoEx.c)
 *     MiCombineWorkingSet @ 0x1405B5EB8 (MiCombineWorkingSet.c)
 *     MmUnlockPhysicalPagesByVa @ 0x14096A384 (MmUnlockPhysicalPagesByVa.c)
 *     MiMarkNonPagedHiberPhasePages @ 0x140A4FA24 (MiMarkNonPagedHiberPhasePages.c)
 *     MiMarkKernelPageTablePages @ 0x140A4FD14 (MiMarkKernelPageTablePages.c)
 *     MiMarkHiberNotCachedPages @ 0x140A4FDB0 (MiMarkHiberNotCachedPages.c)
 *     MiConvertHiberPhasePages @ 0x140A4FE40 (MiConvertHiberPhasePages.c)
 *     MxCreatePfns @ 0x140AF3514 (MxCreatePfns.c)
 *     MxZeroPageTablePfns @ 0x140AF43D4 (MxZeroPageTablePfns.c)
 *     MiMarkLargePageMappings @ 0x140AF4588 (MiMarkLargePageMappings.c)
 *     MiFillPfnGaps @ 0x140AF6A74 (MiFillPfnGaps.c)
 *     MiAddLoaderHalIoMappings @ 0x140B08434 (MiAddLoaderHalIoMappings.c)
 *     MiCountBootDriverRegions @ 0x140B29E10 (MiCountBootDriverRegions.c)
 *     MiCreateInitialSystemWsles @ 0x140B2F9C4 (MiCreateInitialSystemWsles.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiPerformSafePdeWrite @ 0x14025D6C0 (MiPerformSafePdeWrite.c)
 *     MiInitializeWalkBounds @ 0x14030D400 (MiInitializeWalkBounds.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiWalkPageTablesRecursively @ 0x14031A5C0 (MiWalkPageTablesRecursively.c)
 *     MiLockPageTableInternal @ 0x14031DE00 (MiLockPageTableInternal.c)
 *     MiWalkPageTablesRecursivelyNoSynch @ 0x1403C801C (MiWalkPageTablesRecursivelyNoSynch.c)
 */

__int64 __fastcall MiWalkPageTables(__m128i *a1)
{
  __m128i *v1; // rdi
  unsigned __int64 v2; // rax
  int v3; // r8d
  unsigned int v4; // ebx
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __m128i *p_si128; // r13
  unsigned int v8; // esi
  unsigned int v9; // r12d
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rbp
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  __int32 v23; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  __int64 Process; // rcx
  __int64 i; // rsi
  unsigned __int64 v28; // rbx
  signed __int64 v29; // r8
  int v30; // ebx
  __int64 result; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // [rsp+20h] [rbp-D8h]
  unsigned __int64 v36; // [rsp+28h] [rbp-D0h]
  __m128i *v37; // [rsp+30h] [rbp-C8h]
  __int64 v38; // [rsp+38h] [rbp-C0h]
  __int64 v39; // [rsp+40h] [rbp-B8h]
  __m128i si128; // [rsp+48h] [rbp-B0h] BYREF
  __int64 v41; // [rsp+58h] [rbp-A0h]
  unsigned __int64 v42; // [rsp+60h] [rbp-98h]
  unsigned __int64 v43; // [rsp+68h] [rbp-90h]
  unsigned __int64 v44; // [rsp+70h] [rbp-88h]
  unsigned __int64 v45; // [rsp+78h] [rbp-80h]
  __int64 v46; // [rsp+80h] [rbp-78h]
  _QWORD v47[14]; // [rsp+88h] [rbp-70h] BYREF
  int v49; // [rsp+108h] [rbp+10h]
  unsigned int v50; // [rsp+110h] [rbp+18h]
  unsigned int v51; // [rsp+118h] [rbp+20h]

  v1 = a1;
  if ( (a1->m128i_i32[0] & 0x10000) == 0 )
    a1[4].m128i_i64[1] = *(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1[1].m128i_i64[1] + 174));
  if ( !a1->m128i_i8[6] )
    a1->m128i_i8[6] = 15;
  v2 = a1[3].m128i_u64[1];
  if ( !v2 )
  {
    si128 = a1[2];
LABEL_50:
    v4 = 1;
    goto LABEL_13;
  }
  if ( v2 == 0xFFFFF6FB7DBEDF68uLL )
  {
    v2 = 0xFFFFF6FB7DBEDF70uLL;
    a1[3].m128i_i64[1] = 0xFFFFF6FB7DBEDF70uLL;
  }
  v3 = -1;
  if ( v2 < 0xFFFFF68000000000uLL || v2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffff0000000000000000);
    a1[3].m128i_i64[1] = 0LL;
    goto LABEL_50;
  }
  do
  {
    ++v3;
    v2 = (__int64)(v2 << 25) >> 16;
  }
  while ( v2 >= 0xFFFFF68000000000uLL && v2 <= 0xFFFFF6FFFFFFFFFFuLL );
  si128.m128i_i64[0] = v2;
  v4 = 1;
  v49 = 1;
  si128.m128i_i64[1] = -1LL;
  if ( v3 == -1 )
    goto LABEL_14;
  v41 = 0LL;
  v42 = v2 - 1;
  v4 = 2;
LABEL_13:
  v49 = v4;
LABEL_14:
  v5 = MiInitializeWalkBounds(a1, v47);
  v6 = 0;
  v50 = v5;
  p_si128 = &si128;
  v51 = 0;
  v8 = v5;
  v37 = &si128;
  do
  {
    v9 = 0;
    if ( v8 )
    {
      v10 = p_si128->m128i_i64[0];
      v11 = p_si128->m128i_u64[1];
      v39 = p_si128->m128i_i64[0];
      v36 = v11;
      do
      {
        v12 = v10;
        v13 = v47[2 * v9 + 1];
        if ( v10 <= v13 )
        {
          v14 = v47[2 * v9];
          if ( v11 >= v14 )
          {
            if ( v10 < v14 )
              v12 = v47[2 * v9];
            v15 = v11;
            if ( v11 > v13 )
              v15 = v47[2 * v9 + 1];
            v16 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[0] = v16;
            v17 = ((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[5].m128i_i64[1] = v17;
            v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[0] = v18;
            v19 = ((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[6].m128i_i64[1] = v19;
            v20 = ((v18 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[0] = v20;
            v21 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[7].m128i_i64[1] = v21;
            v22 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v1[8].m128i_i64[0] = v22;
            v1[8].m128i_i64[1] = ((v21 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
            v23 = v1->m128i_i32[0];
            v1[4].m128i_i64[0] = 0LL;
            if ( (v23 & 0x10000) != 0 )
            {
              result = MiWalkPageTablesRecursivelyNoSynch(v1, v22, 3LL);
              if ( (int)result >= 4 )
                return result;
            }
            else
            {
              if ( (v23 & 4) != 0 )
              {
                v24 = v1[1].m128i_i64[1];
                v1->m128i_i8[4] |= 1u;
                v38 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v35 = v24;
                v43 = (((v38 << 25 >> 16) & 0xFFFFFFFFF000uLL) >> 9) - 0x98000000000LL;
                v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v46 = ((v45 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                v25 = 0xFFFFF6FB7DBEDF68uLL;
                MiLockPageTableInternal(v24, 0xFFFFF6FB7DBEDF68uLL, 0LL);
                for ( i = 2LL; ; --i )
                {
                  v28 = *(&v43 + i);
                  v29 = *(_QWORD *)v28;
                  if ( v28 >= 0xFFFFF6FB7DBED000uLL && v28 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
                  {
                    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
                    if ( *(_BYTE *)(Process + 912) != 1 && (v29 & 1) != 0 && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
                    {
                      Process = (__int64)KeGetCurrentThread()->ApcState.Process;
                      v32 = *(_QWORD *)(Process + 1928);
                      if ( v32 )
                      {
                        v33 = *(_QWORD *)(v32 + 8 * ((v28 >> 3) & 0x1FF));
                        v34 = v29 | 0x20;
                        Process = (unsigned __int8)v33;
                        LOBYTE(Process) = v33 & 0x20;
                        if ( (v33 & 0x20) == 0 )
                          v34 = *(_QWORD *)v28;
                        v29 = v34;
                        if ( (v33 & 0x42) != 0 )
                          v29 = v34 | 0x42;
                      }
                    }
                  }
                  if ( (v29 & 0x81) != 1 )
                    break;
                  if ( (v29 & 0x20) == 0 )
                    MiPerformSafePdeWrite(Process, (volatile signed __int64 *)*(&v43 + i), v29, 1);
                  if ( v28 != v25 )
                  {
                    MiLockPageTableInternal(v35, v28, 0LL);
                    MiUnlockPageTableInternal(v35, v25);
                    v25 = v28;
                  }
                  if ( !i )
                    break;
                }
                v1 = a1;
                p_si128 = v37;
                if ( v25 == v38 )
                {
                  a1->m128i_i8[4] &= ~1u;
                  a1[3].m128i_i64[0] = v38;
                }
                else
                {
                  MiUnlockPageTableInternal(v35, v25);
                }
                v8 = v50;
              }
              else
              {
                v1[3].m128i_i64[0] = 0LL;
                if ( (v23 & 0x400) != 0 )
                  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C51BA4);
                v1->m128i_i8[4] &= ~1u;
              }
              v30 = MiWalkPageTablesRecursively(v1, v22, 3LL);
              if ( (v1->m128i_i32[0] & 0x400) != 0 )
                ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C51BA4);
              if ( v30 >= 4 )
                return (unsigned int)v30;
            }
            v11 = v36;
          }
        }
        v10 = v39;
        ++v9;
      }
      while ( v9 < v8 );
      v4 = v49;
      v6 = v51;
    }
    ++v6;
    ++p_si128;
    v51 = v6;
    v37 = p_si128;
  }
  while ( v6 < v4 );
  return 4LL;
}
