/*
 * XREFs of MmLinkJobProcess @ 0x1406722C4
 * Callers:
 *     PspEstablishJobHierarchy @ 0x140672018 (PspEstablishJobHierarchy.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x140633470 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406336E0 (MiInsertSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmLinkJobProcess(__int64 a1, unsigned __int64 a2)
{
  int inserted; // r15d
  __int64 v4; // r13
  volatile signed __int64 *v5; // r12
  _QWORD *v6; // rsi
  _QWORD *v7; // r14
  __int64 v8; // r13
  _QWORD *Pool; // rax
  __int64 ***v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rsi
  _QWORD *v17; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 *v23; // rcx
  __int64 *v24; // rax
  unsigned __int64 i; // rsi
  __int64 *v26; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v27; // [rsp+28h] [rbp-8h]
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp+48h]

  inserted = 0;
  v27 = &v26;
  v26 = (__int64 *)&v26;
  v4 = a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a2 + 2352);
  ExAcquirePushLockExclusiveEx(a2 + 2352, 0LL);
  if ( (*(_DWORD *)(a2 + 2172) & 0x10) == 0 )
  {
    v6 = (_QWORD *)(a2 + 2360);
    v7 = *(_QWORD **)(a2 + 2360);
    if ( v7 != (_QWORD *)(a2 + 2360) )
    {
      while ( 1 )
      {
        v8 = v7[2];
        Pool = MiAllocatePool(256, 0x40uLL, 0x6E53694Du);
        if ( !Pool )
          break;
        Pool[7] = v8;
        Pool[4] = *(v7 - 1);
        v10 = (__int64 ***)(Pool + 5);
        v11 = v27;
        if ( *v27 != (__int64 *)&v26 )
          goto LABEL_35;
        v10[1] = v27;
        *v10 = &v26;
        *v11 = v10;
        v27 = (__int64 **)v10;
        v7 = (_QWORD *)*v7;
        if ( v7 == v6 )
          goto LABEL_6;
      }
      inserted = -1073741670;
LABEL_6:
      v4 = a1;
    }
    while ( (_QWORD *)*v6 != v6 )
      MiRemoveSharedCommitNode(*(_QWORD **)(*v6 + 16LL), a2, 1);
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v23 = v26;
        if ( v26 == (__int64 *)&v26 )
          break;
        if ( (__int64 **)v26[1] != &v26 )
          goto LABEL_35;
        v24 = (__int64 *)*v26;
        if ( *(__int64 **)(*v26 + 8) != v26 )
          goto LABEL_35;
        v26 = (__int64 *)*v26;
        v24[1] = (__int64)&v26;
        ExFreePoolWithTag(v23 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 2172) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 8u);
    }
  }
  v12 = *(_QWORD **)(v4 + 48);
  v13 = (_QWORD *)(a2 + 1480);
  if ( *v12 != v4 + 40 )
LABEL_35:
    __fastfail(3u);
  *v13 = v4 + 40;
  *(_QWORD *)(a2 + 1488) = v12;
  *v12 = v13;
  *(_QWORD *)(v4 + 48) = v13;
  *(_QWORD *)(a2 + 1296) = v4;
  while ( 1 )
  {
    v14 = v26;
    if ( v26 == (__int64 *)&v26 )
      break;
    if ( (__int64 **)v26[1] != &v26 )
      goto LABEL_35;
    v15 = (__int64 *)*v26;
    if ( *(__int64 **)(*v26 + 8) != v26 )
      goto LABEL_35;
    v26 = (__int64 *)*v26;
    v15[1] = (__int64)&v26;
    v16 = v14 - 5;
    if ( inserted >= 0 )
    {
      v17 = (_QWORD *)v16[7];
      if ( v16[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v17, a2, 1);
          if ( inserted < 0 )
            break;
        }
        while ( v16[4]-- != 1 );
      }
    }
    ExFreePoolWithTag(v16, 0);
  }
  if ( inserted < 0 )
  {
    for ( i = a2 + 2360; *(_QWORD *)i != i; MiRemoveSharedCommitNode(*(_QWORD **)(*(_QWORD *)i + 16LL), a2, 1) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2172), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v19, v20, v21);
}
