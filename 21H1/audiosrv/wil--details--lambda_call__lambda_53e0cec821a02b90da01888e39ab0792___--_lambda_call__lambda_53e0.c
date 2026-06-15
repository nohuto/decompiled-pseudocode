/*
 * XREFs of wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___ @ 0x18006EBDC
 * Callers:
 *     AudioServerCreateStream @ 0x18000C270 (AudioServerCreateStream.c)
 * Callees:
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DE354 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___::_lambda_call__lambda_53e0cec821a02b90da01888e39ab0792___(
        __int64 a1)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 1) )
  {
    *(_BYTE *)(a1 + 1) = 0;
    if ( !RevertToSelf() )
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0xC8E,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        v1);
  }
}
