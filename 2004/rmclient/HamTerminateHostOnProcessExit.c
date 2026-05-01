/*
 * XREFs of HamTerminateHostOnProcessExit @ 0x180005E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall HamTerminateHostOnProcessExit(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned __int8 a6)
{
  CLIENT_CALL_RETURN result; // rax
  int v8; // [rsp+40h] [rbp-28h]

  v8 = a6;
  result.Pointer = NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_1800158E0, 0xDu, 0LL, *a1, a2, a3, a4, a5, v8).Pointer;
  if ( SLODWORD(result.Simple) >= 0 )
    return 0LL;
  return result;
}
