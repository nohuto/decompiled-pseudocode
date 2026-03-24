/*
 * XREFs of HalpInterruptStandardEndOfInterrupt @ 0x1404BDCD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 */

__int64 HalpInterruptStandardEndOfInterrupt()
{
  return (*(__int64 (__fastcall **)(_QWORD))(HalpInterruptController + 96))(*(_QWORD *)(HalpInterruptController + 16));
}
