/*
 * XREFs of MiSessionCreate @ 0x1407F3718
 * Callers:
 *     MmInitializeProcessAddressSpace @ 0x14070A4FC (MmInitializeProcessAddressSpace.c)
 *     MiMapProcessExecutable @ 0x1407557F0 (MiMapProcessExecutable.c)
 * Callees:
 *     MiAllocatePool @ 0x1402828F0 (MiAllocatePool.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     ExInitializeSessionHeapManager @ 0x14036EEAC (ExInitializeSessionHeapManager.c)
 *     MiDereferenceSession @ 0x140693F68 (MiDereferenceSession.c)
 *     MiInitializeSessionGlobals @ 0x1406E8EE8 (MiInitializeSessionGlobals.c)
 *     MiSessionCreateInternal @ 0x1407F336C (MiSessionCreateInternal.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407F35F8 (MiInitializeSystemWorkingSetList.c)
 *     MiSessionObjectCreate @ 0x1407F385C (MiSessionObjectCreate.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 MiSessionCreate()
{
  __int64 result; // rax
  _KPROCESS *Process; // rbx
  ULONG_PTR *ProcessPartition; // rdi
  unsigned __int64 v3; // rbx
  PVOID Pool; // rax
  union _RTL_RUN_ONCE v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rax
  PVOID v8; // rax
  int v9; // ebx

  result = MiInitializeSessionGlobals();
  if ( (int)result >= 0 )
  {
    Process = KeGetCurrentThread()->ApcState.Process;
    ProcessPartition = (ULONG_PTR *)MiGetProcessPartition((__int64)Process);
    result = MiSessionCreateInternal(ProcessPartition);
    if ( (int)result >= 0 )
    {
      v3 = Process[1].Affinity.StaticBitmap[25];
      Pool = MiAllocatePool(256, 0x2000uLL, 0x7353694Du);
      if ( Pool )
      {
        *(_QWORD *)(v3 + 760) = 0x10000LL;
        *(_QWORD *)(v3 + 768) = Pool;
        *(_DWORD *)(v3 + 4) |= 0x18u;
        MiInitializeSystemWorkingSetList(ProcessPartition, v3 + 192, 1, 0LL);
        v5.Value = qword_140C4F608;
        *(_QWORD *)(v3 + 48) = qword_140C4F608;
        v6 = qword_140C4F608 + 0x1FFFFFFFFFLL;
        *(_QWORD *)(v3 + 56) = qword_140C4F608 + 0x1FFFFFFFFFLL;
        result = ExInitializeSessionHeapManager(v5, v6);
        if ( (int)result >= 0 )
        {
          *(_DWORD *)(v3 + 4) |= 0x80u;
          v7 = KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[25];
          *(_QWORD *)(v7 + 160) = 0LL;
          *(_QWORD *)(v7 + 168) = 0x2000000LL;
          *(_DWORD *)(v7 + 4) |= 4u;
          v8 = MiAllocatePool(260, 1uLL, 0x6C6F6F50u);
          if ( v8 )
            ExFreePoolWithTag(v8, 0);
          *(_DWORD *)(v3 + 4) |= 1u;
          v9 = MiSessionObjectCreate();
          if ( v9 < 0 )
            MiDereferenceSession();
          return (unsigned int)v9;
        }
      }
      else
      {
        MiDereferenceSession();
        return 3221225626LL;
      }
    }
  }
  return result;
}
