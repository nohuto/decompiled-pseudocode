/*
 * XREFs of HalpDmaControllerInitializeController @ 0x1404CE9E8
 * Callers:
 *     HalpDmaInitializeControllers @ 0x1403BC314 (HalpDmaInitializeControllers.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x140216B60 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x140226840 (MmGetPhysicalAddress.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpDmaControllerInitializeController(__int64 a1)
{
  __int64 result; // rax
  unsigned int v3; // ecx
  __int64 v4; // rbx
  __int64 i; // rsi
  __int64 v6; // r14
  __int64 v7; // rbp
  void *ContiguousNodeMemory; // rax
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v10; // r8

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 80))(*(_QWORD *)(a1 + 64));
  v3 = *(_DWORD *)(a1 + 76);
  if ( v3 < 0x40 )
    v4 = (1LL << v3) - 1;
  else
    v4 = -1LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 44); i = (unsigned int)(i + 1) )
  {
    v6 = *(_QWORD *)(a1 + 56);
    v7 = 160 * i;
    result = *(unsigned int *)(v6 + 160 * i + 120);
    if ( (_DWORD)result )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(result, 0LL, v4, 0, 0x204u, 0x80000000);
      *(_QWORD *)(v6 + v7 + 128) = ContiguousNodeMemory;
      PhysicalAddress = MmGetPhysicalAddress(ContiguousNodeMemory);
      v10 = *(_QWORD *)(v6 + v7 + 128);
      *(PHYSICAL_ADDRESS *)(v6 + v7 + 136) = PhysicalAddress;
      result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, PHYSICAL_ADDRESS))(a1 + 144))(
                 *(_QWORD *)(a1 + 64),
                 (unsigned int)i,
                 v10,
                 PhysicalAddress);
    }
  }
  return result;
}
