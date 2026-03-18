/*
 * XREFs of PopUpdateLastUserInputTime @ 0x14076C124
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x14076BFE8 (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x1408EDCF0 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x14077C580 (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  _DWORD *result; // rax

  v0 = 0LL;
  if ( dword_140C0F1A0 )
  {
    v0 = 1LL;
    result = &unk_140C0F19C;
  }
  else
  {
    result = &unk_140C0F198;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
