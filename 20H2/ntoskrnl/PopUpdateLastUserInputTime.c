/*
 * XREFs of PopUpdateLastUserInputTime @ 0x14077D7E0
 * Callers:
 *     PopUpdateConsoleDisplayState @ 0x14077D704 (PopUpdateConsoleDisplayState.c)
 *     PopSystemIdleWorker @ 0x1408F3900 (PopSystemIdleWorker.c)
 * Callees:
 *     PopPulseSystemIdleEvent @ 0x14078AB80 (PopPulseSystemIdleEvent.c)
 */

_DWORD *PopUpdateLastUserInputTime()
{
  __int64 v0; // rcx
  _DWORD *result; // rax

  v0 = 0LL;
  if ( dword_140C0F1C0 )
  {
    v0 = 1LL;
    result = &unk_140C0F1BC;
  }
  else
  {
    result = &unk_140C0F1B8;
  }
  if ( *result != MEMORY[0xFFFFF780000002E4] )
  {
    *result = MEMORY[0xFFFFF780000002E4];
    return (_DWORD *)PopPulseSystemIdleEvent(v0);
  }
  return result;
}
