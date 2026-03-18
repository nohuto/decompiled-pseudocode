/*
 * XREFs of PspWow64SetupCpuArea @ 0x1406D6F64
 * Callers:
 *     PspSetupUserStack @ 0x140685318 (PspSetupUserStack.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1402E6730 (RtlpGetLegacyContextLength.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406957F0 (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64SetupCpuArea(unsigned __int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned __int16 v4; // ax
  int v5; // eax
  unsigned int v7; // [rsp+38h] [rbp+10h] BYREF
  unsigned int v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = *(_QWORD *)(a2 + 1408);
  v8 = 0;
  v7 = 0;
  if ( !v2 || (v4 = *(_WORD *)(v2 + 8)) == 0 )
    v4 = -31132;
  v5 = RtlpArchContextFlagFromMachine(v4);
  if ( !v5 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v5, (int *)&v7, &v8);
  *a1 = ((~(v8 - 1LL) & (((((*a1 - 4) & 0xFFFFFFFFFFFFFFFCuLL) - 5) & 0xFFFFFFFFFFFFFFF8uLL) - v7)) - 4) & 0xFFFFFFFFFFFFFFF0uLL;
  return 0LL;
}
