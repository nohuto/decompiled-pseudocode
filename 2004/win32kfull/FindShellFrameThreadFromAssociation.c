/*
 * XREFs of FindShellFrameThreadFromAssociation @ 0x1C01D35AC
 * Callers:
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 *     TryDetachShellFrame @ 0x1C01E27B4 (TryDetachShellFrame.c)
 *     _SetThreadQueueMergeSetting @ 0x1C0207CA0 (_SetThreadQueueMergeSetting.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00EC424 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

__int64 __fastcall FindShellFrameThreadFromAssociation(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *ShellFrameAppThreadsAssociation; // rax
  __int64 v2; // rcx

  ShellFrameAppThreadsAssociation = FindShellFrameAppThreadsAssociation(a1);
  if ( ShellFrameAppThreadsAssociation && *((_QWORD *)ShellFrameAppThreadsAssociation + 3) == v2 )
    return *((_QWORD *)ShellFrameAppThreadsAssociation + 2);
  else
    return 0LL;
}
