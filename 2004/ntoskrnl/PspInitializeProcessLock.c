/*
 * XREFs of PspInitializeProcessLock @ 0x14057B940
 * Callers:
 *     PspAllocateProcess @ 0x140610840 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspInitializeProcessLock(__int64 a1)
{
  *(_QWORD *)(a1 + 1080) = 0LL;
}
