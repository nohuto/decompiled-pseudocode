/*
 * XREFs of _DisassociateShellFrameAppThreads@4 @ 0x8AFA4
 * Callers:
 *     _PatchThreadWindows@4 @ 0x8AED0 (_PatchThreadWindows@4.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 * Callees:
 *     ?FindShellFrameAppThreadsAssociation@@YGPAU_THREADSASSOCIATION@@PAUtagTHREADINFO@@@Z @ 0x8AFBA (-FindShellFrameAppThreadsAssociation@@YGPAU_THREADSASSOCIATION@@PAUtagTHREADINFO@@@Z.c)
 */

struct _THREADSASSOCIATION *DisassociateShellFrameAppThreads()
{
  struct _THREADSASSOCIATION *result; // eax
  int v1; // ecx
  struct _THREADSASSOCIATION **v2; // edx
  struct tagTHREADINFO *v3; // [esp+0h] [ebp-4h]

  while ( 1 )
  {
    result = FindShellFrameAppThreadsAssociation(v3);
    if ( !result )
      break;
    v1 = *(_DWORD *)result;
    if ( *(struct _THREADSASSOCIATION **)(*(_DWORD *)result + 4) != result
      || (v2 = (struct _THREADSASSOCIATION **)*((_DWORD *)result + 1), *v2 != result) )
    {
      __fastfail(3u);
    }
    *v2 = (struct _THREADSASSOCIATION *)v1;
    *(_DWORD *)(v1 + 4) = v2;
    Win32FreePool(result);
  }
  return result;
}
