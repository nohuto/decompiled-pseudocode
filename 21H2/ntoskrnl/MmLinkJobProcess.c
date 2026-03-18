/*
 * XREFs of MmLinkJobProcess @ 0x1406825AC
 * Callers:
 *     PspEstablishJobHierarchy @ 0x1406822EC (PspEstablishJobHierarchy.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     MiRemoveSharedCommitNode @ 0x1406FC2F0 (MiRemoveSharedCommitNode.c)
 *     MiInsertSharedCommitNode @ 0x1406FC590 (MiInsertSharedCommitNode.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall MmLinkJobProcess(__int64 a1, __int64 a2)
{
  int inserted; // r15d
  struct _KTHREAD *CurrentThread; // r13
  volatile signed __int64 *v5; // r12
  _QWORD *v6; // rsi
  _QWORD *i; // r14
  _QWORD *Pool; // rax
  __int64 ***v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 *v14; // rax
  __int64 *v15; // rcx
  __int64 *v16; // rsi
  __int64 v17; // r14
  bool v18; // zf
  $CEA84C04E3712D858E5667A507841A2A *v19; // rax
  __int64 *v20; // rcx
  __int64 *v21; // rax
  __int64 j; // rsi
  __int64 *v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v25; // [rsp+28h] [rbp-8h]
  __int64 v27; // [rsp+78h] [rbp+48h]

  inserted = 0;
  v25 = &v24;
  v24 = (__int64 *)&v24;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (volatile signed __int64 *)(a2 + 2352);
  ExAcquirePushLockExclusiveEx(a2 + 2352, 0LL);
  if ( (*(_DWORD *)(a2 + 2172) & 0x10) == 0 )
  {
    v6 = (_QWORD *)(a2 + 2360);
    for ( i = *(_QWORD **)(a2 + 2360); i != v6; i = (_QWORD *)*i )
    {
      v27 = i[2];
      Pool = MiAllocatePool(256, 0x40uLL, 0x6E53694Du);
      if ( !Pool )
      {
        inserted = -1073741670;
        break;
      }
      Pool[7] = v27;
      Pool[4] = *(i - 1);
      v9 = (__int64 ***)(Pool + 5);
      v10 = v25;
      if ( *v25 != (__int64 *)&v24 )
        goto LABEL_40;
      v9[1] = v25;
      *v9 = &v24;
      *v10 = v9;
      v25 = (__int64 **)v9;
    }
    v11 = (_QWORD *)*v6;
    if ( (_QWORD *)*v6 != v6 )
    {
      do
      {
        MiRemoveSharedCommitNode(v11[2], a2, 1LL);
        v11 = (_QWORD *)*v6;
      }
      while ( (_QWORD *)*v6 != v6 );
      v5 = (volatile signed __int64 *)(a2 + 2352);
    }
    if ( inserted < 0 )
    {
      while ( 1 )
      {
        v20 = v24;
        if ( v24 == (__int64 *)&v24 )
          break;
        if ( (__int64 **)v24[1] != &v24 )
          goto LABEL_40;
        v21 = (__int64 *)*v24;
        if ( *(__int64 **)(*v24 + 8) != v24 )
          goto LABEL_40;
        v24 = (__int64 *)*v24;
        v21[1] = (__int64)&v24;
        ExFreePoolWithTag(v20 - 5, 0);
      }
    }
    else if ( (*(_DWORD *)(a2 + 2172) & 8) == 0 )
    {
      _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 8u);
    }
  }
  v12 = (_QWORD *)(a2 + 1480);
  v13 = *(_QWORD **)(a1 + 48);
  if ( *v13 != a1 + 40 )
LABEL_40:
    __fastfail(3u);
  *v12 = a1 + 40;
  *(_QWORD *)(a2 + 1488) = v13;
  *v13 = v12;
  *(_QWORD *)(a1 + 48) = v12;
  *(_QWORD *)(a2 + 1296) = a1;
  while ( 1 )
  {
    v14 = v24;
    if ( v24 == (__int64 *)&v24 )
      break;
    if ( (__int64 **)v24[1] != &v24 )
      goto LABEL_40;
    v15 = (__int64 *)*v24;
    if ( *(__int64 **)(*v24 + 8) != v24 )
      goto LABEL_40;
    v24 = (__int64 *)*v24;
    v15[1] = (__int64)&v24;
    v16 = v14 - 5;
    if ( inserted >= 0 )
    {
      v17 = v16[7];
      if ( v16[4] )
      {
        do
        {
          inserted = MiInsertSharedCommitNode(v17, a2, 1LL);
          if ( inserted < 0 )
            break;
          v18 = v16[4]-- == 1;
        }
        while ( !v18 );
        v5 = (volatile signed __int64 *)(a2 + 2352);
      }
    }
    ExFreePoolWithTag(v16, 0);
  }
  if ( inserted < 0 )
  {
    for ( j = a2 + 2360; *(_QWORD *)j != j; MiRemoveSharedCommitNode(*(_QWORD *)(*(_QWORD *)j + 16LL), a2, 1LL) )
      ;
    _InterlockedAnd((volatile signed __int32 *)(a2 + 2172), 0xFFFFFFF7);
    _InterlockedOr((volatile signed __int32 *)(a2 + 2172), 0x10u);
  }
  if ( (_InterlockedExchangeAdd64(v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v5);
  LOBYTE(v19) = KeAbPostRelease((ULONG_PTR)v5);
  v18 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v18 )
  {
    v19 = &CurrentThread->152;
    if ( ($CEA84C04E3712D858E5667A507841A2A *)v19->ApcState.ApcListHead[0].Flink != v19 )
      LOBYTE(v19) = KiCheckForKernelApcDelivery();
  }
  return (char)v19;
}
