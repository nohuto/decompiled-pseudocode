/*
 * XREFs of InitCommonPerfStateContext @ 0x1C002BE18
 * Callers:
 *     InitLegacyPccInternal @ 0x1C000A5E8 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x1C002BE58 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x1C002D3C4 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1C002D780 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x1C002F5B0 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitCommonPerfStateContext(_DWORD *a1, _QWORD *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax

  *a2 = a1;
  *(_QWORD *)(a3 + 8) = a2;
  if ( a1[20] )
  {
    *(_DWORD *)a3 = a1[21];
    *(_DWORD *)(a3 + 28) = a1[20];
  }
  else
  {
    *(_DWORD *)a3 = a1[14];
  }
  *(_DWORD *)(a3 + 20) = a1[180];
  result = a5;
  *(_DWORD *)(a3 + 24) = a5;
  *(_DWORD *)(a3 + 16) = a4;
  return result;
}
