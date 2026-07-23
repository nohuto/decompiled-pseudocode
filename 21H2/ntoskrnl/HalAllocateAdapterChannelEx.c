/*
 * XREFs of HalAllocateAdapterChannelEx @ 0x1404CA480
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateAdapterChannel @ 0x1404CA610 (HalpAllocateAdapterChannel.c)
 */

__int64 __fastcall HalAllocateAdapterChannelEx(
        struct _DMA_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DMA_OPERATIONS **a8)
{
  __int64 result; // rax
  __int64 v10; // rax

  if ( !a3 || *(_DWORD *)a3 != 1 || (a5 & 1) == 0 && (!a6 || a8) )
    return 3221225485LL;
  if ( a6 )
  {
    if ( !a8 )
      goto LABEL_12;
  }
  else if ( !a8 )
  {
    return 3221225485LL;
  }
  *a8 = 0LL;
LABEL_12:
  *(_DWORD *)(a3 + 8) = 0;
  *(_QWORD *)(a3 + 88) = 0LL;
  *(_QWORD *)(a3 + 64) = a2;
  v10 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a3 + 36) |= 2u;
  *(_QWORD *)(a3 + 72) = v10;
  *(_QWORD *)(a3 + 48) = a7;
  result = HalpAllocateAdapterChannel(a1, a5, a6);
  if ( !(_DWORD)result )
  {
    if ( a8 )
      *a8 = a1[14].DmaOperations;
  }
  return result;
}
