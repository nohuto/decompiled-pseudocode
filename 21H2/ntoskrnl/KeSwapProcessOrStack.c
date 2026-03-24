/*
 * XREFs of KeSwapProcessOrStack @ 0x1403B4090
 * Callers:
 *     <none>
 * Callees:
 *     KiOutSwapProcesses @ 0x14024A2B0 (KiOutSwapProcesses.c)
 *     KiInSwapProcesses @ 0x14024A538 (KiInSwapProcesses.c)
 *     KeSetPriorityThread @ 0x140257AE0 (KeSetPriorityThread.c)
 *     KiInSwapKernelStacks @ 0x1402E46BC (KiInSwapKernelStacks.c)
 *     KiOutSwapKernelStacks @ 0x1402E4740 (KiOutSwapKernelStacks.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
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
      KiOutSwapProcesses(v4);
    v5 = (_QWORD *)_InterlockedExchange64(&KiProcessInSwapListHead, 0LL);
    if ( v5 )
      KiInSwapProcesses(v5, v0, v2, v3);
    v6 = (_QWORD *)_InterlockedExchange64(&KiStackInSwapListHead, 0LL);
    if ( v6 )
      KiInSwapKernelStacks(v6, (__int64)v0, v2, v3);
  }
}
