/*
 * XREFs of HalRealAllocateAdapterChannelV3 @ 0x1404CA5C0
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateAdapterChannel @ 0x1404CA610 (HalpAllocateAdapterChannel.c)
 */

__int64 __fastcall HalRealAllocateAdapterChannelV3(
        struct _DMA_ADAPTER *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v5; // rax

  *(_QWORD *)(a2 + 128) = a2;
  v5 = *(_QWORD *)(a2 + 32);
  *(_DWORD *)(a2 + 100) &= ~2u;
  *(_QWORD *)(a2 + 136) = v5;
  *(_QWORD *)(a2 + 112) = a5;
  return HalpAllocateAdapterChannel(a1, 0, a4);
}
