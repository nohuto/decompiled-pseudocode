/*
 * XREFs of _UnregisterDManipHook @ 0x1C01E6180
 * Callers:
 *     <none>
 * Callees:
 *     RemoveHmodDependency @ 0x1C0074F5C (RemoveHmodDependency.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall UnregisterDManipHook(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  __int64 v4; // r8

  if ( PsGetCurrentProcessWin32Process(a1, a2, a3) == gppiDManipHook )
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
    UserSetLastError(5LL, v3, v4);
    return 0LL;
  }
}
