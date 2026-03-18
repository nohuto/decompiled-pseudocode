/*
 * XREFs of Command_ProcessCrbCompletion @ 0x1C002F348
 * Callers:
 *     Command_InternalSendCommand @ 0x1C0006D80 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Command_ProcessCrbCompletion(__int64 a1)
{
  return (*(__int64 (**)(void))(a1 + 40))();
}
