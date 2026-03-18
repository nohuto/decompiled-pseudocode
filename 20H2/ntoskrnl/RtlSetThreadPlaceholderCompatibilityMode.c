/*
 * XREFs of RtlSetThreadPlaceholderCompatibilityMode @ 0x140919E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall RtlSetThreadPlaceholderCompatibilityMode(unsigned __int8 a1)
{
  struct _KTHREAD *CurrentThread; // rdx
  _BYTE *Teb; // rdx
  char result; // al

  if ( a1 > 3u )
    return -1;
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->MiscFlags & 0x400) != 0 || CurrentThread->ApcStateIndex == 1 )
    Teb = 0LL;
  else
    Teb = CurrentThread->Teb;
  if ( !Teb )
    return -2;
  result = Teb[640];
  Teb[640] = a1;
  return result;
}
