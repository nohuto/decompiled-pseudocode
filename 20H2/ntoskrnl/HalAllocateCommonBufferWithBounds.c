/*
 * XREFs of HalAllocateCommonBufferWithBounds @ 0x1404C4140
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocateDomainCommonBufferInternal @ 0x1403A0934 (HalpAllocateDomainCommonBufferInternal.c)
 */

_RTL_BALANCED_NODE *__fastcall HalAllocateCommonBufferWithBounds(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3,
        unsigned int a4,
        char a5,
        _DWORD *a6,
        int a7,
        PHYSICAL_ADDRESS *a8)
{
  _RTL_BALANCED_NODE *v9; // [rsp+60h] [rbp+8h] BYREF

  v9 = 0LL;
  HalpAllocateDomainCommonBufferInternal(*(_QWORD *)(a1 + 504), a2, a3, a4, a5, a6, a7, a8, &v9);
  return v9;
}
