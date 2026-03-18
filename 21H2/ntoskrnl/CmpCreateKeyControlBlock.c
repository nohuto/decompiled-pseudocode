/*
 * XREFs of CmpCreateKeyControlBlock @ 0x1407C3850
 * Callers:
 *     CmpDoParseKey @ 0x1407362A0 (CmpDoParseKey.c)
 *     CmpWalkOneLevel @ 0x1407C8AE0 (CmpWalkOneLevel.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmpCreateRegistryRoot @ 0x140B15C50 (CmpCreateRegistryRoot.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     CmpFindSecurityCellCacheIndex @ 0x140346D80 (CmpFindSecurityCellCacheIndex.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140353BB0 (KeAbPostReleaseEx.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpFreeKeyControlBlock @ 0x14069FA30 (CmpFreeKeyControlBlock.c)
 *     HvpGetCellFlat @ 0x1406BF400 (HvpGetCellFlat.c)
 *     HvpReleaseCellFlat @ 0x1406BF450 (HvpReleaseCellFlat.c)
 *     CmpCreateLayerLink @ 0x1406CAE28 (CmpCreateLayerLink.c)
 *     CmpTryToLockKcbExclusive @ 0x1406D1790 (CmpTryToLockKcbExclusive.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1406DAD3C (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1406E7088 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCompareUnicodeString @ 0x140717780 (CmpCompareUnicodeString.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x14071C0FC (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140722534 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockKcbExclusive @ 0x1407C0854 (CmpLockKcbExclusive.c)
 *     CmpGetNameControlBlock @ 0x1407C3E50 (CmpGetNameControlBlock.c)
 *     CmpCompareCompressedName @ 0x1407C45A0 (CmpCompareCompressedName.c)
 *     CmpKeyFullNameLength @ 0x1407C4930 (CmpKeyFullNameLength.c)
 *     HvpReleaseCellPaged @ 0x1407C97C0 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextReinitialize @ 0x1407C97FC (HvpGetCellContextReinitialize.c)
 *     HvpGetCellPaged @ 0x1407C9820 (HvpGetCellPaged.c)
 *     CmpEtwDumpKcb @ 0x140910724 (CmpEtwDumpKcb.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     CmpUnlockKcb @ 0x140AB4300 (CmpUnlockKcb.c)
 *     CmLockHiveSecurityShared @ 0x140AB4464 (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140AB4484 (CmUnlockHiveSecurity.c)
 */

