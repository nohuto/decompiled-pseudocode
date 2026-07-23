/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x140912FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlSetThreadPlaceholderCompatibilityMode(CHAR Mode)
{
  struct _KTHREAD *CurrentThread; // rdx
  _BYTE *Teb; // rdx
  CHAR result; // al

  if ( (unsigned __int8)Mode > 3u )
    return -1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = Mode;
  return result;
}
