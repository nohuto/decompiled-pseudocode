/*
 * XREFs of MiMapUserLargePages @ 0x140559290
 * Callers:
 *     MiReserveUserMemory @ 0x1405FF360 (MiReserveUserMemory.c)
 *     MiMapViewOfImageSection @ 0x140601270 (MiMapViewOfImageSection.c)
 *     MiCopyLargeVad @ 0x1408D6720 (MiCopyLargeVad.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1402589C0 (MiWorkingSetIsContended.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiGetLargestPageIndex @ 0x140315FF4 (MiGetLargestPageIndex.c)
 *     MiUnlockPageTable @ 0x1403B2B80 (MiUnlockPageTable.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F1F70 (MiInitializeLargeUserBasePfn.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14052C14C (MiLogPerfMemoryRangeEvent.c)
 *     MiShouldYieldProcessor @ 0x140531508 (MiShouldYieldProcessor.c)
 *     MiInitPerfMemoryFlags @ 0x14053F584 (MiInitPerfMemoryFlags.c)
 *     MiComputePreferredNode @ 0x1405426A8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054A338 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x140558A5C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x140558D78 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x1405590D8 (MiInsertLargeUserMapping.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // r15
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  __int64 *v6; // r8
  char v7; // r10
  __int64 result; // rax
  unsigned int v9; // ecx
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // rdx
  __int64 v12; // rax
  unsigned int v13; // r12d
  unsigned int LargestPageIndex; // r8d
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rbp
  ULONG_PTR v17; // r13
  unsigned __int64 v18; // r9
  unsigned int v19; // esi
  bool i; // cc
  unsigned __int64 v21; // rcx
  __int64 v22; // rcx
  ULONG_PTR v23; // r14
  __int64 v24; // rcx
  int v25; // r13d
  int v26; // eax
  unsigned int inited; // eax
  int v28; // [rsp+30h] [rbp-B8h]
  unsigned int v29; // [rsp+34h] [rbp-B4h]
  int v30; // [rsp+38h] [rbp-B0h]
  int v31; // [rsp+3Ch] [rbp-ACh]
  unsigned int v32; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+48h] [rbp-A0h]
  _DWORD *v34; // [rsp+50h] [rbp-98h]
  unsigned __int64 v35; // [rsp+58h] [rbp-90h]
  _KPROCESS *Process; // [rsp+60h] [rbp-88h]
  _QWORD *v37; // [rsp+68h] [rbp-80h]
  __int64 v38; // [rsp+78h] [rbp-70h]
  unsigned __int64 v39; // [rsp+80h] [rbp-68h]
  unsigned __int64 v40; // [rsp+88h] [rbp-60h]
  _QWORD v41[11]; // [rsp+90h] [rbp-58h] BYREF
  int v43; // [rsp+108h] [rbp+20h]

  memset(v41, 0, 32);
  v2 = MiComputePreferredNode(a1);
  v31 = v2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v4 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v35 = v4;
  v5 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v39 = v5;
  v40 = (v5 - v4) >> 12;
  result = MiCreateLargePfnList(a1, v40, v7, v6, (char *)v41);
  if ( (int)result < 0 )
    return result;
  v9 = *(_DWORD *)(a1 + 48);
  v10 = 0x140000000uLL;
  v11 = v9;
  v12 = (v9 >> 18) & 3;
  if ( LODWORD(MiVadPageSizes[v12]) == 16 )
  {
    v13 = 2;
LABEL_4:
    LargestPageIndex = v13;
    goto LABEL_8;
  }
  if ( (v9 & 0x500000) == 0x500000 )
  {
    v13 = MiVadPageIndices[v12];
    goto LABEL_4;
  }
  v13 = 1;
  LargestPageIndex = MiGetLargestPageIndex();
LABEL_8:
  v30 = 0;
  v43 = 0;
  v15 = 17;
  v28 = 0;
  v16 = 0LL;
  v29 = LargestPageIndex;
  v17 = 0LL;
  v18 = v4;
  v34 = (_DWORD *)v4;
  v32 = *(_DWORD *)(v10 + 4 * ((v11 >> 7) & 0x1F) + 95056);
  BugCheckParameter4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 >= v5 )
    goto LABEL_61;
  do
  {
    v19 = LargestPageIndex;
    for ( i = LargestPageIndex <= v13; i; i = v19 <= v13 )
    {
      v21 = *(_QWORD *)(v10 + 8LL * v19 + 108208) << 12;
      if ( !(v18 % v21) && v5 - v18 >= v21 )
      {
        LODWORD(v22) = v19;
        if ( v41[v19] )
        {
LABEL_17:
          if ( (unsigned int)v22 <= v13 )
          {
            v19 = v22;
            break;
          }
        }
        else
        {
          while ( 1 )
          {
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 > v13 )
              break;
            if ( v41[v22] )
              goto LABEL_17;
          }
        }
        MiDemotePfnListChain((__int64)v41, v19, v19, (_DWORD *)v18);
        v10 = 0x140000000uLL;
        break;
      }
      ++v19;
    }
    v37 = (_QWORD *)v41[v19];
    v41[v19] = *v37;
    v23 = BugCheckParameter4;
    v38 = *(_QWORD *)(v10 + 8LL * v19 + 108208);
    if ( v19 < 2 )
    {
      v24 = 2 - v19;
      do
      {
        v23 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v24;
      }
      while ( v24 );
      v2 = v31;
    }
    if ( ((v23 ^ v17) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v16 )
      {
        MiUnlockPageTable(v3, v16);
        v16 = 0LL;
      }
      v25 = v28;
      if ( v28 == 1 )
      {
        if ( v19 )
        {
          v26 = 1;
          v43 = 1;
        }
        else
        {
          v26 = v43;
        }
      }
      else
      {
        v26 = v43;
        if ( !v19 )
          v26 = 1;
        v43 = v26;
      }
      if ( v26 )
      {
        v43 = 0;
        if ( v15 == 17 )
          goto LABEL_41;
        if ( v28 == 1 )
          MiUnlockWorkingSetExclusive(v3, v15);
        else
          MiUnlockWorkingSetShared(v3, v15);
        v15 = 17;
      }
      if ( v15 != 17 )
      {
LABEL_45:
        if ( !v25 )
          v16 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v23, 0LL, v2 + 1, v15, v25);
        goto LABEL_48;
      }
LABEL_41:
      if ( !v19 )
      {
        v28 = 1;
        v25 = 1;
        v15 = MiLockWorkingSetForLargeMapping(v3, 1LL, v2);
      }
      if ( v15 == 17 )
      {
        v25 = 0;
        v28 = 0;
        v15 = MiLockWorkingSetShared(v3);
      }
      goto LABEL_45;
    }
LABEL_48:
    MiInitializeLargeUserBasePfn((__int64)v37, BugCheckParameter4, (unsigned __int64)Process, (_DWORD *)v18);
    MiInsertLargeUserMapping(a1, BugCheckParameter4, (__int64)(v37 + 0xB000000000LL) / 48, v19, v32);
    v34 += 1024 * v38;
    BugCheckParameter4 += 8 * v38;
    if ( (++v30 & 0xF) == 0 && MiWorkingSetIsContended(v3) || MiShouldYieldProcessor() )
    {
      v17 = 0LL;
      v43 = 1;
    }
    else
    {
      v17 = v23;
    }
    v5 = v39;
    v10 = 0x140000000uLL;
    v18 = (unsigned __int64)v34;
    LargestPageIndex = v29;
  }
  while ( (unsigned __int64)v34 < v39 );
  if ( v16 )
    MiUnlockPageTable(v3, v16);
  if ( v15 != 17 )
  {
    if ( v28 == 1 )
      MiUnlockWorkingSetExclusive(v3, v15);
    else
      MiUnlockWorkingSetShared(v3, v15);
  }
  v4 = v35;
LABEL_61:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 13);
    MiLogPerfMemoryRangeEvent(v4, (__int64)Process, inited, v40);
  }
  return 0LL;
}
