/*
 * XREFs of HalAllocateDomainCommonBufferThin @ 0x1404CAD90
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateCommonBufferThin @ 0x1404CB530 (HalpAllocateCommonBufferThin.c)
 */

__int64 __fastcall HalAllocateDomainCommonBufferThin(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9)
{
  return HalpAllocateCommonBufferThin(*(_QWORD *)(a1 + 504), a5, a6, a7, a8, a9);
}
