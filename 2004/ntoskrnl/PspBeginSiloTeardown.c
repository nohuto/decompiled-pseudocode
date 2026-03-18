/*
 * XREFs of PspBeginSiloTeardown @ 0x140902B28
 * Callers:
 *     NtSetInformationJobObject @ 0x14061AF00 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406562A0 (PspJobClose.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
