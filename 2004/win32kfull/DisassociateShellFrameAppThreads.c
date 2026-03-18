/*
 * XREFs of DisassociateShellFrameAppThreads @ 0x1C00EC3FC
 * Callers:
 *     PatchThreadWindows @ 0x1C00EC2E0 (PatchThreadWindows.c)
 *     ?TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z @ 0x1C01E187C (-TryAttachShellFrame@@YAXPEAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z @ 0x1C00EC424 (-FindShellFrameAppThreadsAssociation@@YAPEAU_THREADSASSOCIATION@@PEAUtagTHREADINFO@@@Z.c)
 */

struct _THREADSASSOCIATION *__fastcall DisassociateShellFrameAppThreads(struct tagTHREADINFO *a1)
{
  struct _THREADSASSOCIATION *result; // rax
  __int64 v3; // rdx
  struct _THREADSASSOCIATION **v4; // rcx

  while ( 1 )
  {
    result = FindShellFrameAppThreadsAssociation(a1);
    if ( !result )
      break;
    v3 = *(_QWORD *)result;
    if ( *(struct _THREADSASSOCIATION **)(*(_QWORD *)result + 8LL) != result
      || (v4 = (struct _THREADSASSOCIATION **)*((_QWORD *)result + 1), *v4 != result) )
    {
      __fastfail(3u);
    }
    *v4 = (struct _THREADSASSOCIATION *)v3;
    *(_QWORD *)(v3 + 8) = v4;
    Win32FreePool(result);
  }
  return result;
}
