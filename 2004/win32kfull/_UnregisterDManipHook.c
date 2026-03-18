/*
 * XREFs of _UnregisterDManipHook @ 0x1C01E6E40
 * Callers:
 *     <none>
 * Callees:
 *     RemoveHmodDependency @ 0x1C004609C (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  if ( PsGetCurrentProcessWin32Process(a1) == gppiDManipHook )
  {
    gppiDManipHook = 0LL;
    if ( gihmodDManipHook >= 0 )
    {
      RemoveHmodDependency(gihmodDManipHook);
      gihmodDManipHook = -1;
    }
    _InterlockedAnd(gpsi, 0xFFFFFFEF);
    return 1LL;
  }
  else
  {
    UserSetLastError(5LL, v1, v2);
    return 0LL;
  }
}