__int64 CmpCreateKeyControlBlock(__int64 a1, int a2, ULONG_PTR a3, ULONG_PTR a4, char a5, unsigned __int16 *a6, ...)
{
  int v9; // ebx
  __int64 v10; // rdi
  unsigned __int16 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rax
  __int16 v15; // cx
  PSLIST_ENTRY v16; // rdi
  struct _SLIST_ENTRY *v17; // r13
  __int64 NameControlBlock; // rax
  ULONG_PTR v19; // rdx
  ULONG_PTR Next; // rcx
  __int64 CellFlat; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rcx
  signed __int64 v30; // rbp
  bool v31; // zf
  unsigned int v32; // ecx
  ULONG_PTR v33; // r12
  unsigned __int64 v34; // rdx
  int LayerLink; // ebp
  ULONG_PTR v37; // rcx
  __int64 CellPaged; // rax
  _SLIST_ENTRY *v39; // r12
  unsigned int *v40; // rcx
  _SLIST_ENTRY *v41; // rcx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-68h]
  __int64 v43; // [rsp+28h] [rbp-60h]
  _QWORD v44[2]; // [rsp+30h] [rbp-58h] BYREF
  __int128 v45; // [rsp+40h] [rbp-48h] BYREF
  unsigned int v46; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]
  __int64 v48; // [rsp+C0h] [rbp+38h] BYREF
  va_list va; // [rsp+C0h] [rbp+38h]
  __int64 v50; // [rsp+C8h] [rbp+40h]
  __int64 *v51; // [rsp+D0h] [rbp+48h]
  va_list va1; // [rsp+D8h] [rbp+50h] BYREF

  va_start(va1, a6);
  va_start(va, a6);
  v48 = va_arg(va1, _QWORD);
  v50 = va_arg(va1, _QWORD);
  v51 = va_arg(va1, __int64 *);
  BugCheckParameter2 = a4;
  v44[0] = 0LL;
  HvpGetCellContextReinitialize(v44);
  if ( (*(_DWORD *)(a1 + 160) & 0x20) != 0 && *(struct _KTHREAD **)(a1 + 4168) != KeGetCurrentThread() )
    return (unsigned int)-1073741772;
  v9 = v50;
  v10 = *(_QWORD *)(a1 + 1648);
  v11 = a6;
  v45 = 0LL;
  v12 = *(_QWORD *)(v10
                  + 24
                  * ((unsigned int)(*(_DWORD *)(a1 + 1656) - 1) & ((101027
                                                                  * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) ^ ((unsigned __int64)(101027 * ((unsigned int)v50 ^ ((unsigned int)v50 >> 9))) >> 9)))
                  + 16);
  if ( !v12 )
    goto LABEL_10;
  while ( 1 )
  {
    if ( *(_DWORD *)v12 != v9 )
      goto LABEL_4;
    v13 = v12 - 16;
    if ( *(_QWORD *)(v12 + 56) != a3 )
      goto LABEL_4;
    v14 = *(_QWORD *)(v13 + 80);
    v15 = *(_WORD *)(v14 + 24);
    if ( (*(_DWORD *)v14 & 1) == 0 )
      break;
    if ( !(unsigned int)CmpCompareCompressedName(
                          v11,
                          v14 + 26,
                          *(unsigned __int16 *)(v14 + 24),
                          2LL,
                          BugCheckParameter4,
                          v43,
                          v44[0],
                          v44[1]) )
      goto LABEL_9;
LABEL_4:
    v12 = *(_QWORD *)(v12 + 8);
    if ( !v12 )
      goto LABEL_10;
  }
  *((_QWORD *)&v45 + 1) = v14 + 26;
  LOWORD(v45) = v15;
  WORD1(v45) = v15;
  if ( (unsigned int)CmpCompareUnicodeString((__int64)v11, (__int64)&v45, 2) )
    goto LABEL_4;
LABEL_9:
  if ( v12 != 16 )
  {
    CmpReferenceKeyControlBlockLockNotHeld((volatile signed __int64 *)(v12 - 16));
    *v51 = v13;
    return 0;
  }
