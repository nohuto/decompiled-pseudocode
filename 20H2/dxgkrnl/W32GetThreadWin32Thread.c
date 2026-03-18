/*
 * XREFs of W32GetThreadWin32Thread @ 0x1C0003C88
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C00F5C90 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 *     ?DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z @ 0x1C00F63A0 (-DdiSubmitCommandVirtual@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SUBMITCOMMANDVIRTUAL@@@Z.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0102150 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1C0126D20 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall W32GetThreadWin32Thread(__int64 a1)
{
  __int64 v2; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax

  v2 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = PsGetThreadWin32Thread(a1);
    if ( ThreadWin32Thread )
      return *(_QWORD *)ThreadWin32Thread;
  }
  return v2;
}
