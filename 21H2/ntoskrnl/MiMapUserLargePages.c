/*
 * XREFs of MiMapUserLargePages @ 0x1405C2A4C
 * Callers:
 *     MiMapViewOfImageSection @ 0x1406F9990 (MiMapViewOfImageSection.c)
 *     MiReserveUserMemory @ 0x1407B8B60 (MiReserveUserMemory.c)
 *     MiCopyLargeVad @ 0x140982B6C (MiCopyLargeVad.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     MiInitializeLargePfnList @ 0x14026E1F4 (MiInitializeLargePfnList.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetExclusive @ 0x14030FA80 (MiUnlockWorkingSetExclusive.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWorkingSetIsContended @ 0x1403531F0 (MiWorkingSetIsContended.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     MiComputePreferredNode @ 0x14057F4C8 (MiComputePreferredNode.c)
 *     MiLogPerfMemoryRangeEvent @ 0x1405852C0 (MiLogPerfMemoryRangeEvent.c)
 *     MiLockWorkingSetForLargeMapping @ 0x1405B06E0 (MiLockWorkingSetForLargeMapping.c)
 *     MiCreateLargePfnList @ 0x1405C14D4 (MiCreateLargePfnList.c)
 *     MiDemotePfnListChain @ 0x1405C19F8 (MiDemotePfnListChain.c)
 *     MiInitializeLargeUserBasePfn @ 0x1405C27C8 (MiInitializeLargeUserBasePfn.c)
 *     MiInsertLargeUserMapping @ 0x1405C2898 (MiInsertLargeUserMapping.c)
 */

