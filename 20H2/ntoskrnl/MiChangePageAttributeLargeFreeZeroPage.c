/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1403F42B0
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14034D440 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402237F0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402312D0 (MiUnlinkNodeLargePageHelper.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140296D60 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AD340 (MiSetOriginalPtePfnFromFreeList.c)
 *     KeYieldProcessorEx @ 0x1402DE380 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1402F1DC0 (MiInsertLargePageInNodeList.c)
 *     MiUnlockPage @ 0x14030EF8C (MiUnlockPage.c)
 *     MiChangePageAttributeContiguous @ 0x14032DB94 (MiChangePageAttributeContiguous.c)
 *     MiPageToNode @ 0x14032E6F4 (MiPageToNode.c)
 *     MiGetPfnChannel @ 0x14034E084 (MiGetPfnChannel.c)
 *     MiLockPageInline @ 0x14034E290 (MiLockPageInline.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F5884 (MiLargePfnPromoteCandidate.c)
 */

__int64 __fastcall MiChangePageAttributeLargeFreeZeroPage(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  unsigned __int8 v7; // r15
  unsigned __int64 v8; // rbx
  unsigned int v9; // r14d
  __int64 v11; // rdi
  _QWORD *v12; // rbx
  unsigned int PfnChannel; // eax
  __int64 v14; // r9
  int v15; // eax
  BOOL v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  BOOL v21; // [rsp+40h] [rbp-30h]
  int v22; // [rsp+44h] [rbp-2Ch]
  __int64 v23; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v25; // [rsp+B0h] [rbp+40h] BYREF
  int v26; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v27; // [rsp+C8h] [rbp+58h]

  v5 = a2;
  v6 = a3;
  v27 = MiLargePageSizes[(unsigned int)a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(_QWORD *)(qword_140C4E4C8 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v25 = v8;
  v9 = 0;
  if ( !(unsigned int)MiLargePfnPromoteCandidate(v8, a1, v5) )
    goto LABEL_4;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 == v6 )
  {
    v9 = 1;
LABEL_4:
    MiUnlockPage(a1, v7);
    return v9;
  }
  v11 = 4544LL * (unsigned int)MiPageToNode((a1 + 0x58000000000LL) / 48);
  v12 = (_QWORD *)(v11 + *(_QWORD *)(v8 + 16));
  KeAcquireInStackQueuedSpinLockAtDpcLevel(v12 + 541, &LockHandle);
  PfnChannel = MiGetPfnChannel(a1);
  MiUnlinkNodeLargePageHelper(v12, (__int64 *)a1, v5, PfnChannel, 8);
  ++*(_DWORD *)(v11 + *(_QWORD *)(v25 + 16) + 4284);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockPage(a1, 2u);
  v15 = MiChangePageAttributeContiguous((a1 + 0x58000000000LL) / 48, v27, v6, v14);
  v25 = *(_QWORD *)(a1 + 16);
  v16 = v15 == 0;
  MiSetOriginalPtePfnFromFreeList(&v25);
  v19 = v25;
  *(_QWORD *)(a1 + 16) = v25;
  v26 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v26, v17, v19, v18);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v20 = (a1 + 0x58000000000LL) / 48;
  v21 = v16;
  v22 = 5;
  v23 = v7;
  MiInsertLargePageInNodeList((__int64)&v20, v17, v19, v18);
  return 1LL;
}
