/*
 * XREFs of KeSwapProcessOrStack @ 0x1403C6D20
 * Callers:
 *     <none>
 * Callees:
 *     KiOutSwapProcesses @ 0x140210EA0 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14021119C (KiInSwapProcesses.c)
 *     KiOutSwapKernelStacks @ 0x140299FBC (KiOutSwapKernelStacks.c)
 *     KiInSwapKernelStacks @ 0x14029A6E0 (KiInSwapKernelStacks.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeSetPriorityThread @ 0x140344340 (KeSetPriorityThread.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  _QWORD *v0; // rdx
  int v1; // r8d
  _DWORD *v2; // r9
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks();
    v3 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v3 )
      KiOutSwapProcesses(v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v4 )
      KiInSwapProcesses(v4, v0, v1, v2);
    v5 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapKernelStacks(v5);
  }
}
