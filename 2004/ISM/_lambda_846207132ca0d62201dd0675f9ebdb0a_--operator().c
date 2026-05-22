/*
 * XREFs of _lambda_846207132ca0d62201dd0675f9ebdb0a_::operator() @ 0x1800BBDB4
 * Callers:
 *     ?Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z @ 0x180022384 (-Initialize@RegistryWatcher@@IEAAJPEAUHKEY__@@PEBG@Z.c)
 *     wil::details::lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___::_lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___ @ 0x1800BBCEC (wil--details--lambda_call__lambda_846207132ca0d62201dd0675f9ebdb0a___--_lambda_call__lambda_8462.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_846207132ca0d62201dd0675f9ebdb0a_::operator()(__int64 *a1)
{
  __int64 result; // rax
  HKEY v3; // rcx
  void *v4; // rcx

  result = *a1;
  v3 = *(HKEY *)(*a1 + 24);
  if ( v3 )
  {
    RegCloseKey(v3);
    *(_QWORD *)(*a1 + 24) = 0LL;
    result = *a1;
  }
  v4 = *(void **)(result + 32);
  if ( v4 )
  {
    CloseHandle(v4);
    result = *a1;
    *(_QWORD *)(*a1 + 32) = 0LL;
  }
  return result;
}
