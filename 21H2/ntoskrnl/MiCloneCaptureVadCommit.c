/*
 * XREFs of MiCloneCaptureVadCommit @ 0x14054528C
 * Callers:
 *     MiAllocateChildVads @ 0x1408D8BF0 (MiAllocateChildVads.c)
 * Callees:
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1402C13E0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x1402C1960 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextPageTable @ 0x140318570 (MiGetNextPageTable.c)
 *     MiCloneDiscardVadCommit @ 0x1408D0F44 (MiCloneDiscardVadCommit.c)
 */

__int64 __fastcall MiCloneCaptureVadCommit(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rdi
  __int64 *v5; // r15
  int v6; // ebp
  unsigned __int64 *v7; // r12
  unsigned __int64 v8; // rsi
  LONG *SharedVm; // rbx
  KIRQL v10; // al
  KIRQL v11; // r14
  unsigned __int64 v12; // rbx
  __int64 NextPageTable; // rax
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  LONG *v20; // rbx
  unsigned __int8 v21; // [rsp+78h] [rbp+10h]
  int v22; // [rsp+80h] [rbp+18h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp+20h]

  v22 = 0;
  Pool = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  *Pool = 0LL;
  v5 = Pool + 1;
  Pool[1] = 0LL;
  v6 = 0;
  v7 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v8 = 8 * ((*(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32)) & 0xFFFFFFFFFLL)
     - 0x98000000000LL;
  v23 = 8 * ((*(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32)) & 0xFFFFFFFFFLL)
      - 0x98000000000LL;
  SharedVm = MiGetSharedVm((__int64)v7);
  v10 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v10;
  v12 = v23;
  v21 = v10;
  while ( v8 <= v12 )
  {
    NextPageTable = MiGetNextPageTable(v8, v12, 0LL, v11, 4, &v22);
    if ( !NextPageTable )
      break;
    v14 = NextPageTable & 0xFFFFFFFFFFFFF000uLL;
    v15 = *v5;
    v16 = (__int64)((NextPageTable & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16;
    if ( *v5
      && (v17 = v3[v15 + 1], v18 = v17 & 0x1FFFFF, v18 + 1 >= v18)
      && v18 != 0x1FFFFF
      && (v17 & 0xFFFFFFFFFFE00000uLL) + ((v18 + 1) << 21) == v16 )
    {
      v3[v15 + 1] = v17 & 0xFFFFFFFFFFE00000uLL | (v17 + 1) & 0x1FFFFF;
    }
    else
    {
      if ( v15 == 16 )
      {
        MiUnlockWorkingSetExclusive((__int64)v7, v21);
        v19 = MiAllocatePool(64, 0x90uLL, 0x6356694Du);
        if ( !v19 )
        {
          v6 = -1073741670;
          goto LABEL_18;
        }
        v5 = v19 + 1;
        *v19 = v3;
        v19[1] = 0LL;
        v3 = v19;
        v20 = MiGetSharedVm((__int64)v7);
        ExAcquireSpinLockExclusive(v20);
        v20[1] = 0;
        v15 = *v5;
        v12 = v23;
      }
      v3[v15 + 2] = v16;
      ++*v5;
    }
    v11 = v21;
    v8 = v14 + 4096;
  }
  MiUnlockWorkingSetExclusive((__int64)v7, v11);
LABEL_18:
  *(_QWORD *)(a1 + 8) = v3;
  if ( v6 < 0 )
    MiCloneDiscardVadCommit(a1);
  return (unsigned int)v6;
}
