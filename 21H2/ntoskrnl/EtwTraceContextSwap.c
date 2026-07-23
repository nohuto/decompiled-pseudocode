/*
 * XREFs of EtwTraceContextSwap @ 0x1403AEEB0
 * Callers:
 *     KiSwapThread @ 0x140351420 (KiSwapThread.c)
 *     SwapContext @ 0x1404069A0 (SwapContext.c)
 * Callees:
 *     PsGetThreadServerSilo @ 0x1402AAE70 (PsGetThreadServerSilo.c)
 *     EtwpLogContextSwapEvent @ 0x1403AEF80 (EtwpLogContextSwapEvent.c)
 *     EtwpCoverageSamplerContextSwap @ 0x1405AFEEC (EtwpCoverageSamplerContextSwap.c)
 */

__int64 __fastcall EtwTraceContextSwap(__int64 a1, __int64 a2)
{
  __int64 ThreadServerSilo; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // rax
  _QWORD *v7; // r8
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx

  ThreadServerSilo = PsGetThreadServerSilo(a1);
  v5 = PsGetThreadServerSilo(a2);
  v6 = &PspHostSiloGlobals;
  if ( ThreadServerSilo )
    v7 = *(_QWORD **)(ThreadServerSilo + 1272);
  else
    v7 = &PspHostSiloGlobals;
  v8 = v7[108];
  if ( v5 )
    v6 = *(_QWORD **)(v5 + 1272);
  v9 = v6[108];
  if ( EtwpHostSiloState != -4548 && (*(_DWORD *)(EtwpHostSiloState + 4552) & 4) != 0 )
    EtwpCoverageSamplerContextSwap(a2);
  result = EtwpLogContextSwapEvent(EtwpHostSiloState, a1, a2);
  if ( ThreadServerSilo == v5 )
  {
    if ( !ThreadServerSilo )
      goto LABEL_10;
    if ( v8 )
    {
      v11 = a1;
      v12 = v8;
      return EtwpLogContextSwapEvent(v12, v11, a2);
    }
  }
  if ( ThreadServerSilo && v8 )
    result = EtwpLogContextSwapEvent(v8, a1, 0LL);
LABEL_10:
  if ( v5 && v9 )
  {
    v11 = 0LL;
    v12 = v9;
    return EtwpLogContextSwapEvent(v12, v11, a2);
  }
  return result;
}
