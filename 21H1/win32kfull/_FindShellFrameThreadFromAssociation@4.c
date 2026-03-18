/*
 * XREFs of _FindShellFrameThreadFromAssociation@4 @ 0x141D67
 * Callers:
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     __SetThreadQueueMergeSetting@8 @ 0x16D8DF (__SetThreadQueueMergeSetting@8.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YGPAU_THREADSASSOCIATION@@PAUtagTHREADINFO@@@Z @ 0x8AFBA (-FindShellFrameAppThreadsAssociation@@YGPAU_THREADSASSOCIATION@@PAUtagTHREADINFO@@@Z.c)
 */

struct _LIST_ENTRY *__thiscall FindShellFrameThreadFromAssociation(struct _LIST_ENTRY *this)
{
  struct _LIST_ENTRY *ShellFrameAppThreadsAssociation; // eax
  struct _LIST_ENTRY *v2; // ecx

  ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(this);
  if ( ShellFrameAppThreadsAssociation && ShellFrameAppThreadsAssociation[1].Blink == v2 )
    return ShellFrameAppThreadsAssociation[1].Flink;
  else
    return 0;
}
