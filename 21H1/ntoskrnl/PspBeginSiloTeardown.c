/*
 * XREFs of PspBeginSiloTeardown @ 0x140901CC8
 * Callers:
 *     NtSetInformationJobObject @ 0x140660620 (NtSetInformationJobObject.c)
 *     PspJobClose @ 0x1406E0FD0 (PspJobClose.c)
 * Callees:
 *     PspHardDereferenceSiloWorker @ 0x14020096C (PspHardDereferenceSiloWorker.c)
 */

void __fastcall PspBeginSiloTeardown(__int64 a1)
{
  PspHardDereferenceSiloWorker(a1);
}
