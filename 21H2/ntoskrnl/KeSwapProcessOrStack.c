/*
 * XREFs of KeSwapProcessOrStack @ 0x1403B4200
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140279050 (KeSetPriorityThread.c)
 *     KiInSwapKernelStacks @ 0x140295A0C (KiInSwapKernelStacks.c)
 *     KiOutSwapKernelStacks @ 0x140295A90 (KiOutSwapKernelStacks.c)
 *     KiOutSwapProcesses @ 0x1402EEB00 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x1402EED88 (KiInSwapProcesses.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  _QWORD *v0; // rdx
  __int64 v1; // r8
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
      KiInSwapKernelStacks(v5, (__int64)v0, v1);
  }
}
