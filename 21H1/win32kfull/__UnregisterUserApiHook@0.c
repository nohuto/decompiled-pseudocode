/*
 * XREFs of __UnregisterUserApiHook@0 @ 0xD49EC
 * Callers:
 *     _NtUserUnregisterUserApiHook@0 @ 0x16ACDB (_NtUserUnregisterUserApiHook@0.c)
 * Callees:
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _UnregisterUserApiHook()
{
  if ( PsGetCurrentProcessWin32Process() == _gppiUserApiHook )
  {
    _gppiUserApiHook = 0;
    if ( gihmodUserApiHook >= 0 )
    {
      RemoveHmodDependency(gihmodUserApiHook);
      gihmodUserApiHook = -1;
    }
    _InterlockedAnd(_gpsi, 0xFFFFFFEF);
    return 1;
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)5);
    return 0;
  }
}
