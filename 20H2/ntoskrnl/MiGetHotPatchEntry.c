/*
 * XREFs of MiGetHotPatchEntry @ 0x1408CC82C
 * Callers:
 *     MiHotPatchImage @ 0x1408CCB74 (MiHotPatchImage.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x140216FB0 (RtlRbInsertNodeEx.c)
 *     KeAbPostRelease @ 0x14021ED30 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140220E40 (KiLeaveGuardedRegionUnsafe.c)
 *     MiAllocatePool @ 0x14022D320 (MiAllocatePool.c)
 *     ExfTryToWakePushLock @ 0x140242B40 (ExfTryToWakePushLock.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CCE78 (MiHotPatchImageTreeCompare.c)
 */

unsigned __int64 __fastcall MiGetHotPatchEntry(PRTL_RB_TREE Tree, _RTL_BALANCED_NODE *a2, int a3, int *a4)
{
  volatile signed __int64 *v7; // r12
  unsigned __int64 Root; // rsi
  int v9; // edi
  int v10; // ebp
  int v11; // eax
  unsigned __int64 v12; // rax
  _RTL_BALANCED_NODE *Pool; // rax
  unsigned __int64 v14; // r14
  BOOLEAN v15; // r8
  int v16; // ebp
  unsigned __int64 v17; // rax
  struct _KTHREAD *CurrentThread; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v7 = (volatile signed __int64 *)&Tree[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Tree[1], 0LL);
  Root = (unsigned __int64)Tree->Root;
  v9 = 0;
  if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
  {
    if ( Root )
      Root ^= (unsigned __int64)Tree;
    else
      Root = 0LL;
  }
  v10 = *(_BYTE *)&Tree->0 & 1;
  if ( !Root )
    goto LABEL_20;
  do
  {
    v11 = MiHotPatchImageTreeCompare(a2, Root);
    if ( v11 >= 0 )
    {
      if ( v11 <= 0 )
        break;
      v12 = *(_QWORD *)(Root + 8);
    }
    else
    {
      v12 = *(_QWORD *)Root;
    }
    if ( v10 && v12 )
      Root ^= v12;
    else
      Root = v12;
  }
  while ( Root );
  if ( Root )
  {
    if ( (*(_DWORD *)(Root + 92) & 1) != 0 )
    {
      Root = 0LL;
      v9 = 259;
      goto LABEL_43;
    }
    if ( *(_DWORD *)(Root + 88) == a3 )
    {
      Root = 0LL;
      v9 = 255;
      goto LABEL_43;
    }
  }
  else
  {
LABEL_20:
    if ( !a3 )
    {
      Root = 0LL;
      v9 = 1075380276;
      goto LABEL_43;
    }
    Pool = (_RTL_BALANCED_NODE *)MiAllocatePool(256, 0x60uLL, 0x4E455048u);
    Root = (unsigned __int64)Pool;
    if ( !Pool )
    {
      v9 = -1073741670;
      goto LABEL_43;
    }
    Pool[1].Children[0] = a2;
    *(_DWORD *)&Pool[3].0 = 0;
    v14 = (unsigned __int64)Tree->Root;
    if ( (*(_BYTE *)&Tree->0 & 1) != 0 )
    {
      if ( v14 )
        v14 ^= (unsigned __int64)Tree;
      else
        v14 = 0LL;
    }
    v15 = 0;
    v16 = *(_BYTE *)&Tree->0 & 1;
    if ( v14 )
    {
      while ( 1 )
      {
        if ( (int)MiHotPatchImageTreeCompare(a2, v14) < 0 )
        {
          v17 = *(_QWORD *)v14;
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_40;
            v17 ^= v14;
          }
          if ( !v17 )
          {
LABEL_40:
            v15 = 0;
            break;
          }
        }
        else
        {
          v17 = *(_QWORD *)(v14 + 8);
          if ( v16 )
          {
            if ( !v17 )
              goto LABEL_34;
            v17 ^= v14;
          }
          if ( !v17 )
          {
LABEL_34:
            v15 = 1;
            break;
          }
        }
        v14 = v17;
      }
    }
    RtlRbInsertNodeEx(Tree, (PRTL_BALANCED_NODE)v14, v15, (PRTL_BALANCED_NODE)Root);
  }
  *(_DWORD *)(Root + 92) |= 1u;
LABEL_43:
  if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  *a4 = v9;
  return Root;
}
