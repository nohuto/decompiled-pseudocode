/*
 * XREFs of PspInitializeProcessLock @ 0x14057F370
 * Callers:
 *     PspAllocateProcess @ 0x140695CA4 (PspAllocateProcess.c)
 * Callees:
 *     <none>
 */

void __fastcall PspInitializeProcessLock(__int64 a1)
{
  *(_QWORD *)(a1 + 1080) = 0LL;
}
