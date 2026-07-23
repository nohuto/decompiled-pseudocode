/*
 * XREFs of MmInitializeHandBuiltProcess @ 0x1407CF174
 * Callers:
 *     PspAllocateProcess @ 0x1406AD918 (PspAllocateProcess.c)
 * Callees:
 *     ExInitializeAutoExpandPushLock @ 0x1402251D0 (ExInitializeAutoExpandPushLock.c)
 *     MiAllocatePool @ 0x14027C2E0 (MiAllocatePool.c)
 *     MiInsertNewProcess @ 0x140295938 (MiInsertNewProcess.c)
 *     MiAllowWorkingSetExpansion @ 0x1402A35AC (MiAllowWorkingSetExpansion.c)
 *     MiGetSharedVm @ 0x1402BF850 (MiGetSharedVm.c)
 *     MiAllocateProcessShadow @ 0x1406A7A1C (MiAllocateProcessShadow.c)
 */

__int64 __fastcall MmInitializeHandBuiltProcess(__int64 a1)
{
  _QWORD *Pool; // rax
  _QWORD *v3; // rbp
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rax
  unsigned __int64 DirectoryTableBase; // rcx
  LONG *v7; // r15
  __int64 result; // rax
  LONG *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx

  Pool = MiAllocatePool(64, 0x270uLL, 0x3250694Du);
  v3 = Pool;
  if ( !Pool )
    return 3221225626LL;
  ExInitializeAutoExpandPushLock(Pool + 51, 1);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].ActiveProcessorsPadding[6]);
  DirectoryTableBase = Process->DirectoryTableBase;
  *(_DWORD *)(a1 + 2512) |= 0x20u;
  *(_QWORD *)(a1 + 1224) = 0LL;
  v7 = SharedVm;
  *(_QWORD *)(a1 + 1232) = 0LL;
  *(_QWORD *)(a1 + 40) = DirectoryTableBase;
  *(_QWORD *)(a1 + 2368) = a1 + 2360;
  *(_QWORD *)(a1 + 2360) = a1 + 2360;
  *(_QWORD *)(a1 + 2352) = 0LL;
  result = MiAllocateProcessShadow(a1, 0);
  if ( (int)result >= 0 )
  {
    v9 = MiGetSharedVm(a1 + 1664);
    v10 = (_QWORD *)(a1 + 1704);
    *v9 = 0;
    *(_QWORD *)(a1 + 2008) = 0LL;
    *(_QWORD *)(a1 + 1776) = *(_QWORD *)&Process[1].ThreadSeedPadding[6];
    *(_QWORD *)(a1 + 1816) = *(_QWORD *)&Process[1].IdealProcessor[14];
    *((_QWORD *)v9 + 6) = *((_QWORD *)v7 + 6);
    *((_QWORD *)v9 + 7) = *((_QWORD *)v7 + 7);
    v11 = 8LL;
    *(_QWORD *)(a1 + 1784) = *(_QWORD *)&Process[1].ThreadSeedPadding[10];
    *(_QWORD *)(a1 + 1792) = *(_QWORD *)&Process[1].IdealProcessor[2];
    *(_QWORD *)(a1 + 1800) = *(_QWORD *)&Process[1].IdealProcessor[6];
    *(_QWORD *)(a1 + 1808) = *(_QWORD *)&Process[1].IdealProcessor[10];
    *(_QWORD *)(a1 + 1496) = Process[1].ActiveProcessors.Bitmap[5];
    *(_QWORD *)(a1 + 1272) = Process[1].Affinity.Bitmap[13];
    *(_QWORD *)(a1 + 1680) = v3;
    do
    {
      *v10 = *(_QWORD *)((char *)v10 + (_QWORD)Process - a1);
      ++v10;
      --v11;
    }
    while ( v11 );
    MiInsertNewProcess((_QWORD *)a1, 0LL);
    MiAllowWorkingSetExpansion(a1 + 1664);
    return 0LL;
  }
  return result;
}
