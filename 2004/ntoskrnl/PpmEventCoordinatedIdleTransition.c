/*
 * XREFs of PpmEventCoordinatedIdleTransition @ 0x140573F30
 * Callers:
 *     PpmExitCoordinatedIdle @ 0x140218DA0 (PpmExitCoordinatedIdle.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140250918 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 */

__int64 __fastcall PpmEventCoordinatedIdleTransition(char a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+38h] [rbp-20h]
  int v6; // [rsp+3Ch] [rbp-1Ch]

  if ( a2 )
  {
    result = PpmPlatformStates;
    if ( *(_BYTE *)(PpmPlatformStates + 12) )
    {
      if ( (WORD4(PerfGlobalGroupMask) & 0x8000) != 0 )
      {
        v6 = 0;
        v4 = a3;
        v5 = 4 * a2;
        return EtwTraceKernelEvent((int)&v4, 1, 0x40008000u, 4672 - (a1 != 0), 1538);
      }
    }
  }
  return result;
}
