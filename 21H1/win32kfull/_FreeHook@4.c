/*
 * XREFs of _FreeHook@4 @ 0x12EC8
 * Callers:
 *     _zzzUnhookWindowsHookEx@4 @ 0x127FE (_zzzUnhookWindowsHookEx@4.c)
 *     _FreeThreadsWindowHooks@0 @ 0x12E20 (_FreeThreadsWindowHooks@0.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 * Callees:
 *     ?CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z @ 0x12872 (-CheckWHFBits@@YGXPAUtagTHREADINFO@@H@Z.c)
 *     ?UnlinkHook@@YGXPAUtagHOOK@@@Z @ 0x12F22 (-UnlinkHook@@YGXPAUtagHOOK@@@Z.c)
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 */

int __stdcall FreeHook(_DWORD *a1)
{
  int v1; // eax
  int result; // eax
  int v3; // ecx
  struct tagHOOK *v4; // [esp+0h] [ebp-4h]

  v1 = a1[8];
  if ( (v1 & 0x80u) == 0 )
  {
    v3 = a1[10];
    a1[8] = v1 | 0x80;
    if ( !v3 )
      v3 = a1[2];
    CheckWHFBits(v3, a1[6]);
  }
  result = HMMarkObjectDestroy(a1);
  if ( result )
  {
    UnlinkHook(v4);
    if ( (int)a1[9] >= 0 )
      RemoveHmodDependency();
    return HMFreeObject(a1);
  }
  return result;
}
