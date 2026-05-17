/*
 * XREFs of _RtlActivateActivationContextEx@16 @ 0x4B2E3500
 * Callers:
 *     _RtlActivateActivationContext@12 @ 0x4B2E34B0 (_RtlActivateActivationContext@12.c)
 * Callees:
 *     _RtlAddRefActivationContext@4 @ 0x4B2B5090 (_RtlAddRefActivationContext@4.c)
 *     _RtlCaptureStackBackTrace@16 @ 0x4B2DBFD0 (_RtlCaptureStackBackTrace@16.c)
 *     _RtlpAllocateActivationContextStackFrame@12 @ 0x4B2E35DF (_RtlpAllocateActivationContextStackFrame@12.c)
 */

int __stdcall RtlActivateActivationContextEx(int a1, int a2, volatile signed __int32 *a3, int *a4)
{
  volatile signed __int32 *v4; // esi
  ULONG *v5; // edi
  int result; // eax
  ULONG v7; // ebx
  unsigned int v8; // eax
  ULONG v9; // ecx
  int v10; // edx
  ULONG BackTraceHash; // [esp+4h] [ebp-4h] BYREF

  if ( a4 )
    *a4 = 0;
  v4 = a3;
  if ( a3 == (volatile signed __int32 *)-3 )
    v4 = dword_4B28120C;
  if ( (a1 & 0xFFFFFFFE) != 0 || !a2 || v4 == (volatile signed __int32 *)-1 || !a4 )
    return -1073741811;
  v5 = *(ULONG **)(a2 + 424);
  result = RtlpAllocateActivationContextStackFrame(&BackTraceHash);
  if ( result >= 0 )
  {
    v7 = BackTraceHash;
    *(_DWORD *)(BackTraceHash + 8) = 40;
    if ( (a1 & 1) != 0 )
    {
      *(_DWORD *)(v7 + 8) = 43;
      RtlAddRefActivationContext(v4);
    }
    if ( RtlpCaptureActivationContextActivationStacks )
      v8 = RtlCaptureStackBackTrace(2u, 8u, (PVOID *)(v7 + 16), &BackTraceHash);
    else
      v8 = 0;
    if ( v8 < 8 )
      memset((void *)(v7 + 16 + 4 * v8), 0, 4 * (8 - v8));
    *(_DWORD *)v7 = *v5;
    *(_DWORD *)(v7 + 4) = v4;
    v9 = v5[4];
    v10 = (unsigned __int16)v9 | ((v5[5] & 0xFFF | 0x1000) << 16);
    v5[4] = v9 + 1;
    *(_DWORD *)(v7 + 12) = v10;
    *a4 = v10;
    result = 0;
    *v5 = v7;
  }
  return result;
}
