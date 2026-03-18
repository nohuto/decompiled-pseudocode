/*
 * XREFs of _SetProcessDefaultLayout @ 0x1C01D2D60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 */

__int64 __fastcall SetProcessDefaultLayout(__int64 a1, __int64 a2, __int64 a3)
{
  if ( (a1 & 0xFFFFFFF8) != 0 )
  {
    UserSetLastError(87LL, a2, a3);
    return 0LL;
  }
  else
  {
    *(_DWORD *)(PsGetCurrentProcessWin32Process(a1, a2, a3) + 824) = a1;
    return 1LL;
  }
}
