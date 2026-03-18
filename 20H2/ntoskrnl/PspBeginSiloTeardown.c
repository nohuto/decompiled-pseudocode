/*
 * XREFs of PspBeginSiloTeardown @ 0x140908738
 * Callers:
 *     NtSetInformationJobObject @ 0x140661780 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406D7000 (PspJobClose.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
