/*
 * XREFs of MiChangePageAttributeLargeFreeZeroPage @ 0x1403EFD9C
 * Callers:
 *     MiCoalesceFreeLargePages @ 0x140319960 (MiCoalesceFreeLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14020A870 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeYieldProcessorEx @ 0x140280C50 (KeYieldProcessorEx.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402B5FE0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1402B6B40 (MiUnlinkNodeLargePageHelper.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402BED20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiInsertLargePageInNodeList @ 0x140316B80 (MiInsertLargePageInNodeList.c)
 *     MiLockPageInline @ 0x140317C20 (MiLockPageInline.c)
 *     MiGetPfnChannel @ 0x14031A534 (MiGetPfnChannel.c)
 *     MiUnlockPage @ 0x14033C33C (MiUnlockPage.c)
 *     MiChangePageAttributeContiguous @ 0x14035D13C (MiChangePageAttributeContiguous.c)
 *     MiPageToNode @ 0x14035DBD4 (MiPageToNode.c)
 *     MiLargePfnPromoteCandidate @ 0x1403F1370 (MiLargePfnPromoteCandidate.c)
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
  _DWORD *v14; // r9
  int v15; // eax
  BOOL v16; // edi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // [rsp+38h] [rbp-38h] BYREF
  BOOL v24; // [rsp+40h] [rbp-30h]
  int v25; // [rsp+44h] [rbp-2Ch]
  __int64 v26; // [rsp+48h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+58h]

  v5 = a2;
  v6 = a3;
  v30 = MiLargePageSizes[(unsigned int)a2];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = MiLockPageInline(a1, a2, a3, a4);
  v8 = *(_QWORD *)(qword_140C4E448 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
  v28 = v8;
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
  ++*(_DWORD *)(v11 + *(_QWORD *)(v28 + 16) + 4284);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  MiUnlockPage(a1, 2u);
  v15 = MiChangePageAttributeContiguous((a1 + 0x58000000000LL) / 48, v30, v6, v14);
  v28 = *(_QWORD *)(a1 + 16);
  v16 = v15 == 0;
  MiSetOriginalPtePfnFromFreeList(&v28, v17, v18, v19);
  v22 = v28;
  *(_QWORD *)(a1 + 16) = v28;
  v29 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v29, v20, v22, v21);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  v23 = (a1 + 0x58000000000LL) / 48;
  v24 = v16;
  v25 = 5;
  v26 = v7;
  MiInsertLargePageInNodeList((__int64)&v23, v20, v22, v21);
  return 1LL;
}
