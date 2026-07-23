/*
 * XREFs of MiMapUserLargePages @ 0x14055E970
 * Callers:
 *     MiMapViewOfImageSection @ 0x140686B20 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407018B0 (MiReserveUserMemory.c)
 *     MiCopyLargeVad @ 0x1408D9E80 (MiCopyLargeVad.c)
 * Callees:
 *     MiGetLargestPageIndex @ 0x1402486D0 (MiGetLargestPageIndex.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     MiWorkingSetIsContended @ 0x140316520 (MiWorkingSetIsContended.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTable @ 0x1403B6DD0 (MiUnlockPageTable.c)
 *     MiInitializeLargeUserBasePfn @ 0x1403F7C20 (MiInitializeLargeUserBasePfn.c)
 *     MiLogPerfMemoryRangeEvent @ 0x14053185C (MiLogPerfMemoryRangeEvent.c)
 *     MiShouldYieldProcessor @ 0x140536C18 (MiShouldYieldProcessor.c)
 *     MiInitPerfMemoryFlags @ 0x140544C98 (MiInitPerfMemoryFlags.c)
 *     MiComputePreferredNode @ 0x140547DB8 (MiComputePreferredNode.c)
 *     MiLockWorkingSetForLargeMapping @ 0x14054FA18 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x14055E13C (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x14055E458 (MiDemotePfnListChain.c)
 *     MiInsertLargeUserMapping @ 0x14055E7B8 (MiInsertLargeUserMapping.c)
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
  __int64 v23; // r8
  ULONG_PTR v24; // r14
  __int64 v25; // rcx
  int v26; // r13d
  __int64 v27; // rdx
  int v28; // eax
  unsigned int inited; // eax
  int v30; // [rsp+30h] [rbp-B8h]
  unsigned int v31; // [rsp+34h] [rbp-B4h]
  int v32; // [rsp+38h] [rbp-B0h]
  int v33; // [rsp+3Ch] [rbp-ACh]
  unsigned int v34; // [rsp+40h] [rbp-A8h]
  ULONG_PTR BugCheckParameter1; // [rsp+48h] [rbp-A0h]
  _DWORD *v36; // [rsp+50h] [rbp-98h]
  unsigned __int64 v37; // [rsp+58h] [rbp-90h]
  _KPROCESS *Process; // [rsp+60h] [rbp-88h]
  _QWORD *v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+78h] [rbp-70h]
  unsigned __int64 v41; // [rsp+80h] [rbp-68h]
  unsigned __int64 v42; // [rsp+88h] [rbp-60h]
  _QWORD v43[11]; // [rsp+90h] [rbp-58h] BYREF
  int v45; // [rsp+108h] [rbp+20h]

  memset(v43, 0, 32);
  v2 = MiComputePreferredNode(a1);
  v33 = v2;
  Process = KeGetCurrentThread()->ApcState.Process;
  v3 = (__int64)&Process[1].ActiveProcessorsPadding[6];
  v4 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v37 = v4;
  v5 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v41 = v5;
  v42 = (v5 - v4) >> 12;
  result = MiCreateLargePfnList(a1, v42, v7, v6, (char *)v43);
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
  v32 = 0;
  v45 = 0;
  v15 = 17;
  v30 = 0;
  v16 = 0LL;
  v31 = LargestPageIndex;
  v17 = 0LL;
  v18 = v4;
  v36 = (_DWORD *)v4;
  v34 = *(_DWORD *)(v10 + 4 * ((v11 >> 7) & 0x1F) + 98416);
  BugCheckParameter1 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 >= v5 )
    goto LABEL_61;
  do
  {
    v19 = LargestPageIndex;
    for ( i = LargestPageIndex <= v13; i; i = v19 <= v13 )
    {
      v21 = *(_QWORD *)(v10 + 8LL * v19 + 112136) << 12;
      if ( !(v18 % v21) && v5 - v18 >= v21 )
      {
        LODWORD(v22) = v19;
        if ( v43[v19] )
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
            if ( v43[v22] )
              goto LABEL_17;
          }
        }
        MiDemotePfnListChain((__int64)v43, v19, v19, (_DWORD *)v18);
        v10 = 0x140000000uLL;
        break;
      }
      ++v19;
    }
    v23 = v19;
    v39 = (_QWORD *)v43[v19];
    v43[v19] = *v39;
    v24 = BugCheckParameter1;
    v40 = *(_QWORD *)(v10 + 8LL * v19 + 112136);
    if ( v19 < 2 )
    {
      v25 = 2 - v19;
      do
      {
        v24 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v25;
      }
      while ( v25 );
      v2 = v33;
    }
    if ( ((v24 ^ v17) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      if ( v16 )
      {
        MiUnlockPageTable(v3, v16);
        v16 = 0LL;
      }
      v26 = v30;
      v27 = 1LL;
      if ( v30 == 1 )
      {
        if ( v19 )
        {
          v28 = 1;
          v45 = 1;
        }
        else
        {
          v28 = v45;
        }
      }
      else
      {
        v28 = v45;
        if ( !v19 )
          v28 = 1;
        v45 = v28;
      }
      if ( v28 )
      {
        v45 = 0;
        if ( v15 == 17 )
          goto LABEL_41;
        if ( v30 == 1 )
          MiUnlockWorkingSetExclusive(v3, v15);
        else
          MiUnlockWorkingSetShared(v3, v15);
        v15 = 17;
        v27 = 1LL;
      }
      if ( v15 != 17 )
      {
LABEL_45:
        if ( !v26 )
          v16 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        MiMakeSystemAddressValid(v24, 0LL, v2 + 1, v15, v26);
        goto LABEL_48;
      }
LABEL_41:
      if ( !v19 )
      {
        v30 = 1;
        v26 = 1;
        v15 = MiLockWorkingSetForLargeMapping(v3, 1LL, v2);
      }
      if ( v15 == 17 )
      {
        v26 = 0;
        v30 = 0;
        v15 = MiLockWorkingSetShared(v3, v27, v23, (_DWORD *)v18);
      }
      goto LABEL_45;
    }
LABEL_48:
    MiInitializeLargeUserBasePfn((__int64)v39, BugCheckParameter1, (unsigned __int64)Process, (_DWORD *)v18);
    MiInsertLargeUserMapping(a1, BugCheckParameter1, (__int64)(v39 + 0xB000000000LL) / 48, v19, v34);
    v36 += 1024 * v40;
    BugCheckParameter1 += 8 * v40;
    if ( (++v32 & 0xF) == 0 && MiWorkingSetIsContended(v3) || MiShouldYieldProcessor() )
    {
      v17 = 0LL;
      v45 = 1;
    }
    else
    {
      v17 = v24;
    }
    v5 = v41;
    v10 = 0x140000000uLL;
    v18 = (unsigned __int64)v36;
    LargestPageIndex = v31;
  }
  while ( (unsigned __int64)v36 < v41 );
  if ( v16 )
    MiUnlockPageTable(v3, v16);
  if ( v15 != 17 )
  {
    if ( v30 == 1 )
      MiUnlockWorkingSetExclusive(v3, v15);
    else
      MiUnlockWorkingSetShared(v3, v15);
  }
  v4 = v37;
LABEL_61:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
  {
    inited = MiInitPerfMemoryFlags(1, 13);
    MiLogPerfMemoryRangeEvent(v4, (__int64)Process, inited, v42);
  }
  return 0LL;
}
