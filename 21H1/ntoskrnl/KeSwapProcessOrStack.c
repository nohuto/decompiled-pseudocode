/*
 * XREFs of KeSwapProcessOrStack @ 0x1403B1FF0
 * Callers:
 *     <none>
 * Callees:
 *     KiInSwapProcesses @ 0x1402445C8 (KiInSwapProcesses.c)
 *     KiOutSwapProcesses @ 0x140244780 (KiOutSwapProcesses.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     KiInSwapKernelStacks @ 0x140329928 (KiInSwapKernelStacks.c)
 *     KiOutSwapKernelStacks @ 0x14032A2DC (KiOutSwapKernelStacks.c)
 *     KeSetPriorityThread @ 0x1403310D0 (KeSetPriorityThread.c)
 */

void __noreturn KeSwapProcessOrStack()
{
  _QWORD *v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  _DWORD *v3; // r9
  _QWORD *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rcx

  KeSetPriorityThread(KeGetCurrentThread(), 23);
  while ( 1 )
  {
    KeWaitForSingleObject(&KiSwapEvent, Executive, 0, 0, 0LL);
    if ( _InterlockedCompareExchange(&KiStackOutSwapRequest, 0, 1) == 1 )
      KiOutSwapKernelStacks(v1, (__int64)v0, v2, v3);
    v4 = (_QWORD *)_InterlockedExchange64(&KiProcessOutSwapListHead, 0LL);
    if ( v4 )
      KiOutSwapProcesses(v4, v0, v2, v3);
    v5 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapProcesses(v5, v0, v2, v3);
    v6 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    if ( v6 )
      KiInSwapKernelStacks(v6, (__int64)v0, v2);
  }
}
