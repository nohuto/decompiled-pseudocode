/*
 * XREFs of MiCreateCloneChain @ 0x140554620
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x1408D5A60 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140213300 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocatePool @ 0x140247F80 (MiAllocatePool.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14024A060 (PsChargeProcessNonPagedPoolQuota.c)
 *     MiGetSharedVm @ 0x1402AD3F0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1402CF510 (ExAcquireSpinLockExclusive.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCreateCloneChain(struct _KPROCESS *a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  _QWORD *v5; // rsi
  __int64 v6; // r14
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  unsigned __int8 v10; // r13
  _QWORD *v11; // rcx
  _QWORD *i; // rbx
  _QWORD *Pool; // rax
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  *a2 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = 0LL;
  Process = CurrentThread->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v9;
  v11 = (_QWORD *)Process[1].Affinity.Bitmap[12];
  i = 0LL;
  while ( v11 )
  {
    i = v11;
    v11 = (_QWORD *)*v11;
  }
  while ( i )
  {
    if ( i[6] )
    {
      Pool = MiAllocatePool(64, 0x70uLL, 0x64436D4Du);
      if ( !Pool )
      {
        v4 = -1073741670;
        break;
      }
      *Pool = v5;
      v5 = Pool;
      Pool[8] = i[8];
      v6 += i[8];
    }
    v14 = (_QWORD **)i[1];
    v15 = i;
    if ( v14 )
    {
      v16 = *v14;
      for ( i = (_QWORD *)i[1]; v16; v16 = (_QWORD *)*v16 )
        i = v16;
    }
    else
    {
      while ( 1 )
      {
        i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !i || (_QWORD *)*i == v15 )
          break;
        v15 = i;
      }
    }
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].ActiveProcessorsPadding[6], v10);
  if ( v4 < 0 )
    goto LABEL_22;
  if ( v6 )
    v4 = PsChargeProcessNonPagedPoolQuota(a1, v6);
  if ( v4 < 0 )
  {
LABEL_22:
    if ( v5 )
    {
      do
      {
        v17 = (_QWORD *)*v5;
        ExFreePoolWithTag(v5, 0);
        v5 = v17;
      }
      while ( v17 );
    }
    v5 = 0LL;
  }
  result = (unsigned int)v4;
  *a2 = v5;
  return result;
}
