/*
 * XREFs of PpmTracePerfIdleRundown @ 0x140571720
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402A9948 (EtwTraceKernelEvent.c)
 *     PpmEventIdleStateChange @ 0x140300338 (PpmEventIdleStateChange.c)
 *     PpmPerfGetCurrentState @ 0x140313FA8 (PpmPerfGetCurrentState.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

__int64 __fastcall PpmTracePerfIdleRundown(_QWORD *a1)
{
  __int64 v2; // rax
  __int128 v4; // [rsp+30h] [rbp-30h] BYREF
  __int64 v5; // [rsp+40h] [rbp-20h]
  __int128 *v6; // [rsp+48h] [rbp-18h] BYREF
  int v7; // [rsp+50h] [rbp-10h]
  int v8; // [rsp+54h] [rbp-Ch]

  v5 = 0LL;
  v4 = 0LL;
  if ( a1[4141] )
  {
    PpmPerfGetCurrentState((__int64)a1, (unsigned __int64)&v4 + 4, 0LL, 0LL, &v4, 0LL);
    v8 = 0;
    DWORD2(v4) = DWORD1(v4);
    v5 = a1[25];
    v6 = &v4;
    v7 = 24;
    EtwTraceKernelEvent((__int64)&v6, 1u, 0x80008000, 0x1233u, 0x401802u);
  }
  v2 = a1[4096];
  if ( v2 )
    PpmEventIdleStateChange(*(_DWORD *)(v2 + 16), *(_DWORD *)(v2 + 16));
  return 0LL;
}
