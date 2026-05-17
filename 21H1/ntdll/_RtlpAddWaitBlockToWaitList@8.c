/*
 * XREFs of _RtlpAddWaitBlockToWaitList@8 @ 0x4B2DF80C
 * Callers:
 *     _RtlpWaitOnAddress@20 @ 0x4B2DF747 (_RtlpWaitOnAddress@20.c)
 * Callees:
 *     _RtlpOptimizeWaitOnAddressWaitList@4 @ 0x4B2A9553 (_RtlpOptimizeWaitOnAddressWaitList@4.c)
 */

signed __int32 __fastcall RtlpAddWaitBlockToWaitList(int a1, unsigned int a2)
{
  int v3; // eax
  unsigned int v4; // edx
  volatile signed __int32 *v5; // ebx
  signed __int32 i; // esi
  signed __int32 v7; // ecx
  signed __int32 result; // eax
  unsigned int v9; // [esp+Ch] [ebp-4h]

  v3 = (*(_DWORD *)a2 >> 5) & 0x7F;
  v4 = a2 & 0xFFFFFFFC;
  v9 = v4;
  v5 = (volatile signed __int32 *)(a1 + 4 * v3);
  for ( i = *v5; ; i = result )
  {
    v7 = v4 | i & 3;
    *(_DWORD *)(a2 + 8) = i & 0xFFFFFFFC;
    if ( (i & 0xFFFFFFFC) != 0 )
      v7 |= 2u;
    *(_DWORD *)(a2 + 16) = (i & 0xFFFFFFFC) == 0 ? a2 : 0;
    result = _InterlockedCompareExchange(v5, v7, i);
    if ( result == i )
      break;
    v4 = v9;
  }
  if ( (((unsigned __int8)i ^ (unsigned __int8)v7) & 2) != 0 )
    return RtlpOptimizeWaitOnAddressWaitList(v5);
  return result;
}
