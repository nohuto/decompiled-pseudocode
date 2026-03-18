/*
 * XREFs of FsRtlInitSystem2 @ 0x1404173C8
 * Callers:
 *     Phase1InitializationIoReady @ 0x140B020A4 (Phase1InitializationIoReady.c)
 * Callees:
 *     TlgRegisterAggregateProvider @ 0x140827FE8 (TlgRegisterAggregateProvider.c)
 */

__int64 FsRtlInitSystem2()
{
  return TlgRegisterAggregateProvider(&dword_140C038D8);
}
