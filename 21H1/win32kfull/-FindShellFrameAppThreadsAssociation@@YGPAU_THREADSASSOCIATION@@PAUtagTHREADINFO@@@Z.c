/*
 * XREFs of ?FindShellFrameAppThreadsAssociation@@YGPAU_THREADSASSOCIATION@@PAUtagTHREADINFO@@@Z @ 0x8AFBA
 * Callers:
 *     _DisassociateShellFrameAppThreads@4 @ 0x8AFA4 (_DisassociateShellFrameAppThreads@4.c)
 *     _FindShellFrameThreadFromAssociation@4 @ 0x141D67 (_FindShellFrameThreadFromAssociation@4.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__thiscall FindShellFrameAppThreadsAssociation(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *result; // eax

  for ( result = gShellFrameAppThreadsAssociationList.Flink;
        result != &gShellFrameAppThreadsAssociationList;
        result = result->Flink )
  {
    if ( result[1].Flink == this || result[1].Blink == this )
      return result;
  }
  return 0;
}
