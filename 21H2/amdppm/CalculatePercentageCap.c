/*
 * XREFs of CalculatePercentageCap @ 0x1C002D8F4
 * Callers:
 *     RegisterKernelCap @ 0x1C00208C0 (RegisterKernelCap.c)
 *     InitPerfStatesInternal @ 0x1C002F820 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalculatePercentageCap(__int64 a1, unsigned int a2, int a3)
{
  int v3; // r9d

  v3 = *(_DWORD *)(a1 + 68);
  if ( v3 )
  {
    if ( a2 != v3 - 1 )
      return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
  }
  else
  {
    a2 = 0;
  }
  if ( *(_DWORD *)(a1 + 72) )
    a2 = v3 + a3;
  return *(unsigned __int8 *)(32LL * a2 + *(_QWORD *)(a1 + 56) + 24);
}