__int64 __fastcall MiMapUserLargePages(__int64 a1, int a2, char a3, __int64 *a4)
{
  unsigned __int64 v8; // r9
  int v9; // edi
  __int64 v10; // r12
  unsigned __int64 v11; // r13
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebp
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r9
  __int64 result; // rax
  __int64 v19; // rcx
  unsigned __int8 v20; // si
  __int64 v21; // rax
  unsigned __int64 v22; // r15
  __int64 v23; // r9
  unsigned __int64 v24; // r10
  __int64 v25; // r11
  unsigned int v26; // ebx
  unsigned __int64 v27; // rcx
  unsigned int v28; // edx
  __int64 *v29; // rax
  __int64 v30; // r10
  __int64 v31; // rdx
  ULONG_PTR v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  ULONG_PTR v35; // rax
  char v36; // cl
  KIRQL v37; // al
  unsigned __int8 v38; // al
  int v39; // [rsp+50h] [rbp-118h]
  int v40; // [rsp+54h] [rbp-114h]
  int v41; // [rsp+58h] [rbp-110h]
  unsigned int v42; // [rsp+5Ch] [rbp-10Ch]
  unsigned __int64 v43; // [rsp+60h] [rbp-108h]
  int v44; // [rsp+68h] [rbp-100h]
  int v45; // [rsp+6Ch] [rbp-FCh]
  ULONG_PTR v46; // [rsp+70h] [rbp-F8h]
  __int64 v47; // [rsp+70h] [rbp-F8h]
  ULONG_PTR v48; // [rsp+78h] [rbp-F0h]
  unsigned __int64 v49; // [rsp+80h] [rbp-E8h]
  int v50; // [rsp+88h] [rbp-E0h]
  unsigned int v51; // [rsp+8Ch] [rbp-DCh]
  unsigned __int64 v52; // [rsp+90h] [rbp-D8h]
  _KPROCESS *Process; // [rsp+98h] [rbp-D0h]
  __int64 v54; // [rsp+A0h] [rbp-C8h]
  __int64 v56; // [rsp+B0h] [rbp-B8h]
  _QWORD v57[12]; // [rsp+C0h] [rbp-A8h] BYREF

  memset(v57, 0, sizeof(v57));
  v8 = *(unsigned int *)(a1 + 48);
  v50 = *(_DWORD *)(a1 + 48) & 0x2200000;
  if ( a2 )
    v9 = a2 - 1;
  else
    v9 = MiComputePreferredNode(a1);
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v11 = (((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) << 12) | 0xFFF) + 1;
  v49 = (*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) << 12;
  v12 = (v8 >> 19) & 3;
  if ( LODWORD(MiVadPageSizes[v12]) == 16 )
  {
    v13 = 2;
    v14 = 2;
  }
  else if ( (v8 & 0xA00000) == 0xA00000 )
  {
    v13 = MiVadPageIndices[v12];
    v14 = v13;
  }
  else
  {
    v13 = 1;
    v14 = (((unsigned __int64)KeFeatureBits >> 37) & 1) == 0;
  }
  v42 = v13;
  MiInitializeLargePfnList(v57);
  result = MiCreateLargePfnList(a1, v15, v16, v17, a2, a3, a4, 0, v57);
  if ( (int)result < 0 )
    return result;
  v19 = v49;
  v20 = 17;
  v21 = (*(_DWORD *)(a1 + 48) >> 7) & 0x1F;
  v45 = 0;
  v22 = 0LL;
  v41 = 0;
  v23 = 0LL;
  v39 = 0;
  v24 = v49;
  v51 = MmMakeProtectNotWriteCopy[v21];
  v46 = 0LL;
  v48 = 0LL;
  v40 = 0;
  v52 = v49;
  v25 = ((v49 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v43 = v25;
  if ( v49 >= v11 )
    goto LABEL_70;
  do
  {
    v26 = v14;
    if ( v14 <= v42 )
    {
      while ( 1 )
      {
        v27 = MiLargePageSizes[v26] << 12;
        if ( !(v24 % v27) && v11 - v24 >= v27 )
          break;
        if ( ++v26 > v42 )
          goto LABEL_20;
      }
      v28 = v26;
      while ( (_QWORD *)v57[3 * v28] == &v57[3 * v28] )
      {
        if ( ++v28 > v42 )
          goto LABEL_19;
      }
      if ( v28 > v42 )
      {
LABEL_19:
        MiDemotePfnListChain((__int64)v57, v26, v42, (_DWORD *)v23);
        v23 = v46;
        v25 = v43;
        goto LABEL_20;
      }
      v26 = v28;
    }
LABEL_20:
    v29 = &v57[3 * v26];
    v30 = *v29;
    v47 = *v29;
    if ( *(__int64 **)(*v29 + 8) != v29 || (v31 = *(_QWORD *)v30, *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30) )
      __fastfail(3u);
    *v29 = v31;
    *(_QWORD *)(v31 + 8) = v29;
    --v57[3 * v26 + 2];
    v54 = 0xAAAAAAAAAAAAAAABuLL * ((v30 + 0x220000000000LL) >> 4);
    v32 = v25;
    v56 = MiLargePageSizes[v26];
    v33 = 16;
    if ( v26 != 2 )
      v33 = 1;
    v44 = v33;
    if ( v26 < 2 )
    {
      v34 = 2 - v26;
      do
      {
        v32 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        --v34;
      }
      while ( v34 );
      v30 = v47;
      v25 = v43;
    }
    if ( v41 || (v23 ^= v32, (v23 & 0xFFFFFFFFFFFFF000uLL) != 0) )
    {
      if ( v50 == 35651584 )
      {
        v35 = v48;
        if ( v40 )
          v35 = 0LL;
        v48 = v35;
      }
      if ( v22 )
      {
        MiUnlockPageTableInternal(v10, v22);
        v22 = 0LL;
      }
      v36 = v39;
      if ( v41 )
        goto LABEL_39;
      if ( v39 == 1 )
      {
        if ( v26 )
          goto LABEL_39;
      }
      else if ( !v26 )
      {
LABEL_39:
        v41 = 0;
        if ( v20 != 17 )
        {
          if ( v39 == 1 )
            MiUnlockWorkingSetExclusive(v10, v20);
          else
            MiUnlockWorkingSetShared(v10, v20);
        }
        goto LABEL_49;
      }
      if ( v20 != 17 )
      {
        if ( v39 )
        {
LABEL_53:
          LOBYTE(v23) = v20;
          MiMakeSystemAddressValid(v32, 0LL, v9 + 1, v23, v36);
          v30 = v47;
          v25 = v43;
          goto LABEL_54;
        }
LABEL_52:
        v22 = ((v32 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        goto LABEL_53;
      }
LABEL_49:
      if ( !v26 )
      {
        v37 = MiLockWorkingSetForLargeMapping(v10, 0LL, v9);
        v36 = 1;
        v20 = v37;
        v39 = 1;
        if ( v37 != 17 )
          goto LABEL_53;
      }
      v39 = 0;
      v38 = MiLockWorkingSetShared(v10);
      v36 = 0;
      v20 = v38;
      goto LABEL_52;
    }
LABEL_54:
    MiInitializeLargeUserBasePfn(v30, v25, (unsigned __int64)Process);
    MiInsertLargeUserMapping(a1, v43, v54, v26, v51);
    if ( v48 )
    {
      v40 += v44;
    }
    else
    {
      v40 = v44;
      v48 = v32;
    }
    v52 += v56 << 12;
    v43 += 8 * v56;
    if ( (++v45 & 0xF) == 0 && MiWorkingSetIsContended(v10) || KeShouldYieldProcessor() )
      v41 = 1;
    v24 = v52;
    v23 = v32;
    v25 = v43;
    v46 = v32;
  }
  while ( v52 < v11 );
  if ( v22 )
    MiUnlockPageTableInternal(v10, v22);
  if ( v20 != 17 )
  {
    if ( v39 == 1 )
      MiUnlockWorkingSetExclusive(v10, v20);
    else
      MiUnlockWorkingSetShared(v10, v20);
  }
  v19 = v49;
LABEL_70:
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogPerfMemoryRangeEvent(v19, LODWORD(Process[1].Header.WaitListHead.Flink), 0x1Bu, (v11 - v49) >> 12);
  return 0LL;
}
