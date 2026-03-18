/*
 * XREFs of HalpDmaGetMasterAdapterVersion @ 0x140456978
 * Callers:
 *     HalpDmaAllocateScatterPagesFromScatterPool @ 0x1404568E6 (HalpDmaAllocateScatterPagesFromScatterPool.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPool @ 0x140505560 (HalpDmaAllocateScatterPagesFromContiguousPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaGetMasterAdapterVersion(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 148);
  result = 2LL;
  if ( v1 != 2 )
  {
    result = 0xFFFFFFFFLL;
    if ( v1 == 3 )
      return 3LL;
  }
  return result;
}
