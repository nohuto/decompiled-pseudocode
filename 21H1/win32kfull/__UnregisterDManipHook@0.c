/*
 * XREFs of __UnregisterDManipHook@0 @ 0x15275D
 * Callers:
 *     <none>
 * Callees:
 *     _RemoveHmodDependency@4 @ 0x15F1A (_RemoveHmodDependency@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall _UnregisterDManipHook()
{
  if ( PsGetCurrentProcessWin32Process() == _gppiDManipHook )
  {
    _gppiDManipHook = 0;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency(gihmodDManipHook);
      gihmodDManipHook = -1;
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
