/*
 * XREFs of NtUserUpdateWindowInputSinkHints @ 0x1C0005F60
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 */

__int64 __fastcall NtUserUpdateWindowInputSinkHints(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  int v4; // edi
  unsigned int i; // r8d

  v3 = 0LL;
  v4 = 0;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
  {
    for ( i = 0; i < a2; ++i )
      ;
  }
  else
  {
    v4 = -1073741790;
  }
  LOBYTE(v3) = v4 >= 0;
  return v3;
}