LABEL_10:
  if ( *v11 + 2 + (unsigned int)CmpKeyFullNameLength(a3) > 0xFFFF )
    return (unsigned int)-1073741811;
  _InterlockedIncrement64(&CmPerfCounters);
  ++dword_140CE1C54;
  v16 = RtlpInterlockedPopEntrySList(&CmpKcbLookaside);
  if ( !v16 )
  {
    ++dword_140CE1C58;
    v16 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CE1C70)(
                          (unsigned int)dword_140CE1C64,
                          (unsigned int)dword_140CE1C6C,
                          (unsigned int)dword_140CE1C68,
                          &CmpKcbLookaside);
    if ( !v16 )
      return (unsigned int)-1073741670;
  }
  _InterlockedIncrement64(qword_140D3D2E0);
  memset(v16, 0, 0x138uLL);
  v16[8].Next = (PSLIST_ENTRY)((char *)v16 + 120);
  *((_QWORD *)&v16[7].Next + 1) = (char *)v16 + 120;
  *((_QWORD *)&v16[8].Next + 1) = 0LL;
  v16[9].Next = 0LL;
  *((_QWORD *)&v16[9].Next + 1) = 0LL;
  v16[10].Next = 0LL;
  *((_DWORD *)&v16[2].Next + 2) = a2;
  v17 = v16 + 1;
  v16[3].Next = 0LL;
  LODWORD(v16[1].Next) = v9;
  v16->Next = (_SLIST_ENTRY *)1;
  v16[2].Next = (_SLIST_ENTRY *)a1;
  *((_QWORD *)&v16[13].Next + 1) = v16 + 13;
  v16[13].Next = v16 + 13;
  v16[15].Next = 0LL;
  *((_DWORD *)&v16[15].Next + 2) = 0;
  v16[16].Next = 0LL;
  *((_DWORD *)&v16[16].Next + 2) = 0;
  v16[17].Next = 0LL;
  *((_DWORD *)&v16[17].Next + 2) = 0;
  v16[18].Next = 0LL;
  *((_QWORD *)&v16[14].Next + 1) = v16 + 14;
  v16[14].Next = v16 + 14;
  *((_DWORD *)&v16[17].Next + 3) = -1;
  NameControlBlock = CmpGetNameControlBlock(v11, (__int64 *)va);
  v16[5].Next = (_SLIST_ENTRY *)NameControlBlock;
  if ( !NameControlBlock )
  {
    LayerLink = -1073741670;
    goto LABEL_64;
  }
  v19 = *((unsigned int *)&v16[2].Next + 2);
  if ( (_DWORD)v19 == -1 )
  {
    if ( ((*(_BYTE *)(a3 + 65) - 1) & 0xFD) == 0 )
      BYTE1(v16[4].Next) = 1;
    v28 = (__int64)v16;
    if ( (a5 & 1) != 0 )
      *((_WORD *)&v16[11].Next + 5) |= 4u;
    goto LABEL_27;
  }
  Next = (ULONG_PTR)v16[2].Next;
  if ( (*(_BYTE *)(Next + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(Next, v19, v44);
  else
    CellFlat = HvpGetCellPaged(Next);
  v22 = (__int64)v16[2].Next;
  v23 = CellFlat;
  if ( (*(_DWORD *)(v22 + 160) & 0x8001) == 0
    && (*(_BYTE *)(CellFlat + 12) & (unsigned __int8)CmpAccessBitForPhase) == 0 )
  {
    if ( (*(_BYTE *)(v22 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v22, v44);
    else
      HvpReleaseCellPaged(v22, v44);
    ExAcquirePushLockSharedEx((ULONG_PTR)(&v16[2].Next[4].Next + 1), 0LL);
    v37 = (ULONG_PTR)v16[2].Next;
    if ( (*(_BYTE *)(v37 + 140) & 1) != 0 )
      CellPaged = HvpGetCellFlat(v37, *((unsigned int *)&v16[2].Next + 2), v44);
    else
      CellPaged = HvpGetCellPaged(v37);
    v23 = CellPaged;
    CmpUpdateKeyNodeAccessBits((ULONG_PTR)v16[2].Next, CellPaged, *((_DWORD *)&v16[2].Next + 2));
    v39 = v16[2].Next;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&v39[4].Next + 1, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&v39[4].Next + 1);
    KeAbPostRelease((ULONG_PTR)(&v39[4].Next + 1));
  }
  BYTE1(v16[4].Next) = *(_BYTE *)(v23 + 13) & 3;
  v24 = *(_DWORD *)(v23 + 36);
  HIDWORD(v16[6].Next) = *(_DWORD *)(v23 + 40);
  LODWORD(v16[6].Next) = v24;
  *((_WORD *)&v16[11].Next + 5) = *(_WORD *)(v23 + 2);
  LODWORD(v16[7].Next) = *(_DWORD *)(v23 + 20) + *(_DWORD *)(v23 + 24);
  *((_QWORD *)&v16[10].Next + 1) = *(_QWORD *)(v23 + 4);
  LOWORD(v16[11].Next) = *(_WORD *)(v23 + 52);
  WORD1(v16[11].Next) = *(_WORD *)(v23 + 60);
  HIDWORD(v16[11].Next) = *(_DWORD *)(v23 + 64);
  *((_DWORD *)&v16[11].Next + 2) ^= (*((_DWORD *)&v16[11].Next + 2) ^ *(unsigned __int16 *)(v23 + 54)) & 0xF;
  *((_DWORD *)&v16[11].Next + 2) ^= ((unsigned __int8)*((_DWORD *)&v16[11].Next + 2) ^ (unsigned __int8)*(_WORD *)(v23 + 54)) & 0xF0;
  *((_BYTE *)&v16[11].Next + 9) = *(_BYTE *)(v23 + 55);
  v25 = KeAbPreAcquire((__int64)&v16[3], 0LL);
  if ( _interlockedbittestandset64((volatile signed __int32 *)&v16[3], 0LL) )
  {
    if ( v25 )
      KeAbPostReleaseEx((ULONG_PTR)&v16[3], v25);
  }
  else
  {
    if ( v25 )
      *(_BYTE *)(v25 + 18) = 1;
    *((_QWORD *)&v16[3].Next + 1) = KeGetCurrentThread();
  }
  v26 = *(_DWORD *)(v23 + 44);
  v46 = 0;
  if ( v26 == -1 )
  {
    *((_QWORD *)&v16[5].Next + 1) = 0LL;
    goto LABEL_25;
  }
  v27 = (__int64)v16[2].Next;
  CmLockHiveSecurityShared(v27);
  if ( !CmpFindSecurityCellCacheIndex(v27, v26, &v46) )
  {
    *((_QWORD *)&v16[5].Next + 1) = 0LL;
    CmUnlockHiveSecurity(v27);
    CmpUnlockKcb(v16);
    LayerLink = -1073741670;
    if ( (*(_BYTE *)(a1 + 140) & 1) != 0 )
      HvpReleaseCellFlat(a1, v44);
    else
      HvpReleaseCellPaged(a1, v44);
    goto LABEL_64;
  }
  *((_QWORD *)&v16[5].Next + 1) = *(_QWORD *)(*(_QWORD *)(v27 + 1888) + 16LL * v46 + 8);
  CmUnlockHiveSecurity(v27);
LABEL_25:
  v28 = (__int64)v16;
  CmpUnlockKcb(v16);
  v29 = (__int64)v16[2].Next;
  if ( (*(_BYTE *)(v29 + 140) & 1) != 0 )
    HvpReleaseCellFlat(v29, v44);
  else
    HvpReleaseCellPaged(v29, v44);
LABEL_27:
  if ( a3 )
  {
    v30 = _InterlockedIncrement64((volatile signed __int64 *)a3);
    if ( !v30 )
      KeBugCheckEx(0x51u, 0x24uLL, a3, 0LL, 0LL);
    if ( v30 == 1 )
      KeBugCheckEx(0x51u, 0x15uLL, 0LL, 0LL, 0LL);
    v31 = (*(_DWORD *)(v28 + 184) & 0x40000) == 0;
    *(_QWORD *)(v28 + 72) = a3;
    if ( v31 )
      v32 = *(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(a3 + 8) + 0x200000)) & 0x7FE00000;
    else
      v32 = *(_DWORD *)(v28 + 8) ^ (*(_DWORD *)(a3 + 8) ^ *(_DWORD *)(v28 + 8)) & 0x7FE00000;
  }
  else
  {
    v32 = *(_DWORD *)(v28 + 8) & 0x801FFFFF | 0x200000;
  }
  *(_DWORD *)(v28 + 8) = v32;
  v33 = BugCheckParameter2;
  if ( BugCheckParameter2
    && (CmpLockKcbExclusive(BugCheckParameter2),
        CmpTryToLockKcbExclusive(v28),
        LayerLink = CmpCreateLayerLink(v33, v28),
        CmpUnlockKcb(v28),
        CmpUnlockKcb(v33),
        LayerLink < 0) )
  {
LABEL_64:
    v40 = (unsigned int *)v16[5].Next;
    if ( v40 )
      CmpDereferenceNameControlBlockWithLock(v40);
    if ( *((_QWORD *)&v16[4].Next + 1) )
      CmpDereferenceKeyControlBlockUnsafe((volatile signed __int64 *)a3);
    v41 = v16[12].Next;
    if ( v41 )
      ExFreePoolWithTag(v41, 0);
    *((_DWORD *)&v16->Next + 2) |= 0x80000u;
    CmpFreeKeyControlBlock((ULONG_PTR)v16);
  }
  else
  {
    v34 = (unsigned __int64)v16[2].Next[103].Next
        + 24
        * ((unsigned int)(*((_DWORD *)&v16[2].Next[103].Next + 2) - 1) & ((unsigned int)(101027
                                                                                       * (LODWORD(v17->Next) ^ (LODWORD(v17->Next) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (LODWORD(v17->Next) ^ (LODWORD(v17->Next) >> 9))) >> 9)));
    *(_QWORD *)(v28 + 24) = *(_QWORD *)(v34 + 16);
    *(_QWORD *)(v34 + 16) = v17;
    if ( *(_BYTE *)(a1 + 2944) == 1 )
      *(_WORD *)(v28 + 8) |= 0x20u;
    if ( CmpTraceRoutine )
    {
      LOBYTE(v34) = 22;
      CmpEtwDumpKcb(v28, v34);
    }
    LayerLink = 0;
    *v51 = v28;
  }
  return (unsigned int)LayerLink;
}
