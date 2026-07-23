/*
 * XREFs of HalGetInterruptTargetInformation @ 0x1403C9C00
 * Callers:
 *     PoInitSystem @ 0x140A40948 (PoInitSystem.c)
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x140269E20 (KeGetProcessorIndexFromNumber.c)
 *     HalpInterruptIsMsiSupported @ 0x1403C9D48 (HalpInterruptIsMsiSupported.c)
 */

__int64 __fastcall HalGetInterruptTargetInformation(int a1, int a2, __int64 a3)
{
  bool v6; // zf
  int v7; // edi
  int v8; // ecx
  __int64 result; // rax
  ULONG_PTR i; // rsi
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rax

  if ( a1 && a1 != 2 )
  {
    HalpInterruptLastProblem = 19;
    return 3221225485LL;
  }
  *(_QWORD *)(a3 + 4) = 0LL;
  *(_QWORD *)(a3 + 12) = 0LL;
  v6 = HalpInterruptPhysicalModeOnly == 0;
  *(_DWORD *)a3 = a1;
  if ( v6 && HalpInterruptLogicalMode )
    v7 = (HalpInterruptClusterModeEnabled != 0) + 2;
  else
    v7 = 1;
  *(_DWORD *)(a3 + 20) = v7;
  if ( (unsigned __int8)HalpInterruptIsMsiSupported(0LL) )
    *(_DWORD *)(a3 + 8) = 1;
  if ( (HalpFeatureBits & 0x80u) != 0 )
    *(_DWORD *)(a3 + 8) |= 8u;
  if ( a1 != 2 )
  {
    v8 = 0;
    result = 3221226021LL;
    if ( !(_DWORD)HalpInterruptProcessorCount )
      return result;
    for ( i = HalpInterruptProcessorState; !*(_BYTE *)(i + 13) || *(_DWORD *)i != a2; i += 64LL )
    {
      if ( ++v8 >= (unsigned int)HalpInterruptProcessorCount )
        return result;
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(i + 16);
    ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(i + 16));
    v12 = HalpInterruptTargets;
    v13 = 3LL * ProcessorIndexFromNumber;
    if ( v7 == 1
      || (v14 = qword_140C4BA88[*(unsigned __int16 *)(i + 16)], _bittest64(&v14, *(unsigned __int8 *)(i + 18))) )
    {
      *(_DWORD *)(a3 + 12) = 0;
      *(_DWORD *)(a3 + 20) = 1;
    }
    else
    {
      *(_DWORD *)(a3 + 20) = v7;
      if ( v7 == 2 )
      {
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 8 * v13 + 8);
      }
      else
      {
        *(_DWORD *)(a3 + 12) = *(_DWORD *)(v12 + 8 * v13 + 12);
        *(_DWORD *)(a3 + 16) = *(_DWORD *)(v12 + 8 * v13 + 8);
      }
    }
  }
  return 0LL;
}
