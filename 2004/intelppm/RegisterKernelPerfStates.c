/*
 * XREFs of RegisterKernelPerfStates @ 0x1C00252D0
 * Callers:
 *     <none>
 * Callees:
 *     InitPerfStatesInternal @ 0x1C002480C (InitPerfStatesInternal.c)
 */

__int64 __fastcall RegisterKernelPerfStates(__int64 a1)
{
  return InitPerfStatesInternal(a1, (int (__fastcall *)(char *, _QWORD))RegisterKernelPerfStatesCallback);
}
