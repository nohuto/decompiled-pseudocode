/*
 * XREFs of PpmUpdateIdleContext @ 0x1408DE0D4
 * Callers:
 *     PpmUpdateIdleStates @ 0x14077F2B0 (PpmUpdateIdleStates.c)
 * Callees:
 *     KeGetPrcb @ 0x140276C20 (KeGetPrcb.c)
 */

__int64 __fastcall PpmUpdateIdleContext(unsigned int a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 result; // rax

  v3 = *(_QWORD *)(KeGetPrcb(a1) + 0x8000);
  result = 0LL;
  if ( !v3 )
    return 3221225659LL;
  if ( !*(_QWORD *)(v3 + 488) )
    return 3221225865LL;
  *(_DWORD *)(v3 + 36) = 4;
  *(_QWORD *)(v3 + 488) = *(_QWORD *)(a2 + 8);
  return result;
}
