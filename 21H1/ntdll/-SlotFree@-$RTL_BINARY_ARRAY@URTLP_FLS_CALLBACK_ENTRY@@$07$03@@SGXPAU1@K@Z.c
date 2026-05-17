/*
 * XREFs of ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGXPAU1@K@Z @ 0x4B2E8962
 * Callers:
 *     ?RtlpFlsAlloc@@YGJPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_THREAD_CONTEXT@@P6GXPAX@ZPAK@Z @ 0x4B2E54FB (-RtlpFlsAlloc@@YGJPAU_RTLP_FLS_CONTEXT@@PAU_RTLP_FLS_THREAD_CONTEXT@@P6GXPAX@ZPAK@Z.c)
 *     ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B2E87A1 (-RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(int a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // edx
  _DWORD *result; // eax

  _BitScanReverse(&v2, a2);
  v3 = a2 ^ (1 << v2);
  result = *(_DWORD **)(a1 + 4 * v2 - 16);
  --*result;
  if ( result[2 * v3 + 2] )
    NT_ASSERT("T::IsEmpty(&Chunk->Slots[SlotIndex])");
  return result;
}
