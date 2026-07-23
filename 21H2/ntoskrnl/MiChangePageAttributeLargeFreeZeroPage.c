/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1403F5A4C
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x14030DEF0 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402042B0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiUnlockPage @ 0x14022D6AC (MiUnlockPage.c)
 *     MiChangePageAttributeContiguous @ 0x14024DC38 (MiChangePageAttributeContiguous.c)
 *     MiPageToNode @ 0x14024E754 (MiPageToNode.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D1370 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x1403097A0 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14030EF14 (MiGetPfnChannel.c)
 *     MiUnlinkNodeLargePageHelper @ 0x140323C80 (MiUnlinkNodeLargePageHelper.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x140334C80 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F7020 (MiLargePfnPromoteCandidate.c)
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
  int v14; // eax
  BOOL v15; // edi
  __int64 v16; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // [rsp+38h] [rbp-38h] BYREF
  BOOL v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  __int64 v22; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v24; // [rsp+B0h] [rbp+40h] BYREF
  int v25; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+C8h] [rbp+58h]

  v5 = a2;
  v6 = a3;
  v26 = MiLargePageSizes[(unsigned int)a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v24 = v8;
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
  MiUnlinkNodeLargePageHelper(v12, a1, v5, PfnChannel, 8);
  ++*(_DWORD *)(v11 + *(_QWORD *)(v24 + 16) + 4284);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockPage(a1, 2u);
  v14 = MiChangePageAttributeContiguous((a1 + 0x58000000000LL) / 48, v26, v6);
  v24 = *(_QWORD *)(a1 + 16);
  v15 = v14 == 0;
  MiSetOriginalPtePfnFromFreeList(&v24);
  v18 = v24;
  *(_QWORD *)(a1 + 16) = v24;
  v25 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v25, v16, v18, v17);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v19 = (a1 + 0x58000000000LL) / 48;
  v20 = v15;
  v21 = 5;
  v22 = v7;
  MiInsertLargePageInNodeList((__int64)&v19);
  return 1LL;
}
