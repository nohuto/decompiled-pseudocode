/*
 * XREFs of PpmResetPerfTimes @ 0x1403A21E4
 * Callers:
 *     PpmResetPerfEngineForProcessor @ 0x14038096C (PpmResetPerfEngineForProcessor.c)
 *     PpmCheckResetProcessors @ 0x1403BF204 (PpmCheckResetProcessors.c)
 *     PpmCheckReset @ 0x1403C9F60 (PpmCheckReset.c)
 *     PpmCheckProcessorInit @ 0x1403CA7D0 (PpmCheckProcessorInit.c)
 * Callees:
 *     PpmSnapPerformanceAccumulation @ 0x14026F0A0 (PpmSnapPerformanceAccumulation.c)
 *     PpmResetPerformanceAccumulation @ 0x1403A22A8 (PpmResetPerformanceAccumulation.c)
 *     PpmHvSnapPerformanceAccumulation @ 0x140576A50 (PpmHvSnapPerformanceAccumulation.c)
 */

__int64 __fastcall PpmResetPerfTimes(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _OWORD *v3; // rsi
  __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
  {
    v3 = (_OWORD *)(v2 + 32);
    if ( *(_BYTE *)(a1 + 60) )
    {
      v4 = a1 - 33128;
      PpmResetPerformanceAccumulation(a1 - 33128);
      PpmSnapPerformanceAccumulation(v4, 1u, 0, 0, (unsigned __int64 *)(v2 + 32));
    }
    else
    {
      LOBYTE(a2) = 1;
      PpmHvSnapPerformanceAccumulation(a1, a2, 0LL, v2 + 32);
    }
    *(_OWORD *)(v2 + 224) = *v3;
    *(_OWORD *)(v2 + 240) = *(_OWORD *)(v2 + 48);
    *(_OWORD *)(v2 + 256) = *(_OWORD *)(v2 + 64);
    *(_OWORD *)(v2 + 272) = *(_OWORD *)(v2 + 80);
    *(_OWORD *)(v2 + 288) = *(_OWORD *)(v2 + 96);
    *(_OWORD *)(v2 + 304) = *(_OWORD *)(v2 + 112);
    *(_QWORD *)(v2 + 8) = *(_QWORD *)v3;
    *(_QWORD *)v2 = *(_QWORD *)(v2 + 40);
    *(_QWORD *)(v2 + 16) = *(_QWORD *)(v2 + 48);
    result = *(unsigned int *)(v2 + 120);
    *(_DWORD *)(v2 + 24) = result;
  }
  return result;
}
