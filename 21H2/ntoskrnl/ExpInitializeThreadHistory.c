/*
 * XREFs of ExpInitializeThreadHistory @ 0x1402E9204
 * Callers:
 *     NtCreateWorkerFactory @ 0x1406D3E40 (NtCreateWorkerFactory.c)
 * Callees:
 *     <none>
 */

void __fastcall ExpInitializeThreadHistory(__int64 a1)
{
  *(_DWORD *)(a1 + 312) &= 0xFFFFFFF8;
  *(_OWORD *)(a1 + 72) = 0LL;
  *(_OWORD *)(a1 + 88) = 0LL;
}
